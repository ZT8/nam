// Ports of behavior observed in DLInsta. Every private call is ABI checked.
#import "HIDECore.h"
#import <string.h>

static NSNumber *HIDEIntegerIvar(id object, const char *name) {
    Ivar ivar = object ? class_getInstanceVariable(object_getClass(object), name) : NULL;
    if (!ivar) return nil;
    const char *type = ivar_getTypeEncoding(ivar);
    while (*type && strchr("rnNoORV", *type)) type++;
    const void *bytes = (const uint8_t *)(__bridge const void *)object + ivar_getOffset(ivar);
#define INTEGER_CASE(C,T) case C: { T value; memcpy(&value, bytes, sizeof(value)); return @(value); }
    switch (*type) {
        INTEGER_CASE('B',BOOL) INTEGER_CASE('c',signed char) INTEGER_CASE('C',unsigned char)
        INTEGER_CASE('s',short) INTEGER_CASE('S',unsigned short)
        INTEGER_CASE('i',int) INTEGER_CASE('I',unsigned int)
        INTEGER_CASE('q',long long) INTEGER_CASE('Q',unsigned long long)
        default: return nil;
    }
#undef INTEGER_CASE
}

static BOOL HIDEWriteObjectIvar(id object, const char *name, id value) {
    Ivar ivar = object ? class_getInstanceVariable(object_getClass(object), name) : NULL;
    if (!ivar || ivar_getTypeEncoding(ivar)[0] != '@') return NO;
    object_setIvarWithStrongDefault(object, ivar, value);
    return YES;
}

// Getter overrides support the boxed and scalar ABIs seen across app versions.
static void HIDEOverrideFlag(NSString *className, NSString *name, NSString *key, BOOL forced) {
    SEL selector = NSSelectorFromString(name);
    Method method = class_getInstanceMethod(NSClassFromString(className), selector);
    char type[8] = {0}; if (method) method_getReturnType(method, type, sizeof(type));
    __block IMP original = method ? method_getImplementation(method) : NULL;
    IMP replacement; const char *encoding;
    if (type[0] == '@') {
        replacement = imp_implementationWithBlock(^id(id object) {
            return HIDEPref(key) ? @(forced) : ((id (*)(id,SEL))original)(object,selector);
        }); encoding = "@@:";
    } else if (type[0] == 'q' || type[0] == 'Q') {
        replacement = imp_implementationWithBlock(^long long(id object) {
            return HIDEPref(key) ? (long long)forced : ((long long (*)(id,SEL))original)(object,selector);
        }); encoding = "q@:";
    } else if (type[0] == 'i' || type[0] == 'I') {
        replacement = imp_implementationWithBlock(^int(id object) {
            return HIDEPref(key) ? (int)forced : ((int (*)(id,SEL))original)(object,selector);
        }); encoding = "i@:";
    } else {
        replacement = imp_implementationWithBlock(^BOOL(id object) {
            return HIDEPref(key) ? forced : ((BOOL (*)(id,SEL))original)(object,selector);
        }); encoding = "B@:";
    }
    IMP installed = HIDEHookChecked(className, selector, replacement, encoding);
    if (installed) original = installed; else imp_removeBlock(replacement);
}

#pragma mark - Video stickers, live polling, visible timer
static void (*originalMediaTypes)(id,SEL,id);
static void hide_mediaTypes(id object, SEL selector, id types) {
    originalMediaTypes(object, selector, HIDEPref(kHideVideoStickers) ? nil : types);
}

static void (*originalMediaMask64)(id,SEL,long long);
static void hide_mediaMask64(id object,SEL selector,long long types) {
    originalMediaMask64(object,selector,HIDEPref(kHideVideoStickers) ? 0 : types);
}
static void (*originalMediaMask32)(id,SEL,int);
static void hide_mediaMask32(id object,SEL selector,int types) {
    originalMediaMask32(object,selector,HIDEPref(kHideVideoStickers) ? 0 : types);
}

typedef id (*HIDELiveInit)(id __attribute__((ns_consumed)),SEL,id,id,double,id,id,long long,id,id) __attribute__((ns_returns_retained));
static HIDELiveInit originalLiveInit;
static id __attribute__((ns_returns_retained)) hide_liveInit(id __attribute__((ns_consumed)) object, SEL selector,
    id session, id broadcast, double interval, id networker, id context, long long mode, id surface, id provider) {
    if (HIDEPref(kHideAnonLive)) return nil;
    return originalLiveInit(object,selector,session,broadcast,interval,networker,context,mode,surface,provider);
}
static void (*originalTimer)(id,SEL,BOOL,BOOL,id);
static void hide_timer(id object, SEL selector, BOOL showing, BOOL animated, id completion) {
    originalTimer(object,selector,HIDEPref(kHideVideoTimer) ? YES : showing,animated,completion);
}

#pragma mark - Legacy story/Direct receipt and typing backstops
static void (*originalStorySeen)(id,SEL,id,id);
static void hide_storySeen(id object,SEL selector,id section,id item) {
    if(!HIDEPref(kHideAnonStories))originalStorySeen(object,selector,section,item);
}
static void (*originalVisualSeen)(id,SEL,id,id,long long);
static void hide_visualSeen(id object,SEL selector,id controller,id message,long long index) {
    if(!HIDEPref(kHideNoReadReceipts))originalVisualSeen(object,selector,controller,message,index);
}
static void (*originalTyping3)(id,SEL,BOOL,id,long long);
static void hide_typing3(id object,SEL selector,BOOL active,id thread,long long type) {
    if(!HIDEPref(kHideNoTyping))originalTyping3(object,selector,active,thread,type);
}
static void (*originalTyping4)(id,SEL,BOOL,id,id,long long);
static void hide_typing4(id object,SEL selector,BOOL active,id thread,id metadata,long long type) {
    if(!HIDEPref(kHideNoTyping))originalTyping4(object,selector,active,thread,metadata,type);
}
static void (*originalTyping4Upper)(id,SEL,BOOL,id,id,long long);
static void hide_typing4Upper(id object,SEL selector,BOOL active,id thread,id metadata,long long type) {
    if(!HIDEPref(kHideNoTyping))originalTyping4Upper(object,selector,active,thread,metadata,type);
}

#pragma mark - Screenshot/replay event marks and screenshot visibility
static id (*originalScreenshotMark)(id,SEL);
static id hide_screenshotMark(id object, SEL selector) {
    return HIDEPref(kHideNoScreenshotNotice) ? nil : originalScreenshotMark(object,selector);
}
typedef id (*HIDEMarkInit)(id __attribute__((ns_consumed)),SEL,id,id,id,id,BOOL,id,long long) __attribute__((ns_returns_retained));
static HIDEMarkInit originalMarkInit;
static id __attribute__((ns_returns_retained)) hide_markInit(id __attribute__((ns_consumed)) object, SEL selector,
    id client, id thread, id message, id type, BOOL sampled, id context, long long product) {
    NSNumber *subtype = HIDEGetNumber(type,@"subtype") ?: HIDEIntegerIvar(type,"_subtype");
    if (subtype && ((subtype.integerValue == 2 && HIDEPref(kHideNoReplayNotice)) ||
                    (subtype.integerValue == 3 && HIDEPref(kHideNoScreenshotNotice)))) return nil;
    return originalMarkInit(object,selector,client,thread,message,type,sampled,context,product);
}
static void (*originalScreenshotBlock)(id,SEL,BOOL,id);
static void hide_screenshotBlock(id object, SEL selector, BOOL blocked, id model) {
    originalScreenshotBlock(object,selector,HIDEPref(kHideAllowScreenshots) ? NO : blocked,model);
}

#pragma mark - Local preservation of received removal updates
// Only affects the local cache. No message contents are copied into preferences.
static NSString *HIDEMessageIdentifier(id value) {
    if ([value isKindOfClass:NSString.class]) return value;
    if ([value isKindOfClass:NSNumber.class]) return [value stringValue];
    for (NSString *getter in @[@"messageServerId", @"messageId", @"itemId"]) {
        id identifier = HIDEGet(value,getter);
        if ([identifier isKindOfClass:NSString.class]) return identifier;
        if ([identifier isKindOfClass:NSNumber.class]) return [identifier stringValue];
    }
    id identifier = HIDEIvar(value,"_messageServerId");
    return [identifier isKindOfClass:NSString.class] ? identifier : nil;
}
static NSObject *HIDEDeletionLock(void) {
    static NSObject *lock; static dispatch_once_t once; dispatch_once(&once,^{lock=[NSObject new];}); return lock;
}
static NSMutableDictionary *HIDEOwnDeletions(void) {
    static NSMutableDictionary *allowed; static dispatch_once_t once;
    dispatch_once(&once,^{allowed=[NSMutableDictionary dictionary];}); return allowed;
}
static void HIDEAllowOwnDeletion(id model) {
    id key = HIDEGet(model,@"messageKey") ?: HIDEIvar(model,"_messageKey") ?: model;
    NSString *identifier = HIDEMessageIdentifier(key);
    if (!identifier) return;
    @synchronized (HIDEDeletionLock()) {
        NSMutableDictionary *allowed=HIDEOwnDeletions();
        if (allowed.count > 2000) [allowed removeAllObjects];
        allowed[identifier]=@([NSDate timeIntervalSinceReferenceDate]+600);
    }
}
static void HIDEFilterRemovals(id updates, id thread) {
    if (!HIDEPref(kHideKeepDeleted) || ![updates isKindOfClass:NSArray.class]) return;
    NSString *threadID=HIDEMessageIdentifier(thread);
    for (id update in updates) {
        id message=HIDEIvar(update,"_messageUpdate") ?: HIDEGet(update,@"messageUpdate");
        NSArray *keys=HIDEIvar(message,"_removeMessages_messageKeys");
        if (![keys isKindOfClass:NSArray.class] || !keys.count) continue;
        NSMutableArray *remove=[NSMutableArray array];
        NSMutableDictionary *dates;
        @synchronized (HIDEDeletionLock()) {
            id stored=[NSUserDefaults.standardUserDefaults objectForKey:@"hide_deleted_timestamps"];
            dates=[stored isKindOfClass:NSDictionary.class] ? [stored mutableCopy] : [NSMutableDictionary dictionary];
            for (id key in keys) {
                NSString *identifier=HIDEMessageIdentifier(key);
                NSNumber *allowed=identifier ? HIDEOwnDeletions()[identifier] : nil;
                // Unknown message keys pass through: do not damage an unknown update schema.
                if (!identifier || allowed.doubleValue > NSDate.timeIntervalSinceReferenceDate) { [remove addObject:key]; continue; }
                if (threadID) dates[[NSString stringWithFormat:@"%@:%@",threadID,identifier]]=@(NSDate.timeIntervalSinceReferenceDate);
            }
            if (dates.count > 2000) {
                NSArray *ordered=[dates keysSortedByValueUsingSelector:@selector(compare:)];
                [dates removeObjectsForKeys:[ordered subarrayWithRange:NSMakeRange(0,dates.count-2000)]];
            }
            // Write only after the expected object ivar was found and changed.
            if (HIDEWriteObjectIvar(message,"_removeMessages_messageKeys",remove))
                [NSUserDefaults.standardUserDefaults setObject:dates forKey:@"hide_deleted_timestamps"];
        }
    }
}
static void (*originalCache2)(id,SEL,id,id);
static void hide_cache2(id object,SEL selector,id updates,id thread) {
    HIDEFilterRemovals(updates,thread); originalCache2(object,selector,updates,thread);
}
static void (*originalCache3)(id,SEL,id,id,id);
static void hide_cache3(id object,SEL selector,id updates,id thread,id mutation) {
    HIDEFilterRemovals(updates,thread); originalCache3(object,selector,updates,thread,mutation);
}
static void (*originalCache4)(id,SEL,id,id,id,id);
static void hide_cache4(id object,SEL selector,id updates,id thread,id mutation,id sequence) {
    HIDEFilterRemovals(updates,thread); originalCache4(object,selector,updates,thread,mutation,sequence);
}
static void (*originalUnsend)(id,SEL,id,id,id,long long,long long);
static void hide_unsend(id object,SEL selector,id model,id thread,id fbid,long long subtype,long long audience) {
    HIDEAllowOwnDeletion(model); originalUnsend(object,selector,model,thread,fbid,subtype,audience);
}
static void (*originalUnsendNumeric)(id,SEL,id,id,long long,long long,long long);
static void hide_unsendNumeric(id object,SEL selector,id model,id thread,long long fbid,long long subtype,long long audience) {
    HIDEAllowOwnDeletion(model); originalUnsendNumeric(object,selector,model,thread,fbid,subtype,audience);
}
static const void *deletedBadgeKey=&deletedBadgeKey, *deletedModelKey=&deletedModelKey;
static void HIDEUpdateDeletedBadge(UIView *cell) {
    UIButton *badge=objc_getAssociatedObject(cell,deletedBadgeKey);
    [badge removeFromSuperview]; objc_setAssociatedObject(cell,deletedBadgeKey,nil,OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    if (!HIDEPref(kHideKeepDeleted)) return;
    id model=objc_getAssociatedObject(cell,deletedModelKey) ?: HIDEGet(cell,@"viewModel") ?: HIDEIvar(cell,"_viewModel");
    id key=HIDEGet(model,@"messageKey") ?: HIDEIvar(model,"_messageKey");
    NSString *identifier=HIDEMessageIdentifier(key), *thread=HIDEMessageIdentifier(HIDEGet(model,@"threadId") ?: HIDEIvar(model,"_threadId"));
    if (!identifier || !thread) return;
    NSDictionary *dates=[NSUserDefaults.standardUserDefaults dictionaryForKey:@"hide_deleted_timestamps"];
    NSNumber *timestamp=dates[[NSString stringWithFormat:@"%@:%@",thread,identifier]];
    if (![timestamp isKindOfClass:NSNumber.class]) return;
    badge=[UIButton buttonWithType:UIButtonTypeSystem]; [badge setTitle:HIDEL(@"DELETED_MESSAGE") forState:UIControlStateNormal];
    badge.titleLabel.font=[UIFont systemFontOfSize:10 weight:UIFontWeightSemibold];
    badge.tintColor=UIColor.systemRedColor; badge.backgroundColor=[UIColor.secondarySystemBackgroundColor colorWithAlphaComponent:0.9]; badge.layer.cornerRadius=6;
    [badge addAction:[UIAction actionWithHandler:^(UIAction *action) {
        NSString *date=[NSDateFormatter localizedStringFromDate:[NSDate dateWithTimeIntervalSinceReferenceDate:timestamp.doubleValue] dateStyle:NSDateFormatterMediumStyle timeStyle:NSDateFormatterMediumStyle];
        UIAlertController *alert=[UIAlertController alertControllerWithTitle:HIDEL(@"DELETED_MESSAGE") message:date preferredStyle:UIAlertControllerStyleAlert];
        [alert addAction:[UIAlertAction actionWithTitle:HIDEL(@"OK") style:UIAlertActionStyleCancel handler:nil]];
        [HIDETopViewController() presentViewController:alert animated:YES completion:nil];
    }] forControlEvents:UIControlEventTouchUpInside];
    badge.frame=CGRectMake(MAX(0,cell.bounds.size.width-125),MAX(0,cell.bounds.size.height-20),120,18);
    [cell addSubview:badge]; objc_setAssociatedObject(cell,deletedBadgeKey,badge,OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}
static void (*originalCellLayout)(id,SEL);
static void hide_deletedLayout(UIView *cell,SEL selector) { originalCellLayout(cell,selector); HIDEUpdateDeletedBadge(cell); }
static void (*originalCellConfigure)(id,SEL,id,id,id);
static void hide_deletedConfigure(id cell,SEL selector,id model,id factory,id launcher) {
    originalCellConfigure(cell,selector,model,factory,launcher);
    objc_setAssociatedObject(cell,deletedModelKey,model,OBJC_ASSOCIATION_RETAIN_NONATOMIC); HIDEUpdateDeletedBadge(cell);
}

#pragma mark - Extended voice recording, with truthful duration display
static const void *recordingStartKey=&recordingStartKey;
static void HIDERestoreRecordingTime(id controller) {
    NSDate *original=objc_getAssociatedObject(controller,recordingStartKey);
    if(original)HIDEWriteObjectIvar(controller,"_startTime",original);
    objc_setAssociatedObject(controller,recordingStartKey,nil,OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}
static void HIDEExtendRecording(id controller) {
    if (!HIDEPref(kHideLongVoice)) { HIDERestoreRecordingTime(controller);return; }
    NSDate *original=objc_getAssociatedObject(controller,recordingStartKey);
    id start=HIDEIvar(controller,"_startTime");
    if(!original && [start isKindOfClass:NSDate.class]) {
        original=start;objc_setAssociatedObject(controller,recordingStartKey,original,OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    }
    if(original && [start isKindOfClass:NSDate.class] && [start timeIntervalSinceNow]<=0)
        HIDEWriteObjectIvar(controller,"_startTime",[NSDate.date dateByAddingTimeInterval:240]);
}
static void (*originalRecordStart)(id,SEL,id);
static void hide_recordStart(id controller,SEL selector,id entry) { HIDERestoreRecordingTime(controller); originalRecordStart(controller,selector,entry); HIDEExtendRecording(controller); }
static void (*originalRecordStart64)(id,SEL,long long);
static void hide_recordStart64(id controller,SEL selector,long long entry) {
    HIDERestoreRecordingTime(controller);originalRecordStart64(controller,selector,entry);HIDEExtendRecording(controller);
}
static void (*originalRecordStart32)(id,SEL,int);
static void hide_recordStart32(id controller,SEL selector,int entry) {
    HIDERestoreRecordingTime(controller);originalRecordStart32(controller,selector,entry);HIDEExtendRecording(controller);
}
static void (*originalRecordState)(id,SEL,id,long long);
static void hide_recordState(id object,SEL selector,id controller,long long state) {
    if ([HIDEGetNumber(controller,@"isRecording") boolValue]) HIDEExtendRecording(controller);else HIDERestoreRecordingTime(controller);
    originalRecordState(object,selector,controller,state);
}
static void (*originalDuration)(id,SEL,double);
static void hide_voiceDuration(id view,SEL selector,double duration) {
    if (HIDEPref(kHideLongVoice)) {
        id delegate=HIDEGet(view,@"delegate");
        id recorder=HIDEIvar(delegate,"_audioRecorder") ?: HIDEIvar(delegate,"audioRecorder");
        NSNumber *actual=HIDEGetNumber(HIDEIvar(recorder,"_audioRecorder") ?: recorder,@"currentTime");
        if (actual) duration=actual.doubleValue;
    }
    originalDuration(view,selector,duration);
}

static void HIDEInstallAdFilter(NSString *name,BOOL parser) {
    SEL selector=NSSelectorFromString(parser ? @"parsedObjectFromResponse:" : @"objectsForListAdapter:");
    Method method=class_getInstanceMethod(NSClassFromString(name),selector);
    __block IMP original=method ? method_getImplementation(method) : NULL;
    IMP replacement=imp_implementationWithBlock(^id(id object,id argument){
        if (parser && HIDEPref(kHideNoAds)) return nil;
        id result=((id (*)(id,SEL,id))original)(object,selector,argument);
        if (parser || !HIDEPref(kHideNoAds) || ![result isKindOfClass:NSArray.class]) return result;
        NSMutableArray *filtered=[NSMutableArray array];for(id item in result)if(!HIDEIsAd(item))[filtered addObject:item];return filtered;
    });
    IMP installed=HIDEHookChecked(name,selector,replacement,"@@:@");
    if(installed)original=installed;else imp_removeBlock(replacement);
}

BOOL HIDEFeatureAvailable(NSString *key) {
    if([key isEqualToString:kHideKeepDeleted]) {
        Ivar field=class_getInstanceVariable(NSClassFromString(@"IGDirectMessageUpdate"),"_removeMessages_messageKeys");
        if(!field || ivar_getTypeEncoding(field)[0]!='@')return NO;
    }
    if([key isEqualToString:kHideLongVoice]) {
        Ivar field=class_getInstanceVariable(NSClassFromString(@"IGDirectVoiceRecordViewController"),"_startTime");
        if(!field || ivar_getTypeEncoding(field)[0]!='@')return NO;
    }
    if([key isEqualToString:kHideNoReplayNotice]) {
        Class cls=NSClassFromString(@"IGDirectMessageMarkType");
        if(!class_getInstanceVariable(cls,"_subtype") && !class_getInstanceMethod(cls,NSSelectorFromString(@"subtype")))return NO;
    }
    NSDictionary *classes=@{
        kHideVideoStickers:@[@"IGGalleryDataSource"], kHideAnonLive:@[@"IGLiveViewerCountIntervalPuller"],
        kHideKeepDeleted:@[@"IGDirectCache"], kHideNoScreenshotNotice:@[@"IGDirectMessageMarkType",@"IGDirectMessageMark"],
        kHideNoReplayNotice:@[@"IGDirectMessageMark"], kHideAllowScreenshots:@[@"IGStoryViewerContainerView"],
        kHideLongVoice:@[@"IGDirectVoiceRecordViewController",@"IGDirectThreadViewController"], kHideVoiceImport:@[@"IGDirectComposer"],
        kHideLikeCounts:@[@"IGLikerConfig",@"IGMedia",@"IGFeedItemUFICellViewModel.IGFeedItemUFICellViewModel"],
        kHideVideoTimer:@[@"IGVideoPlayerTimeIndicatorOverlay"]};
    NSArray *required=classes[key];if(!required)return YES;
    for(NSDictionary *record in HIDEHookDiagnostics())
        if([record[@"status"] isEqualToString:@"installed"] && [required containsObject:record[@"class"]])return YES;
    return NO;
}

void HIDEInstallDLFeatures(void) {
    originalStorySeen=(void *)HIDEHookChecked(@"IGStoryViewerViewController",NSSelectorFromString(@"fullscreenSectionController:didMarkItemAsSeen:"),(IMP)hide_storySeen,"v@:@@");
    originalVisualSeen=(void *)HIDEHookChecked(@"IGDirectVisualMessageViewerEventHandler",NSSelectorFromString(@"visualMessageViewerController:didBeginPlaybackForVisualMessage:atIndex:"),(IMP)hide_visualSeen,"v@:@@q");
    originalTyping3=(void *)HIDEHookChecked(@"IGDirectTypingStatusService",NSSelectorFromString(@"updateOutgoingStatusIsActive:threadKey:typingStatusType:"),(IMP)hide_typing3,"v@:B@q");
    originalTyping4=(void *)HIDEHookChecked(@"IGDirectTypingStatusService",NSSelectorFromString(@"updateOutgoingStatusIsActive:threadKey:threadMetadata:typingStatusType:"),(IMP)hide_typing4,"v@:B@@q");
    originalTyping4Upper=(void *)HIDEHookChecked(@"IGDirectTypingStatusService",NSSelectorFromString(@"updateOutgoingStatusIsActive:threadKey:threadMetaData:typingStatusType:"),(IMP)hide_typing4Upper,"v@:B@@q");
    for(NSString *name in @[@"IGVideoFeedViewController",@"IGChainingFeedViewController",@"IGSundialFeedDataSource",@"IGSearchListKitDataSource",@"IGContextualFeedViewController",@"IGExploreListKitDataSource"]) HIDEInstallAdFilter(name,NO);
    for(NSString *name in @[@"IGStoryAdsResponseParser",@"IGSundialAdsResponseParser",@"IGExploreAdsResponseParser"]) HIDEInstallAdFilter(name,YES);
    SEL mediaTypes=NSSelectorFromString(@"setPreferredMediaTypes:");
    Method mediaMethod=class_getInstanceMethod(NSClassFromString(@"IGGalleryDataSource"),mediaTypes);
    NSMethodSignature *mediaSignature=mediaMethod ? [NSMethodSignature signatureWithObjCTypes:method_getTypeEncoding(mediaMethod)] : nil;
    const char *mediaType=mediaSignature.numberOfArguments==3 ? [mediaSignature getArgumentTypeAtIndex:2] : "";
    if(mediaType[0]=='@')originalMediaTypes=(void *)HIDEHookChecked(@"IGGalleryDataSource",mediaTypes,(IMP)hide_mediaTypes,"v@:@");
    else if(mediaType[0]=='i' || mediaType[0]=='I')originalMediaMask32=(void *)HIDEHookChecked(@"IGGalleryDataSource",mediaTypes,(IMP)hide_mediaMask32,"v@:i");
    else originalMediaMask64=(void *)HIDEHookChecked(@"IGGalleryDataSource",mediaTypes,(IMP)hide_mediaMask64,"v@:q");
    originalLiveInit=(HIDELiveInit)HIDEHookChecked(@"IGLiveViewerCountIntervalPuller",NSSelectorFromString(@"initWithUserSession:broadcastId:pullInterval:networker:loggingContext:mode:surface:infoProvider:"),(IMP)hide_liveInit,"@@:@@d@@q@@");
    originalTimer=(void *)HIDEHookChecked(@"IGVideoPlayerTimeIndicatorOverlay",NSSelectorFromString(@"_setIndicatorShowing:animated:completion:"),(IMP)hide_timer,"v@:BB@");
    for (NSString *name in @[@"isInDaisy",@"likeAndViewCountsDisabled",@"shareCountDisabled"])
        HIDEOverrideFlag(@"IGFeedItemUFICellViewModel.IGFeedItemUFICellViewModel",name,kHideLikeCounts,NO);
    HIDEOverrideFlag(@"IGMedia",@"likeAndViewCountsDisabled",kHideLikeCounts,NO);
    HIDEOverrideFlag(@"IGLikerConfig",@"isInDaisy",kHideLikeCounts,NO);
    HIDEOverrideFlag(@"IGLikerConfig",@"showLikeCountInLikersList",kHideLikeCounts,YES);
    HIDEOverrideFlag(@"IGLikerConfig",@"showViewCountInLikersList",kHideLikeCounts,YES);
    originalScreenshotMark=(void *)HIDEClassHookChecked(@"IGDirectMessageMarkType",NSSelectorFromString(@"visualItemScreenshotted"),(IMP)hide_screenshotMark,"@@:");
    originalMarkInit=(HIDEMarkInit)HIDEHookChecked(@"IGDirectMessageMark",NSSelectorFromString(@"initWithClientId:threadId:messageId:type:isE2ELoggingSampled:originalMessageClientContext:productType:"),(IMP)hide_markInit,"@@:@@@@B@q");
    originalScreenshotBlock=(void *)HIDEHookChecked(@"IGStoryViewerContainerView",NSSelectorFromString(@"setShouldBlockScreenshot:viewModel:"),(IMP)hide_screenshotBlock,"v@:B@");
    originalCache2=(void *)HIDEHookChecked(@"IGDirectCache",NSSelectorFromString(@"_applyThreadUpdates:toThreadWithId:"),(IMP)hide_cache2,"v@:@@");
    originalCache3=(void *)HIDEHookChecked(@"IGDirectCache",NSSelectorFromString(@"_applyThreadUpdates:toThreadWithId:mutationId:"),(IMP)hide_cache3,"v@:@@@");
    originalCache4=(void *)HIDEHookChecked(@"IGDirectCache",NSSelectorFromString(@"_applyThreadUpdates:toThreadWithId:mutationId:sequenceId:"),(IMP)hide_cache4,"v@:@@@@");
    SEL unsend=NSSelectorFromString(@"unsendWithMessageViewModel:threadId:consistentThreadFbid:threadSubtype:audienceType:");
    id handler=NSClassFromString(@"IGDirectMessageMenuActionHandler");
    // Check the instance ABI without constructing an app-owned controller.
    Method method=class_getInstanceMethod(handler,unsend);
    NSMethodSignature *signature=method ? [NSMethodSignature signatureWithObjCTypes:method_getTypeEncoding(method)] : nil;
    if (signature.numberOfArguments==7 && [signature getArgumentTypeAtIndex:4][0]=='@')
        originalUnsend=(void *)HIDEHookChecked(@"IGDirectMessageMenuActionHandler",unsend,(IMP)hide_unsend,"v@:@@@qq");
    else originalUnsendNumeric=(void *)HIDEHookChecked(@"IGDirectMessageMenuActionHandler",unsend,(IMP)hide_unsendNumeric,"v@:@@qqq");
    originalCellLayout=(void *)HIDEHookChecked(@"IGDirectMessageCell",@selector(layoutSubviews),(IMP)hide_deletedLayout,"v@:");
    originalCellConfigure=(void *)HIDEHookChecked(@"IGDirectMessageCell",NSSelectorFromString(@"configureWithViewModel:ringViewSpecFactory:launcherSet:"),(IMP)hide_deletedConfigure,"v@:@@@");
    SEL recordStart=NSSelectorFromString(@"startRecordingWithButtonTapFromEntryPoint:");
    Method recordMethod=class_getInstanceMethod(NSClassFromString(@"IGDirectVoiceRecordViewController"),recordStart);
    NSMethodSignature *recordSignature=recordMethod ? [NSMethodSignature signatureWithObjCTypes:method_getTypeEncoding(recordMethod)] : nil;
    const char *entryType=recordSignature.numberOfArguments==3 ? [recordSignature getArgumentTypeAtIndex:2] : "";
    if(entryType[0]=='@')originalRecordStart=(void *)HIDEHookChecked(@"IGDirectVoiceRecordViewController",recordStart,(IMP)hide_recordStart,"v@:@");
    else if(entryType[0]=='i' || entryType[0]=='I')originalRecordStart32=(void *)HIDEHookChecked(@"IGDirectVoiceRecordViewController",recordStart,(IMP)hide_recordStart32,"v@:i");
    else originalRecordStart64=(void *)HIDEHookChecked(@"IGDirectVoiceRecordViewController",recordStart,(IMP)hide_recordStart64,"v@:q");
    originalRecordState=(void *)HIDEHookChecked(@"IGDirectThreadViewController",NSSelectorFromString(@"voiceRecordViewController:didUpdateState:"),(IMP)hide_recordState,"v@:@q");
    originalDuration=(void *)HIDEHookChecked(@"IGDirectVoiceRecordInputView",NSSelectorFromString(@"setDuration:"),(IMP)hide_voiceDuration,"v@:d");
}
