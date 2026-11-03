// Download voice messages from Direct.
// When a voice message starts playing we remember its audio source and show a small
// "Save voice message" button for a few seconds. Tapping it opens the share sheet
// (Save to Files, WhatsApp, etc.).
//  - Regular voice notes: IGDirectAudio → IGAudio.playbackURL (https)
//  - End-to-end encrypted voice notes: the decrypted file Instagram hands to AVFoundation
#import "HIDECore.h"
#import <AVFoundation/AVFoundation.h>

static NSURL *sVoiceURL;           // best known source for the current voice message
static NSDate *sVoiceStarted;      // when playback was requested
static UIButton *sSaveButton;

static NSURL *HIDEURLFromDirectAudio(id audio) {
    if (!audio) return nil;
    id server = HIDEIvar(audio, "_server_audio");
    NSURL *u = HIDEGet(server, @"playbackURL");
    if (![u isKindOfClass:[NSURL class]]) u = HIDEGet(server, @"fallbackURL");
    if ([u isKindOfClass:[NSURL class]]) return u;
    NSURL *pending = HIDEIvar(audio, "_pending_fileURL");
    if ([pending isKindOfClass:[NSURL class]]) return pending;
    return nil;
}

static NSObject *HIDEVoiceStateLock(void) {
    static NSObject *lock; static dispatch_once_t once;
    dispatch_once(&once, ^{ lock = [NSObject new]; });
    return lock;
}

static void HIDESaveVoice(void) {
    NSURL *source;
    @synchronized (HIDEVoiceStateLock()) { source = sVoiceURL; }
    if (!HIDEPref(kHideVoiceDownload) || !source) { HIDEToast(HIDEL(@"VOICE_NOT_READY")); return; }
    if (!source.isFileURL) {
        HIDEToast(HIDEL(@"DOWNLOADING"));
        HIDEFetchFile(source, @"audio", ^(NSURL *file, NSError *error) {
            if (!file || error) { HIDEToast(HIDEL(@"ERROR")); return; }
            HIDEShareTemporaryFile(file);
        });
        return;
    }
    dispatch_async(dispatch_get_global_queue(QOS_CLASS_UTILITY, 0), ^{
        NSString *extension = source.pathExtension.length ? source.pathExtension : @"m4a";
        NSURL *destination = [[NSURL fileURLWithPath:NSTemporaryDirectory()]
            URLByAppendingPathComponent:[NSString stringWithFormat:@"HIDE_voice_%@.%@", NSUUID.UUID.UUIDString, extension]];
        NSError *error = nil;
        if (![NSFileManager.defaultManager copyItemAtURL:source toURL:destination error:&error]) {
            HIDEToast(HIDEL(@"ERROR")); return;
        }
        HIDEShareTemporaryFile(destination);
    });
}

@interface HIDEVoiceButtonTarget : NSObject
@end
@implementation HIDEVoiceButtonTarget
+ (void)tap { [sSaveButton removeFromSuperview]; HIDESaveVoice(); }
@end

static void HIDEShowSaveButton(void) {
    dispatch_async(dispatch_get_main_queue(), ^{
        if (!HIDEPref(kHideVoiceDownload)) return;
        UIWindow *win = HIDETopViewController().view.window;
        if (!win) return;
        [sSaveButton removeFromSuperview];
        UIButton *b = [UIButton buttonWithType:UIButtonTypeSystem];
        [b setTitle:[@"⬇︎  " stringByAppendingString:HIDEL(@"SAVE_VOICE")] forState:UIControlStateNormal];
        b.titleLabel.font = [UIFont systemFontOfSize:15 weight:UIFontWeightSemibold];
        [b setTitleColor:UIColor.whiteColor forState:UIControlStateNormal];
        b.backgroundColor = [UIColor colorWithRed:0.16 green:0.33 blue:0.95 alpha:0.95];
        b.layer.cornerRadius = 20;
        UIButtonConfiguration *configuration = [UIButtonConfiguration plainButtonConfiguration];
        configuration.attributedTitle = [[NSAttributedString alloc] initWithString:b.currentTitle attributes:@{NSFontAttributeName: b.titleLabel.font}];
        configuration.baseForegroundColor = UIColor.whiteColor;
        configuration.contentInsets = NSDirectionalEdgeInsetsMake(10, 18, 10, 18);
        b.configuration = configuration;
        [b sizeToFit];
        b.center = CGPointMake(CGRectGetMidX(win.bounds), win.safeAreaInsets.top + 44);
        [b addTarget:[HIDEVoiceButtonTarget class] action:@selector(tap) forControlEvents:UIControlEventTouchUpInside];
        b.alpha = 0;
        [win addSubview:b];
        sSaveButton = b;
        [UIView animateWithDuration:0.2 animations:^{ b.alpha = 1; }];
        dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(6 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
            if (sSaveButton != b) return;
            [UIView animateWithDuration:0.3 animations:^{ b.alpha = 0; } completion:^(BOOL f) { [b removeFromSuperview]; }];
        });
    });
}

// -[IGDirectAudioPlayer playWithAudio:progress:assetId:offlineAssetId:messageProductType:threadKey:]
static void (*orig_play)(id, SEL, id, double, id, id, long long, id);
static void hide_play(id self, SEL _cmd, id audio, double progress, id assetId, id offlineId, long long type, id threadKey) {
    if (HIDEPref(kHideVoiceDownload)) {
        @synchronized (HIDEVoiceStateLock()) {
            sVoiceURL = HIDEURLFromDirectAudio(audio);
            sVoiceStarted = [NSDate date];
        }
        HIDEShowSaveButton();
    } else {
        @synchronized (HIDEVoiceStateLock()) { sVoiceURL = nil; sVoiceStarted = nil; }
        dispatch_async(dispatch_get_main_queue(), ^{ [sSaveButton removeFromSuperview]; });
    }
    orig_play(self, _cmd, audio, progress, assetId, offlineId, type, threadKey);
}

// Encrypted voice notes are decrypted to a local file that AVFoundation opens right after
// playback is requested; capture that file if we don't already have a direct URL.
static id (*orig_assetInit)(id __attribute__((ns_consumed)), SEL, NSURL *, NSDictionary *) __attribute__((ns_returns_retained));
static id __attribute__((ns_returns_retained)) hide_assetInit(id __attribute__((ns_consumed)) self, SEL _cmd, NSURL *url, NSDictionary *opts) {
    @synchronized (HIDEVoiceStateLock()) {
        BOOL audioFile = [@[@"m4a", @"aac", @"mp3", @"caf", @"wav", @"ogg"] containsObject:url.pathExtension.lowercaseString];
        if (HIDEPref(kHideVoiceDownload) && sVoiceStarted && -[sVoiceStarted timeIntervalSinceNow] < 4.0 &&
            url.isFileURL && audioFile && (!sVoiceURL || !sVoiceURL.isFileURL)) sVoiceURL = url;
    }
    return orig_assetInit(self, _cmd, url, opts);
}

void HIDEInstallVoice(void) {
    orig_play = (void *)HIDEHookChecked(@"IGDirectAudioPlayer", NSSelectorFromString(@"playWithAudio:progress:assetId:offlineAssetId:messageProductType:threadKey:"), (IMP)hide_play, "v@:@d@@q@");
    orig_assetInit = (void *)HIDEHookChecked(@"AVURLAsset", @selector(initWithURL:options:), (IMP)hide_assetInit, "@@:@@");
}
