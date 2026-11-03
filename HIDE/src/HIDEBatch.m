// Approved gallery design, native selection/saving and independent thumbnails.
#import "HIDECore.h"
#import "HIDEDesignData.h"
#import <WebKit/WebKit.h>
#import <AVFoundation/AVFoundation.h>
#import <ImageIO/ImageIO.h>

@interface HIDEGalleryController : UIViewController <WKScriptMessageHandler,WKNavigationDelegate>
@property(nonatomic,strong) NSArray<NSDictionary *> *items;
@property(nonatomic,strong) NSMutableIndexSet *selected;
@property(nonatomic,strong) WKWebView *web;
@property(nonatomic,strong) NSURLSession *session;
@property(nonatomic,strong) NSOperationQueue *previewQueue;
@property(nonatomic,strong) NSMutableArray<AVAssetImageGenerator *> *generators;
@property(nonatomic,strong) NSURLSessionDownloadTask *task;
@property(nonatomic,strong) NSTimer *timer;
@property(nonatomic,strong) NSArray<NSNumber *> *work;
@property(nonatomic,copy) NSString *status;
@property(nonatomic) NSUInteger saved,next;
@property(nonatomic) BOOL busy,ready;
@property(atomic) BOOL closed;
@end
@interface HIDEGalleryWeakHandler : NSObject <WKScriptMessageHandler>
@property(nonatomic,weak) HIDEGalleryController *owner;
@end
@implementation HIDEGalleryWeakHandler
- (void)userContentController:(WKUserContentController *)c didReceiveScriptMessage:(WKScriptMessage *)m {[self.owner userContentController:c didReceiveScriptMessage:m];}
@end
@implementation HIDEGalleryController
- (void)viewDidLoad {
    [super viewDidLoad];self.view.backgroundColor=[UIColor colorWithRed:.04 green:.04 blue:.1 alpha:1];
    self.selected=[NSMutableIndexSet indexSet];
    [self.items enumerateObjectsUsingBlock:^(NSDictionary *item,NSUInteger index,BOOL *stop){if([item[@"url"] isKindOfClass:NSURL.class])[self.selected addIndex:index];}];
    self.generators=[NSMutableArray array];self.previewQueue=[NSOperationQueue new];self.previewQueue.maxConcurrentOperationCount=2;
    NSURLSessionConfiguration *network=NSURLSessionConfiguration.ephemeralSessionConfiguration;network.timeoutIntervalForRequest=15;network.HTTPMaximumConnectionsPerHost=4;
    self.session=[NSURLSession sessionWithConfiguration:network];
    WKWebViewConfiguration *config=[WKWebViewConfiguration new];config.websiteDataStore=WKWebsiteDataStore.nonPersistentDataStore;
    HIDEGalleryWeakHandler *handler=[HIDEGalleryWeakHandler new];handler.owner=self;[config.userContentController addScriptMessageHandler:handler name:@"hideGallery"];
    self.web=[[WKWebView alloc] initWithFrame:CGRectZero configuration:config];self.web.navigationDelegate=self;self.web.opaque=NO;self.web.alpha=0;self.web.translatesAutoresizingMaskIntoConstraints=NO;
    self.web.scrollView.contentInsetAdjustmentBehavior=UIScrollViewContentInsetAdjustmentNever;[self.view addSubview:self.web];
    UILayoutGuide *safe=self.view.safeAreaLayoutGuide;
    [NSLayoutConstraint activateConstraints:@[[self.web.topAnchor constraintEqualToAnchor:safe.topAnchor],[self.web.bottomAnchor constraintEqualToAnchor:safe.bottomAnchor],[self.web.leadingAnchor constraintEqualToAnchor:safe.leadingAnchor],[self.web.trailingAnchor constraintEqualToAnchor:safe.trailingAnchor]]];
    NSString *html=[[NSString alloc] initWithBytes:HIDEGalleryHTML length:sizeof(HIDEGalleryHTML) encoding:NSUTF8StringEncoding];
    [self.web loadHTMLString:html baseURL:nil];
}
- (UIStatusBarStyle)preferredStatusBarStyle{return UIStatusBarStyleLightContent;}
- (BOOL)accessibilityPerformEscape{[self close];return YES;}
- (void)sync {
    if(!self.ready || self.closed)return;
    NSMutableArray *items=[NSMutableArray array],*selected=[NSMutableArray array];
    for(NSDictionary *item in self.items)[items addObject:@{@"video":@([item[@"video"] boolValue]),@"available":@([item[@"url"] isKindOfClass:NSURL.class])}];
    [self.selected enumerateIndexesUsingBlock:^(NSUInteger index,BOOL *stop){[selected addObject:@(index)];}];
    double fraction=self.task.progress.totalUnitCount>0 ? self.task.progress.fractionCompleted : 0;
    double progress=self.work.count ? MIN(.99,(self.next+fraction)/self.work.count) : 0;
    NSDictionary *state=@{@"items":items,@"selected":selected,@"busy":@(self.busy),@"progress":@(progress),@"status":self.status ?: @""};
    NSString *json=[[NSString alloc] initWithData:[NSJSONSerialization dataWithJSONObject:state options:0 error:nil] encoding:NSUTF8StringEncoding];
    [self.web evaluateJavaScript:[NSString stringWithFormat:@"HIDEGalleryState(%@)",json] completionHandler:nil];
}
- (void)webView:(WKWebView *)web didFinishNavigation:(WKNavigation *)navigation {
    self.ready=YES;[self sync];self.web.alpha=1;
    for(NSUInteger i=0;i<self.items.count;i++)[self loadThumbnail:i];
}
- (void)webView:(WKWebView *)web decidePolicyForNavigationAction:(WKNavigationAction *)action decisionHandler:(void (^)(WKNavigationActionPolicy))decision {
    decision([action.request.URL.absoluteString isEqualToString:@"about:blank"] ? WKNavigationActionPolicyAllow : WKNavigationActionPolicyCancel);
}
- (void)userContentController:(WKUserContentController *)c didReceiveScriptMessage:(WKScriptMessage *)m {
    if(m.webView!=self.web || !m.frameInfo.isMainFrame || ![m.body isKindOfClass:NSDictionary.class])return;
    NSString *action=m.body[@"action"];if(![action isKindOfClass:NSString.class])return;
    if([action isEqualToString:@"close"]){[self close];return;}
    if(self.busy)return;
    if([action isEqualToString:@"select"]) {
        NSNumber *index=m.body[@"index"];if(![index isKindOfClass:NSNumber.class] || index.integerValue<0 || index.unsignedIntegerValue>=self.items.count)return;
        NSUInteger i=index.unsignedIntegerValue;if(![self.items[i][@"url"] isKindOfClass:NSURL.class])return;
        if([self.selected containsIndex:i])[self.selected removeIndex:i];else[self.selected addIndex:i];
    } else if([action isEqualToString:@"all"]) {
        NSMutableIndexSet *available=[NSMutableIndexSet indexSet];[self.items enumerateObjectsUsingBlock:^(NSDictionary *item,NSUInteger i,BOOL *stop){if([item[@"url"] isKindOfClass:NSURL.class])[available addIndex:i];}];
        if([self.selected isEqualToIndexSet:available])[self.selected removeAllIndexes];else self.selected=available;
    } else if([action isEqualToString:@"download"]){[self start];return;}else return;
    [self sync];
}
- (void)start {
    if(!self.selected.count)return;
    NSMutableArray *work=[NSMutableArray array];[self.selected enumerateIndexesUsingBlock:^(NSUInteger i,BOOL *stop){[work addObject:@(i)];}];
    self.work=work;self.next=0;self.saved=0;self.busy=YES;self.status=HIDEL(@"DOWNLOADING");
    __weak typeof(self) weak=self;self.timer=[NSTimer scheduledTimerWithTimeInterval:.25 repeats:YES block:^(NSTimer *timer){[weak sync];}];
    [self fetchNext];
}
- (void)fetchNext {
    if(self.closed)return;
    if(self.next==self.work.count){[self finish:YES];return;}
    NSDictionary *item=self.items[self.work[self.next].unsignedIntegerValue];
    __weak typeof(self) weak=self;
    self.task=HIDEFetchFile(item[@"url"],[item[@"video"] boolValue] ? @"video" : @"image",^(NSURL *file,NSError *error){
        typeof(self) self=weak;if(!self || self.closed){if(file)[NSFileManager.defaultManager removeItemAtURL:file error:nil];return;}
        self.task=nil;if(!file || error){[self finish:NO];return;}
        self.status=HIDEL(@"SAVING_MEDIA");[self sync];
        HIDESaveDownloadedFile(file,[item[@"video"] boolValue],self.work.count==1 && HIDEPref(kHideShareAfterSave),^(BOOL saved){
            if(self.closed)return;
            if(!saved){[self finish:NO];return;}
            self.saved++;self.next++;self.status=HIDEL(@"DOWNLOADING");[self fetchNext];
        });
    });[self sync];
}
- (void)finish:(BOOL)success {
    [self.timer invalidate];self.timer=nil;self.task=nil;self.busy=NO;
    self.status=[NSString stringWithFormat:HIDEL(success ? @"BATCH_SAVED" : @"BATCH_FAILED"),(unsigned long)self.saved];[self sync];
}
- (void)publishThumbnail:(NSData *)jpeg index:(NSUInteger)index {
    if(!jpeg.length)return;NSString *image=[@"data:image/jpeg;base64," stringByAppendingString:[jpeg base64EncodedStringWithOptions:0]];
    dispatch_async(dispatch_get_main_queue(),^{if(self.closed)return;
        NSString *json=[[NSString alloc] initWithData:[NSJSONSerialization dataWithJSONObject:@[image] options:0 error:nil] encoding:NSUTF8StringEncoding];
        [self.web evaluateJavaScript:[NSString stringWithFormat:@"HIDEGalleryThumbnail(%lu,%@[0])",(unsigned long)index,json] completionHandler:nil];
    });
}
- (NSData *)thumbnailData:(NSData *)data {
    if(!data.length || data.length>16*1024*1024)return nil;
    CGImageSourceRef source=CGImageSourceCreateWithData((__bridge CFDataRef)data,NULL);if(!source)return nil;
    CGImageRef small=CGImageSourceCreateThumbnailAtIndex(source,0,(__bridge CFDictionaryRef)@{(id)kCGImageSourceCreateThumbnailFromImageAlways:@YES,(id)kCGImageSourceCreateThumbnailWithTransform:@YES,(id)kCGImageSourceThumbnailMaxPixelSize:@240});
    CFRelease(source);if(!small)return nil;UIImage *image=[UIImage imageWithCGImage:small];CGImageRelease(small);return UIImageJPEGRepresentation(image,.8);
}
- (void)videoFrame:(NSUInteger)index {
    NSURL *url=self.items[index][@"url"];if(!url || self.closed)return;
    __weak typeof(self) weak=self;
    [self.previewQueue addOperationWithBlock:^{
        typeof(self) self=weak;if(!self || self.closed)return;
        AVAssetImageGenerator *generator=[AVAssetImageGenerator assetImageGeneratorWithAsset:[AVURLAsset URLAssetWithURL:url options:nil]];
        generator.appliesPreferredTrackTransform=YES;generator.maximumSize=CGSizeMake(240,320);
        @synchronized(self.generators){[self.generators addObject:generator];}
        dispatch_semaphore_t completed=dispatch_semaphore_create(0);
        [generator generateCGImagesAsynchronouslyForTimes:@[[NSValue valueWithCMTime:CMTimeMakeWithSeconds(1,600)]] completionHandler:^(CMTime requested,CGImageRef image,CMTime actual,AVAssetImageGeneratorResult result,NSError *error){
            if(image && result==AVAssetImageGeneratorSucceeded && !self.closed)[self publishThumbnail:UIImageJPEGRepresentation([UIImage imageWithCGImage:image],.8) index:index];
            dispatch_semaphore_signal(completed);
        }];
        if(dispatch_semaphore_wait(completed,dispatch_time(DISPATCH_TIME_NOW,20*NSEC_PER_SEC)))[generator cancelAllCGImageGeneration];
        @synchronized(self.generators){[self.generators removeObject:generator];}
    }];
}
- (void)loadThumbnail:(NSUInteger)index {
    NSDictionary *item=self.items[index];BOOL video=[item[@"video"] boolValue];
    NSURL *url=item[@"thumbnailURL"] ?: (video ? nil : item[@"url"]);
    if(![url isKindOfClass:NSURL.class]){if(video)[self videoFrame:index];return;}
    __weak typeof(self) weak=self;
    [[self.session downloadTaskWithURL:url completionHandler:^(NSURL *file,NSURLResponse *response,NSError *error){
        typeof(self) self=weak;if(!self || self.closed)return;
        NSInteger status=[response isKindOfClass:NSHTTPURLResponse.class] ? [(NSHTTPURLResponse *)response statusCode] : 0;
        NSNumber *size=nil;if(file)[file getResourceValue:&size forKey:NSURLFileSizeKey error:nil];
        NSData *data=(!error && file && size && size.unsignedLongLongValue<=16*1024*1024) ? [NSData dataWithContentsOfURL:file options:NSDataReadingMappedIfSafe error:nil] : nil;
        NSData *jpeg=(!error && status>=200 && status<300) ? [self thumbnailData:data] : nil;
        if(jpeg)[self publishThumbnail:jpeg index:index];else if(video)[self videoFrame:index];
    }] resume];
}
- (void)close {
    self.closed=YES;[self.timer invalidate];self.timer=nil;[self.task cancel];[self.session invalidateAndCancel];[self.previewQueue cancelAllOperations];
    @synchronized(self.generators){for(AVAssetImageGenerator *g in self.generators)[g cancelAllCGImageGeneration];}
    [self dismissViewControllerAnimated:YES completion:nil];
}
- (void)dealloc {[self.timer invalidate];[self.session invalidateAndCancel];[self.previewQueue cancelAllOperations];}
@end
void HIDEPresentBatch(NSArray<NSDictionary *> *items) {
    BOOL available=NO;for(NSDictionary *item in items)if([item[@"url"] isKindOfClass:NSURL.class]){available=YES;break;}
    if(!available){HIDEToast(HIDEL(@"NO_MEDIA"));return;}
    if(items.count==1){NSDictionary *item=items.firstObject;HIDEToast(HIDEL(@"DOWNLOADING"));
        HIDEFetchFile(item[@"url"],[item[@"video"] boolValue]?@"video":@"image",^(NSURL *file,NSError *error){if(file)HIDESaveDownloadedFile(file,[item[@"video"] boolValue],HIDEPref(kHideShareAfterSave),^(BOOL saved){HIDEToast(HIDEL(saved?@"SAVED":@"SAVE_FAILED"));});else HIDEToast(HIDEL(@"SAVE_FAILED"));});return;}
    HIDEGalleryController *controller=[HIDEGalleryController new];controller.items=items;controller.modalPresentationStyle=UIModalPresentationFullScreen;controller.overrideUserInterfaceStyle=UIUserInterfaceStyleDark;
    [HIDETopViewController() presentViewController:controller animated:YES completion:nil];
}
