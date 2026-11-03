// Explicit, target-bound manual receipts. Never toggle the user's privacy setting.
#import "HIDECore.h"
#import "HIDEReceiptPolicy.h"
#import "HIDEHostLayout.h"
#import "HIDEDirectPolicy.h"
#import <string.h>
#import <CommonCrypto/CommonDigest.h>
static const void *receiptURLKey=&receiptURLKey,*receiptPermitKey=&receiptPermitKey,*storyContextKey=&storyContextKey,*eyeKey=&eyeKey;
static __thread void *manualOwner;
static __thread void *manualTracker;
static NSMutableDictionary *HIDEReceiptIntents(void){static NSMutableDictionary *v;static dispatch_once_t once;dispatch_once(&once,^{v=[NSMutableDictionary dictionary];});return v;}
static NSString *HIDEReceiptID(id value){if([value isKindOfClass:NSNumber.class])return [value stringValue];return [value isKindOfClass:NSString.class] ? value : nil;}
static NSString *HIDEStoryID(id value){NSString *v=HIDEReceiptID(HIDEGet(value,@"mediaId") ?: HIDEGet(value,@"mediaID") ?: HIDEGet(value,@"pk") ?: HIDEGetNumber(value,@"pk"));if(!v){id media=HIDEGet(value,@"media");v=HIDEReceiptID(HIDEGet(media,@"pk") ?: HIDEGetNumber(media,@"pk") ?: HIDEGet(media,@"mediaId"));}return [v componentsSeparatedByString:@"_"].firstObject;}
static NSString *HIDEReceiptAccount(id owner){
    id session=HIDEGet(owner,@"userSession") ?: HIDEIvar(owner,"_userSession");
    id networker=HIDEGet(session,@"networker") ?: HIDEIvar(session,"_networker");
    NSString *identifier=HIDEReceiptID(HIDEIvar(networker,"_userPK"));
    for(NSString *getter in @[@"pk",@"userPk",@"userPK",@"userID"])if(!identifier)identifier=HIDEReceiptID(HIDEGet(session,getter) ?: HIDEGetNumber(session,getter));
    if(!identifier){id user=HIDEGet(session,@"user") ?: HIDEIvar(session,"_user");identifier=HIDEReceiptID(HIDEGet(user,@"pk") ?: HIDEGetNumber(user,@"pk"));}
    return identifier.length ? identifier : nil;
}
static BOOL HIDEInstagramURL(NSURL *url){NSString *host=url.host.lowercaseString;return [host isEqualToString:@"instagram.com"] || [host hasSuffix:@".instagram.com"];}
void HIDERegisterReceiptURL(id request,NSURL *url){if(request && HIDEInstagramURL(url) && ([url.path hasSuffix:@"/seen/"] || [url.path hasSuffix:@"/seen"]))objc_setAssociatedObject(request,receiptURLKey,url,OBJC_ASSOCIATION_RETAIN_NONATOMIC);}
static NSDictionary *HIDEReceiptParameters(id request){
    id params=HIDEGet(request,@"parameters");if([params isKindOfClass:NSDictionary.class] && [params count])return params;
    id body=HIDEGet(request,@"body");if([body isKindOfClass:NSDictionary.class])return body;
    id nested=HIDEGet(body,@"parameters");if([nested isKindOfClass:NSDictionary.class])return nested;
    if([body isKindOfClass:NSData.class]){id json=[NSJSONSerialization JSONObjectWithData:body options:0 error:nil];if([json isKindOfClass:NSDictionary.class])return json;
        NSString *form=[[NSString alloc] initWithData:body encoding:NSUTF8StringEncoding];NSURLComponents *c=[NSURLComponents new];@try{c.percentEncodedQuery=form;}@catch(__unused NSException *e){return nil;}NSMutableDictionary *values=[NSMutableDictionary dictionary];for(NSURLQueryItem *q in c.queryItems)if(q.value)values[q.name]=q.value;return values;
    }return nil;
}
static BOOL HIDEEmptyReceiptField(id value){
    if(!value || value==NSNull.null)return YES;
    if([value isKindOfClass:NSString.class]){if(![value length])return YES;value=[NSJSONSerialization JSONObjectWithData:[value dataUsingEncoding:NSUTF8StringEncoding] options:0 error:nil];if(!value)return NO;}
    return ([value isKindOfClass:NSArray.class] || [value isKindOfClass:NSDictionary.class]) && [value count]==0;
}
static NSString *HIDEReceiptTarget(id request,NSURL *url){
    if(!HIDEInstagramURL(url))return nil;
    NSArray *parts=[[url.path stringByTrimmingCharactersInSet:[NSCharacterSet characterSetWithCharactersInString:@"/"]] componentsSeparatedByString:@"/"];NSUInteger threads=[parts indexOfObject:@"threads"];
    if([parts containsObject:@"direct_v2"] && threads!=NSNotFound && threads+1<parts.count && [parts.lastObject isEqualToString:@"seen"])
        return [@"dm:" stringByAppendingString:parts[threads+1]];
    if(![url.path hasSuffix:@"/media/seen/"] && ![url.path hasSuffix:@"/media/seen"])return nil;
    NSDictionary *params=HIDEReceiptParameters(request);id reels=params[@"reels"];
    if([reels isKindOfClass:NSString.class])reels=[NSJSONSerialization JSONObjectWithData:[reels dataUsingEncoding:NSUTF8StringEncoding] options:0 error:nil];
    // A batch containing any other story or live view is never authorized.
    if(![reels isKindOfClass:NSDictionary.class] || [reels count]!=1)return nil;
    for(NSString *key in @[@"live_vods",@"live_vods_skipped",@"stories",@"reels_media"])if(!HIDEEmptyReceiptField(params[key]))return nil;
    NSString *identifier=HIDEReceiptID([reels allKeys].firstObject);identifier=[identifier componentsSeparatedByString:@"_"].firstObject;
    return identifier.length ? [@"story:" stringByAppendingString:identifier] : nil;
}
static NSData *HIDEReceiptFingerprint(id request){
    NSDictionary *params=HIDEReceiptParameters(request);NSData *data=nil;
    if(params.count && [NSJSONSerialization isValidJSONObject:params])data=[NSJSONSerialization dataWithJSONObject:params options:NSJSONWritingSortedKeys error:nil];
    if(!data){id body=HIDEGet(request,@"body");if([body isKindOfClass:NSData.class])data=body;}
    if(!data.length || data.length>1024*1024)return nil;
    unsigned char hash[CC_SHA256_DIGEST_LENGTH];CC_SHA256(data.bytes,(CC_LONG)data.length,hash);return [NSData dataWithBytes:hash length:sizeof(hash)];
}
NSURL *HIDEAuthorizedReceiptURL(id request){
    NSURL *url=objc_getAssociatedObject(request,receiptURLKey);NSDictionary *permit=objc_getAssociatedObject(request,receiptPermitKey);
    if(!permit)return nil;
    NSData *expected=permit[@"fingerprint"],*actual=HIDEReceiptFingerprint(request);
    NSString *requested=HIDEReceiptTarget(request,url);
    return HIDEReceiptPermitMatches([permit[@"target"] UTF8String],requested.UTF8String,expected.bytes,expected.length,actual.bytes,actual.length,NSProcessInfo.processInfo.systemUptime,[permit[@"expires"] doubleValue]) ? url : nil;
}
static void HIDEPrepareReceipt(id networker,id request){
    NSString *account=HIDEReceiptID(HIDEIvar(networker,"_userPK"));if(!account.length){objc_setAssociatedObject(request,receiptPermitKey,nil,OBJC_ASSOCIATION_RETAIN_NONATOMIC);return;}
    NSDictionary *existing=objc_getAssociatedObject(request,receiptPermitKey);
    if(existing && ![existing[@"account"] isEqual:account]){objc_setAssociatedObject(request,receiptPermitKey,nil,OBJC_ASSOCIATION_RETAIN_NONATOMIC);return;}
    if(HIDEAuthorizedReceiptURL(request))return;
    NSURL *url=objc_getAssociatedObject(request,receiptURLKey);NSString *target=HIDEReceiptTarget(request,url);if(!target)return;
    NSData *fingerprint=HIDEReceiptFingerprint(request);if(!fingerprint)return;
    NSMutableDictionary *intents=HIDEReceiptIntents();@synchronized(intents){NSDictionary *intent=intents[target];if([intent[@"account"] isEqual:account] && [intent[@"expires"] doubleValue]>NSProcessInfo.processInfo.systemUptime){
        NSDictionary *permit=@{@"target":target,@"account":account,@"fingerprint":fingerprint,@"expires":@(NSProcessInfo.processInfo.systemUptime+30)};
        objc_setAssociatedObject(request,receiptPermitKey,permit,OBJC_ASSOCIATION_RETAIN_NONATOMIC);[intents removeObjectForKey:target];
    }}
}
static BOOL HIDEIntent(NSString *target,id owner){NSString *account=HIDEReceiptAccount(owner);if(!account.length)return NO;
    NSMutableDictionary *intents=HIDEReceiptIntents();@synchronized(intents){[intents removeAllObjects];intents[target]=@{@"expires":@(NSProcessInfo.processInfo.systemUptime+15),@"account":account};}return YES;
}
typedef id (*HIDERequestCopy)(id,SEL,void *) __attribute__((ns_returns_retained));
static HIDERequestCopy requestCopy;
static id __attribute__((ns_returns_retained)) hide_requestCopy(id object,SEL selector,void *zone){
    id copy=requestCopy(object,selector,zone);if(!copy)return nil;NSURL *url=objc_getAssociatedObject(object,receiptURLKey);
    if(url)objc_setAssociatedObject(copy,receiptURLKey,url,OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    NSDictionary *permit=objc_getAssociatedObject(object,receiptPermitKey);if(permit)objc_setAssociatedObject(copy,receiptPermitKey,permit,OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    return copy;
}
// Hook all native overloads: policy is an object in 407, not an integer.
static id (*network4)(id,SEL,id,id,id,id);
static id hide_network4(id o,SEL s,id request,id policy,id success,id failure){HIDEPrepareReceipt(o,request);return network4(o,s,request,policy,success,failure);}
static id (*network7)(id,SEL,id,id,id,id,id,id,id);
static id hide_network7(id o,SEL s,id request,id policy,id queue,id cache,id parse,id success,id failure){HIDEPrepareReceipt(o,request);return network7(o,s,request,policy,queue,cache,parse,success,failure);}
static id (*network10)(id,SEL,id,id,id,id,id,id,id,id,id,id);
static id hide_network10(id o,SEL s,id request,id policy,id queue,id cache,id sent,id first,id last,id parse,id success,id failure){HIDEPrepareReceipt(o,request);return network10(o,s,request,policy,queue,cache,sent,first,last,parse,success,failure);}

@interface HIDEStoryReceiptContext : NSObject
@property(nonatomic,weak) id viewer,section,item;
@property(nonatomic,copy) NSString *identifier;
@property(nonatomic) IMP original;
@end
@implementation HIDEStoryReceiptContext @end
void HIDERecordStoryReceipt(id viewer,id section,id item,IMP original){
    NSString *identifier=HIDEStoryID(item);if(!identifier || !original)return;
    HIDEStoryReceiptContext *context=[HIDEStoryReceiptContext new];context.viewer=viewer;context.section=section;context.item=item;context.identifier=identifier;context.original=original;
    objc_setAssociatedObject(viewer,storyContextKey,context,OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    objc_setAssociatedObject(section,storyContextKey,context,OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}
static HIDEStoryReceiptContext *HIDEStoryContext(UIView *source,id media){
    NSString *expected=HIDEStoryID(media);if(!expected.length)return nil;
    for(UIResponder *r=source;r;r=r.nextResponder){HIDEStoryReceiptContext *c=objc_getAssociatedObject(r,storyContextKey) ?: objc_getAssociatedObject(HIDEGet(r,@"delegate"),storyContextKey);if(c && c.item && c.section && [c.identifier isEqual:expected])return c;}
    return nil;
}
BOOL HIDECanManuallySeeStory(UIView *source,id media){return HIDEPref(kHideAnonStories) && HIDEStoryContext(source,media)!=nil && HIDEReceiptAccount(HIDEStoryContext(source,media).viewer)!=nil && (network4 || network7 || network10);}
void HIDEManuallySeeStory(UIView *source,id media){
    HIDEStoryReceiptContext *context=HIDEStoryContext(source,media);if(!context)return;
    HIDEConfirm(HIDEL(@"MANUAL_SEEN_TITLE"),HIDEL(@"MANUAL_STORY_CONFIRM"),@"Seen",^{
        if(!context.viewer || !context.section || !context.item || ![context.identifier isEqual:HIDEStoryID(context.item)])return;
        if(!HIDEIntent([@"story:" stringByAppendingString:context.identifier],context.viewer)){HIDEToast(HIDEL(@"FEATURE_UNAVAILABLE_SHORT"));return;}
        ((void (*)(id,SEL,id,id))context.original)(context.viewer,NSSelectorFromString(@"fullscreenSectionController:didMarkItemAsSeen:"),context.section,context.item);
        HIDEToast(HIDEL(@"MANUAL_SEEN_REQUESTED"));
    });
}
// 453 moved last-seen tracking out of the thread controller. Capture the
// native tracker through its checked ObjC initializer, never through Swift slots.
static const void *trackerContextKey=&trackerContextKey,*mqttContextKey=&mqttContextKey;
@interface HIDETrackerContext : NSObject
@property(nonatomic,copy) NSString *thread,*account;
@property(nonatomic,weak) id dataSource,infoProvider,sender;
@end
@implementation HIDETrackerContext @end
static NSMapTable *HIDETrackers(void) {
    static NSMapTable *v;static dispatch_once_t once;dispatch_once(&once,^{v=[NSMapTable strongToWeakObjectsMapTable];});return v;
}
static NSString *HIDETrackerKey(NSString *account,NSString *thread) {
    if(!account.length || !thread.length)return nil;
    return [[NSString alloc] initWithData:[NSJSONSerialization dataWithJSONObject:@[account,thread] options:0 error:nil] encoding:NSUTF8StringEncoding];
}
typedef id (*HIDETrackerInit)(id __attribute__((ns_consumed)),SEL,id,id,id,id,id) __attribute__((ns_returns_retained));
static HIDETrackerInit trackerInit;
static id __attribute__((ns_returns_retained)) hide_trackerInit(id __attribute__((ns_consumed)) object,SEL selector,id provider,id source,id adapter,id sender,id coordinator) {
    id tracker=trackerInit(object,selector,provider,source,adapter,sender,coordinator);
    NSString *thread=HIDEReceiptID(HIDEGet(provider,@"threadId")),*account=HIDEReceiptAccount(source);
    NSString *key=HIDETrackerKey(account,thread);
    if(tracker && key) {
        HIDETrackerContext *context=[HIDETrackerContext new];context.thread=thread;context.account=account;context.infoProvider=provider;context.dataSource=source;context.sender=sender;
        objc_setAssociatedObject(tracker,trackerContextKey,context,OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        NSMapTable *trackers=HIDETrackers();@synchronized(trackers){[trackers setObject:tracker forKey:key];}
    }
    return tracker;
}
static id HIDETrackerForOwner(id owner) {
    NSString *key=HIDETrackerKey(HIDEReceiptAccount(owner),HIDEReceiptID(HIDEGet(owner,@"threadId")));if(!key)return nil;
    NSMapTable *trackers=HIDETrackers();id tracker;@synchronized(trackers){tracker=[trackers objectForKey:key];}
    HIDETrackerContext *context=objc_getAssociatedObject(tracker,trackerContextKey);
    // Thread IDs can transition; reject a stale tracker or account before each press.
    if(!context.dataSource || !HIDEDirectIdentityMatches(context.account.UTF8String,context.thread.UTF8String,
       HIDEReceiptAccount(context.dataSource).UTF8String,HIDEReceiptID(HIDEGet(context.infoProvider,@"threadId")).UTF8String))return nil;
    return tracker;
}
@interface HIDEOutgoingReadIntent : NSObject
@property(nonatomic,weak) id owner,tracker,sender;
@property(nonatomic,copy) NSString *account,*thread,*message;
@property(nonatomic) double issued,expires;
@end
@implementation HIDEOutgoingReadIntent @end
static NSMutableArray *HIDEOutgoingIntents(void) {
    static NSMutableArray *v;static dispatch_once_t once;dispatch_once(&once,^{v=[NSMutableArray array];});return v;
}
static void HIDEPrepareOutgoingReadIntent(id owner,id tracker) {
    NSMutableArray *pending=HIDEOutgoingIntents();@synchronized(pending){[pending removeAllObjects];}
    HIDETrackerContext *context=objc_getAssociatedObject(tracker,trackerContextKey);
    SEL newest=NSSelectorFromString(@"lastSeenMessageMetadataForNewestPublishedMessageWithIsShhMessage:filter:");
    if(!HIDECanCall(context.dataSource,newest,"@@:Bq"))return;
    id metadata=((id (*)(id,SEL,BOOL,long long))objc_msgSend)(context.dataSource,newest,NO,0);
    NSString *message=HIDEReceiptID(HIDEGet(metadata,@"messageId"));if(!message.length)return;
    HIDEOutgoingReadIntent *intent=[HIDEOutgoingReadIntent new];intent.owner=owner;intent.tracker=tracker;intent.sender=context.sender;
    intent.account=context.account;intent.thread=context.thread;intent.message=message;
    intent.issued=NSProcessInfo.processInfo.systemUptime;intent.expires=intent.issued+15;
    NSMutableArray *intents=HIDEOutgoingIntents();@synchronized(intents){[intents removeAllObjects];[intents addObject:intent];}
}
// Native markLastMessageAsSeen schedules this service call asynchronously.
// Resume permission only for the captured sender, account, thread and message ID.
static id (*sendMessageUpdate)(id,SEL,id,id,id,id,id,long long,id,id,BOOL,BOOL,BOOL);
static id hide_sendMessageUpdate(id object,SEL selector,id action,id message,id threadKey,id client,id date,long long product,id foa,id igd,BOOL tam,BOOL instamadillo,BOOL ttlc) {
    HIDEOutgoingReadIntent *matched=nil;
    id identifier=HIDEIvar(threadKey,"_djangoThread_identifier");
    NSString *thread=HIDEReceiptID(HIDEIvar(identifier,"_serverThread_threadId"));
    id django=HIDEIvar(object,"_djangoUpdateService");NSString *account=HIDEReceiptAccount(django);
    NSMutableArray *intents=HIDEOutgoingIntents();
    if(!tam && !instamadillo && !ttlc && HIDEIvar(action,"_markSeen_type"))@synchronized(intents) {
        for(HIDEOutgoingReadIntent *intent in intents) {
            if(intent.sender==object && [intent.message isEqual:HIDEReceiptID(message)] &&
               HIDEDirectIdentityMatches(intent.account.UTF8String,intent.thread.UTF8String,account.UTF8String,thread.UTF8String) &&
               HIDEDirectPermitUnexpired(NSProcessInfo.processInfo.systemUptime,intent.issued,intent.expires) &&
               HIDETrackerForOwner(intent.owner)==intent.tracker) {matched=intent;break;}
        }
        if(matched)[intents removeObject:matched];
    }
    id owner=matched.owner,tracker=matched.tracker;
    void *savedOwner=manualOwner,*savedTracker=manualTracker;
    if(owner && tracker){manualOwner=(__bridge void *)owner;manualTracker=(__bridge void *)tracker;}
    @try{return sendMessageUpdate(object,selector,action,message,threadKey,client,date,product,foa,igd,tam,instamadillo,ttlc);}
    @finally{manualOwner=savedOwner;manualTracker=savedTracker;}
}
static BOOL HIDEManualScopeMatches(id object) {
    id owner=(__bridge id)manualOwner;
    id tracker=(__bridge id)manualTracker;
    HIDETrackerContext *context=objc_getAssociatedObject(tracker,trackerContextKey);
    return owner && tracker && HIDETrackerForOwner(owner)==tracker &&
        (object==owner || object==tracker || object==context.dataSource);
}
static NSDictionary *HIDEMQTTSnapshot(id object) {
    NSMutableDictionary *v=[NSMutableDictionary dictionary];
    for(NSString *key in @[@"threadId",@"mark"]) {id value=HIDEGet(object,key);if(![value isKindOfClass:NSString.class])return nil;v[key]=value;}
    for(NSString *key in @[@"state",@"actionId",@"syncSeqId",@"threadFbId",@"otherUserFbId",@"actorFbId",@"watermarkTimestamp",@"attemptId"]) {
        NSNumber *value=HIDEGetNumber(object,key);if(!value)return nil;v[key]=value;
    }
    for(NSString *key in @[@"titanOriginatedThreadId",@"adPageMessageType"])v[key]=HIDEGet(object,key) ?: NSNull.null;
    return v;
}
static NSDictionary *HIDEMQTTPermit(NSDictionary *snapshot) {
    double now=NSProcessInfo.processInfo.systemUptime;
    return @{@"snapshot":snapshot,@"issued":@(now),@"expires":@(now+15)};
}
static BOOL HIDEMQTTMatchesManualScope(id object) {
    id owner=(__bridge id)manualOwner;
    return owner && HIDEManualScopeMatches(owner) &&
        [HIDEReceiptID(HIDEGet(owner,@"threadId")) isEqual:HIDEReceiptID(HIDEGet(object,@"threadId"))];
}
BOOL HIDEAllowManualReadObject(id object) {
    if(HIDEManualScopeMatches(object))return YES;
    // MQTT may serialize later on another queue. Only a specific object created
    // during the eye action gets a short, immutable-payload permission.
    NSDictionary *permit=objc_getAssociatedObject(object,mqttContextKey);
    if(!permit)return NO;
    return [permit[@"snapshot"] isEqual:HIDEMQTTSnapshot(object)] &&
        HIDEDirectPermitUnexpired(NSProcessInfo.processInfo.systemUptime,[permit[@"issued"] doubleValue],[permit[@"expires"] doubleValue]);
}
typedef id (*HIDEMQTTInit)(id __attribute__((ns_consumed)),SEL,id,BOOL,id,long long,long long,long long,long long,long long,long long,id,BOOL,id,long long) __attribute__((ns_returns_retained));
static HIDEMQTTInit mqttInit;
static id __attribute__((ns_returns_retained)) hide_mqttInit(id __attribute__((ns_consumed)) object,SEL selector,id mark,BOOL state,id thread,long long action,long long sequence,long long threadFB,long long otherFB,long long actorFB,long long watermark,id titan,BOOL send,id ad,long long attempt) {
    id result=mqttInit(object,selector,mark,state,thread,action,sequence,threadFB,otherFB,actorFB,watermark,titan,send,ad,attempt);
    if(result && HIDEMQTTMatchesManualScope(result) && [mark isEqual:@"seen"]) {
        NSDictionary *snapshot=HIDEMQTTSnapshot(result);
        if(snapshot)objc_setAssociatedObject(result,mqttContextKey,HIDEMQTTPermit(snapshot),OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    }
    return result;
}
static void (*mqttSetRead)(id,SEL,BOOL);
static void hide_mqttSetRead(id object,SEL selector,BOOL value) {
    mqttSetRead(object,selector,value);
    if(HIDEMQTTMatchesManualScope(object) && [HIDEGet(object,@"mark") isEqual:@"seen"]) {
        NSDictionary *snapshot=HIDEMQTTSnapshot(object);
        if(snapshot)objc_setAssociatedObject(object,mqttContextKey,HIDEMQTTPermit(snapshot),OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    }
}
static void (*trackerMark)(id,SEL);
static void hide_trackerMark(id object,SEL selector) {
    if(!HIDEPref(kHideNoReadReceipts) || HIDEManualScopeMatches(object))trackerMark(object,selector);
}
static BOOL (*shouldUpdate)(id,SEL);
static BOOL hide_shouldUpdate(id object,SEL selector) {
    if(HIDEPref(kHideNoReadReceipts) && !HIDEManualScopeMatches(object))return NO;
    // Keep the native loaded-thread/spam/visibility checks for manual actions.
    return shouldUpdate(object,selector);
}
@interface HIDEReadEyeAction : NSObject
@property(nonatomic,weak) UIViewController *owner;
@end
@implementation HIDEReadEyeAction
- (void)pressed:(id)sender {
    UIViewController *owner=self.owner;NSString *thread=HIDEReceiptID(HIDEGet(owner,@"threadId"));
    if(!thread.length || !trackerMark || !HIDETrackerForOwner(owner)) {HIDEToast(HIDEL(@"FEATURE_UNAVAILABLE_SHORT"));return;}
    HIDEConfirm(HIDEL(@"MANUAL_SEEN_TITLE"),HIDEL(@"MANUAL_DM_CONFIRM"),HIDEL(@"MANUAL_SEEN_SEND"),^{
        id tracker=HIDETrackerForOwner(owner);
        if(!owner.view.window || ![thread isEqual:HIDEReceiptID(HIDEGet(owner,@"threadId"))] || !tracker ||
           !HIDEIntent([@"dm:" stringByAppendingString:thread],owner)) {HIDEToast(HIDEL(@"FEATURE_UNAVAILABLE_SHORT"));return;}
        HIDEPrepareOutgoingReadIntent(owner,tracker);
        void *savedOwner=manualOwner,*savedTracker=manualTracker;manualOwner=(__bridge void *)owner;manualTracker=(__bridge void *)tracker;
        @try{trackerMark(tracker,NSSelectorFromString(@"markLastMessageAsSeen"));}
        @finally{manualOwner=savedOwner;manualTracker=savedTracker;}
        HIDEToast(HIDEL(@"MANUAL_SEEN_REQUESTED"));
    });
}
@end
static void HIDEAttachEye(UIViewController *owner) {
    HIDEReadEyeAction *handler=objc_getAssociatedObject(owner,eyeKey);
    NSMutableArray *items=[owner.navigationItem.rightBarButtonItems mutableCopy] ?: [NSMutableArray array];
    NSIndexSet *old=[items indexesOfObjectsPassingTest:^BOOL(UIBarButtonItem *item,NSUInteger i,BOOL *stop){return [item.accessibilityIdentifier isEqual:@"hide.manual-read"];}];[items removeObjectsAtIndexes:old];
    if(HIDEPref(kHideNoReadReceipts) && trackerMark && shouldUpdate && HIDETrackerForOwner(owner)) {
        if(!handler){handler=[HIDEReadEyeAction new];handler.owner=owner;objc_setAssociatedObject(owner,eyeKey,handler,OBJC_ASSOCIATION_RETAIN_NONATOMIC);}
        UIBarButtonItem *eye=[[UIBarButtonItem alloc] initWithImage:[UIImage systemImageNamed:@"eye"] style:UIBarButtonItemStylePlain target:handler action:@selector(pressed:)];
        eye.accessibilityIdentifier=@"hide.manual-read";eye.accessibilityLabel=HIDEL(@"MANUAL_SEEN_SEND");[items addObject:eye];
    }
    owner.navigationItem.rightBarButtonItems=items;
}
static void (*threadAppear)(id,SEL,BOOL),(*threadNav)(id,SEL);
static void hide_threadAppear(UIViewController *o,SEL s,BOOL a){threadAppear(o,s,a);HIDEAttachEye(o);}
static void hide_threadNav(UIViewController *o,SEL s){threadNav(o,s);HIDEAttachEye(o);}
void HIDEInstallManualSeen(void){
    requestCopy=(HIDERequestCopy)HIDEHookChecked(@"IGURLRequest",NSSelectorFromString(@"copyWithZone:"),(IMP)hide_requestCopy,"@@:^v");
    network4=(void *)HIDEHookChecked(@"IGScopedNetworker",NSSelectorFromString(@"startAPIRequest:policy:successHandler:failureHandler:"),(IMP)hide_network4,"@@:@@@@");
    network7=(void *)HIDEHookChecked(@"IGScopedNetworker",NSSelectorFromString(@"startAPIRequest:policy:completionQueue:cacheHandler:parsingHandler:successHandler:failureHandler:"),(IMP)hide_network7,"@@:@@@@@@@");
    network10=(void *)HIDEHookChecked(@"IGScopedNetworker",NSSelectorFromString(@"startAPIRequest:policy:completionQueue:cacheHandler:bytesSentHandler:firstByteFlushedHandler:lastByteAckedHandler:parsingHandler:successHandler:failureHandler:"),(IMP)hide_network10,"@@:@@@@@@@@@@");
    if(HIDEIsVerifiedHostBuild()) {
        sendMessageUpdate=(void *)HIDEHookChecked(@"IGDirectOutgoingUpdateService",NSSelectorFromString(@"sendMessageUpdate:messageId:threadKey:originalMessageClientContext:sentDate:productType:foaS2SLogger:igdS2SLogger:isTAMMessage:isInstamadillo:isInstamadilloTTLC:"),(IMP)hide_sendMessageUpdate,"@@:@@@@@q@@BBB");
        trackerInit=(HIDETrackerInit)HIDEHookChecked(@"IGDirectThreadLastSeenMessageTracker",NSSelectorFromString(@"initWithThreadInfoProvider:dataSource:listAdapter:outgoingUpdateSender:scrollCoordinator:"),(IMP)hide_trackerInit,"@@:@@@@@");
        trackerMark=(void *)HIDEHookChecked(@"IGDirectThreadLastSeenMessageTracker",NSSelectorFromString(@"markLastMessageAsSeen"),(IMP)hide_trackerMark,"v@:");
        shouldUpdate=(void *)HIDEHookChecked(@"IGDirectThreadViewListAdapterDataSource",NSSelectorFromString(@"shouldUpdateLastSeenMessage"),(IMP)hide_shouldUpdate,"B@:");
        mqttInit=(HIDEMQTTInit)HIDEHookChecked(@"FBMQTTMarkThread",NSSelectorFromString(@"initWithMark:state:threadId:actionId:syncSeqId:threadFbId:otherUserFbId:actorFbId:watermarkTimestamp:titanOriginatedThreadId:shouldSendReadReceipt:adPageMessageType:attemptId:"),(IMP)hide_mqttInit,"@@:@B@qqqqqq@B@q");
        mqttSetRead=(void *)HIDEHookChecked(@"FBMQTTMarkThread",NSSelectorFromString(@"setShouldSendReadReceipt:"),(IMP)hide_mqttSetRead,"v@:B");
        threadAppear=(void *)HIDEHookChecked(@"IGDirectThreadViewController",@selector(viewDidAppear:),(IMP)hide_threadAppear,"v@:B");
        threadNav=(void *)HIDEHookChecked(@"IGDirectThreadViewController",NSSelectorFromString(@"updateThreadNavigationBar"),(IMP)hide_threadNav,"v@:");
    }
}
