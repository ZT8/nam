// HIDE for Instagram — shared helpers
#import <UIKit/UIKit.h>
#import <objc/runtime.h>
#import <objc/message.h>

#define HIDE_VERSION @"1.9"
#define HIDE_TARGET_INSTAGRAM @"407.0.0"

// ---- Preferences keys
#define kHideDownload        @"hide_download"
#define kHideHighQuality     @"hide_high_quality"
#define kHideAnonStories     @"hide_anon_stories"
#define kHideConfirmLike     @"hide_confirm_like"
#define kHideConfirmFollow   @"hide_confirm_follow"
#define kHideSafariLinks     @"hide_safari_links"
#define kHideNoVideoRepeat   @"hide_no_video_repeat"
#define kHideVoiceDownload   @"hide_voice_download"
#define kHideAppLock         @"hide_app_lock"
#define kHideLockDelay       @"hide_lock_delay"
#define kHideNoAutoAdvance   @"hide_no_auto_advance"
#define kHideShowMentions    @"hide_show_mentions"
#define kHideNoTyping        @"hide_no_typing"
#define kHideFollowStatus    @"hide_follow_status"
#define kHideCopyText        @"hide_copy_text"
#define kHideNoAds           @"hide_no_ads"
#define kHideNoReadReceipts  @"hide_no_read_receipts"
#define kHideVideoStickers     @"hide_video_stickers"
#define kHideAnonLive          @"hide_anon_live"
#define kHideKeepDeleted       @"hide_keep_deleted"
#define kHideNoScreenshotNotice @"hide_no_screenshot_notice"
#define kHideNoReplayNotice    @"hide_no_replay_notice"
#define kHideAllowScreenshots  @"hide_allow_screenshots"
#define kHideLongVoice         @"hide_long_voice"
#define kHideVoiceImport       @"hide_voice_import"
#define kHideLikeCounts        @"hide_like_counts"
#define kHideVideoTimer        @"hide_video_timer"
#define kHideShareAfterSave    @"hide_share_after_save"
#define kHideWelcomeShown    @"hide_welcome_shown_v1"

BOOL HIDEPref(NSString *key);
void HIDESetPref(NSString *key, BOOL value);

// ---- Localisation (Arabic / English)
NSString *HIDEL(NSString *key);

// ---- Runtime helpers
// Swizzle an instance method. Returns the original IMP (or NULL when the class/selector is missing).
IMP HIDEHook(NSString *className, SEL sel, IMP replacement);
IMP HIDEHookChecked(NSString *className, SEL sel, IMP replacement, const char *encoding);
IMP HIDEClassHookChecked(NSString *className, SEL sel, IMP replacement, const char *encoding);
NSArray<NSDictionary *> *HIDEHookDiagnostics(void);
void HIDEInstallDLFeatures(void);
BOOL HIDEIsAd(id object);
BOOL HIDEFeatureAvailable(NSString *key);
void HIDEInstallVoiceImport(void);
void HIDEPresentBatch(NSArray<NSDictionary *> *items);
void HIDESaveDownloadedFile(NSURL *file, BOOL video, BOOL share, void (^done)(BOOL));
void HIDEPresentVoiceImport(UIViewController *threadController);
BOOL HIDEVoiceImportSupported(UIViewController *threadController);
BOOL HIDECanCall(id object, SEL selector, const char *encoding);
// Call a zero-argument getter only if it exists and returns an object.
id HIDEGet(id obj, NSString *selName);
// Reads an NSNumber or a scalar numeric getter using its actual ABI type.
NSNumber *HIDEGetNumber(id obj, NSString *selName);
id HIDEIvar(id obj, const char *ivarName);

// ---- UI helpers
UIViewController *HIDETopViewController(void);
void HIDEToast(NSString *text);
void HIDEConfirm(NSString *title, NSString *message, NSString *okTitle, void (^onOK)(void));
// Completion always runs on the main queue. A successful caller owns the file.
NSURLSessionDownloadTask *HIDEFetchFile(NSURL *url, NSString *kind, void (^done)(NSURL *file, NSError *error));
void HIDEShareTemporaryFile(NSURL *file);

// ---- Features
void HIDEInstallSideloadFix(void);
void HIDEInstallDownloader(void);
void HIDEInstallPrivacy(void);
void HIDEInstallConfirmations(void);
void HIDEInstallSettingsEntry(void);
void HIDEPresentSettings(void);
void HIDEInstallMedia(void);
void HIDEInstallVoice(void);
void HIDEInstallAppLock(void);
void HIDEInstallExtras(void);
void HIDEAttachCopyGestureIfNeeded(UIView *v);
void HIDEMessagingPrivacyChanged(NSString *changedKey);
void HIDEAuthenticate(void (^done)(BOOL ok));
void HIDEAppLockPreferenceChanged(BOOL enabled);
NSInteger HIDELockDelay(void);
NSString *HIDELockDelayTitle(NSInteger seconds);
