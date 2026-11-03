#import "HIDECore.h"
#import "HIDEDesignData.h"
#import <WebKit/WebKit.h>

void HIDEReportFromController(UIViewController *controller);

static NSDictionary<NSString *,NSArray<NSString *> *> *HIDEWebKeys(void) {
    return @{@"dl":@[kHideDownload],@"hq":@[kHideHighQuality],@"sh":@[kHideShareAfterSave],
        @"rep":@[kHideNoVideoRepeat],@"anon":@[kHideAnonStories],@"adv":@[kHideNoAutoAdvance],
        @"men":@[kHideShowMentions],@"rr":@[kHideNoReadReceipts],@"ty":@[kHideNoTyping],
        @"vm":@[kHideVoiceDownload],@"dlm":@[kHideKeepDeleted],
        @"ss":@[kHideNoScreenshotNotice],@"rp":@[kHideNoReplayNotice],@"sp":@[kHideAllowScreenshots],
        @"v2m":@[kHideVoiceImport],@"rec":@[kHideLongVoice],@"lk":@[kHideConfirmLike],
        @"fl":@[kHideConfirmFollow],@"cp":@[kHideCopyText],@"fy":@[kHideFollowStatus],
        @"lc":@[kHideLikeCounts],@"sf":@[kHideSafariLinks],@"ad":@[kHideNoAds],@"lock":@[kHideAppLock],@"live":@[kHideAnonLive],@"sv":@[kHideVideoStickers],@"timer":@[kHideVideoTimer]};
}

NSArray<NSString *> *HIDEAllWebPreferenceKeys(void) {
    NSMutableOrderedSet *keys=[NSMutableOrderedSet orderedSet];
    for(NSArray *group in HIDEWebKeys().allValues)[keys addObjectsFromArray:group];
    return keys.array;
}

@interface HIDEWebSettingsController : UIViewController <WKScriptMessageHandler,WKNavigationDelegate>
@property(nonatomic,strong) WKWebView *web;
- (void)refresh;
@end

// WKUserContentController retains handlers; keep the controller reference weak.
@interface HIDEWeakWebHandler : NSObject <WKScriptMessageHandler>
@property(nonatomic,weak) HIDEWebSettingsController *owner;
@end
@implementation HIDEWeakWebHandler
- (void)userContentController:(WKUserContentController *)controller didReceiveScriptMessage:(WKScriptMessage *)message {
    [self.owner userContentController:controller didReceiveScriptMessage:message];
}
@end

@implementation HIDEWebSettingsController
- (NSDictionary *)snapshot {
    NSMutableDictionary *features=[NSMutableDictionary dictionary],*available=[NSMutableDictionary dictionary];
    [HIDEWebKeys() enumerateKeysAndObjectsUsingBlock:^(NSString *name,NSArray *keys,BOOL *stop) {
        BOOL enabled=YES,supported=YES;
        for(NSString *key in keys) {supported &= HIDEFeatureAvailable(key);enabled &= HIDEPref(key);}
        features[name]=@(enabled && supported);available[name]=@(supported);
    }];
    features[@"cl"]=@NO;available[@"cl"]=@NO; // No separate chat-lock backend.
    NSUserDefaults *defaults=NSUserDefaults.standardUserDefaults;
    NSString *language=[defaults stringForKey:@"hide_ui_language"];
    if(![@[@"ar",@"en"] containsObject:language])language=@"ar";
    NSInteger color=[defaults integerForKey:@"hide_ui_color"];
    if(color<0 || color>5)color=0;
    BOOL glass=[defaults objectForKey:@"hide_ui_glass"] ? [defaults boolForKey:@"hide_ui_glass"] : YES;
    NSArray *delays=@[@0,@60,@300,@900];NSUInteger delay=[delays indexOfObject:@(HIDELockDelay())];
    if(delay==NSNotFound)delay=3; // Preserve existing longer native delays until changed.
    return @{@"version":HIDE_VERSION,@"instagram":HIDE_TARGET_INSTAGRAM,@"features":features,@"available":available,@"language":language,@"color":@(color),@"glass":@(glass),@"delay":@(delay),@"delaySeconds":@(HIDELockDelay())};
}
- (NSString *)snapshotJSON {
    NSData *data=[NSJSONSerialization dataWithJSONObject:[self snapshot] options:0 error:nil];
    return [[NSString alloc] initWithData:data encoding:NSUTF8StringEncoding];
}
- (void)viewDidLoad {
    [super viewDidLoad];
    if(![NSUserDefaults.standardUserDefaults objectForKey:@"hide_ui_language"])
        [NSUserDefaults.standardUserDefaults setObject:@"ar" forKey:@"hide_ui_language"];
    self.view.backgroundColor=[UIColor colorWithRed:11/255.0 green:11/255.0 blue:16/255.0 alpha:1];
    WKWebViewConfiguration *config=[WKWebViewConfiguration new];
    config.websiteDataStore=WKWebsiteDataStore.nonPersistentDataStore;
    HIDEWeakWebHandler *handler=[HIDEWeakWebHandler new];handler.owner=self;
    [config.userContentController addScriptMessageHandler:handler name:@"hideSettings"];
    NSString *bridge=[[NSString alloc] initWithBytes:HIDENativeBridge length:sizeof(HIDENativeBridge) encoding:NSUTF8StringEncoding];
    NSString *script=[NSString stringWithFormat:@"window.__HIDEInitialSnapshot=%@;\n%@",[self snapshotJSON],bridge];
    [config.userContentController addUserScript:[[WKUserScript alloc] initWithSource:script injectionTime:WKUserScriptInjectionTimeAtDocumentEnd forMainFrameOnly:YES]];
    self.web=[[WKWebView alloc] initWithFrame:CGRectZero configuration:config];
    self.web.alpha=0;self.web.navigationDelegate=self;self.web.opaque=NO;self.web.backgroundColor=self.view.backgroundColor;
    self.web.scrollView.backgroundColor=self.view.backgroundColor;
    self.web.scrollView.contentInsetAdjustmentBehavior=UIScrollViewContentInsetAdjustmentNever;
    self.web.allowsLinkPreview=NO;self.web.translatesAutoresizingMaskIntoConstraints=NO;
    [self.view addSubview:self.web];
    UILayoutGuide *safe=self.view.safeAreaLayoutGuide;
    [NSLayoutConstraint activateConstraints:@[[self.web.topAnchor constraintEqualToAnchor:safe.topAnchor],
        [self.web.bottomAnchor constraintEqualToAnchor:safe.bottomAnchor],
        [self.web.leadingAnchor constraintEqualToAnchor:safe.leadingAnchor],
        [self.web.trailingAnchor constraintEqualToAnchor:safe.trailingAnchor]]];
    NSString *html=[[NSString alloc] initWithBytes:HIDEApprovedHTML length:sizeof(HIDEApprovedHTML) encoding:NSUTF8StringEncoding];
    [self.web loadHTMLString:html baseURL:nil];
}
- (void)viewDidAppear:(BOOL)animated {[super viewDidAppear:animated];[self refresh];}
- (UIStatusBarStyle)preferredStatusBarStyle {return UIStatusBarStyleLightContent;}
- (BOOL)accessibilityPerformEscape {[self dismissViewControllerAnimated:YES completion:nil];return YES;}
- (void)refresh {
    NSString *script=[NSString stringWithFormat:@"window.HIDEApplyNative && window.HIDEApplyNative(%@);",[self snapshotJSON]];
    [self.web evaluateJavaScript:script completionHandler:nil];
}
- (void)webView:(WKWebView *)webView didFinishNavigation:(WKNavigation *)navigation {
    __weak typeof(self) weak=self;
    [webView evaluateJavaScript:@"Boolean(window.HIDEApplyNative)" completionHandler:^(id ready,NSError *error) {
        if(!error && [ready boolValue]) {[weak refresh];weak.web.alpha=1;}
    }];
}
- (void)webView:(WKWebView *)webView decidePolicyForNavigationAction:(WKNavigationAction *)action decisionHandler:(void (^)(WKNavigationActionPolicy))decision {
    // Only the bundled in-memory document can use the native bridge.
    decision([action.request.URL.absoluteString isEqualToString:@"about:blank"] ? WKNavigationActionPolicyAllow : WKNavigationActionPolicyCancel);
}
- (void)userContentController:(WKUserContentController *)controller didReceiveScriptMessage:(WKScriptMessage *)message {
    if(message.webView!=self.web || !message.frameInfo.isMainFrame || ![message.body isKindOfClass:NSDictionary.class])return;
    NSDictionary *body=message.body;NSString *action=body[@"action"];id value=body[@"value"];
    if(![action isKindOfClass:NSString.class])return;
    NSUserDefaults *defaults=NSUserDefaults.standardUserDefaults;
    if([action isEqualToString:@"feature"]) {
        NSString *name=body[@"id"];
        if(![name isKindOfClass:NSString.class] || ![value isKindOfClass:NSNumber.class])return;
        NSArray *keys=HIDEWebKeys()[name];if(!keys.count)return;
        for(NSString *key in keys)if(!HIDEFeatureAvailable(key)){[self refresh];return;}
        BOOL enabled=[value boolValue];
        if([name isEqualToString:@"lock"] && enabled) {
            __weak typeof(self) weak=self;
            HIDEAuthenticate(^(BOOL ok){if(ok)HIDESetPref(kHideAppLock,YES);[weak refresh];});return;
        }
        for(NSString *key in keys) {
            HIDESetPref(key,enabled);
            if([key isEqualToString:kHideNoReadReceipts] || [key isEqualToString:kHideNoTyping])HIDEMessagingPrivacyChanged(key);
        }
    } else if([action isEqualToString:@"delay"]) {
        if(![value isKindOfClass:NSNumber.class] || [value integerValue]<0 || [value integerValue]>3)return;
        [defaults setInteger:[@[@0,@60,@300,@900][[value integerValue]] integerValue] forKey:kHideLockDelay];
    } else if([action isEqualToString:@"color"]) {
        if(![value isKindOfClass:NSNumber.class] || [value integerValue]<0 || [value integerValue]>5)return;
        [defaults setInteger:[value integerValue] forKey:@"hide_ui_color"];
    } else if([action isEqualToString:@"glass"]) {
        if(![value isKindOfClass:NSNumber.class])return;[defaults setBool:[value boolValue] forKey:@"hide_ui_glass"];
    } else if([action isEqualToString:@"language"]) {
        if(![value isKindOfClass:NSString.class] || ![@[@"ar",@"en"] containsObject:value])return;
        [defaults setObject:value forKey:@"hide_ui_language"];
    } else if([action isEqualToString:@"close"]) {
        [self dismissViewControllerAnimated:YES completion:nil];return;
    } else if([action isEqualToString:@"report"]) {
        HIDEReportFromController(self);return;
    } else if([action isEqualToString:@"instagram"] || [action isEqualToString:@"whatsapp"]) {
        NSString *url=[action isEqualToString:@"instagram"] ? @"https://www.instagram.com/hidestores/" : @"https://api.whatsapp.com/send/?phone=971529741121";
        [UIApplication.sharedApplication openURL:[NSURL URLWithString:url] options:@{} completionHandler:nil];return;
    } else return;
    [[UISelectionFeedbackGenerator new] selectionChanged];[self refresh];
}
@end

UIViewController *HIDECreateWebSettings(void) {return [HIDEWebSettingsController new];}
