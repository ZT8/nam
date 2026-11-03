#import "HIDECore.h"
#import <string.h>

#pragma mark - Preferences

static NSDictionary *HIDEDefaults(void) {
    static NSDictionary *defaults;
    static dispatch_once_t once;
    dispatch_once(&once, ^{ defaults = @{
        kHideDownload: @YES,
        kHideHighQuality: @YES,
        kHideAnonStories: @NO,
        kHideConfirmLike: @NO,
        kHideConfirmFollow: @NO,
        kHideSafariLinks: @NO,
        kHideNoVideoRepeat: @NO,
        kHideVoiceDownload: @YES,
        kHideAppLock: @NO,
        kHideNoAutoAdvance: @NO,
        kHideShowMentions: @YES,
        kHideNoTyping: @NO,
        kHideNoReadReceipts: @NO,
        kHideFollowStatus: @YES,
        kHideCopyText: @YES,
        kHideNoAds: @YES,
        kHideVideoStickers: @NO, kHideAnonLive: @NO, kHideKeepDeleted: @NO,
        kHideNoScreenshotNotice: @NO, kHideNoReplayNotice: @NO,
        kHideAllowScreenshots: @NO, kHideLongVoice: @NO, kHideVoiceImport: @NO,
        kHideLikeCounts: @NO, kHideVideoTimer: @NO, kHideShareAfterSave: @NO,
    }; });
    return defaults;
}

BOOL HIDEPref(NSString *key) {
    NSUserDefaults *d = [NSUserDefaults standardUserDefaults];
    id v = [d objectForKey:key];
    if (!v) v = HIDEDefaults()[key];
    return [v boolValue];
}

void HIDESetPref(NSString *key, BOOL value) {
    [[NSUserDefaults standardUserDefaults] setBool:value forKey:key];
    if ([key isEqualToString:kHideAppLock]) HIDEAppLockPreferenceChanged(value);
}

#pragma mark - Localisation

NSString *HIDEL(NSString *key) {
    static NSDictionary *ar, *en;
    static BOOL arabic;
    static dispatch_once_t once;
    dispatch_once(&once, ^{
        NSString *lang = [NSLocale preferredLanguages].firstObject ?: @"en";
        arabic = [lang hasPrefix:@"ar"];
        en = @{
            @"VIDEO_STICKERS": @"Videos in story sticker gallery",
            @"SEC_LIVE": @"Live",
            @"ANON_LIVE": @"Watch live anonymously",
            @"KEEP_DELETED": @"Keep deleted messages locally",
            @"NO_SCREENSHOT_NOTICE": @"Hide screenshot notifications",
            @"NO_REPLAY_NOTICE": @"Hide replay notifications",
            @"ALLOW_SCREENSHOTS": @"Allow screenshots in Direct media",
            @"LONG_VOICE": @"Extend voice recording limit",
            @"VOICE_IMPORT": @"Send audio/video as voice note",
            @"LIKE_COUNTS": @"Show like and view counts",
            @"VIDEO_TIMER": @"Keep video timer visible",
            @"SHARE_AFTER_SAVE": @"Share after saving media",
            @"DELETED_MESSAGE": @"Deleted message",
            @"VOICE_IMPORT_HINT": @"Long-press the gallery button in a chat. Choose audio or a video with audio, up to 5 minutes. Sending requires confirmation.",
            @"FROM_FILES": @"Choose from Files",
            @"FROM_PHOTOS": @"Choose video from Photos",
            @"CONVERTING_AUDIO": @"Converting to AAC audio…",
            @"INVALID_AUDIO": @"Choose audio or a video with audio, longer than zero and no more than 5 minutes.",
            @"FEATURE_UNAVAILABLE": @"This feature is unavailable in this app build. Copy the compatibility report from HIDE Settings.",
            @"FEATURE_UNAVAILABLE_SHORT": @"Unavailable",
            @"VOICE_SEND_REVIEW": @"Send a voice note to %@ (%.1f seconds)?",
            @"CURRENT_CHAT": @"this chat",
            @"SEND_VOICE": @"Send voice note",
            @"SELECT_MEDIA": @"Select media",
            @"SELECT_NONE": @"Deselect all",
            @"SELECT_ALL": @"Select all",
            @"DOWNLOAD_SELECTED": @"Save selected",
            @"MERGE_SELECTED": @"Merge selected",
            @"SELECTED_COUNT": @"%lu selected",
            @"VIDEO_ITEM": @"Video",
            @"PHOTO_ITEM": @"Photo",
            @"MERGE_HINT": @"Merge the selected items in their original order into a 1080×1920 video. Each photo is shown for 3 seconds; video audio is preserved.",
            @"MERGING": @"Merging…",
            @"PREPARING_PHOTOS": @"Preparing photos…",
            @"BATCH_SAVED": @"Saved %lu item(s).",
            @"BATCH_FAILED": @"Stopped after saving %lu item(s). Check media availability and Photos permission.",
            @"SAVING_MEDIA": @"Saving to Photos…",
            @"UNAVAILABLE_ITEM": @"Unavailable item",
            @"SETTINGS_TITLE": @"HIDE Settings",
            @"COMPATIBILITY": @"Compatibility report",
            @"COPY_REPORT": @"Copy report",
            @"HOOK_SUMMARY": @"%lu hooks installed; %lu unavailable or incompatible. This is not a feature test.",
            @"AUTH_UNAVAILABLE": @"Device authentication is unavailable. App Lock was not unlocked.",
            @"IG_SETTINGS": @"Instagram Settings",
            @"HIDE_SETTINGS": @"HIDE Settings",
            @"WELCOME": @"You can now download by long pressing on videos or pictures, and enable more features from HIDE Settings (profile ☰ menu).",
            @"OK": @"OK", @"CANCEL": @"Cancel",
            @"SEC_DOWNLOAD": @"Download",
            @"DOWNLOAD_LONGPRESS": @"Download with long press",
            @"HIGH_QUALITY": @"Always download in highest quality",
            @"SEC_STORIES": @"Stories",
            @"ANON_STORIES": @"Watch stories anonymously",
            @"SEC_POPUP": @"Popup Alert",
            @"CONFIRM_LIKE": @"Confirm Like/Unlike",
            @"CONFIRM_FOLLOW": @"Confirm Follow/Unfollow",
            @"SEC_BROWSER": @"Browser",
            @"SAFARI": @"Open links in Safari",
            @"SEC_ABOUT": @"About",
            @"VERSION": @"Version",
            @"ACTION_DOWNLOAD": @"Download",
            @"ACTION_SHARE": @"Share",
            @"ACTION_COPY_CAPTION": @"Copy caption",
            @"ACTION_COPY_LINK": @"Copy media link",
            @"WHAT_TO_DO": @"What do you want to do?",
            @"DOWNLOADING": @"Downloading…",
            @"SAVED": @"Saved to Photos",
            @"COPIED": @"Copied",
            @"ERROR": @"An error occurred, please try again.",
            @"NO_MEDIA": @"Couldn't find media here",
            @"PHOTOS_DENIED": @"Allow Photos access in Settings",
            @"LIKE_Q": @"Like / Unlike this post?",
            @"FOLLOW_Q": @"Follow / Unfollow this account?",
            @"CONFIRM": @"Confirm",
            @"SEC_MEDIA": @"Media",
            @"NO_REPEAT": @"No repeat for videos",
            @"SEC_DM": @"Direct Messages",
            @"VOICE_DOWNLOAD": @"Download voice messages",
            @"SAVE_VOICE": @"Save voice message",
            @"VOICE_NOT_READY": @"Play the voice message first, then try again",
            @"SEC_LOCK": @"App Lock",
            @"LOCK_ENABLE": @"Lock with Face ID / Passcode",
            @"LOCK_AFTER": @"Lock",
            @"LOCK_NOW": @"Immediately",
            @"LOCK_1M": @"After 1 minute",
            @"LOCK_15M": @"After 15 minutes",
            @"LOCK_1H": @"After 1 hour",
            @"UNLOCK": @"Unlock",
            @"UNLOCK_REASON": @"Unlock Instagram",
            @"NO_AUTO_ADVANCE": @"Don't move to next story automatically",
            @"SHOW_MENTIONS": @"Show mentions in stories",
            @"MENTIONS": @"Mentions in this story",
            @"ACTION_DOWNLOAD_ALL": @"Download all items",
            @"NO_TYPING": @"Hide typing indicator",
            @"NO_READ": @"Hide that you read messages",
            @"SEC_OTHERS": @"Others",
            @"FOLLOW_STATUS": @"Show if account follows you",
            @"COPY_TEXT_PREF": @"Copy comments & captions (long press)",
            @"COPY_TEXT": @"Copy text",
            @"COPY_USERNAME": @"Copy username",
            @"PREPARING_PROFILE": @"Preparing profile photo…",
            @"PRIVACY_PORT_NOTE": @"Privacy behavior depends on the Instagram build. Verify with a second test account before relying on it.",
            @"SEC_ADS": @"Ads",
            @"NO_ADS": @"Remove sponsored posts",
            @"FOLLOWS_YOU": @"Follows you",
            @"NOT_FOLLOWS_YOU": @"Doesn't follow you",
            @"FOLLOW_EACH": @"You follow each other",
            @"FOLLOW_NONE": @"You don't follow each other",
        };
        ar = @{
            @"VIDEO_STICKERS": @"الفيديو في معرض ملصقات الستوري",
            @"SEC_LIVE": @"البث المباشر",
            @"ANON_LIVE": @"مشاهدة البث بدون ظهور الاسم",
            @"KEEP_DELETED": @"الاحتفاظ بالرسائل المحذوفة محليًا",
            @"NO_SCREENSHOT_NOTICE": @"إخفاء إشعار تصوير الشاشة",
            @"NO_REPLAY_NOTICE": @"إخفاء إشعار إعادة عرض الوسائط",
            @"ALLOW_SCREENSHOTS": @"السماح بتصوير وسائط الرسائل",
            @"LONG_VOICE": @"رفع قيد مدة التسجيل الصوتي",
            @"VOICE_IMPORT": @"إرسال صوت أو فيديو كرسالة صوتية",
            @"LIKE_COUNTS": @"إظهار عدد الإعجابات والمشاهدات",
            @"VIDEO_TIMER": @"إبقاء مؤقت الفيديو ظاهرًا",
            @"SHARE_AFTER_SAVE": @"المشاركة بعد حفظ الوسائط",
            @"DELETED_MESSAGE": @"رسالة محذوفة",
            @"VOICE_IMPORT_HINT": @"اضغط مطوّلًا زر المعرض داخل المحادثة. اختر صوتًا أو فيديو فيه صوت، حتى ٥ دقائق. لن يرسل إلا بعد التأكيد.",
            @"FROM_FILES": @"اختيار من الملفات",
            @"FROM_PHOTOS": @"اختيار فيديو من الصور",
            @"CONVERTING_AUDIO": @"جاري التحويل إلى صوت AAC…",
            @"INVALID_AUDIO": @"اختر صوتًا أو فيديو فيه صوت بمدة أكبر من صفر ولا تتجاوز ٥ دقائق.",
            @"FEATURE_UNAVAILABLE": @"الميزة غير متاحة في نسخة التطبيق هذه. انسخ تقرير التوافق من إعدادات HIDE.",
            @"FEATURE_UNAVAILABLE_SHORT": @"غير متاح",
            @"VOICE_SEND_REVIEW": @"إرسال رسالة صوتية إلى %@ (%.1f ثانية)؟",
            @"CURRENT_CHAT": @"هذه المحادثة",
            @"SEND_VOICE": @"إرسال الرسالة الصوتية",
            @"SELECT_MEDIA": @"اختيار الوسائط",
            @"SELECT_NONE": @"إلغاء تحديد الكل",
            @"SELECT_ALL": @"تحديد الكل",
            @"DOWNLOAD_SELECTED": @"حفظ المحدد",
            @"MERGE_SELECTED": @"دمج المحدد",
            @"SELECTED_COUNT": @"تم تحديد %lu",
            @"VIDEO_ITEM": @"فيديو",
            @"PHOTO_ITEM": @"صورة",
            @"MERGE_HINT": @"دمج المحدد بترتيبه الأصلي في فيديو 1080×1920. تُعرض كل صورة ٣ ثوانٍ مع الحفاظ على صوت الفيديوهات.",
            @"MERGING": @"جاري الدمج…",
            @"PREPARING_PHOTOS": @"جاري تجهيز الصور…",
            @"BATCH_SAVED": @"تم حفظ %lu من الوسائط.",
            @"BATCH_FAILED": @"توقف بعد حفظ %lu من الوسائط. تأكد من توفر الوسائط وإذن الصور.",
            @"SAVING_MEDIA": @"جاري الحفظ في الصور…",
            @"UNAVAILABLE_ITEM": @"عنصر غير متاح",
            @"SETTINGS_TITLE": @"إعدادات HIDE",
            @"COMPATIBILITY": @"تقرير التوافق",
            @"COPY_REPORT": @"نسخ التقرير",
            @"HOOK_SUMMARY": @"تم تركيب %lu من الخطافات؛ %lu غير متوفرة أو غير متوافقة. هذا ليس اختبارًا لعمل الميزات.",
            @"AUTH_UNAVAILABLE": @"التحقق من هوية الجهاز غير متاح. لم يتم فتح قفل التطبيق.",
            @"IG_SETTINGS": @"إعدادات إنستقرام",
            @"HIDE_SETTINGS": @"إعدادات HIDE",
            @"WELCOME": @"تقدر الحين تحمّل الصور والفيديو بالضغط المطوّل عليها، وتفعّل ميزات أكثر من إعدادات HIDE (قائمة ☰ في البروفايل).",
            @"OK": @"تم", @"CANCEL": @"إلغاء",
            @"SEC_DOWNLOAD": @"التحميل",
            @"DOWNLOAD_LONGPRESS": @"التحميل بالضغط المطوّل",
            @"HIGH_QUALITY": @"التحميل دائماً بأعلى جودة",
            @"SEC_STORIES": @"الستوري",
            @"ANON_STORIES": @"مشاهدة الستوري بدون ما يظهر اسمك",
            @"SEC_POPUP": @"رسائل التأكيد",
            @"CONFIRM_LIKE": @"تأكيد الإعجاب/إلغاء الإعجاب",
            @"CONFIRM_FOLLOW": @"تأكيد المتابعة/إلغاء المتابعة",
            @"SEC_BROWSER": @"المتصفح",
            @"SAFARI": @"فتح الروابط في سفاري",
            @"SEC_ABOUT": @"حول",
            @"VERSION": @"الإصدار",
            @"ACTION_DOWNLOAD": @"تحميل",
            @"ACTION_SHARE": @"مشاركة",
            @"ACTION_COPY_CAPTION": @"نسخ الوصف",
            @"ACTION_COPY_LINK": @"نسخ رابط الميديا",
            @"WHAT_TO_DO": @"وش تبي تسوي؟",
            @"DOWNLOADING": @"جاري التحميل…",
            @"SAVED": @"تم الحفظ في الصور",
            @"COPIED": @"تم النسخ",
            @"ERROR": @"صار خطأ، حاول مرة ثانية.",
            @"NO_MEDIA": @"ما لقيت ميديا هنا",
            @"PHOTOS_DENIED": @"اسمح بالوصول للصور من الإعدادات",
            @"LIKE_Q": @"تأكيد الإعجاب / إلغاء الإعجاب؟",
            @"FOLLOW_Q": @"تأكيد المتابعة / إلغاء المتابعة؟",
            @"CONFIRM": @"تأكيد",
            @"SEC_MEDIA": @"الميديا",
            @"NO_REPEAT": @"إيقاف تكرار الفيديو تلقائياً",
            @"SEC_DM": @"الرسائل الخاصة",
            @"VOICE_DOWNLOAD": @"تحميل الرسائل الصوتية",
            @"SAVE_VOICE": @"حفظ الرسالة الصوتية",
            @"VOICE_NOT_READY": @"شغّل الرسالة الصوتية أول، وبعدها جرّب مرة ثانية",
            @"SEC_LOCK": @"قفل التطبيق",
            @"LOCK_ENABLE": @"القفل ببصمة الوجه / رمز الدخول",
            @"LOCK_AFTER": @"وقت القفل",
            @"LOCK_NOW": @"فوراً",
            @"LOCK_1M": @"بعد دقيقة",
            @"LOCK_15M": @"بعد ١٥ دقيقة",
            @"LOCK_1H": @"بعد ساعة",
            @"UNLOCK": @"فتح القفل",
            @"UNLOCK_REASON": @"فتح إنستقرام",
            @"NO_AUTO_ADVANCE": @"عدم الانتقال للستوري التالية تلقائياً",
            @"SHOW_MENTIONS": @"إظهار المنشن في الستوري",
            @"MENTIONS": @"المنشن في هذي الستوري",
            @"ACTION_DOWNLOAD_ALL": @"تحميل الكل",
            @"NO_TYPING": @"إخفاء «يكتب الآن»",
            @"NO_READ": @"إخفاء إنك قريت الرسالة",
            @"SEC_OTHERS": @"أخرى",
            @"FOLLOW_STATUS": @"إظهار إذا الحساب يتابعك",
            @"COPY_TEXT_PREF": @"نسخ التعليقات والوصف (ضغط مطوّل)",
            @"COPY_TEXT": @"نسخ النص",
            @"COPY_USERNAME": @"نسخ اسم المستخدم",
            @"PREPARING_PROFILE": @"جاري تجهيز صورة الحساب…",
            @"PRIVACY_PORT_NOTE": @"سلوك خيارات الخصوصية يختلف حسب نسخة إنستغرام. تحقق بحساب اختبار ثانٍ قبل الاعتماد عليها.",
            @"SEC_ADS": @"الإعلانات",
            @"NO_ADS": @"إزالة المنشورات الممولة",
            @"FOLLOWS_YOU": @"يتابعك",
            @"NOT_FOLLOWS_YOU": @"ما يتابعك",
            @"FOLLOW_EACH": @"تتابعون بعض",
            @"FOLLOW_NONE": @"ما تتابعون بعض",
        };
    });
    NSString *s = (arabic ? ar : en)[key];
    return s ?: en[key] ?: key;
}

#pragma mark - Runtime

static const char *HIDEUnqualifiedType(const char *type) {
    while (type && *type && strchr("rnNoORV", *type)) type++;
    return type;
}

static NSMutableArray<NSDictionary *> *HIDEHookRecords(void) {
    static NSMutableArray *records;
    static dispatch_once_t once;
    dispatch_once(&once, ^{ records = [NSMutableArray array]; });
    return records;
}

NSArray<NSDictionary *> *HIDEHookDiagnostics(void) {
    NSMutableArray *records = HIDEHookRecords();
    @synchronized (records) { return [records copy]; }
}

static void HIDERecordHook(NSString *name, SEL sel, NSString *status,
                           const char *actual, const char *expected) {
    NSDictionary *record = @{@"class": name, @"selector": NSStringFromSelector(sel),
                             @"status": status,
                             @"actual": actual ? @(actual) : @"",
                             @"expected": expected ? @(expected) : @""};
    NSMutableArray *records = HIDEHookRecords();
    @synchronized (records) { [records addObject:record]; }
}

static BOOL HIDEABITypeMatches(const char *actual, const char *expected) {
    actual = HIDEUnqualifiedType(actual);
    expected = HIDEUnqualifiedType(expected);
    if (!actual || !expected) return NO;
    if (*actual == *expected) {
        if (*actual != '{' && *actual != '(' && *actual != '[') return YES;
        // Aggregate names can differ, but their layout must match exactly.
        const char *a = strchr(actual, '='), *e = strchr(expected, '=');
        return a && e && strcmp(a, e) == 0;
    }
    if (strchr("cCB", *actual) && strchr("cCB", *expected)) return YES;
    if (strchr("sSiIlLqQ", *actual) && strchr("sSiIlLqQ", *expected)) {
        NSUInteger as = 0, es = 0;
        NSGetSizeAndAlignment(actual, &as, NULL);
        NSGetSizeAndAlignment(expected, &es, NULL);
        return as == es;
    }
    return NO;
}

static BOOL HIDEABIEncodingMatches(const char *actual, const char *expected) {
    if (!actual || !expected) return NO;
    NSMethodSignature *a = [NSMethodSignature signatureWithObjCTypes:actual];
    NSMethodSignature *e = [NSMethodSignature signatureWithObjCTypes:expected];
    BOOL matches = a && e && a.numberOfArguments == e.numberOfArguments &&
                   HIDEABITypeMatches(a.methodReturnType, e.methodReturnType);
    for (NSUInteger i = 0; matches && i < a.numberOfArguments; i++)
        matches = HIDEABITypeMatches([a getArgumentTypeAtIndex:i], [e getArgumentTypeAtIndex:i]);
    return matches;
}

BOOL HIDECanCall(id object, SEL selector, const char *encoding) {
    Method method = object ? class_getInstanceMethod(object_getClass(object), selector) : NULL;
    return method && HIDEABIEncodingMatches(method_getTypeEncoding(method), encoding);
}

static IMP HIDEHookTarget(Class cls, NSString *className, SEL sel, IMP replacement, const char *encoding) {
    if (!cls) {
        HIDERecordHook(className, sel, @"missing_class", NULL, encoding);
        return NULL;
    }
    Method m = class_getInstanceMethod(cls, sel);
    if (!m) {
        HIDERecordHook(className, sel, @"missing_method", NULL, encoding);
        return NULL;
    }
    const char *actual = method_getTypeEncoding(m);
    if (encoding) {
        if (!HIDEABIEncodingMatches(actual, encoding)) {
            HIDERecordHook(className, sel, @"signature_mismatch", actual, encoding);
            NSLog(@"[HIDE] skipped incompatible hook: %@ %@", className, NSStringFromSelector(sel));
            return NULL;
        }
    }
    IMP orig = method_getImplementation(m);
    // If the method is inherited, add an override on this class so the superclass is untouched.
    if (!class_addMethod(cls, sel, replacement, method_getTypeEncoding(m))) {
        orig = method_setImplementation(m, replacement);
    }
    HIDERecordHook(className, sel, @"installed", actual, encoding);
    return orig;
}

IMP HIDEHookChecked(NSString *className, SEL sel, IMP replacement, const char *encoding) {
    return HIDEHookTarget(NSClassFromString(className), className, sel, replacement, encoding);
}

IMP HIDEClassHookChecked(NSString *className, SEL sel, IMP replacement, const char *encoding) {
    return HIDEHookTarget(object_getClass(NSClassFromString(className)), className, sel, replacement, encoding);
}

IMP HIDEHook(NSString *className, SEL sel, IMP replacement) {
    return HIDEHookChecked(className, sel, replacement, NULL);
}

id HIDEGet(id obj, NSString *selName) {
    if (!obj) return nil;
    SEL sel = NSSelectorFromString(selName);
    Method m = class_getInstanceMethod(object_getClass(obj), sel);
    if (!m) return nil;
    char ret[8] = {0};
    method_getReturnType(m, ret, sizeof(ret));
    if (ret[0] != '@') return nil;
    if (method_getNumberOfArguments(m) != 2) return nil;
    @try { return ((id (*)(id, SEL))objc_msgSend)(obj, sel); }
    @catch (__unused id e) { return nil; }
}

NSNumber *HIDEGetNumber(id obj, NSString *selName) {
    if (!obj) return nil;
    SEL sel = NSSelectorFromString(selName);
    Method method = class_getInstanceMethod(object_getClass(obj), sel);
    if (!method || method_getNumberOfArguments(method) != 2) return nil;
    char type[128] = {0};
    method_getReturnType(method, type, sizeof(type));
    @try {
        switch (*HIDEUnqualifiedType(type)) {
            case '@': {
                id value = HIDEGet(obj, selName);
                return [value isKindOfClass:NSNumber.class] ? value : nil;
            }
#define HIDE_NUMBER_CASE(C, T) case C: return @(((T (*)(id, SEL))objc_msgSend)(obj, sel))
            HIDE_NUMBER_CASE('B', BOOL);
            HIDE_NUMBER_CASE('c', signed char);
            HIDE_NUMBER_CASE('C', unsigned char);
            HIDE_NUMBER_CASE('s', short);
            HIDE_NUMBER_CASE('S', unsigned short);
            HIDE_NUMBER_CASE('i', int);
            HIDE_NUMBER_CASE('I', unsigned int);
            HIDE_NUMBER_CASE('l', long);
            HIDE_NUMBER_CASE('L', unsigned long);
            HIDE_NUMBER_CASE('q', long long);
            HIDE_NUMBER_CASE('Q', unsigned long long);
            HIDE_NUMBER_CASE('f', float);
            HIDE_NUMBER_CASE('d', double);
#undef HIDE_NUMBER_CASE
            default: return nil;
        }
    } @catch (__unused id error) { return nil; }
}

id HIDEIvar(id obj, const char *ivarName) {
    if (!obj) return nil;
    Ivar iv = class_getInstanceVariable(object_getClass(obj), ivarName);
    if (!iv) return nil;
    const char *t = ivar_getTypeEncoding(iv);
    if (!t || t[0] != '@') return nil;
    return object_getIvar(obj, iv);
}

#pragma mark - UI

static UIWindow *HIDEKeyWindow(void) {
    for (UIScene *scene in [UIApplication sharedApplication].connectedScenes) {
        if (![scene isKindOfClass:[UIWindowScene class]]) continue;
        for (UIWindow *w in ((UIWindowScene *)scene).windows) if (w.isKeyWindow) return w;
    }
    for (UIScene *scene in [UIApplication sharedApplication].connectedScenes) {
        if ([scene isKindOfClass:[UIWindowScene class]]) {
            UIWindow *w = ((UIWindowScene *)scene).windows.firstObject;
            if (w) return w;
        }
    }
    return nil;
}

UIViewController *HIDETopViewController(void) {
    UIViewController *vc = HIDEKeyWindow().rootViewController;
    while (vc.presentedViewController && !vc.presentedViewController.isBeingDismissed) vc = vc.presentedViewController;
    return vc;
}

void HIDEToast(NSString *text) {
    dispatch_async(dispatch_get_main_queue(), ^{
        UIWindow *win = HIDEKeyWindow();
        if (!win) return;
        UILabel *l = [UILabel new];
        l.text = text;
        l.textColor = UIColor.whiteColor;
        l.font = [UIFont systemFontOfSize:15 weight:UIFontWeightSemibold];
        l.textAlignment = NSTextAlignmentCenter;
        l.numberOfLines = 0;
        l.backgroundColor = [UIColor colorWithWhite:0.1 alpha:0.92];
        l.layer.cornerRadius = 14;
        l.clipsToBounds = YES;
        CGSize max = CGSizeMake(win.bounds.size.width - 80, 200);
        CGSize s = [l sizeThatFits:max];
        s.width = MIN(max.width, s.width + 36); s.height += 22;
        l.frame = CGRectMake((win.bounds.size.width - s.width) / 2, win.bounds.size.height - win.safeAreaInsets.bottom - s.height - 90, s.width, s.height);
        l.alpha = 0;
        [win addSubview:l];
        [UIView animateWithDuration:0.2 animations:^{ l.alpha = 1; } completion:^(BOOL f) {
            [UIView animateWithDuration:0.3 delay:1.6 options:0 animations:^{ l.alpha = 0; } completion:^(BOOL f2) { [l removeFromSuperview]; }];
        }];
    });
}

void HIDEConfirm(NSString *title, NSString *message, NSString *okTitle, void (^onOK)(void)) {
    UIAlertController *a = [UIAlertController alertControllerWithTitle:title message:message preferredStyle:UIAlertControllerStyleAlert];
    [a addAction:[UIAlertAction actionWithTitle:HIDEL(@"CANCEL") style:UIAlertActionStyleCancel handler:nil]];
    [a addAction:[UIAlertAction actionWithTitle:okTitle style:UIAlertActionStyleDefault handler:^(UIAlertAction *x) { if (onOK) onOK(); }]];
    [HIDETopViewController() presentViewController:a animated:YES completion:nil];
}

#pragma mark - Entry point

static void HIDEShowWelcomeIfNeeded(void) {
    if ([[NSUserDefaults standardUserDefaults] boolForKey:kHideWelcomeShown]) return;
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(2.5 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        UIViewController *top = HIDETopViewController();
        if (!top) return;
        UIAlertController *a = [UIAlertController alertControllerWithTitle:@"HIDE" message:HIDEL(@"WELCOME") preferredStyle:UIAlertControllerStyleAlert];
        [a addAction:[UIAlertAction actionWithTitle:HIDEL(@"OK") style:UIAlertActionStyleDefault handler:nil]];
        [top presentViewController:a animated:YES completion:nil];
        [[NSUserDefaults standardUserDefaults] setBool:YES forKey:kHideWelcomeShown];
    });
}

__attribute__((constructor)) static void HIDEInit(void) {
    @autoreleasepool {
        HIDEInstallSideloadFix();
        HIDEInstallDownloader();
        HIDEInstallPrivacy();
        HIDEInstallConfirmations();
        HIDEInstallSettingsEntry();
        HIDEInstallMedia();
        HIDEInstallVoice();
        HIDEInstallAppLock();
        HIDEInstallExtras();
        HIDEInstallDLFeatures();
        HIDEInstallVoiceImport();
        [[NSNotificationCenter defaultCenter] addObserverForName:UIApplicationDidBecomeActiveNotification object:nil queue:NSOperationQueue.mainQueue usingBlock:^(NSNotification *n) {
            HIDEShowWelcomeIfNeeded();
        }];
        NSLog(@"[HIDE] loaded v%@", HIDE_VERSION);
    }
}
