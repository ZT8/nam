// Layouts verified against the supplied 407 executable, not all 407 builds.
#import <Foundation/Foundation.h>
#import <mach-o/dyld.h>
#import <mach-o/loader.h>
#import <string.h>

#define HIDE407_VOICE_CLASS @"_TtC24IGDirectVoiceRecordingUI33IGDirectVoiceRecordViewController"
#define HIDE407_CACHE_THREAD_OFFSET 16
#define HIDE407_CACHE_UPDATES_OFFSET 24
#define HIDE407_VOICE_SECONDS 300.0

static BOOL HIDEIsVerified407Build(void) {
    static BOOL matches; static dispatch_once_t once;
    dispatch_once(&once, ^{
        const struct mach_header *header=_dyld_get_image_header(0);
        if (!header || header->magic!=MH_MAGIC_64 || header->filetype!=MH_EXECUTE) return;
        const uint8_t expected[16]={0x4c,0x4c,0x44,0x4e,0x55,0x55,0x31,0x44,0xa1,0x07,0x36,0xf9,0x5b,0x1d,0xcf,0x25};
        const uint8_t *cursor=(const uint8_t *)header+sizeof(struct mach_header_64);
        const uint8_t *end=cursor+header->sizeofcmds;
        for (uint32_t i=0;i<header->ncmds && (size_t)(end-cursor)>=sizeof(struct load_command);i++) {
            const struct load_command *command=(const void *)cursor;
            if(command->cmdsize<sizeof(*command) || command->cmdsize>(size_t)(end-cursor))return;
            if(command->cmd==LC_UUID && command->cmdsize>=sizeof(struct uuid_command)) {
                matches=memcmp(((const struct uuid_command *)command)->uuid,expected,16)==0; return;
            }
            cursor+=command->cmdsize;
        }
    });
    return matches;
}
