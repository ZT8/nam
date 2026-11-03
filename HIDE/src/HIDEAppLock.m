// App lock with Face ID / Touch ID / passcode.
#import "HIDECore.h"
#import <LocalAuthentication/LocalAuthentication.h>
#import "HIDEPolicy.h"

static UIWindow *sLockWindow;
static HIDELockState sLockState = {0};
static BOOL sAuthenticating = NO;

NSInteger HIDELockDelay(void) {
    return [[NSUserDefaults standardUserDefaults] integerForKey:kHideLockDelay];
}

NSString *HIDELockDelayTitle(NSInteger s) {
    if (s >= 3600) return HIDEL(@"LOCK_1H");
    if (s >= 900) return HIDEL(@"LOCK_15M");
    if (s >= 300) return HIDEL(@"LOCK_5M");
    if (s >= 60) return HIDEL(@"LOCK_1M");
    return HIDEL(@"LOCK_NOW");
}

void HIDEAuthenticate(void (^done)(BOOL ok)) {
    LAContext *ctx = [LAContext new];
    NSError *err = nil;
    if (![ctx canEvaluatePolicy:LAPolicyDeviceOwnerAuthentication error:&err]) {
        dispatch_async(dispatch_get_main_queue(), ^{
            HIDEToast(HIDEL(@"AUTH_UNAVAILABLE"));
            if (done) done(NO);
        });
        return;
    }
    if (ctx.biometryType == LABiometryTypeFaceID &&
        ![NSBundle.mainBundle.infoDictionary[@"NSFaceIDUsageDescription"] length]) {
        dispatch_async(dispatch_get_main_queue(), ^{
            HIDEToast(HIDEL(@"AUTH_UNAVAILABLE"));
            if (done) done(NO);
        });
        return;
    }
    [ctx evaluatePolicy:LAPolicyDeviceOwnerAuthentication localizedReason:HIDEL(@"UNLOCK_REASON") reply:^(BOOL ok, NSError *e) {
        dispatch_async(dispatch_get_main_queue(), ^{ if (done) done(ok); });
    }];
}

@interface HIDELockViewController : UIViewController
@end

static void HIDEUnlock(void);

@implementation HIDELockViewController
- (void)viewDidLoad {
    [super viewDidLoad];
    UIVisualEffectView *blur = [[UIVisualEffectView alloc] initWithEffect:[UIBlurEffect effectWithStyle:UIBlurEffectStyleSystemMaterialDark]];
    blur.frame = self.view.bounds;
    blur.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
    [self.view addSubview:blur];

    UIImageView *icon = [[UIImageView alloc] initWithImage:[UIImage systemImageNamed:@"lock.fill"]];
    icon.tintColor = UIColor.whiteColor;
    icon.contentMode = UIViewContentModeScaleAspectFit;
    icon.translatesAutoresizingMaskIntoConstraints = NO;

    UILabel *logo = [UILabel new];
    logo.text = @"HIDE";
    logo.font = [UIFont systemFontOfSize:34 weight:UIFontWeightHeavy];
    logo.textColor = UIColor.whiteColor;
    logo.translatesAutoresizingMaskIntoConstraints = NO;

    UIButton *btn = [UIButton buttonWithType:UIButtonTypeSystem];
    [btn setTitle:HIDEL(@"UNLOCK") forState:UIControlStateNormal];
    btn.titleLabel.font = [UIFont systemFontOfSize:17 weight:UIFontWeightSemibold];
    [btn setTitleColor:UIColor.whiteColor forState:UIControlStateNormal];
    btn.backgroundColor = [UIColor colorWithRed:0.16 green:0.33 blue:0.95 alpha:1];
    btn.layer.cornerRadius = 22;
    btn.translatesAutoresizingMaskIntoConstraints = NO;
    [btn addTarget:self action:@selector(unlock) forControlEvents:UIControlEventTouchUpInside];

    [self.view addSubview:icon]; [self.view addSubview:logo]; [self.view addSubview:btn];
    [NSLayoutConstraint activateConstraints:@[
        [icon.centerXAnchor constraintEqualToAnchor:self.view.centerXAnchor],
        [icon.centerYAnchor constraintEqualToAnchor:self.view.centerYAnchor constant:-70],
        [icon.widthAnchor constraintEqualToConstant:52], [icon.heightAnchor constraintEqualToConstant:52],
        [logo.centerXAnchor constraintEqualToAnchor:self.view.centerXAnchor],
        [logo.topAnchor constraintEqualToAnchor:icon.bottomAnchor constant:16],
        [btn.centerXAnchor constraintEqualToAnchor:self.view.centerXAnchor],
        [btn.topAnchor constraintEqualToAnchor:logo.bottomAnchor constant:28],
        [btn.widthAnchor constraintEqualToConstant:200], [btn.heightAnchor constraintEqualToConstant:44],
    ]];
}
- (void)unlock { HIDEUnlock(); }
@end

static void HIDEShowLock(void) {
    if (sLockWindow) return;
    UIWindowScene *scene = nil;
    for (UIScene *s in UIApplication.sharedApplication.connectedScenes)
        if ([s isKindOfClass:[UIWindowScene class]] &&
            (s.activationState == UISceneActivationStateForegroundActive ||
             s.activationState == UISceneActivationStateForegroundInactive)) { scene = (UIWindowScene *)s; break; }
    if (!scene) return;
    UIWindow *w = [[UIWindow alloc] initWithWindowScene:scene];
    w.windowLevel = UIWindowLevelAlert + 100;
    w.rootViewController = [HIDELockViewController new];
    w.hidden = NO;
    sLockWindow = w;
}

static void HIDEHideLock(void) {
    sLockWindow.hidden = YES;
    sLockWindow = nil;
}

static void HIDEUnlock(void) {
    if (sAuthenticating) return;
    sAuthenticating = YES;
    HIDEAuthenticate(^(BOOL ok) {
        sAuthenticating = NO;
        HIDELockDidAuthenticate(&sLockState, ok);
        if (ok && UIApplication.sharedApplication.applicationState == UIApplicationStateActive) {
            HIDELockDidActivate(&sLockState);
            HIDEHideLock();
        }
    });
}

static BOOL HIDEShouldLockNow(void) {
    return HIDELockRequiresAuthentication(&sLockState, HIDEPref(kHideAppLock),
                                         NSDate.timeIntervalSinceReferenceDate, HIDELockDelay());
}

void HIDEAppLockPreferenceChanged(BOOL enabled) {
    // The settings controller enables this only after successful authentication.
    HIDELockDidAuthenticate(&sLockState, enabled);
    HIDELockDidActivate(&sLockState);
    if (!enabled) HIDEHideLock();
}

void HIDEInstallAppLock(void) {
    NSNotificationCenter *nc = [NSNotificationCenter defaultCenter];
    NSOperationQueue *main = NSOperationQueue.mainQueue;

    // Cover the screen before iOS takes the app-switcher snapshot.
    [nc addObserverForName:UIApplicationWillResignActiveNotification object:nil queue:main usingBlock:^(NSNotification *n) {
        if (HIDEPref(kHideAppLock) && !sAuthenticating && !sLockWindow) {
            HIDEShowLock();
        }
    }];
    [nc addObserverForName:UIApplicationDidEnterBackgroundNotification object:nil queue:main usingBlock:^(NSNotification *n) {
        if (HIDEPref(kHideAppLock)) HIDELockDidBackground(&sLockState, NSDate.timeIntervalSinceReferenceDate);
    }];
    [nc addObserverForName:UIApplicationDidBecomeActiveNotification object:nil queue:main usingBlock:^(NSNotification *n) {
        if (sAuthenticating) return; // returning from the Face ID prompt itself
        if (HIDEShouldLockNow()) {
            HIDELockDidAuthenticate(&sLockState, NO);
            HIDEShowLock();
            HIDEUnlock();
        } else {
            HIDEHideLock();
        }
        HIDELockDidActivate(&sLockState);
    }];
}
