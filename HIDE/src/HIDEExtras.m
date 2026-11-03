// Extra features: story auto-advance, typing indicator, follow status, copy text, feed ads.
#import "HIDECore.h"

#pragma mark - Stories: don't jump to the next story automatically

static void (*orig_storyDidEnd)(id, SEL, id);
static void hide_storyDidEnd(id self, SEL _cmd, id view) {
    if (HIDEPref(kHideNoAutoAdvance)) return; // stay on the current story until the user taps
    orig_storyDidEnd(self, _cmd, view);
}

#pragma mark - Direct: hide "typing…" from the other person
// Instagram's own messaging settings decide whether typing status is sent;
// we report it as disabled while the option is on.

static BOOL (*orig_typingDisabled)(id, SEL);
static BOOL hide_typingDisabled(id self, SEL _cmd) {
    if (HIDEPref(kHideNoTyping)) return YES;
    return orig_typingDisabled(self, _cmd);
}

#pragma mark - Direct: hide that you read messages
// Uses Instagram's own messaging privacy setting (the same one Instagram uses on the server),
// Actual coverage, especially encrypted chats, must be validated on the target Instagram build.

static __weak id sMPESettings;

static void HIDEApplyMessagingPrivacy(id mpe, NSString *changedKey) {
    if (!mpe) return;
    void (^done)(id, id) = ^(id a, id b) {};
    SEL rr = NSSelectorFromString(@"setReadReceiptsDisabled:completion:");
    SEL ty = NSSelectorFromString(@"setTypingIndicatorsDisabled:completion:");
    if (([changedKey isEqualToString:kHideNoReadReceipts] || (!changedKey && HIDEPref(kHideNoReadReceipts))) && HIDECanCall(mpe, rr, "v@:B@"))
        ((void (*)(id, SEL, BOOL, id))objc_msgSend)(mpe, rr, HIDEPref(kHideNoReadReceipts), done);
    if (([changedKey isEqualToString:kHideNoTyping] || (!changedKey && HIDEPref(kHideNoTyping))) && HIDECanCall(mpe, ty, "v@:B@"))
        ((void (*)(id, SEL, BOOL, id))objc_msgSend)(mpe, ty, HIDEPref(kHideNoTyping), done);
}

void HIDEMessagingPrivacyChanged(NSString *changedKey) {
    dispatch_async(dispatch_get_main_queue(), ^{ HIDEApplyMessagingPrivacy(sMPESettings, changedKey); });
}

static id (*orig_mpeInit)(id __attribute__((ns_consumed)), SEL, id, id) __attribute__((ns_returns_retained));
static id __attribute__((ns_returns_retained)) hide_mpeInit(id __attribute__((ns_consumed)) self, SEL _cmd, id service, id userID) {
    id r = orig_mpeInit(self, _cmd, service, userID);
    sMPESettings = r;
    if (r && (HIDEPref(kHideNoReadReceipts) || HIDEPref(kHideNoTyping))) {
        __weak id instance = r;
        dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(3 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
            if (instance && instance == sMPESettings) HIDEApplyMessagingPrivacy(instance, nil);
        });
    }
    return r;
}

// Local fallbacks so the client never decides to send a receipt.
static BOOL (*orig_rrDisabled)(id, SEL);
static BOOL hide_rrDisabled(id self, SEL _cmd) {
    return HIDEPref(kHideNoReadReceipts) ? YES : orig_rrDisabled(self, _cmd);
}
static BOOL (*orig_rrStored)(id, SEL);
static BOOL hide_rrStored(id self, SEL _cmd) {
    return HIDEPref(kHideNoReadReceipts) ? YES : orig_rrStored(self, _cmd);
}
static BOOL (*orig_mqttSendRR)(id, SEL);
static BOOL hide_mqttSendRR(id self, SEL _cmd) {
    return HIDEPref(kHideNoReadReceipts) ? NO : orig_mqttSendRR(self, _cmd);
}

#pragma mark - Profile: does this account follow you?

static void (*orig_profileDidAppear)(id, SEL, BOOL);
static void hide_profileDidAppear(UIViewController *self, SEL _cmd, BOOL animated) {
    orig_profileDidAppear(self, _cmd, animated);
    if (!HIDEPref(kHideFollowStatus)) return;
    id user = HIDEGet(self, @"user");
    if (!user || ![user respondsToSelector:NSSelectorFromString(@"followsCurrentUser")]) return;

    // Skip your own profile.
    id session = HIDEIvar(self, "_userSession");
    id me = HIDEIvar(session, "_user");
    NSString *myName = HIDEGet(me, @"username"), *theirName = HIDEGet(user, @"username");
    if (myName && theirName && [myName isEqualToString:theirName]) return;
    if (!theirName) return;

    NSNumber *follows = HIDEGetNumber(user, @"followsCurrentUser");
    NSNumber *followed = HIDEGetNumber(user, @"followedByCurrentUser");
    if (!follows) return;
    BOOL followsMe = follows.boolValue;
    BOOL iFollow = followed.boolValue;
    NSString *msg = (followsMe && iFollow) ? HIDEL(@"FOLLOW_EACH") : followsMe ? HIDEL(@"FOLLOWS_YOU")
                  : iFollow ? HIDEL(@"NOT_FOLLOWS_YOU") : HIDEL(@"FOLLOW_NONE");
    if (!followed) msg = followsMe ? HIDEL(@"FOLLOWS_YOU") : HIDEL(@"NOT_FOLLOWS_YOU");
    HIDEToast([NSString stringWithFormat:@"@%@ · %@", theirName, msg]);
}

#pragma mark - Copy text (comments and captions) with long press

static const void *kHideCopyKey = &kHideCopyKey;

static void HIDECollectText(UIView *v, NSMutableArray<NSString *> *out, int depth) {
    if (depth > 8 || v.hidden) return;
    NSString *t = nil;
    if ([v isKindOfClass:[UILabel class]]) t = ((UILabel *)v).text;
    else if ([v isKindOfClass:[UITextView class]]) t = ((UITextView *)v).text;
    else {
        id a = HIDEGet(v, @"attributedText");
        if ([a isKindOfClass:[NSAttributedString class]]) t = [a string];
        else { id s = HIDEGet(v, @"text"); if ([s isKindOfClass:[NSString class]]) t = s; }
    }
    if (t.length) [out addObject:t];
    for (UIView *s in v.subviews) HIDECollectText(s, out, depth + 1);
}

@interface HIDECopyHandler : NSObject <UIGestureRecognizerDelegate>
@end
@implementation HIDECopyHandler
+ (instancetype)shared { static HIDECopyHandler *h; static dispatch_once_t o; dispatch_once(&o, ^{ h = [self new]; }); return h; }
- (BOOL)gestureRecognizer:(UIGestureRecognizer *)a shouldRecognizeSimultaneouslyWithGestureRecognizer:(UIGestureRecognizer *)b { return b.delegate != self; }
- (BOOL)gestureRecognizerShouldBegin:(UIGestureRecognizer *)g { return HIDEPref(kHideCopyText); }
- (void)onLongPress:(UILongPressGestureRecognizer *)g {
    if (g.state != UIGestureRecognizerStateBegan) return;
    NSMutableArray *texts = [NSMutableArray array];
    HIDECollectText(g.view, texts, 0);
    // The comment/caption body is the longest piece of text in the cell.
    NSString *best = nil;
    for (NSString *t in texts) if (t.length > best.length) best = t;
    if (!best.length) return;
    UIAlertController *a = [UIAlertController alertControllerWithTitle:@"HIDE" message:best preferredStyle:UIAlertControllerStyleAlert];
    [a addAction:[UIAlertAction actionWithTitle:HIDEL(@"COPY_TEXT") style:UIAlertActionStyleDefault handler:^(UIAlertAction *x) {
        [UIPasteboard generalPasteboard].string = best;
        HIDEToast(HIDEL(@"COPIED"));
    }]];
    [a addAction:[UIAlertAction actionWithTitle:HIDEL(@"CANCEL") style:UIAlertActionStyleCancel handler:nil]];
    [HIDETopViewController() presentViewController:a animated:YES completion:nil];
}
@end

void HIDEAttachCopyGestureIfNeeded(UIView *v) {
    static NSArray *classes;
    static dispatch_once_t once;
    dispatch_once(&once, ^{
        NSMutableArray *a = [NSMutableArray array];
        for (NSString *n in @[@"IGCommentCell", @"IGFeedItemTextCell", @"IGFeedItemPreviewCommentCell", @"IGCoreTextView"]) {
            Class c = NSClassFromString(n); if (c) [a addObject:c];
        }
        classes = a;
    });
    if (objc_getAssociatedObject(v, kHideCopyKey)) return;
    for (Class c in classes) {
        if (![v isKindOfClass:c]) continue;
        UILongPressGestureRecognizer *lp = [[UILongPressGestureRecognizer alloc] initWithTarget:[HIDECopyHandler shared] action:@selector(onLongPress:)];
        lp.minimumPressDuration = 0.5;
        lp.delegate = [HIDECopyHandler shared];
        [v addGestureRecognizer:lp];
        objc_setAssociatedObject(v, kHideCopyKey, lp, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        return;
    }
}

#pragma mark - Remove sponsored posts from the home feed

BOOL HIDEIsAd(id obj) {
    Class adClass=NSClassFromString(@"IGAdItem");
    if (adClass && [obj isKindOfClass:adClass]) return YES;
    Class IGMedia = NSClassFromString(@"IGMedia");
    id m = (IGMedia && [obj isKindOfClass:IGMedia]) ? obj : (HIDEGet(obj, @"media") ?: HIDEGet(obj, @"feedItem"));
    if (!m) return NO;
    if ([HIDEGetNumber(m,@"isSponsored") boolValue]) return YES;
    NSNumber *flag = HIDEGetNumber(m, @"injected");
    if (flag) return flag.boolValue;
    id metadata = HIDEGet(m, @"injected");
    return metadata && metadata != NSNull.null;
}

static NSArray *(*orig_feedObjects)(id, SEL, id);
static NSArray *hide_feedObjects(id self, SEL _cmd, id adapter) {
    NSArray *objs = orig_feedObjects(self, _cmd, adapter);
    if (!HIDEPref(kHideNoAds) || ![objs isKindOfClass:[NSArray class]]) return objs;
    NSMutableArray *clean = [NSMutableArray arrayWithCapacity:objs.count];
    for (id o in objs) if (!HIDEIsAd(o)) [clean addObject:o];
    return clean;
}

void HIDEInstallExtras(void) {
    orig_storyDidEnd = (void *)HIDEHookChecked(@"IGStoryFullscreenSectionController", NSSelectorFromString(@"storyPlayerMediaViewDidPlayToEnd:"), (IMP)hide_storyDidEnd, "v@:@");
    orig_typingDisabled = (void *)HIDEHookChecked(@"MPESettingsData", NSSelectorFromString(@"isTypingIndicatorsDisabled"), (IMP)hide_typingDisabled, "B@:");
    orig_mpeInit = (void *)HIDEHookChecked(@"MPESettings", NSSelectorFromString(@"initWithGraphQLService:userID:"), (IMP)hide_mpeInit, "@@:@@");
    orig_rrDisabled = (void *)HIDEHookChecked(@"MPESettingsData", NSSelectorFromString(@"isReadReceiptsDisabled"), (IMP)hide_rrDisabled, "B@:");
    orig_rrStored = (void *)HIDEHookChecked(@"MPESettings", NSSelectorFromString(@"_isReadReceiptsDisabledFromPersistentStorage"), (IMP)hide_rrStored, "B@:");
    orig_mqttSendRR = (void *)HIDEHookChecked(@"FBMQTTMarkThread", NSSelectorFromString(@"shouldSendReadReceipt"), (IMP)hide_mqttSendRR, "B@:");
    orig_profileDidAppear = (void *)HIDEHookChecked(@"IGProfileViewController", @selector(viewDidAppear:), (IMP)hide_profileDidAppear, "v@:B");
    orig_feedObjects = (void *)HIDEHookChecked(@"IGMainFeedListAdapterDataSource", NSSelectorFromString(@"objectsForListAdapter:"), (IMP)hide_feedObjects, "@@:@");
}
