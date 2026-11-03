// Anonymous stories: Instagram reports a story view with a request to /media/seen/.
// We rewrite that URL at the moment the IGURLRequest is created (and when it's read back),
// This covers only the hooked IGURLRequest paths; other transports require device validation.
#import "HIDECore.h"

#pragma mark - Anonymous stories

static NSURL *HIDEFilterURL(NSURL *url) {
    if (![url isKindOfClass:[NSURL class]]) return url;
    NSString *host = url.host.lowercaseString;
    if (![host isEqualToString:@"instagram.com"] && ![host hasSuffix:@".instagram.com"]) return url;
    NSString *path = url.path;
    BOOL seen = [path hasSuffix:@"/seen/"] || [path hasSuffix:@"/seen"];
    if (!seen) return url;
    BOOL direct = HIDEPref(kHideNoReadReceipts) && [path containsString:@"/direct_v2/threads/"];
    BOOL story = HIDEPref(kHideAnonStories) && ([path hasSuffix:@"/media/seen/"] || [path hasSuffix:@"/media/seen"]);
    if (!direct && !story) return url;
    NSRange suffix = [path rangeOfString:@"/seen" options:NSBackwardsSearch];
    NSURLComponents *components = [NSURLComponents componentsWithURL:url resolvingAgainstBaseURL:NO];
    components.path = [[path substringToIndex:suffix.location] stringByAppendingString:@"/hide_blocked_seen/"];
    return components.URL ?: url;
}

static id (*orig_reqInit2)(id __attribute__((ns_consumed)), SEL, NSURL *, id) __attribute__((ns_returns_retained));
static id __attribute__((ns_returns_retained)) hide_reqInit2(id __attribute__((ns_consumed)) self, SEL _cmd, NSURL *url, id module) {
    return orig_reqInit2(self, _cmd, HIDEFilterURL(url), module);
}
static id (*orig_reqInit3)(id __attribute__((ns_consumed)), SEL, NSURL *, unsigned long long, id) __attribute__((ns_returns_retained));
static id __attribute__((ns_returns_retained)) hide_reqInit3(id __attribute__((ns_consumed)) self, SEL _cmd, NSURL *url, unsigned long long method, id module) {
    return orig_reqInit3(self, _cmd, HIDEFilterURL(url), method, module);
}
static id (*orig_reqInit4)(id __attribute__((ns_consumed)), SEL, NSURL *, unsigned long long, id, BOOL) __attribute__((ns_returns_retained));
static id __attribute__((ns_returns_retained)) hide_reqInit4(id __attribute__((ns_consumed)) self, SEL _cmd, NSURL *url, unsigned long long method, id module, BOOL force) {
    return orig_reqInit4(self, _cmd, HIDEFilterURL(url), method, module, force);
}
static NSURL *(*orig_reqURL)(id, SEL);
static NSURL *hide_reqURL(id self, SEL _cmd) {
    return HIDEFilterURL(orig_reqURL(self, _cmd));
}

#pragma mark - Safari links

static NSURL *HIDEUnzone(id zoned) {
    id v = HIDEGet(zoned, @"value");
    if ([v isKindOfClass:[NSURL class]]) return v;
    if ([v isKindOfClass:[NSURLRequest class]]) return ((NSURLRequest *)v).URL;
    return nil;
}

static NSURL *HIDEBrowserSessionURL(id session) {
    NSURL *u = HIDEUnzone(HIDEIvar(session, "_zonedDestinationURL"));
    if (!u) u = HIDEUnzone(HIDEIvar(session, "_zonedURLRequest"));
    if (!u) u = HIDEUnzone(HIDEIvar(session, "_zonedRedirectURL"));
    return u;
}

static void (*orig_presentBrowser)(id, SEL, id, id, id, BOOL);
static void hide_presentBrowser(id self, SEL _cmd, id session, id vc, id pan, BOOL fresh) {
    if (HIDEPref(kHideSafariLinks)) {
        NSURL *u = HIDEBrowserSessionURL(session);
        NSString *scheme = u.scheme.lowercaseString;
        if (u && ([scheme isEqualToString:@"http"] || [scheme isEqualToString:@"https"])) {
            // Unwrap Instagram's l.instagram.com redirect wrapper when present.
            if ([u.host.lowercaseString isEqualToString:@"l.instagram.com"]) {
                NSURLComponents *c = [NSURLComponents componentsWithURL:u resolvingAgainstBaseURL:NO];
                for (NSURLQueryItem *q in c.queryItems) {
                    if ([q.name isEqualToString:@"u"] && q.value.length) { NSURL *inner = [NSURL URLWithString:q.value]; if ([inner.scheme.lowercaseString isEqualToString:@"http"] || [inner.scheme.lowercaseString isEqualToString:@"https"]) u = inner; }
                }
            }
            [[UIApplication sharedApplication] openURL:u options:@{} completionHandler:^(BOOL success) {
                if (!success) orig_presentBrowser(self, _cmd, session, vc, pan, fresh);
            }];
            return;
        }
    }
    orig_presentBrowser(self, _cmd, session, vc, pan, fresh);
}

void HIDEInstallPrivacy(void) {
    orig_reqInit2 = (void *)HIDEHookChecked(@"IGURLRequest", NSSelectorFromString(@"initWithURL:module:"), (IMP)hide_reqInit2, "@@:@@");
    orig_reqInit3 = (void *)HIDEHookChecked(@"IGURLRequest", NSSelectorFromString(@"initWithURL:HTTPMethod:module:"), (IMP)hide_reqInit3, "@@:@Q@");
    orig_reqInit4 = (void *)HIDEHookChecked(@"IGURLRequest", NSSelectorFromString(@"initWithURL:HTTPMethod:module:forceIGAPIHeaders:"), (IMP)hide_reqInit4, "@@:@Q@B");
    orig_reqURL = (void *)HIDEHookChecked(@"IGURLRequest", NSSelectorFromString(@"URL"), (IMP)hide_reqURL, "@@:");
    orig_presentBrowser = (void *)HIDEHookChecked(@"IGBrowserController", NSSelectorFromString(@"presentBrowserWithBrowserSession:viewController:presentingPanGesture:forceFreshLoad:"), (IMP)hide_presentBrowser, "v@:@@@B");
}
