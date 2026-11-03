// Ports of behavior observed in DLInsta. Every private call is ABI checked.
#import "HIDECore.h"
#import "HIDEHostLayout.h"
#import "HIDEDirectPolicy.h"
#import <malloc/malloc.h>
#import <math.h>
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

typedef id (*HIDELiveInit)(id __attribute__((ns_consumed)),SEL,id,id,double,id,id,long long,long long,id) __attribute__((ns_returns_retained));
static HIDELiveInit originalLiveInit;
static id __attribute__((ns_returns_retained)) hide_liveInit(id __attribute__((ns_consumed)) object, SEL selector,
    id session, id broadcast, double interval, id networker, id context, long long mode, long long surface, id provider) {
    if (HIDEPref(kHideAnonLive)) return nil;
    return originalLiveInit(object,selector,session,broadcast,interval,networker,context,mode,surface,provider);
}
static void (*originalTimer)(id,SEL,BOOL,BOOL,id);
static void hide_timer(id object, SEL selector, BOOL showing, BOOL animated, id completion) {
    originalTimer(object,selector,HIDEPref(kHideVideoTimer) ? YES : showing,animated,completion);
}

#pragma mark - Legacy story/Direct receipt and typing backstops
static void (*originalStorySeen)(id,SEL,id,id);
void HIDERecordStoryReceipt(id viewer,id section,id item,IMP original);
static void hide_storySeen(id object,SEL selector,id section,id item) {
    HIDERecordStoryReceipt(object,section,item,(IMP)originalStorySeen);
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

#pragma mark - 453 received unsend updates (Django/Iris transport)
// Intercept only the server's remove-item factory, not expiry, thread deletion,
// or arbitrary cache writes. The app keeps its own cached message contents.
NSString *HIDEDirectAccount(id object) {
    id session=HIDEGet(object,@"userSession") ?: HIDEIvar(object,"_userSession");
    id value=HIDEGet(session,@"pk") ?: HIDEGetNumber(session,@"pk");
    return [value isKindOfClass:NSNumber.class] ? [value stringValue] : ([value isKindOfClass:NSString.class] ? value : nil);
}
static NSString *HIDEMessageIdentifier(id value) {
    if([value isKindOfClass:NSString.class])return value;
    if([value isKindOfClass:NSNumber.class])return [value stringValue];
    id result=HIDEGet(value,@"serverId") ?: HIDEGet(value,@"value");
    return [result isKindOfClass:NSString.class] ? result : nil;
}
static id HIDEMessageMetadataDepth(id model,NSUInteger depth) {
    if(!model || depth>3)return nil;
    id value=HIDEGet(model,@"metadata") ?: HIDEGet(model,@"messageMetadata");
    if(!value){id nested=HIDEGet(model,@"messageCellViewModel");if(nested && nested!=model)return HIDEMessageMetadataDepth(nested,depth+1);}
    if(value)return value;
    // internal_classInfo in this exact UUID: metadata is object slot 8,
    // after the 16-byte IGDevirtualizedValueObject header. Never inspect Swift ivars.
    Class base=NSClassFromString(@"IGDevirtualizedValueObject");
    if(!HIDEIsVerifiedHostBuild() || object_getClass(model)!=NSClassFromString(@"IGDirectMessageCellViewModel") ||
       !base || class_getSuperclass(object_getClass(model))!=base || class_getInstanceSize(base)!=16 ||
       malloc_size((__bridge const void *)model)<32)return nil;
    void *metadata=NULL;memcpy(&metadata,(const uint8_t *)(__bridge const void *)model+24,sizeof(metadata));
    return (__bridge id)metadata;
}
static id HIDEMessageMetadata(id model){return HIDEMessageMetadataDepth(model,0);}
static NSString *HIDEDeletionKey(NSString *account,NSString *thread,NSString *message) {
    if(!account.length || !thread.length || (message && !message.length))return nil;
    // Array encoding prevents delimiter collisions and scopes every record to its account.
    NSData *json=[NSJSONSerialization dataWithJSONObject:message ? @[account,thread,message] : @[account,thread] options:0 error:nil];
    return [[NSString alloc] initWithData:json encoding:NSUTF8StringEncoding];
}
static NSObject *HIDEDeletionLock(void) {
    static NSObject *lock;static dispatch_once_t once;dispatch_once(&once,^{lock=[NSObject new];});return lock;
}
static NSMutableDictionary *HIDEOwnDeletions(void) {
    static NSMutableDictionary *values;static dispatch_once_t once;dispatch_once(&once,^{values=[NSMutableDictionary dictionary];});return values;
}
static NSHashTable *HIDEVisibleMessageCells(void) {
    static NSHashTable *cells;static dispatch_once_t once;dispatch_once(&once,^{cells=[NSHashTable weakObjectsHashTable];});return cells;
}
static void HIDEUpdateDeletedBadge(UIView *cell);
static id (*originalRemove453)(id,SEL,id,id,id);
static id hide_remove453(id object,SEL selector,id thread,id item,id sequence) {
    id updates=originalRemove453(object,selector,thread,item,sequence);
    NSString *account=HIDEDirectAccount(object),*threadID=HIDEMessageIdentifier(thread),*identifier=HIDEMessageIdentifier(item);
    NSString *record=identifier.length ? HIDEDeletionKey(account,threadID,identifier) : nil;
    if(!HIDEPref(kHideKeepDeleted) || !record || ![updates isKindOfClass:NSArray.class])return updates;
    @synchronized(HIDEDeletionLock()) {
        NSNumber *own=HIDEOwnDeletions()[record];
        NSNumber *ownThread=HIDEOwnDeletions()[HIDEDeletionKey(account,threadID,nil)];
        if(ownThread.doubleValue>NSDate.timeIntervalSinceReferenceDate)return updates;
        if(own.doubleValue>NSDate.timeIntervalSinceReferenceDate)return updates;
        [HIDEOwnDeletions() removeObjectForKey:record];
        BOOL changed=NO;
        for(id update in updates) {
            if(object_getClass(update)!=NSClassFromString(@"IGDirectThreadUpdate"))continue;
            id message=HIDEIvar(update,"_messageUpdate");
            if(object_getClass(message)!=NSClassFromString(@"IGDirectMessageUpdate"))continue;
            NSArray *keys=HIDEIvar(message,"_removeMessages_messageKeys");
            NSNumber *reason=HIDEIntegerIvar(message,"_removeMessages_reason");
            if(![keys isKindOfClass:NSArray.class] || !reason ||
               !HIDEDirectPreserveRemoval(YES,reason.longLongValue,YES,NSDate.timeIntervalSinceReferenceDate,own.doubleValue))continue;
            NSMutableArray *remaining=[NSMutableArray array];BOOL matched=NO;
            for(id key in keys) {
                if([HIDEMessageIdentifier(key) isEqual:identifier])matched=YES;
                else [remaining addObject:key];
            }
            if(matched && HIDEWriteObjectIvar(message,"_removeMessages_messageKeys",remaining))changed=YES;
        }
        if(changed) {
            id stored=[NSUserDefaults.standardUserDefaults objectForKey:@"hide_deleted_timestamps_453"];
            NSMutableDictionary *dates=[stored isKindOfClass:NSDictionary.class] ? [stored mutableCopy] : [NSMutableDictionary dictionary];
            // A repeated server delta must not change the first observed deletion time.
            if(!dates[record])dates[record]=@(NSDate.timeIntervalSinceReferenceDate);
            if(dates.count>2000) {
                NSArray *ordered=[dates keysSortedByValueUsingSelector:@selector(compare:)];
                [dates removeObjectsForKeys:[ordered subarrayWithRange:NSMakeRange(0,dates.count-2000)]];
            }
            [NSUserDefaults.standardUserDefaults setObject:dates forKey:@"hide_deleted_timestamps_453"];
            dispatch_async(dispatch_get_main_queue(),^{for(UIView *cell in HIDEVisibleMessageCells().allObjects)if(cell.window)[cell setNeedsLayout];});
        }
    }
    return updates;
}
static void (*originalUnsend453)(id,SEL,id,id,id,unsigned long long,id);
static void hide_unsend453(id object,SEL selector,id model,id thread,id fbid,unsigned long long subtype,id audience) {
    id metadata=HIDEMessageMetadata(model);
    NSString *identifier=HIDEMessageIdentifier(HIDEGet(metadata,@"key"));
    NSString *record=HIDEDeletionKey(HIDEDirectAccount(object),HIDEMessageIdentifier(thread),identifier);
    if(record)@synchronized(HIDEDeletionLock()) {
        NSMutableDictionary *allowed=HIDEOwnDeletions();
        for(NSString *key in allowed.allKeys)if([allowed[key] doubleValue]<=NSDate.timeIntervalSinceReferenceDate)[allowed removeObjectForKey:key];
        if(allowed.count<2000)allowed[record]=@(NSDate.timeIntervalSinceReferenceDate+(identifier.length ? 600 : 10));
    }
    originalUnsend453(object,selector,model,thread,fbid,subtype,audience);
}
static const void *deletedBadgeKey=&deletedBadgeKey, *deletedModelKey=&deletedModelKey;
@interface HIDEDeletedMessageButton : UIButton @end
@implementation HIDEDeletedMessageButton
- (CGRect)contentRectForBounds:(CGRect)bounds{return UIEdgeInsetsInsetRect(bounds,UIEdgeInsetsMake(8,12,8,12));}
@end
static NSString *HIDEVisibleMessageText(UIView *view,NSUInteger depth) {
    if(depth>10 || view.hidden)return nil;
    NSString *best=nil;
    if([view isKindOfClass:UILabel.class])best=((UILabel *)view).attributedText.string ?: ((UILabel *)view).text;
    else if([view isKindOfClass:UITextView.class])best=((UITextView *)view).attributedText.string ?: ((UITextView *)view).text;
    else {id text=HIDEGet(view,@"attributedText") ?: HIDEGet(view,@"attributedString") ?: HIDEGet(view,@"text");
        if([text isKindOfClass:NSAttributedString.class])best=[text string];
        else if([text isKindOfClass:NSString.class])best=text;
    }
    for(UIView *child in view.subviews){NSString *text=HIDEVisibleMessageText(child,depth+1);if(text.length>best.length)best=text;}
    return best;
}
static BOOL HIDEContainsMessageMedia(UIView *view,NSUInteger depth){
    if(depth>10 || view.hidden)return NO;
    NSString *name=NSStringFromClass(view.class);
    for(NSString *kind in @[@"Voice",@"Audio",@"Video",@"Photo",@"Sticker",@"ImageMessage",@"VisualMedia",@"MediaPreview"])if([name containsString:kind])return YES;
    for(UIView *child in view.subviews)if(HIDEContainsMessageMedia(child,depth+1))return YES;
    return NO;
}
static void HIDEUpdateDeletedBadge(UIView *cell) {
    UIButton *badge=objc_getAssociatedObject(cell,deletedBadgeKey);
    [badge removeFromSuperview];objc_setAssociatedObject(cell,deletedBadgeKey,nil,OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    if(!HIDEPref(kHideKeepDeleted))return;
    id model=objc_getAssociatedObject(cell,deletedModelKey) ?: HIDEGet(cell,@"messageCellViewModel") ?: HIDEIvar(cell,"_viewModel");
    id metadata=HIDEMessageMetadata(model);
    id key=HIDEGet(metadata,@"key") ?: HIDEIvar(metadata,"_key") ?: HIDEGet(model,@"messageKey") ?: HIDEIvar(model,"_messageKey");
    NSString *identifier=HIDEMessageIdentifier(key),*thread=HIDEMessageIdentifier(HIDEGet(metadata,@"threadId") ?: HIDEGet(model,@"threadId") ?: HIDEIvar(model,"_threadId"));
    if(!thread)for(UIResponder *r=cell;r;r=r.nextResponder){thread=HIDEMessageIdentifier(HIDEGet(r,@"threadId") ?: HIDEIvar(r,"_threadId"));if(thread)break;}
    NSString *account=nil;
    for(UIResponder *r=cell;r && !account;r=r.nextResponder)account=HIDEDirectAccount(r);
    NSString *record=identifier.length ? HIDEDeletionKey(account,thread,identifier) : nil;if(!record)return;
    NSNumber *timestamp=[NSUserDefaults.standardUserDefaults dictionaryForKey:@"hide_deleted_timestamps_453"][record];
    if(![timestamp isKindOfClass:NSNumber.class])return;
    UIView *content=HIDEGet(cell,@"messageContentContainerView");
    if(![content isKindOfClass:UIView.class] || CGRectIsEmpty(content.bounds))return;
    NSString *text=HIDEContainsMessageMedia(content,0) ? nil : HIDEVisibleMessageText(content,0);
    badge=[[HIDEDeletedMessageButton alloc] initWithFrame:CGRectZero];badge.backgroundColor=[UIColor colorWithRed:213/255.0 green:45/255.0 blue:64/255.0 alpha:1];
    [badge setTitleColor:UIColor.whiteColor forState:UIControlStateNormal];badge.titleLabel.numberOfLines=0;
    badge.titleLabel.font=[UIFont systemFontOfSize:16];badge.titleLabel.textAlignment=NSTextAlignmentNatural;
    badge.layer.cornerRadius=MIN(22,content.bounds.size.height/2);badge.clipsToBounds=YES;
    // Overlay text messages only; never replace a photo/video/voice note by a text placeholder.
    if(text.length){[badge setTitle:text forState:UIControlStateNormal];badge.frame=content.bounds;}
    else {[badge setImage:[UIImage systemImageNamed:@"clock"] forState:UIControlStateNormal];badge.tintColor=UIColor.whiteColor;badge.frame=CGRectMake(MAX(0,content.bounds.size.width-28),MAX(0,content.bounds.size.height-28),28,28);}
    badge.accessibilityLabel=[NSString stringWithFormat:@"%@ · %@",text ?: @"",HIDEL(@"DELETED_MESSAGE")];
    __weak UIView *weakCell=cell;CGRect anchorRect=[content convertRect:content.bounds toView:cell];
    [badge addAction:[UIAction actionWithHandler:^(UIAction *action){
        UIView *anchor=weakCell;if(!anchor.window)return;
        NSString *date=[NSDateFormatter localizedStringFromDate:[NSDate dateWithTimeIntervalSinceReferenceDate:timestamp.doubleValue] dateStyle:NSDateFormatterFullStyle timeStyle:NSDateFormatterMediumStyle];
        UIAlertController *alert=[UIAlertController alertControllerWithTitle:HIDEL(@"DELETION_OBSERVED") message:date preferredStyle:UIAlertControllerStyleActionSheet];
        [alert addAction:[UIAlertAction actionWithTitle:HIDEL(@"OK") style:UIAlertActionStyleCancel handler:nil]];
        alert.popoverPresentationController.sourceView=anchor;alert.popoverPresentationController.sourceRect=anchorRect;
        [HIDETopViewController() presentViewController:alert animated:YES completion:nil];
    }] forControlEvents:UIControlEventTouchUpInside];
    [content addSubview:badge];objc_setAssociatedObject(cell,deletedBadgeKey,badge,OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}
static void (*originalCellLayout)(id,SEL);
static void hide_deletedLayout(UIView *cell,SEL selector) { originalCellLayout(cell,selector); HIDEUpdateDeletedBadge(cell); }
static void (*originalCellConfigure)(id,SEL,id,id,id);
static void hide_deletedConfigure(id cell,SEL selector,id model,id factory,id launcher) {
    originalCellConfigure(cell,selector,model,factory,launcher);
    [HIDEVisibleMessageCells() addObject:cell];
    objc_setAssociatedObject(cell,deletedModelKey,model,OBJC_ASSOCIATION_RETAIN_NONATOMIC); HIDEUpdateDeletedBadge(cell);
}

#pragma mark - Extended voice recording, with truthful duration display
// Swift reflection in the supplied executable identifies recordingTimeLimit
// as Sd (Double). Resolve its runtime offset: Swift's Date? startTime is NOT
// an NSDate pointer and must not be passed to object_getIvar/object_setIvar.
static Ivar HIDE407RecordingLimitField(void) {
    if(!HIDEIsVerifiedHostBuild())return NULL;
    Class cls=NSClassFromString(HIDE_HOST_VOICE_CLASS);
    Ivar field=class_getInstanceVariable(cls,"recordingTimeLimit");
    Ivar next=class_getInstanceVariable(cls,"voiceRecordSource");
    if(!field || !next)return NULL;
    const char *type=ivar_getTypeEncoding(field);
    if(type && *type && strcmp(type,"d"))return NULL;
    ptrdiff_t offset=ivar_getOffset(field), following=ivar_getOffset(next);
    if(offset<=0 || offset%_Alignof(double) || following-offset!=(ptrdiff_t)sizeof(double) ||
       (size_t)offset+sizeof(double)>class_getInstanceSize(cls))return NULL;
    return field;
}
static const void *recordingLimit407Key=&recordingLimit407Key;
static void (*originalRecord407Start)(id,SEL,long long);
static void HIDEPrepareRecordingLimit(id controller) {
    Ivar field=HIDE407RecordingLimitField();
    if(field && object_getClass(controller)==NSClassFromString(HIDE_HOST_VOICE_CLASS)) {
        uint8_t *slot=(uint8_t *)(__bridge void *)controller+ivar_getOffset(field);
        double current;memcpy(&current,slot,sizeof(current));
        NSNumber *saved=objc_getAssociatedObject(controller,recordingLimit407Key);
        if(!HIDEPref(kHideLongVoice)) {
            if(saved && current==HIDE_HOST_VOICE_SECONDS) {
                double original=saved.doubleValue;memcpy(slot,&original,sizeof(original));
            }
            objc_setAssociatedObject(controller,recordingLimit407Key,nil,OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        } else if(isfinite(current) && current>0 && current<HIDE_HOST_VOICE_SECONDS) {
            objc_setAssociatedObject(controller,recordingLimit407Key,@(current),OBJC_ASSOCIATION_RETAIN_NONATOMIC);
            double extended=HIDE_HOST_VOICE_SECONDS;memcpy(slot,&extended,sizeof(extended));
        }
    }
}
static void hide_record407Start(id controller,SEL selector,long long entry){HIDEPrepareRecordingLimit(controller);originalRecord407Start(controller,selector,entry);}
static void (*originalRecordEffects)(id,SEL,long long,id,id);
static void hide_recordEffects(id controller,SEL selector,long long entry,id effect,id name){HIDEPrepareRecordingLimit(controller);originalRecordEffects(controller,selector,entry,effect,name);}
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
        return HIDEIsVerifiedHostBuild() && originalRemove453 && originalUnsend453 && originalCellLayout && originalCellConfigure;
    }
    if([key isEqualToString:kHideLongVoice]) {
        return originalRecord407Start && HIDE407RecordingLimitField();
    }
    if([key isEqualToString:kHideNoReplayNotice]) {
        Class cls=NSClassFromString(@"IGDirectMessageMarkType");
        if(!class_getInstanceVariable(cls,"_subtype") && !class_getInstanceMethod(cls,NSSelectorFromString(@"subtype")))return NO;
    }
    NSDictionary *classes=@{
        kHideVideoStickers:@[@"IGGalleryDataSource"], kHideAnonLive:@[@"IGLiveViewerCountIntervalPuller"],
        kHideNoScreenshotNotice:@[@"IGDirectMessageMarkType",@"IGDirectMessageMark"],
        kHideNoReplayNotice:@[@"IGDirectMessageMark"], kHideAllowScreenshots:@[@"IGStoryViewerContainerView"],
        kHideVoiceImport:@[@"IGDirectComposer"],
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
    originalLiveInit=(HIDELiveInit)HIDEHookChecked(@"IGLiveViewerCountIntervalPuller",NSSelectorFromString(@"initWithUserSession:broadcastId:pullInterval:networker:loggingContext:mode:surface:infoProvider:"),(IMP)hide_liveInit,"@@:@@d@@qq@");
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
    if(HIDEIsVerifiedHostBuild()) {
        originalRemove453=(void *)HIDEHookChecked(@"IGDThreadDeltaUpdateFactory",NSSelectorFromString(@"removeItemUpdatesForThreadId:itemId:sequenceId:"),(IMP)hide_remove453,"@@:@@@");
        originalUnsend453=(void *)HIDEHookChecked(@"IGDirectMessageMenuActionHandler",NSSelectorFromString(@"unsendWithMessageViewModel:threadId:consistentThreadFbid:threadSubtype:audienceType:"),(IMP)hide_unsend453,"v@:@@@Q@");
        originalCellLayout=(void *)HIDEHookChecked(@"_TtC19IGDirectMessageCell19IGDirectMessageCell",@selector(layoutSubviews),(IMP)hide_deletedLayout,"v@:");
        originalCellConfigure=(void *)HIDEHookChecked(@"_TtC19IGDirectMessageCell19IGDirectMessageCell",NSSelectorFromString(@"configureWithViewModel:ringViewSpecFactory:mobileConfig:"),(IMP)hide_deletedConfigure,"v@:@@@");
    }
    SEL recordStart=NSSelectorFromString(@"startRecordingWithButtonTapFromEntryPoint:");
    originalRecordEffects=(void *)HIDEHookChecked(HIDE_HOST_VOICE_CLASS,NSSelectorFromString(@"startRecordingWithButtonTapFromEntryPoint:preSelectedVoiceEffectId:voiceEffectName:"),(IMP)hide_recordEffects,"v@:q@@");
    originalRecord407Start=(void *)HIDEHookChecked(HIDE_HOST_VOICE_CLASS,recordStart,(IMP)hide_record407Start,"v@:q");
}
