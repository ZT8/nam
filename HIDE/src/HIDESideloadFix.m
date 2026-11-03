// Fixes for re-signed (sideloaded) Instagram:
//  1. Keychain: Instagram stores the login session under its original access group
//     (TEAMID.com.burbn...). With a different signing team that group doesn't exist, so
//     the session is never saved → logged out on every launch. We rewrite the access group
//     of every SecItem* call to the app's real group.
//  2. App Group container: containerURLForSecurityApplicationGroupIdentifier: returns nil
//     without the original entitlement, which crashes some login code paths. We return a
//     private folder inside the app sandbox instead.
#import "HIDECore.h"
#import <Security/Security.h>
#import <mach-o/dyld.h>
#import <mach-o/loader.h>
#import <mach-o/nlist.h>
#import <mach/mach.h>
#import <dlfcn.h>
#import <string.h>

#pragma mark - Symbol rebinding (pointer swap in __got / __la_symbol_ptr)

typedef struct { const char *name; void *replacement; } HIDERebinding;
static HIDERebinding sRebinds[8];
static int sRebindCount = 0;

static void HIDERebindSection(const struct section_64 *sect, intptr_t slide, struct nlist_64 *syms,
                              const char *strs, uint32_t *indirect) {
    uint32_t *idx = indirect + sect->reserved1;
    void **ptrs = (void **)((uintptr_t)slide + sect->addr);
    size_t n = sect->size / sizeof(void *);
    for (size_t j = 0; j < n; j++) {
        uint32_t si = idx[j];
        if (si & (INDIRECT_SYMBOL_ABS | INDIRECT_SYMBOL_LOCAL)) continue;
        const char *name = strs + syms[si].n_un.n_strx;
        if (name[0] != '_') continue;
        for (int r = 0; r < sRebindCount; r++) {
            if (strcmp(name + 1, sRebinds[r].name) != 0) continue;
            if (ptrs[j] == sRebinds[r].replacement) break;
            vm_address_t page = (vm_address_t)&ptrs[j] & ~(vm_address_t)(vm_page_size - 1);
            kern_return_t protection = vm_protect(mach_task_self(), page, vm_page_size, false,
                                                  VM_PROT_READ | VM_PROT_WRITE | VM_PROT_COPY);
            if (protection != KERN_SUCCESS) {
                NSLog(@"[HIDE] skipped unwritable symbol pointer");
                break;
            }
            ptrs[j] = sRebinds[r].replacement;
            break;
        }
    }
}

static void HIDERebindImage(const struct mach_header *header, intptr_t slide) {
    const struct mach_header_64 *mh = (const struct mach_header_64 *)header;
    if (mh->magic != MH_MAGIC_64) return;
    // Only patch Instagram's own binaries (inside the .app), never system libraries,
    // and never our own dylib (it must keep calling the real functions).
    Dl_info info;
    if (!dladdr(header, &info) || !info.dli_fname) return;
    if (!strstr(info.dli_fname, ".app/") || strstr(info.dli_fname, "HIDE.dylib")) return;

    const struct segment_command_64 *linkedit = NULL;
    const struct symtab_command *symtab = NULL;
    const struct dysymtab_command *dysymtab = NULL;
    uintptr_t cur = (uintptr_t)mh + sizeof(*mh);
    for (uint32_t i = 0; i < mh->ncmds; i++) {
        const struct load_command *lc = (const void *)cur;
        if (lc->cmd == LC_SEGMENT_64 && strcmp(((const struct segment_command_64 *)lc)->segname, SEG_LINKEDIT) == 0)
            linkedit = (const void *)lc;
        else if (lc->cmd == LC_SYMTAB) symtab = (const void *)lc;
        else if (lc->cmd == LC_DYSYMTAB) dysymtab = (const void *)lc;
        cur += lc->cmdsize;
    }
    if (!linkedit || !symtab || !dysymtab || !dysymtab->nindirectsyms) return;

    uintptr_t base = (uintptr_t)slide + linkedit->vmaddr - linkedit->fileoff;
    struct nlist_64 *syms = (struct nlist_64 *)(base + symtab->symoff);
    const char *strs = (const char *)(base + symtab->stroff);
    uint32_t *indirect = (uint32_t *)(base + dysymtab->indirectsymoff);

    cur = (uintptr_t)mh + sizeof(*mh);
    for (uint32_t i = 0; i < mh->ncmds; i++) {
        const struct load_command *lc = (const void *)cur;
        cur += lc->cmdsize;
        if (lc->cmd != LC_SEGMENT_64) continue;
        const struct segment_command_64 *seg = (const void *)lc;
        if (strcmp(seg->segname, "__DATA") && strcmp(seg->segname, "__DATA_CONST") &&
            strcmp(seg->segname, "__AUTH_CONST") && strcmp(seg->segname, "__AUTH")) continue;
        const struct section_64 *sects = (const struct section_64 *)(seg + 1);
        for (uint32_t s = 0; s < seg->nsects; s++) {
            uint32_t type = sects[s].flags & SECTION_TYPE;
            if (type == S_LAZY_SYMBOL_POINTERS || type == S_NON_LAZY_SYMBOL_POINTERS)
                HIDERebindSection(&sects[s], slide, syms, strs, indirect);
        }
    }
}

#pragma mark - Keychain

static OSStatus (*real_SecItemAdd)(CFDictionaryRef, CFTypeRef *);
static OSStatus (*real_SecItemCopyMatching)(CFDictionaryRef, CFTypeRef *);
static OSStatus (*real_SecItemUpdate)(CFDictionaryRef, CFDictionaryRef);
static OSStatus (*real_SecItemDelete)(CFDictionaryRef);

static NSString *sAccessGroup;

// Ask the keychain which access group this signature really owns.
static void HIDEDetectAccessGroup(void) {
    NSDictionary *q = @{(__bridge id)kSecClass: (__bridge id)kSecClassGenericPassword,
                        (__bridge id)kSecAttrAccount: @"HIDEAccessGroupProbe",
                        (__bridge id)kSecAttrService: @"HIDE",
                        (__bridge id)kSecReturnAttributes: @YES};
    CFTypeRef result = NULL;
    OSStatus st = real_SecItemCopyMatching((__bridge CFDictionaryRef)q, &result);
    if (st == errSecItemNotFound) st = real_SecItemAdd((__bridge CFDictionaryRef)q, &result);
    if (st == errSecSuccess && result) {
        NSDictionary *attrs = (__bridge_transfer NSDictionary *)result;
        sAccessGroup = attrs[(__bridge id)kSecAttrAccessGroup];
    } else if (result) {
        CFRelease(result);
    }
    NSLog(@"[HIDE] keychain access group: %@ (status %d)", sAccessGroup, (int)st);
}

static CFDictionaryRef HIDEFixQuery(CFDictionaryRef query) {
    if (!query) return NULL;
    NSMutableDictionary *m = [(__bridge NSDictionary *)query mutableCopy];
    id key = (__bridge id)kSecAttrAccessGroup;
    if (m[key]) {
        if (sAccessGroup) m[key] = sAccessGroup;
        else [m removeObjectForKey:key];
    }
    return (__bridge_retained CFDictionaryRef)m;
}

static OSStatus hide_SecItemAdd(CFDictionaryRef attrs, CFTypeRef *result) {
    CFDictionaryRef q = HIDEFixQuery(attrs);
    OSStatus st = real_SecItemAdd(q, result);
    if (q) CFRelease(q);
    return st;
}
static OSStatus hide_SecItemCopyMatching(CFDictionaryRef query, CFTypeRef *result) {
    CFDictionaryRef q = HIDEFixQuery(query);
    OSStatus st = real_SecItemCopyMatching(q, result);
    if (q) CFRelease(q);
    return st;
}
static OSStatus hide_SecItemUpdate(CFDictionaryRef query, CFDictionaryRef update) {
    CFDictionaryRef q = HIDEFixQuery(query), u = HIDEFixQuery(update);
    OSStatus st = real_SecItemUpdate(q, u);
    if (q) CFRelease(q);
    if (u) CFRelease(u);
    return st;
}
static OSStatus hide_SecItemDelete(CFDictionaryRef query) {
    CFDictionaryRef q = HIDEFixQuery(query);
    OSStatus st = real_SecItemDelete(q);
    if (q) CFRelease(q);
    return st;
}

#pragma mark - App Group container

static NSURL *(*orig_containerURL)(id, SEL, NSString *);
static NSURL *hide_containerURL(id self, SEL _cmd, NSString *groupID) {
    NSURL *url = orig_containerURL(self, _cmd, groupID);
    NSFileManager *fm = [NSFileManager defaultManager];
    if (url && [fm isWritableFileAtPath:url.path]) return url;
    NSURL *lib = [fm URLsForDirectory:NSLibraryDirectory inDomains:NSUserDomainMask].firstObject;
    NSURL *fake = [[lib URLByAppendingPathComponent:@"HIDEAppGroups" isDirectory:YES]
                   URLByAppendingPathComponent:groupID ?: @"default" isDirectory:YES];
    [fm createDirectoryAtURL:fake withIntermediateDirectories:YES attributes:nil error:nil];
    return fake;
}

#pragma mark - Install

void HIDEInstallSideloadFix(void) {
    real_SecItemAdd = dlsym(RTLD_DEFAULT, "SecItemAdd");
    real_SecItemCopyMatching = dlsym(RTLD_DEFAULT, "SecItemCopyMatching");
    real_SecItemUpdate = dlsym(RTLD_DEFAULT, "SecItemUpdate");
    real_SecItemDelete = dlsym(RTLD_DEFAULT, "SecItemDelete");
    if (!real_SecItemAdd || !real_SecItemCopyMatching || !real_SecItemUpdate || !real_SecItemDelete) return;

    HIDEDetectAccessGroup();

    sRebinds[sRebindCount++] = (HIDERebinding){"SecItemAdd", (void *)hide_SecItemAdd};
    sRebinds[sRebindCount++] = (HIDERebinding){"SecItemCopyMatching", (void *)hide_SecItemCopyMatching};
    sRebinds[sRebindCount++] = (HIDERebinding){"SecItemUpdate", (void *)hide_SecItemUpdate};
    sRebinds[sRebindCount++] = (HIDERebinding){"SecItemDelete", (void *)hide_SecItemDelete};
    _dyld_register_func_for_add_image(HIDERebindImage); // also runs for already-loaded images

    orig_containerURL = (void *)HIDEHookChecked(@"NSFileManager", @selector(containerURLForSecurityApplicationGroupIdentifier:), (IMP)hide_containerURL, "@@:@");
}
