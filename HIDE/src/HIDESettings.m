// Settings entry points and compatibility report; all controls use the web design.
#import "HIDECore.h"
#import "HIDEHostLayout.h"
#import <stdlib.h>
UIViewController *HIDECreateWebSettings(void);
NSArray<NSString *> *HIDEAllWebPreferenceKeys(void);

static NSString *HIDECompatibilityReportText(void) {
    NSArray *records = HIDEHookDiagnostics();
    NSString *actual = [NSBundle.mainBundle objectForInfoDictionaryKey:@"CFBundleShortVersionString"] ?: @"unknown";
    NSMutableString *report = [NSMutableString stringWithFormat:@"HIDE %@\nTarget Instagram: %@\nInstalled app: %@\n\n", HIDE_VERSION, HIDE_TARGET_INSTAGRAM, actual];
    [report appendFormat:@"Supplied 453 executable UUID matches: %@\n\n",HIDEIsVerifiedHostBuild() ? @"yes" : @"no"];
    for (NSDictionary *record in records) {
        [report appendFormat:@"[%@] %@ %@\nexpected: %@\nactual: %@\n\n", record[@"status"], record[@"class"], record[@"selector"], record[@"expected"], record[@"actual"]];
    }
    [report appendFormat:@"Download gesture diagnostics (no media contents or URLs): %@\n\n",HIDEDownloadDiagnostics()];
    // Metadata only: never read request bodies, headers, message values or credentials.
    [report appendString:@"Selected 453 API metadata (no instance values):\n"];
    NSArray *terms=@[@"seen",@"body",@"param",@"story",@"reel",@"item",@"media",@"voice",@"audio",@"record",@"request",@"update",@"initWithUserSession"];
    for(NSString *name in @[@"IGStoryViewerViewController",@"IGStoryFullscreenSectionController",@"IGStoryViewerViewModel",@"IGURLRequest",@"IGScopedNetworker",@"IGDirectThreadViewController",@"IGDirectAudioWaveform",@"IGLiveViewerCountIntervalPuller",@"IGDirectCache",@"IGDirectCacheThreadUpdate",@"IGDirectMessageUpdate",HIDE_HOST_VOICE_CLASS]) {
        Class cls=NSClassFromString(name);[report appendFormat:@"\n[%@] %@\n",name,cls ? @"present" : @"missing"];
        if(!cls)continue;
        unsigned count=0;Method *methods=class_copyMethodList(cls,&count);
        for(unsigned i=0;i<count;i++) {
            NSString *selector=NSStringFromSelector(method_getName(methods[i]));BOOL include=NO;
            for(NSString *term in terms)if([selector.lowercaseString containsString:term]){include=YES;break;}
            if(include)[report appendFormat:@"- %@ | %s\n",selector,method_getTypeEncoding(methods[i])];
        }
        free(methods);Ivar *fields=class_copyIvarList(cls,&count);
        for(unsigned i=0;i<count;i++)[report appendFormat:@"ivar %s | %s | offset %td\n",ivar_getName(fields[i]),ivar_getTypeEncoding(fields[i]) ?: "?",ivar_getOffset(fields[i])];
        free(fields);
    }
    [report appendString:@"\nStructural feature availability (not runtime behavior verification):\n"];
    for(NSString *key in HIDEAllWebPreferenceKeys())
        [report appendFormat:@"%@: %@\n",key,HIDEFeatureAvailable(key) ? @"available" : @"unavailable"];
    return report;
}

void HIDEReportFromController(UIViewController *controller) {
    NSString *report=HIDECompatibilityReportText();
    UIAlertController *alert=[UIAlertController alertControllerWithTitle:HIDEL(@"COMPATIBILITY") message:[NSString stringWithFormat:@"HIDE %@ · Instagram %@",HIDE_VERSION,HIDE_TARGET_INSTAGRAM] preferredStyle:UIAlertControllerStyleAlert];
    [alert addAction:[UIAlertAction actionWithTitle:HIDEL(@"COPY_REPORT") style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
        UIPasteboard.generalPasteboard.string=report;HIDEToast(HIDEL(@"COPIED"));
    }]];
    [alert addAction:[UIAlertAction actionWithTitle:HIDEL(@"OK") style:UIAlertActionStyleCancel handler:nil]];
    [controller presentViewController:alert animated:YES completion:nil];
}

void HIDEPresentSettings(void) {
    UIViewController *controller=HIDECreateWebSettings();
    controller.modalPresentationStyle=UIModalPresentationFullScreen;
    controller.modalPresentationCapturesStatusBarAppearance=YES;
    controller.overrideUserInterfaceStyle=UIUserInterfaceStyleDark;
    [HIDETopViewController() presentViewController:controller animated:YES completion:nil];
}

#pragma mark - Entry points

// Profile ☰ button → "Instagram Settings" / "HIDE Settings".
// Instagram 407 uses _onSideTrayButton: for ☰; _onMoreButton: is kept for older layouts.
static void (*orig_sideTray)(id, SEL, id);
static void (*orig_moreButton)(id, SEL, id);
static BOOL sPassThrough = NO;

static void HIDEShowMenu(void (^openInstagram)(void)) {
    UIAlertController *menu = [UIAlertController alertControllerWithTitle:@"HIDE" message:nil preferredStyle:UIAlertControllerStyleAlert];
    [menu addAction:[UIAlertAction actionWithTitle:HIDEL(@"IG_SETTINGS") style:UIAlertActionStyleDefault handler:^(UIAlertAction *a) {
        sPassThrough = YES;
        @try { openInstagram(); } @finally { sPassThrough = NO; }
    }]];
    [menu addAction:[UIAlertAction actionWithTitle:HIDEL(@"HIDE_SETTINGS") style:UIAlertActionStyleDefault handler:^(UIAlertAction *a) {
        HIDEPresentSettings();
    }]];
    [menu addAction:[UIAlertAction actionWithTitle:HIDEL(@"CANCEL") style:UIAlertActionStyleCancel handler:nil]];
    [HIDETopViewController() presentViewController:menu animated:YES completion:nil];
}

static void hide_sideTray(id self, SEL _cmd, id sender) {
    if (sPassThrough) { orig_sideTray(self, _cmd, sender); return; }
    HIDEShowMenu(^{ orig_sideTray(self, _cmd, sender); });
}

static void hide_moreButton(id self, SEL _cmd, id sender) {
    if (sPassThrough) { orig_moreButton(self, _cmd, sender); return; }
    HIDEShowMenu(^{ orig_moreButton(self, _cmd, sender); });
}

// Instagram 453 profile navigation delegate entry points.
static void (*orig_profileSide)(id,SEL,id),(*orig_profileMore)(id,SEL,id);
static void hide_profileSide(id owner,SEL selector,id sender){
    if(sPassThrough){orig_profileSide(owner,selector,sender);return;}
    HIDEShowMenu(^{orig_profileSide(owner,selector,sender);});
}
static void hide_profileMore(id owner,SEL selector,id sender){
    if(sPassThrough){orig_profileMore(owner,selector,sender);return;}
    HIDEShowMenu(^{orig_profileMore(owner,selector,sender);});
}
// Last-resort fallback if Instagram renames both handlers: shake to open HIDE settings.
static void (*orig_motionEnded)(id, SEL, UIEventSubtype, UIEvent *);
static void hide_motionEnded(id self, SEL _cmd, UIEventSubtype motion, UIEvent *event) {
    if (motion == UIEventSubtypeMotionShake) { HIDEPresentSettings(); return; }
    orig_motionEnded(self, _cmd, motion, event);
}

void HIDEInstallSettingsEntry(void) {
    orig_sideTray = (void *)HIDEHookChecked(@"IGProfileNavigationItemsController", NSSelectorFromString(@"_onSideTrayButton:"), (IMP)hide_sideTray, "v@:@");
    orig_moreButton = (void *)HIDEHookChecked(@"IGProfileNavigationItemsController", NSSelectorFromString(@"_onMoreButton:"), (IMP)hide_moreButton, "v@:@");
    orig_profileSide=(void *)HIDEHookChecked(@"IGProfileViewController",NSSelectorFromString(@"navigationItemsControllerDidTapSideTray:"),(IMP)hide_profileSide,"v@:@");
    orig_profileMore=(void *)HIDEHookChecked(@"IGProfileViewController",NSSelectorFromString(@"navigationItemsControllerDidTapMore:"),(IMP)hide_profileMore,"v@:@");
    if (!orig_sideTray && !orig_moreButton && !orig_profileSide && !orig_profileMore)
        orig_motionEnded = (void *)HIDEHookChecked(@"UIWindow", @selector(motionEnded:withEvent:), (IMP)hide_motionEnded, "v@:q@");
}
