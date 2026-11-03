// HIDE settings screen (glass design) + entry from the profile ☰ menu.
#import "HIDECore.h"
#import "HIDE407.h"
#import <stdlib.h>
void HIDEReportFromController(UIViewController *controller);

#define HIDE_BLUE   [UIColor colorWithRed:0.20 green:0.42 blue:1.00 alpha:1]
#define HIDE_PURPLE [UIColor colorWithRed:0.55 green:0.30 blue:1.00 alpha:1]
#define RGB(r,g,b)  [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:1]

// Row: @[title, prefKey, SF Symbol, icon colour, (optional) @"delay"]
#define ROW(t, k, i, c) @[HIDEL(t), k, i, c]

#pragma mark - Glass background

@interface HIDEGlassBackground : UIView
@end
@implementation HIDEGlassBackground {
    CAGradientLayer *_g;
    NSArray<UIView *> *_orbs;
}
- (instancetype)initWithFrame:(CGRect)f {
    if ((self = [super initWithFrame:f])) {
        _g = [CAGradientLayer layer];
        _g.colors = @[(id)RGB(8,10,28).CGColor, (id)RGB(16,22,64).CGColor, (id)RGB(6,8,20).CGColor];
        _g.startPoint = CGPointMake(0, 0); _g.endPoint = CGPointMake(1, 1);
        [self.layer addSublayer:_g];
        NSMutableArray *orbs = [NSMutableArray array];
        for (UIColor *c in @[HIDE_BLUE, HIDE_PURPLE, RGB(0,190,255)]) {
            UIView *o = [UIView new];
            o.backgroundColor = [c colorWithAlphaComponent:0.55];
            o.layer.cornerRadius = 140;
            [self addSubview:o]; [orbs addObject:o];
        }
        _orbs = orbs;
        UIVisualEffectView *blur = [[UIVisualEffectView alloc] initWithEffect:[UIBlurEffect effectWithStyle:UIBlurEffectStyleSystemThickMaterialDark]];
        blur.alpha = 0.92;
        blur.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
        blur.frame = self.bounds;
        [self addSubview:blur];
    }
    return self;
}
- (void)layoutSubviews {
    [super layoutSubviews];
    _g.frame = self.bounds;
    CGFloat w = self.bounds.size.width, h = self.bounds.size.height;
    CGPoint centers[3] = {{w * 0.15, h * 0.12}, {w * 0.95, h * 0.45}, {w * 0.25, h * 0.88}};
    NSUInteger count=MIN(_orbs.count,sizeof(centers)/sizeof(centers[0]));
    for (NSUInteger i = 0; i < count; i++) {
        _orbs[i].frame = CGRectMake(0, 0, 280, 280);
        _orbs[i].center = centers[i];
    }
}
@end

#pragma mark - Glass cell

@interface HIDEGlassCell : UITableViewCell
@property (nonatomic, strong) UIView *iconBox;
@property (nonatomic, strong) UIImageView *icon;
@property (nonatomic, strong) UILabel *title;
@property (nonatomic, strong) UILabel *value;
@end
@implementation HIDEGlassCell
- (instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)rid {
    if ((self = [super initWithStyle:style reuseIdentifier:rid])) {
        self.backgroundColor = UIColor.clearColor;
        UIVisualEffectView *glass = [[UIVisualEffectView alloc] initWithEffect:[UIBlurEffect effectWithStyle:UIBlurEffectStyleSystemUltraThinMaterialDark]];
        glass.contentView.backgroundColor = [UIColor colorWithWhite:1 alpha:0.06];
        self.backgroundView = glass;
        UIView *sel = [UIView new]; sel.backgroundColor = [UIColor colorWithWhite:1 alpha:0.08];
        self.selectedBackgroundView = sel;

        _iconBox = [UIView new];
        _iconBox.layer.cornerRadius = 8;
        _iconBox.layer.cornerCurve = kCACornerCurveContinuous;
        _iconBox.translatesAutoresizingMaskIntoConstraints = NO;
        _icon = [UIImageView new];
        _icon.tintColor = UIColor.whiteColor;
        _icon.contentMode = UIViewContentModeScaleAspectFit;
        _icon.translatesAutoresizingMaskIntoConstraints = NO;
        [_iconBox addSubview:_icon];

        _title = [UILabel new];
        _title.font = [UIFont systemFontOfSize:16 weight:UIFontWeightMedium];
        _title.textColor = UIColor.whiteColor;
        _title.numberOfLines = 0;
        _title.translatesAutoresizingMaskIntoConstraints = NO;

        _value = [UILabel new];
        _value.font = [UIFont systemFontOfSize:15];
        _value.textColor = [UIColor colorWithWhite:1 alpha:0.55];
        _value.translatesAutoresizingMaskIntoConstraints = NO;
        [_value setContentCompressionResistancePriority:UILayoutPriorityRequired forAxis:UILayoutConstraintAxisHorizontal];

        [self.contentView addSubview:_iconBox];
        [self.contentView addSubview:_title];
        [self.contentView addSubview:_value];
        UILayoutGuide *m = self.contentView.layoutMarginsGuide;
        [NSLayoutConstraint activateConstraints:@[
            [_iconBox.leadingAnchor constraintEqualToAnchor:m.leadingAnchor],
            [_iconBox.centerYAnchor constraintEqualToAnchor:self.contentView.centerYAnchor],
            [_iconBox.widthAnchor constraintEqualToConstant:30], [_iconBox.heightAnchor constraintEqualToConstant:30],
            [_icon.centerXAnchor constraintEqualToAnchor:_iconBox.centerXAnchor],
            [_icon.centerYAnchor constraintEqualToAnchor:_iconBox.centerYAnchor],
            [_icon.widthAnchor constraintEqualToConstant:18], [_icon.heightAnchor constraintEqualToConstant:18],
            [_title.leadingAnchor constraintEqualToAnchor:_iconBox.trailingAnchor constant:14],
            [_title.topAnchor constraintEqualToAnchor:self.contentView.topAnchor constant:14],
            [_title.bottomAnchor constraintEqualToAnchor:self.contentView.bottomAnchor constant:-14],
            [_title.trailingAnchor constraintLessThanOrEqualToAnchor:_value.leadingAnchor constant:-8],
            [_value.trailingAnchor constraintEqualToAnchor:m.trailingAnchor],
            [_value.centerYAnchor constraintEqualToAnchor:self.contentView.centerYAnchor],
        ]];
    }
    return self;
}
- (void)setIconName:(NSString *)name color:(UIColor *)color {
    UIImageSymbolConfiguration *cfg = [UIImageSymbolConfiguration configurationWithPointSize:15 weight:UIImageSymbolWeightSemibold];
    self.icon.image = [UIImage systemImageNamed:name withConfiguration:cfg] ?: [UIImage systemImageNamed:@"circle.fill" withConfiguration:cfg];
    self.iconBox.backgroundColor = color;
}
@end

#pragma mark - Settings controller

@interface HIDESettingsViewController : UITableViewController
@end

@implementation HIDESettingsViewController {
    NSArray<NSDictionary *> *_sections;
}

- (instancetype)init {
    if ((self = [super initWithStyle:UITableViewStyleInsetGrouped])) {
        _sections = @[
            @{@"title": HIDEL(@"SEC_DOWNLOAD"), @"rows": @[
                ROW(@"DOWNLOAD_LONGPRESS", kHideDownload, @"arrow.down.circle.fill", RGB(52,120,246)),
                ROW(@"HIGH_QUALITY", kHideHighQuality, @"sparkles", RGB(88,86,214))]},
            @{@"title": HIDEL(@"SEC_MEDIA"), @"rows": @[
                ROW(@"SHARE_AFTER_SAVE", kHideShareAfterSave, @"square.and.arrow.up", RGB(52,120,246)),
                ROW(@"NO_REPEAT", kHideNoVideoRepeat, @"repeat", RGB(255,149,0))]},
            @{@"title": HIDEL(@"SEC_STORIES"), @"rows": @[
                ROW(@"ANON_STORIES", kHideAnonStories, @"eye.slash.fill", RGB(175,82,222)),
                ROW(@"NO_AUTO_ADVANCE", kHideNoAutoAdvance, @"pause.circle.fill", RGB(255,45,85)),
                ROW(@"SHOW_MENTIONS", kHideShowMentions, @"at", RGB(90,200,250)),
                ROW(@"VIDEO_STICKERS", kHideVideoStickers, @"video.badge.plus", RGB(175,82,222))]},
            @{@"title": HIDEL(@"SEC_LIVE"), @"rows": @[
                ROW(@"ANON_LIVE", kHideAnonLive, @"antenna.radiowaves.left.and.right", RGB(255,45,85))]},
            @{@"title": HIDEL(@"SEC_DM"), @"rows": @[
                ROW(@"NO_READ", kHideNoReadReceipts, @"checkmark.message.fill", RGB(52,199,89)),
                ROW(@"KEEP_DELETED", kHideKeepDeleted, @"archivebox.fill", RGB(255,149,0)),
                ROW(@"NO_TYPING", kHideNoTyping, @"ellipsis.bubble.fill", RGB(48,176,199)),
                ROW(@"NO_SCREENSHOT_NOTICE", kHideNoScreenshotNotice, @"camera.badge.ellipsis", RGB(175,82,222)),
                ROW(@"NO_REPLAY_NOTICE", kHideNoReplayNotice, @"arrow.counterclockwise", RGB(255,149,0)),
                ROW(@"ALLOW_SCREENSHOTS", kHideAllowScreenshots, @"camera.viewfinder", RGB(90,200,250)),
                ROW(@"LONG_VOICE", kHideLongVoice, @"mic.fill", RGB(255,59,48)),
                ROW(@"VOICE_DOWNLOAD", kHideVoiceDownload, @"waveform", RGB(255,59,48)),
                ROW(@"VOICE_IMPORT", kHideVoiceImport, @"waveform.badge.plus", RGB(52,120,246))]},
            @{@"title": HIDEL(@"SEC_POPUP"), @"rows": @[
                ROW(@"CONFIRM_LIKE", kHideConfirmLike, @"heart.fill", RGB(255,55,95)),
                ROW(@"CONFIRM_FOLLOW", kHideConfirmFollow, @"person.badge.plus", RGB(0,122,255))]},
            @{@"title": HIDEL(@"SEC_OTHERS"), @"rows": @[
                ROW(@"COPY_TEXT_PREF", kHideCopyText, @"doc.on.doc.fill", RGB(142,142,147)),
                ROW(@"FOLLOW_STATUS", kHideFollowStatus, @"person.2.fill", RGB(94,92,230)),
                ROW(@"LIKE_COUNTS", kHideLikeCounts, @"heart.text.square", RGB(255,55,95)),
                ROW(@"VIDEO_TIMER", kHideVideoTimer, @"timer", RGB(255,159,10))]},
            @{@"title": HIDEL(@"SEC_BROWSER"), @"rows": @[
                ROW(@"SAFARI", kHideSafariLinks, @"safari.fill", RGB(10,132,255))]},
            @{@"title": HIDEL(@"SEC_ADS"), @"rows": @[
                ROW(@"NO_ADS", kHideNoAds, @"nosign", RGB(255,69,58))]},
            @{@"title": HIDEL(@"SEC_LOCK"), @"rows": @[
                ROW(@"LOCK_ENABLE", kHideAppLock, @"faceid", RGB(52,199,89)),
                @[HIDEL(@"LOCK_AFTER"), kHideLockDelay, @"timer", RGB(255,159,10), @"delay"]]},
            @{@"title": HIDEL(@"SEC_ABOUT"), @"about": @YES, @"rows": @[
                @[HIDEL(@"VERSION"), @"", @"info.circle.fill", HIDE_BLUE],
                @[@"Instagram", @"", @"camera.fill", RGB(225,48,108)],
                @[HIDEL(@"COMPATIBILITY"), @"", @"checkmark.shield", HIDE_BLUE]]},
        ];
    }
    return self;
}

- (void)viewDidLoad {
    [super viewDidLoad];
    self.overrideUserInterfaceStyle = UIUserInterfaceStyleDark;
    self.navigationController.overrideUserInterfaceStyle = UIUserInterfaceStyleDark;

    UINavigationBarAppearance *ap = [UINavigationBarAppearance new];
    [ap configureWithTransparentBackground];
    ap.backgroundEffect = [UIBlurEffect effectWithStyle:UIBlurEffectStyleSystemUltraThinMaterialDark];
    ap.titleTextAttributes = @{NSForegroundColorAttributeName: UIColor.whiteColor,
                               NSFontAttributeName: [UIFont systemFontOfSize:17 weight:UIFontWeightSemibold]};
    self.navigationItem.standardAppearance = ap;
    self.navigationItem.scrollEdgeAppearance = ap;
    self.title = HIDEL(@"SETTINGS_TITLE");
    UIBarButtonItem *done = [[UIBarButtonItem alloc] initWithBarButtonSystemItem:UIBarButtonSystemItemDone target:self action:@selector(close)];
    done.tintColor = UIColor.whiteColor;
    self.navigationItem.rightBarButtonItem = done;

    self.tableView.backgroundView = [HIDEGlassBackground new];
    self.tableView.backgroundColor = UIColor.clearColor;
    self.tableView.separatorColor = [UIColor colorWithWhite:1 alpha:0.10];
    self.tableView.rowHeight = UITableViewAutomaticDimension;
    self.tableView.estimatedRowHeight = 54;
    self.tableView.sectionHeaderTopPadding = 6;
    [self.tableView registerClass:[HIDEGlassCell class] forCellReuseIdentifier:@"g"];
    self.tableView.tableHeaderView = [self headerView];
    self.tableView.tableFooterView = [self footerView];
}

- (UIView *)headerView {
    CGFloat w = self.view.bounds.size.width ?: 375;
    UIView *h = [[UIView alloc] initWithFrame:CGRectMake(0, 0, w, 200)];

    UIVisualEffectView *card = [[UIVisualEffectView alloc] initWithEffect:[UIBlurEffect effectWithStyle:UIBlurEffectStyleSystemUltraThinMaterialDark]];
    card.contentView.backgroundColor = [UIColor colorWithWhite:1 alpha:0.06];
    card.layer.cornerRadius = 28;
    card.layer.cornerCurve = kCACornerCurveContinuous;
    card.layer.borderWidth = 1;
    card.layer.borderColor = [UIColor colorWithWhite:1 alpha:0.14].CGColor;
    card.clipsToBounds = YES;
    card.translatesAutoresizingMaskIntoConstraints = NO;
    [h addSubview:card];

    // "H" app mark
    UIView *mark = [UIView new];
    mark.translatesAutoresizingMaskIntoConstraints = NO;
    mark.layer.cornerRadius = 18;
    mark.layer.cornerCurve = kCACornerCurveContinuous;
    mark.clipsToBounds = YES;
    CAGradientLayer *mg = [CAGradientLayer layer];
    mg.colors = @[(id)HIDE_BLUE.CGColor, (id)HIDE_PURPLE.CGColor];
    mg.startPoint = CGPointMake(0, 0); mg.endPoint = CGPointMake(1, 1);
    mg.frame = CGRectMake(0, 0, 64, 64);
    [mark.layer addSublayer:mg];
    UILabel *h1 = [UILabel new];
    h1.text = @"H";
    h1.font = [UIFont systemFontOfSize:36 weight:UIFontWeightBlack];
    h1.textColor = UIColor.whiteColor;
    h1.translatesAutoresizingMaskIntoConstraints = NO;
    [mark addSubview:h1];

    UILabel *logo = [UILabel new];
    logo.text = @"HIDE";
    logo.font = [UIFont systemFontOfSize:30 weight:UIFontWeightHeavy];
    logo.textColor = UIColor.whiteColor;
    logo.translatesAutoresizingMaskIntoConstraints = NO;

    UILabel *ver = [UILabel new];
    ver.text = [NSString stringWithFormat:@"  v%@  ", HIDE_VERSION];
    ver.font = [UIFont monospacedDigitSystemFontOfSize:13 weight:UIFontWeightSemibold];
    ver.textColor = UIColor.whiteColor;
    ver.backgroundColor = [HIDE_BLUE colorWithAlphaComponent:0.45];
    ver.layer.cornerRadius = 10;
    ver.layer.borderWidth = 1;
    ver.layer.borderColor = [UIColor colorWithWhite:1 alpha:0.25].CGColor;
    ver.clipsToBounds = YES;
    ver.translatesAutoresizingMaskIntoConstraints = NO;

    UILabel *site = [UILabel new];
    site.text = @"hide-plus.com";
    site.font = [UIFont systemFontOfSize:14 weight:UIFontWeightMedium];
    site.textColor = [UIColor colorWithWhite:1 alpha:0.6];
    site.translatesAutoresizingMaskIntoConstraints = NO;

    [card.contentView addSubview:mark];
    [card.contentView addSubview:logo];
    [card.contentView addSubview:ver];
    [card.contentView addSubview:site];
    [NSLayoutConstraint activateConstraints:@[
        [card.leadingAnchor constraintEqualToAnchor:h.leadingAnchor constant:20],
        [card.trailingAnchor constraintEqualToAnchor:h.trailingAnchor constant:-20],
        [card.topAnchor constraintEqualToAnchor:h.topAnchor constant:16],
        [card.bottomAnchor constraintEqualToAnchor:h.bottomAnchor constant:-12],
        [mark.centerXAnchor constraintEqualToAnchor:card.centerXAnchor],
        [mark.topAnchor constraintEqualToAnchor:card.topAnchor constant:18],
        [mark.widthAnchor constraintEqualToConstant:64], [mark.heightAnchor constraintEqualToConstant:64],
        [h1.centerXAnchor constraintEqualToAnchor:mark.centerXAnchor],
        [h1.centerYAnchor constraintEqualToAnchor:mark.centerYAnchor],
        [logo.topAnchor constraintEqualToAnchor:mark.bottomAnchor constant:10],
        [logo.centerXAnchor constraintEqualToAnchor:card.centerXAnchor constant:-26],
        [ver.leadingAnchor constraintEqualToAnchor:logo.trailingAnchor constant:8],
        [ver.centerYAnchor constraintEqualToAnchor:logo.centerYAnchor],
        [ver.heightAnchor constraintEqualToConstant:22],
        [site.topAnchor constraintEqualToAnchor:logo.bottomAnchor constant:4],
        [site.centerXAnchor constraintEqualToAnchor:card.centerXAnchor],
    ]];
    return h;
}

- (UIView *)footerView {
    UILabel *f = [[UILabel alloc] initWithFrame:CGRectMake(0, 0, 320, 60)];
    f.text = [NSString stringWithFormat:@"HIDE v%@ · hide-plus.com", HIDE_VERSION];
    f.textAlignment = NSTextAlignmentCenter;
    f.font = [UIFont systemFontOfSize:12 weight:UIFontWeightMedium];
    f.textColor = [UIColor colorWithWhite:1 alpha:0.35];
    return f;
}

- (void)close { [self dismissViewControllerAnimated:YES completion:nil]; }

- (NSInteger)numberOfSectionsInTableView:(UITableView *)tv { return _sections.count; }
- (NSInteger)tableView:(UITableView *)tv numberOfRowsInSection:(NSInteger)s { return [_sections[s][@"rows"] count]; }

- (UIView *)tableView:(UITableView *)tv viewForHeaderInSection:(NSInteger)s {
    UIView *v = [UIView new];
    UILabel *l = [UILabel new];
    l.text = [_sections[s][@"title"] uppercaseString];
    l.font = [UIFont systemFontOfSize:13 weight:UIFontWeightSemibold];
    l.textColor = [UIColor colorWithWhite:1 alpha:0.55];
    l.translatesAutoresizingMaskIntoConstraints = NO;
    [v addSubview:l];
    [NSLayoutConstraint activateConstraints:@[
        [l.leadingAnchor constraintEqualToAnchor:v.leadingAnchor constant:36],
        [l.trailingAnchor constraintEqualToAnchor:v.trailingAnchor constant:-36],
        [l.bottomAnchor constraintEqualToAnchor:v.bottomAnchor constant:-6],
    ]];
    return v;
}
- (NSString *)tableView:(UITableView *)tableView titleForFooterInSection:(NSInteger)section {
    for(NSArray *row in _sections[section][@"rows"])
        if([row[1] isEqualToString:kHideAnonLive] || [row[1] isEqualToString:kHideKeepDeleted])return HIDEL(@"PRIVACY_PORT_NOTE");
    return nil;
}
- (CGFloat)tableView:(UITableView *)tv heightForHeaderInSection:(NSInteger)s { return 38; }

- (UITableViewCell *)tableView:(UITableView *)tv cellForRowAtIndexPath:(NSIndexPath *)ip {
    NSDictionary *sec = _sections[ip.section];
    NSArray *row = sec[@"rows"][ip.row];
    HIDEGlassCell *c = [tv dequeueReusableCellWithIdentifier:@"g" forIndexPath:ip];
    c.title.text = row[0];
    [c setIconName:row[2] color:row[3]];
    c.accessoryView = nil;
    c.accessoryType = UITableViewCellAccessoryNone;
    c.value.text = nil;
    c.selectionStyle = UITableViewCellSelectionStyleNone;

    if ([sec[@"about"] boolValue]) {
        c.value.text = ip.row == 0 ? HIDE_VERSION : ip.row == 1 ? @"@hidestores" : HIDE_TARGET_INSTAGRAM;
        if (ip.row > 0) { c.accessoryType = UITableViewCellAccessoryDisclosureIndicator; c.selectionStyle = UITableViewCellSelectionStyleDefault; }
        return c;
    }
    if (row.count > 4) { // lock delay picker
        c.value.text = HIDELockDelayTitle(HIDELockDelay());
        c.accessoryType = UITableViewCellAccessoryDisclosureIndicator;
        c.selectionStyle = UITableViewCellSelectionStyleDefault;
        return c;
    }
    UISwitch *sw = [UISwitch new];
    sw.onTintColor = HIDE_BLUE;
    BOOL available=HIDEFeatureAvailable(row[1]);
    sw.on = available && HIDEPref(row[1]);
    sw.enabled=available;
    if (!available) { c.value.text=HIDEL(@"FEATURE_UNAVAILABLE_SHORT");sw.accessibilityHint=HIDEL(@"FEATURE_UNAVAILABLE"); }
    sw.accessibilityIdentifier = row[1];
    [sw addTarget:self action:@selector(toggled:) forControlEvents:UIControlEventValueChanged];
    c.accessoryView = sw;
    return c;
}

- (void)toggled:(UISwitch *)sw {
    [[UISelectionFeedbackGenerator new] selectionChanged];
    if ([sw.accessibilityIdentifier isEqualToString:kHideAppLock] && sw.on) {
        // Make sure Face ID / passcode works before locking the app with it.
        HIDEAuthenticate(^(BOOL ok) {
            if (ok) HIDESetPref(kHideAppLock, YES);
            else [sw setOn:NO animated:YES];
        });
        return;
    }
    HIDESetPref(sw.accessibilityIdentifier, sw.on);
    if ([sw.accessibilityIdentifier isEqualToString:kHideNoReadReceipts] || [sw.accessibilityIdentifier isEqualToString:kHideNoTyping])
        HIDEMessagingPrivacyChanged(sw.accessibilityIdentifier);
}

- (void)pickDelayFromIndexPath:(NSIndexPath *)ip {
    UIAlertController *a = [UIAlertController alertControllerWithTitle:HIDEL(@"LOCK_AFTER") message:nil preferredStyle:UIAlertControllerStyleAlert];
    for (NSNumber *n in @[@0, @60, @900, @3600]) {
        [a addAction:[UIAlertAction actionWithTitle:HIDELockDelayTitle(n.integerValue) style:UIAlertActionStyleDefault handler:^(UIAlertAction *x) {
            [[NSUserDefaults standardUserDefaults] setInteger:n.integerValue forKey:kHideLockDelay];
            [self.tableView reloadRowsAtIndexPaths:@[ip] withRowAnimation:UITableViewRowAnimationNone];
        }]];
    }
    [a addAction:[UIAlertAction actionWithTitle:HIDEL(@"CANCEL") style:UIAlertActionStyleCancel handler:nil]];
    [self presentViewController:a animated:YES completion:nil];
}

- (NSString *)compatibilityReportText {
    NSArray *records = HIDEHookDiagnostics();
    NSString *actual = [NSBundle.mainBundle objectForInfoDictionaryKey:@"CFBundleShortVersionString"] ?: @"unknown";
    NSMutableString *report = [NSMutableString stringWithFormat:@"HIDE %@\nTarget Instagram: %@\nInstalled app: %@\n\n", HIDE_VERSION, HIDE_TARGET_INSTAGRAM, actual];
    [report appendFormat:@"Supplied 407 executable UUID matches: %@\n\n",HIDEIsVerified407Build() ? @"yes" : @"no"];
    for (NSDictionary *record in records) {
        [report appendFormat:@"[%@] %@ %@\nexpected: %@\nactual: %@\n\n", record[@"status"], record[@"class"], record[@"selector"], record[@"expected"], record[@"actual"]];
    }
    // Metadata only: never read request bodies, headers, message values or credentials.
    [report appendString:@"Selected 407 API metadata (no instance values):\n"];
    NSArray *terms=@[@"seen",@"body",@"param",@"story",@"reel",@"item",@"media",@"voice",@"audio",@"record",@"request",@"update",@"initWithUserSession"];
    for(NSString *name in @[@"IGStoryViewerViewController",@"IGStoryFullscreenSectionController",@"IGStoryViewerViewModel",@"IGURLRequest",@"IGScopedNetworker",@"IGDirectThreadViewController",@"IGDirectAudioWaveform",@"IGLiveViewerCountIntervalPuller",@"IGDirectCache",@"IGDirectCacheThreadUpdate",@"IGDirectMessageUpdate",HIDE407_VOICE_CLASS]) {
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
    for(NSDictionary *section in _sections)for(NSArray *row in section[@"rows"])
        if([row[1] length])[report appendFormat:@"%@: %@\n",row[1],HIDEFeatureAvailable(row[1]) ? @"available" : @"unavailable"];
    return report;
}

- (void)showCompatibilityReport {
    HIDEReportFromController(self);
}

- (void)tableView:(UITableView *)tv didSelectRowAtIndexPath:(NSIndexPath *)ip {
    [tv deselectRowAtIndexPath:ip animated:YES];
    NSDictionary *sec = _sections[ip.section];
    NSArray *row = sec[@"rows"][ip.row];
    if (![sec[@"about"] boolValue] && row.count > 4) { [self pickDelayFromIndexPath:ip]; return; }
    if ([sec[@"about"] boolValue] && ip.row == 2) { [self showCompatibilityReport]; return; }
    if ([sec[@"about"] boolValue] && ip.row == 1) {
        NSURL *app = [NSURL URLWithString:@"instagram://user?username=hidestores"];
        [[UIApplication sharedApplication] openURL:app options:@{} completionHandler:nil];
    }
}
@end

void HIDEPresentAdvancedSettingsFromController(UIViewController *controller) {
    UINavigationController *nav = [[UINavigationController alloc] initWithRootViewController:[HIDESettingsViewController new]];
    nav.modalPresentationStyle = UIModalPresentationFormSheet;
    nav.overrideUserInterfaceStyle = UIUserInterfaceStyleDark;
    [controller presentViewController:nav animated:YES completion:nil];
}


UIViewController *HIDECreateWebSettings(void);
void HIDEReportFromController(UIViewController *controller) {
    HIDESettingsViewController *source=[HIDESettingsViewController new];
    [source loadViewIfNeeded];
    NSString *report=[source compatibilityReportText];
    UIAlertController *alert=[UIAlertController alertControllerWithTitle:HIDEL(@"COMPATIBILITY") message:@"Instagram 407.0.0" preferredStyle:UIAlertControllerStyleAlert];
    [alert addAction:[UIAlertAction actionWithTitle:HIDEL(@"COPY_REPORT") style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
        UIPasteboard.generalPasteboard.string=report;HIDEToast(HIDEL(@"COPIED"));
    }]];
    BOOL arabic=[[NSUserDefaults.standardUserDefaults stringForKey:@"hide_ui_language"] isEqualToString:@"ar"];
    [alert addAction:[UIAlertAction actionWithTitle:arabic ? @"الإعدادات الإضافية" : @"Additional settings" style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
        HIDEPresentAdvancedSettingsFromController(controller);
    }]];
    [alert addAction:[UIAlertAction actionWithTitle:HIDEL(@"OK") style:UIAlertActionStyleCancel handler:nil]];
    [controller presentViewController:alert animated:YES completion:nil];
}
void HIDEPresentSettings(void) {
    UIViewController *controller=HIDECreateWebSettings();
    controller.modalPresentationStyle=UIModalPresentationPageSheet;
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

// Last-resort fallback if Instagram renames both handlers: shake to open HIDE settings.
static void (*orig_motionEnded)(id, SEL, UIEventSubtype, UIEvent *);
static void hide_motionEnded(id self, SEL _cmd, UIEventSubtype motion, UIEvent *event) {
    if (motion == UIEventSubtypeMotionShake) { HIDEPresentSettings(); return; }
    orig_motionEnded(self, _cmd, motion, event);
}

void HIDEInstallSettingsEntry(void) {
    orig_sideTray = (void *)HIDEHookChecked(@"IGProfileNavigationItemsController", NSSelectorFromString(@"_onSideTrayButton:"), (IMP)hide_sideTray, "v@:@");
    orig_moreButton = (void *)HIDEHookChecked(@"IGProfileNavigationItemsController", NSSelectorFromString(@"_onMoreButton:"), (IMP)hide_moreButton, "v@:@");
    if (!orig_sideTray && !orig_moreButton)
        orig_motionEnded = (void *)HIDEHookChecked(@"UIWindow", @selector(motionEnded:withEvent:), (IMP)hide_motionEnded, "v@:q@");
}
