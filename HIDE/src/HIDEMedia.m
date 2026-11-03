// Stop videos from looping automatically.
#import "HIDECore.h"

// IGVideoPlayerConfig -looping
static BOOL (*orig_cfgLooping)(id, SEL);
static BOOL hide_cfgLooping(id self, SEL _cmd) {
    if (HIDEPref(kHideNoVideoRepeat)) return NO;
    return orig_cfgLooping(self, _cmd);
}

// IGVideoPlayerConfig designated initializer (first argument is "looping")
typedef id (*CfgInitFn)(id __attribute__((ns_consumed)), SEL, BOOL, long long, id, id, id, BOOL, id, BOOL, CGSize, BOOL, BOOL, id, BOOL) __attribute__((ns_returns_retained));
static CfgInitFn orig_cfgInit;
static id __attribute__((ns_returns_retained)) hide_cfgInit(id __attribute__((ns_consumed)) self, SEL _cmd, BOOL looping, long long mediaType, id productType, id loggingConfig,
                       id loggingProvider, BOOL enableLogging, id mediaId, BOOL forceNoReadAhead, CGSize viewSize,
                       BOOL lazyAudio, BOOL externalAudioPausing, id language, BOOL autoTranslate) {
    if (HIDEPref(kHideNoVideoRepeat)) looping = NO;
    return orig_cfgInit(self, _cmd, looping, mediaType, productType, loggingConfig, loggingProvider, enableLogging,
                        mediaId, forceNoReadAhead, viewSize, lazyAudio, externalAudioPausing, language, autoTranslate);
}

// IGVideoPlaybackConfigurationBuilder -withLooping:
static id (*orig_withLooping)(id, SEL, BOOL);
static id hide_withLooping(id self, SEL _cmd, BOOL looping) {
    if (HIDEPref(kHideNoVideoRepeat)) looping = NO;
    return orig_withLooping(self, _cmd, looping);
}

// ---- Core player used everywhere (feed, reels, stories, Direct): IGFNFVideoPlayer

// Tell the player not to run its looping controller.
typedef id (*FNFInitVideoFn)(id __attribute__((ns_consumed)), SEL, id, id, id, BOOL, id) __attribute__((ns_returns_retained));
static FNFInitVideoFn orig_fnfInitVideo;
static id __attribute__((ns_returns_retained)) hide_fnfInitVideo(id __attribute__((ns_consumed)) self, SEL _cmd, id session, id request, id indexProvider, BOOL handleLooping, id tracker) {
    if (HIDEPref(kHideNoVideoRepeat)) handleLooping = NO;
    return orig_fnfInitVideo(self, _cmd, session, request, indexProvider, handleLooping, tracker);
}
typedef id (*FNFInitFn)(id __attribute__((ns_consumed)), SEL, id, id, long long, id, id, id, BOOL, BOOL, id, id) __attribute__((ns_returns_retained));
static FNFInitFn orig_fnfInit;
static id __attribute__((ns_returns_retained)) hide_fnfInit(id __attribute__((ns_consumed)) self, SEL _cmd, id session, id indexProvider, long long mode, id video, id audioUrl,
                       id dash, BOOL deferAudio, BOOL handleLooping, id config, id tracker) {
    if (HIDEPref(kHideNoVideoRepeat)) handleLooping = NO;
    return orig_fnfInit(self, _cmd, session, indexProvider, mode, video, audioUrl, dash, deferAudio, handleLooping, config, tracker);
}

// If a loop still happens, the looping controller seeks back to 0: pause there instead of replaying.
typedef void (*FNFSeekFn)(id, SEL, double, BOOL, long long, BOOL, BOOL, BOOL, id);
static FNFSeekFn orig_fnfSeek;
static void hide_fnfSeek(id self, SEL _cmd, double time, BOOL precise, long long trigger, BOOL byLooping,
                         BOOL isRetry, BOOL pauseIfNeeded, id completion) {
    if (byLooping && HIDEPref(kHideNoVideoRepeat)) pauseIfNeeded = YES;
    orig_fnfSeek(self, _cmd, time, precise, trigger, byLooping, isRetry, pauseIfNeeded, completion);
}

static BOOL (*orig_fnfIsLooping)(id, SEL);
static BOOL hide_fnfIsLooping(id self, SEL _cmd) {
    return HIDEPref(kHideNoVideoRepeat) ? NO : orig_fnfIsLooping(self, _cmd);
}
static void (*orig_fnfSetLooping)(id, SEL, BOOL);
static void hide_fnfSetLooping(id self, SEL _cmd, BOOL v) {
    orig_fnfSetLooping(self, _cmd, HIDEPref(kHideNoVideoRepeat) ? NO : v);
}

// Stateful player (stories / Direct)
static BOOL (*orig_stateIsLooping)(id, SEL);
static BOOL hide_stateIsLooping(id self, SEL _cmd) {
    return HIDEPref(kHideNoVideoRepeat) ? NO : orig_stateIsLooping(self, _cmd);
}

// Simple player views: one hook function per class so each keeps its own original.
#define HIDE_LOOP_VIEW(N) \
    static void (*orig_setLoop_##N)(id, SEL, BOOL); \
    static void hide_setLoop_##N(id self, SEL _cmd, BOOL v) { orig_setLoop_##N(self, _cmd, HIDEPref(kHideNoVideoRepeat) ? NO : v); }
HIDE_LOOP_VIEW(simple)
HIDE_LOOP_VIEW(asset)
HIDE_LOOP_VIEW(fb)
HIDE_LOOP_VIEW(fbCover)

void HIDEInstallMedia(void) {
    orig_fnfInitVideo = (FNFInitVideoFn)HIDEHookChecked(@"IGFNFVideoPlayer", NSSelectorFromString(@"initVideoPlayerWithUserSession:request:playerIndexProvider:shouldHandleLooping:resourcesTracker:"), (IMP)hide_fnfInitVideo, "@@:@@@B@");
    orig_fnfInit = (FNFInitFn)HIDEHookChecked(@"IGFNFVideoPlayer", NSSelectorFromString(@"initWithUserSession:playerIndexProvider:playerMode:video:audioUrl:dashManifestData:deferAudioShouldStart:shouldHandleLooping:config:resourcesTracker:"), (IMP)hide_fnfInit, "@@:@@q@@@BB@@");
    orig_fnfSeek = (FNFSeekFn)HIDEHookChecked(@"IGFNFVideoPlayer", NSSelectorFromString(@"_seekToTime:preciseTime:trigger:isSeekByLoopingController:isRetry:pauseIfNeeded:completionHandler:"), (IMP)hide_fnfSeek, "v@:dBqBBB@");
    orig_fnfIsLooping = (void *)HIDEHookChecked(@"IGFNFVideoPlayer", NSSelectorFromString(@"isLoopingAsset"), (IMP)hide_fnfIsLooping, "B@:");
    orig_fnfSetLooping = (void *)HIDEHookChecked(@"IGFNFVideoPlayer", NSSelectorFromString(@"setIsLoopingAsset:"), (IMP)hide_fnfSetLooping, "v@:B");
    orig_stateIsLooping = (void *)HIDEHookChecked(@"IGStatefulVideoPlayerState", NSSelectorFromString(@"isLooping"), (IMP)hide_stateIsLooping, "B@:");
    orig_setLoop_simple = (void *)HIDEHookChecked(@"IGSimpleVideoPlayerView", NSSelectorFromString(@"setLooping:"), (IMP)hide_setLoop_simple, "v@:B");
    orig_setLoop_asset = (void *)HIDEHookChecked(@"IGAssetPlayerView", NSSelectorFromString(@"setLooping:"), (IMP)hide_setLoop_asset, "v@:B");
    orig_setLoop_fb = (void *)HIDEHookChecked(@"IGFBVideoPlaybackView", NSSelectorFromString(@"setLooping:"), (IMP)hide_setLoop_fb, "v@:B");
    orig_setLoop_fbCover = (void *)HIDEHookChecked(@"IGFBVideoPlaybackAndCoverView", NSSelectorFromString(@"setLooping:"), (IMP)hide_setLoop_fbCover, "v@:B");

    orig_cfgLooping = (void *)HIDEHookChecked(@"IGVideoPlayerConfig", NSSelectorFromString(@"looping"), (IMP)hide_cfgLooping, "B@:");
    orig_cfgInit = (CfgInitFn)HIDEHookChecked(@"IGVideoPlayerConfig",
        NSSelectorFromString(@"initWithLooping:mediaType:productTypeString:loggingConfig:videoLoggingDataProvider:enableLogging:mediaId:forceNoRequestReadAhead:viewSize:lazyLoadAudioTrack:externalAudioPausingEnabled:language:isAutoTranslationEnabled:"),
        (IMP)hide_cfgInit, "@@:Bq@@@B@B{CGSize=dd}BB@B");
    orig_withLooping = (void *)HIDEHookChecked(@"IGVideoPlaybackConfigurationBuilder", NSSelectorFromString(@"withLooping:"), (IMP)hide_withLooping, "@@:B");
}
