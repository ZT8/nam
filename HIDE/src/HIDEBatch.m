// Selection, sequential saving, real progress/cancellation, photo/video merging.
#import "HIDECore.h"
#import "HIDEMediaPolicy.h"
#import <AVFoundation/AVFoundation.h>

static NSURL *HIDEBatchURL(NSString *kind) {
    return [[NSURL fileURLWithPath:NSTemporaryDirectory()] URLByAppendingPathComponent:
        [NSString stringWithFormat:@"HIDE_%@_%@.mp4",kind,NSUUID.UUID.UUIDString]];
}

// A still becomes an actual three-second H.264 clip, including image orientation.
static void HIDEStillClip(NSURL *file,BOOL (^cancelled)(void),void (^done)(NSURL *,NSError *)) {
    dispatch_async(dispatch_get_global_queue(QOS_CLASS_UTILITY,0), ^{
        UIImage *image=[UIImage imageWithContentsOfFile:file.path];
        HIDEFit fit;
        if (!image || !HIDEAspectFit(image.size.width,image.size.height,1080,1920,&fit)) { done(nil,[NSError errorWithDomain:@"HIDEMerge" code:1 userInfo:nil]);return; }
        NSURL *output=HIDEBatchURL(@"still");NSError *error=nil;
        AVAssetWriter *writer=[[AVAssetWriter alloc] initWithURL:output fileType:AVFileTypeMPEG4 error:&error];
        AVAssetWriterInput *input=[AVAssetWriterInput assetWriterInputWithMediaType:AVMediaTypeVideo outputSettings:@{AVVideoCodecKey:AVVideoCodecTypeH264,AVVideoWidthKey:@1080,AVVideoHeightKey:@1920}];
        input.expectsMediaDataInRealTime=NO;
        AVAssetWriterInputPixelBufferAdaptor *adaptor=[AVAssetWriterInputPixelBufferAdaptor assetWriterInputPixelBufferAdaptorWithAssetWriterInput:input sourcePixelBufferAttributes:@{(id)kCVPixelBufferPixelFormatTypeKey:@(kCVPixelFormatType_32ARGB),(id)kCVPixelBufferWidthKey:@1080,(id)kCVPixelBufferHeightKey:@1920,(id)kCVPixelBufferCGBitmapContextCompatibilityKey:@YES}];
        if (!writer || ![writer canAddInput:input]) { done(nil,error ?: [NSError errorWithDomain:@"HIDEMerge" code:2 userInfo:nil]);return; }
        [writer addInput:input];
        if (![writer startWriting]) { done(nil,writer.error);return; }
        [writer startSessionAtSourceTime:kCMTimeZero];
        CVPixelBufferRef pixel=NULL;
        CVReturn created=CVPixelBufferCreate(kCFAllocatorDefault,1080,1920,kCVPixelFormatType_32ARGB,(__bridge CFDictionaryRef)@{(id)kCVPixelBufferCGImageCompatibilityKey:@YES,(id)kCVPixelBufferCGBitmapContextCompatibilityKey:@YES},&pixel);
        if (created!=kCVReturnSuccess) { [writer cancelWriting];done(nil,[NSError errorWithDomain:@"HIDEMerge" code:3 userInfo:nil]);return; }
        CVPixelBufferLockBaseAddress(pixel,0);
        CGColorSpaceRef space=CGColorSpaceCreateDeviceRGB();
        CGContextRef context=CGBitmapContextCreate(CVPixelBufferGetBaseAddress(pixel),1080,1920,8,CVPixelBufferGetBytesPerRow(pixel),space,kCGImageAlphaNoneSkipFirst);
        CGColorSpaceRelease(space);
        if (!context) { CVPixelBufferUnlockBaseAddress(pixel,0);CVPixelBufferRelease(pixel);[writer cancelWriting];done(nil,[NSError errorWithDomain:@"HIDEMerge" code:4 userInfo:nil]);return; }
        CGContextSetRGBFillColor(context,0,0,0,1);CGContextFillRect(context,CGRectMake(0,0,1080,1920));
        CGContextTranslateCTM(context,0,1920);CGContextScaleCTM(context,1,-1);
        UIGraphicsPushContext(context);[image drawInRect:CGRectMake(fit.x,fit.y,fit.width,fit.height)];UIGraphicsPopContext();
        CGContextRelease(context);CVPixelBufferUnlockBaseAddress(pixel,0);
        dispatch_queue_t queue=dispatch_queue_create("HIDE.still-writer",DISPATCH_QUEUE_SERIAL);
        __block NSInteger frame=0;__block BOOL finished=NO;
        [input requestMediaDataWhenReadyOnQueue:queue usingBlock:^{
            if (finished) return;
            BOOL failed=NO;
            while (input.readyForMoreMediaData && frame<90) {
                if (cancelled()) break;
                if (![adaptor appendPixelBuffer:pixel withPresentationTime:CMTimeMake(frame,30)]) { failed=YES;break; }
                frame++;
            }
            if (cancelled() || failed || writer.status==AVAssetWriterStatusFailed || frame==90) {
                finished=YES;
                if(frame==90)[writer endSessionAtSourceTime:CMTimeMake(90,30)];
                [input markAsFinished];CVPixelBufferRelease(pixel);
                if (cancelled() || frame!=90) {
                    [writer cancelWriting];[NSFileManager.defaultManager removeItemAtURL:output error:nil];
                    done(nil,[NSError errorWithDomain:NSURLErrorDomain code:NSURLErrorCancelled userInfo:nil]);
                } else [writer finishWritingWithCompletionHandler:^{
                    if (writer.status==AVAssetWriterStatusCompleted) done(output,nil);
                    else { [NSFileManager.defaultManager removeItemAtURL:output error:nil];done(nil,writer.error); }
                }];
            }
        }];
    });
}

@interface HIDEBatchController : UITableViewController
@property(nonatomic,strong) NSArray<NSDictionary *> *items;
@property(nonatomic,strong) NSMutableIndexSet *selected;
@property(nonatomic,strong) NSMutableIndexSet *available;
@property(nonatomic,copy) NSString *stage;
@property(nonatomic,strong) NSArray<NSNumber *> *work;
@property(nonatomic,strong) NSMutableArray<NSURL *> *files;
@property(nonatomic,strong) NSMutableArray<NSURL *> *clips;
@property(nonatomic,strong) NSURLSessionDownloadTask *task;
@property(nonatomic,strong) AVAssetExportSession *exporter;
@property(nonatomic,strong) NSTimer *timer;
@property(nonatomic) NSUInteger next,saved;
@property(nonatomic) BOOL busy,merging,startedSingle;
@property(atomic) BOOL cancelled;
@end
@implementation HIDEBatchController
- (instancetype)initWithItems:(NSArray *)items {
    if ((self=[super initWithStyle:UITableViewStyleInsetGrouped])) {
        self.items=items;self.available=[NSMutableIndexSet indexSet];
        [items enumerateObjectsUsingBlock:^(NSDictionary *item,NSUInteger index,BOOL *stop){if([item[@"url"] isKindOfClass:NSURL.class])[self.available addIndex:index];}];
        self.selected=[self.available mutableCopy];
        self.files=[NSMutableArray array];self.clips=[NSMutableArray array];
    } return self;
}
- (void)viewDidLoad {
    [super viewDidLoad];self.title=HIDEL(@"SELECT_MEDIA");self.overrideUserInterfaceStyle=UIUserInterfaceStyleDark;
    self.tableView.backgroundColor=UIColor.systemBackgroundColor;
    self.navigationItem.leftBarButtonItem=[[UIBarButtonItem alloc] initWithBarButtonSystemItem:UIBarButtonSystemItemCancel target:self action:@selector(cancel)];
    self.navigationItem.rightBarButtonItem=[[UIBarButtonItem alloc] initWithTitle:HIDEL(@"SELECT_NONE") style:UIBarButtonItemStylePlain target:self action:@selector(toggleAll)];
    self.toolbarItems=@[
        [[UIBarButtonItem alloc] initWithTitle:HIDEL(@"DOWNLOAD_SELECTED") style:UIBarButtonItemStylePlain target:self action:@selector(download)],
        [[UIBarButtonItem alloc] initWithBarButtonSystemItem:UIBarButtonSystemItemFlexibleSpace target:nil action:nil],
        [[UIBarButtonItem alloc] initWithTitle:HIDEL(@"MERGE_SELECTED") style:UIBarButtonItemStylePlain target:self action:@selector(merge)]];
    self.navigationController.toolbarHidden=NO;[self updateSelection];
}
- (void)viewDidAppear:(BOOL)animated {
    [super viewDidAppear:animated];
    if(self.items.count==1 && !self.startedSingle){self.startedSingle=YES;[self start:NO];}
}
- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section { return self.items.count; }
- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)path {
    UITableViewCell *cell=[tableView dequeueReusableCellWithIdentifier:@"item"] ?: [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleDefault reuseIdentifier:@"item"];
    BOOL video=[self.items[path.row][@"video"] boolValue];
    cell.textLabel.text=[NSString stringWithFormat:@"%@ %ld",HIDEL(video ? @"VIDEO_ITEM" : @"PHOTO_ITEM"),(long)path.row+1];
    cell.imageView.image=[UIImage systemImageNamed:video ? @"video" : @"photo"];
    BOOL available=[self.available containsIndex:path.row];
    if(!available)cell.textLabel.text=[NSString stringWithFormat:@"%@ %ld",HIDEL(@"UNAVAILABLE_ITEM"),(long)path.row+1];
    cell.textLabel.textColor=available ? UIColor.labelColor : UIColor.secondaryLabelColor;
    cell.selectionStyle=available ? UITableViewCellSelectionStyleDefault : UITableViewCellSelectionStyleNone;
    cell.accessoryType=[self.selected containsIndex:path.row] ? UITableViewCellAccessoryCheckmark : UITableViewCellAccessoryNone;return cell;
}
- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)path {
    [tableView deselectRowAtIndexPath:path animated:YES];if(self.busy || ![self.available containsIndex:path.row])return;
    if ([self.selected containsIndex:path.row]) [self.selected removeIndex:path.row];else [self.selected addIndex:path.row];
    [tableView reloadRowsAtIndexPaths:@[path] withRowAnimation:UITableViewRowAnimationNone];[self updateSelection];
}
- (void)updateSelection {
    self.navigationItem.rightBarButtonItem.title=HIDEL(self.selected.count==self.available.count ? @"SELECT_NONE" : @"SELECT_ALL");
    self.navigationItem.rightBarButtonItem.enabled=!self.busy;
    for (UIBarButtonItem *item in self.toolbarItems) item.enabled=!self.busy && self.selected.count>0;
    if (!self.busy) self.navigationItem.prompt=[NSString stringWithFormat:HIDEL(@"SELECTED_COUNT"),(unsigned long)self.selected.count];
}
- (void)toggleAll {
    if (self.selected.count==self.available.count) [self.selected removeAllIndexes];else [self.selected addIndexes:self.available];
    [self.tableView reloadData];[self updateSelection];
}
- (void)download { [self begin:NO]; }
- (void)merge { [self begin:YES]; }
- (void)begin:(BOOL)merge {
    if (self.busy || !self.selected.count) return;
    if (merge) {
        UIAlertController *alert=[UIAlertController alertControllerWithTitle:HIDEL(@"MERGE_SELECTED") message:HIDEL(@"MERGE_HINT") preferredStyle:UIAlertControllerStyleAlert];
        [alert addAction:[UIAlertAction actionWithTitle:HIDEL(@"CONFIRM") style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) { [self start:YES]; }]];
        [alert addAction:[UIAlertAction actionWithTitle:HIDEL(@"CANCEL") style:UIAlertActionStyleCancel handler:nil]];[self presentViewController:alert animated:YES completion:nil];
    } else [self start:NO];
}
- (void)start:(BOOL)merge {
    NSMutableArray *work=[NSMutableArray array];[self.selected enumerateIndexesUsingBlock:^(NSUInteger index,BOOL *stop){[work addObject:@(index)];}];
    self.work=work;self.next=0;self.saved=0;self.cancelled=NO;self.busy=YES;self.merging=merge;[self updateSelection];
    __weak typeof(self) weakSelf=self;
    self.timer=[NSTimer scheduledTimerWithTimeInterval:0.25 repeats:YES block:^(NSTimer *timer){
        typeof(self) self=weakSelf;if(!self)return;
        if (self.exporter) self.navigationItem.prompt=[NSString stringWithFormat:@"%@ %.0f%%",HIDEL(@"MERGING"),100*self.exporter.progress];
        else if(self.task && self.task.progress.totalUnitCount>0) self.navigationItem.prompt=[NSString stringWithFormat:@"%lu/%lu · %.0f%%",(unsigned long)self.next,(unsigned long)self.work.count,100*self.task.progress.fractionCompleted];
        else self.navigationItem.prompt=self.stage ?: HIDEL(@"DOWNLOADING");
    }];
    [self fetchNext];
}
- (void)fetchNext {
    if (self.cancelled) { [self finish:NO];return; }
    if (self.next==self.work.count) { if(self.merging)[self prepareClip:0];else[self finish:YES];return; }
    NSDictionary *item=self.items[self.work[self.next].unsignedIntegerValue];
    self.stage=HIDEL(@"DOWNLOADING");
    self.task=HIDEFetchFile(item[@"url"],[item[@"video"] boolValue] ? @"video" : @"image",^(NSURL *file,NSError *error){
        self.task=nil;
        if (self.cancelled) { if(file)[NSFileManager.defaultManager removeItemAtURL:file error:nil];[self finish:NO];return; }
        if (!file || error) { [self finish:NO];return; }
        self.next++;
        if (self.merging) { [self.files addObject:file];[self fetchNext]; }
        else { self.stage=HIDEL(@"SAVING_MEDIA");HIDESaveDownloadedFile(file,[item[@"video"] boolValue],self.work.count==1 && HIDEPref(kHideShareAfterSave),^(BOOL saved){
            if (saved) self.saved++;
            if (saved && !self.cancelled) [self fetchNext];else [self finish:NO];
        }); }
    });
}
- (void)prepareClip:(NSUInteger)index {
    if (self.cancelled) { [self finish:NO];return; }
    if (index==self.files.count) { [self compose];return; }
    NSDictionary *item=self.items[self.work[index].unsignedIntegerValue];
    if ([item[@"video"] boolValue]) { [self.clips addObject:self.files[index]];[self prepareClip:index+1];return; }
    self.stage=HIDEL(@"PREPARING_PHOTOS");self.navigationItem.prompt=self.stage;
    HIDEStillClip(self.files[index],^BOOL{return self.cancelled;},^(NSURL *clip,NSError *error){
        dispatch_async(dispatch_get_main_queue(),^{
            if(clip)[self.clips addObject:clip];
            if(!clip || self.cancelled)[self finish:NO];else[self prepareClip:index+1];
        });
    });
}
- (void)compose {
    self.stage=HIDEL(@"MERGING");self.navigationItem.prompt=self.stage;
    dispatch_async(dispatch_get_global_queue(QOS_CLASS_UTILITY,0),^{
        AVMutableComposition *composition=[AVMutableComposition composition];
        AVMutableCompositionTrack *video=[composition addMutableTrackWithMediaType:AVMediaTypeVideo preferredTrackID:kCMPersistentTrackID_Invalid];
        AVMutableCompositionTrack *audio=[composition addMutableTrackWithMediaType:AVMediaTypeAudio preferredTrackID:kCMPersistentTrackID_Invalid];
        NSMutableArray *instructions=[NSMutableArray array];CMTime cursor=kCMTimeZero;BOOL valid=YES;
        for (NSURL *file in self.clips) {
            if(self.cancelled){valid=NO;break;}
            AVURLAsset *asset=[AVURLAsset URLAssetWithURL:file options:nil];AVAssetTrack *source=[asset tracksWithMediaType:AVMediaTypeVideo].firstObject;
            CMTime start=source ? source.timeRange.start : kCMTimeZero;
            CMTime end=source ? CMTimeMinimum(asset.duration,CMTimeRangeGetEnd(source.timeRange)) : kCMTimeZero;
            CMTime duration=CMTimeSubtract(end,start);double seconds=CMTimeGetSeconds(duration);NSError *error=nil;
            if(!source || !isfinite(seconds) || seconds<=0){valid=NO;break;}
            CMTimeRange range=CMTimeRangeMake(start,duration);
            if(![video insertTimeRange:range ofTrack:source atTime:cursor error:&error]){valid=NO;break;}
            AVAssetTrack *sound=[asset tracksWithMediaType:AVMediaTypeAudio].firstObject;
            if(sound) {
                CMTimeRange audioRange=CMTimeRangeGetIntersection(range,sound.timeRange);
                if(CMTIME_IS_NUMERIC(audioRange.duration) && CMTimeCompare(audioRange.duration,kCMTimeZero)>0 &&
                   ![audio insertTimeRange:audioRange ofTrack:sound atTime:CMTimeAdd(cursor,CMTimeSubtract(audioRange.start,start)) error:&error]) {valid=NO;break;}
            }
            CGRect bounds=CGRectApplyAffineTransform((CGRect){CGPointZero,source.naturalSize},source.preferredTransform);HIDEFit fit;
            if(!HIDEAspectFit(fabs(bounds.size.width),fabs(bounds.size.height),1080,1920,&fit)){valid=NO;break;}
            CGAffineTransform transform=CGAffineTransformConcat(source.preferredTransform,CGAffineTransformMakeTranslation(-bounds.origin.x,-bounds.origin.y));
            transform=CGAffineTransformConcat(transform,CGAffineTransformMakeScale(fit.scale,fit.scale));
            transform=CGAffineTransformConcat(transform,CGAffineTransformMakeTranslation(fit.x,fit.y));
            AVMutableVideoCompositionLayerInstruction *layer=[AVMutableVideoCompositionLayerInstruction videoCompositionLayerInstructionWithAssetTrack:video];[layer setTransform:transform atTime:cursor];
            AVMutableVideoCompositionInstruction *instruction=[AVMutableVideoCompositionInstruction videoCompositionInstruction];instruction.timeRange=CMTimeRangeMake(cursor,duration);instruction.layerInstructions=@[layer];[instructions addObject:instruction];cursor=CMTimeAdd(cursor,duration);
        }
        if(!valid || self.cancelled){dispatch_async(dispatch_get_main_queue(),^{[self finish:NO];});return;}
        AVMutableVideoComposition *render=[AVMutableVideoComposition videoComposition];render.renderSize=CGSizeMake(1080,1920);render.frameDuration=CMTimeMake(1,30);render.instructions=instructions;
        AVAssetExportSession *exporter=[[AVAssetExportSession alloc] initWithAsset:composition presetName:AVAssetExportPresetHighestQuality];
        NSURL *output=HIDEBatchURL(@"merged");
        if(!exporter || ![exporter.supportedFileTypes containsObject:AVFileTypeMPEG4]){dispatch_async(dispatch_get_main_queue(),^{[self finish:NO];});return;}
        exporter.outputURL=output;exporter.outputFileType=AVFileTypeMPEG4;exporter.videoComposition=render;
        dispatch_async(dispatch_get_main_queue(),^{
            if(self.cancelled){[self finish:NO];return;}
            self.exporter=exporter;[self.files addObject:output];
            [exporter exportAsynchronouslyWithCompletionHandler:^{dispatch_async(dispatch_get_main_queue(),^{
                self.exporter=nil;
                if(self.cancelled || exporter.status!=AVAssetExportSessionStatusCompleted){[self finish:NO];return;}
                HIDESaveDownloadedFile(output,YES,HIDEPref(kHideShareAfterSave),^(BOOL saved){
                    // Photos/share now owns this output's lifetime.
                    [self.files removeObject:output];self.saved=saved ? 1 : 0;[self finish:saved];
                });
            });}];
        });
    });
}
- (void)finish:(BOOL)success {
    [self.timer invalidate];self.timer=nil;self.task=nil;self.exporter=nil;
    for (NSURL *file in self.files) [NSFileManager.defaultManager removeItemAtURL:file error:nil];
    for (NSURL *file in self.clips) [NSFileManager.defaultManager removeItemAtURL:file error:nil];
    [self.files removeAllObjects];[self.clips removeAllObjects];self.busy=NO;[self updateSelection];
    if(self.cancelled)return;
    NSString *message=success ? [NSString stringWithFormat:HIDEL(@"BATCH_SAVED"),(unsigned long)self.saved] : [NSString stringWithFormat:HIDEL(@"BATCH_FAILED"),(unsigned long)self.saved];
    if(self.navigationController.presentedViewController || self.presentedViewController) { HIDEToast(message);return; }
    UIAlertController *alert=[UIAlertController alertControllerWithTitle:@"HIDE" message:message preferredStyle:UIAlertControllerStyleAlert];
    [alert addAction:[UIAlertAction actionWithTitle:HIDEL(@"OK") style:UIAlertActionStyleCancel handler:nil]];[self presentViewController:alert animated:YES completion:nil];
}
- (void)cancel {
    self.cancelled=YES;[self.timer invalidate];self.timer=nil;[self.task cancel];[self.exporter cancelExport];
    [self dismissViewControllerAnimated:YES completion:nil];
}
@end
void HIDEPresentBatch(NSArray<NSDictionary *> *items) {
    BOOL available=NO;for(NSDictionary *item in items)if([item[@"url"] isKindOfClass:NSURL.class]){available=YES;break;}
    if(!available){HIDEToast(HIDEL(@"NO_MEDIA"));return;}
    UINavigationController *navigation=[[UINavigationController alloc] initWithRootViewController:[[HIDEBatchController alloc] initWithItems:items]];
    navigation.modalPresentationStyle=UIModalPresentationFormSheet;navigation.overrideUserInterfaceStyle=UIUserInterfaceStyleDark;
    [HIDETopViewController() presentViewController:navigation animated:YES completion:nil];
}
