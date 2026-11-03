// Files/Photos -> verified AAC audio -> user confirmation -> native Direct sender.
#import "HIDECore.h"
#import <AVFoundation/AVFoundation.h>
#import <AudioToolbox/AudioToolbox.h>
#import <PhotosUI/PhotosUI.h>
#import <UniformTypeIdentifiers/UniformTypeIdentifiers.h>
#import <math.h>
#import "HIDEMediaPolicy.h"

static const void *voiceImporterKey=&voiceImporterKey, *voiceImportGestureKey=&voiceImportGestureKey;
static NSString *HIDEVoiceSender5(void) { return @"voiceRecordViewController:didRecordAudioClipWithURL:waveform:duration:entryPoint:"; }
static NSString *HIDEVoiceSender6(void) { return [HIDEVoiceSender5() stringByAppendingString:@"sendButtonTypeTapped:"]; }
static id HIDEVoiceSender(UIViewController *thread) {
    if (HIDECanCall(thread,NSSelectorFromString(HIDEVoiceSender5()),"v@:@@@dq") ||
        HIDECanCall(thread,NSSelectorFromString(HIDEVoiceSender6()),"v@:@@@dqq")) return thread;
    id context=HIDEGet(thread,@"threadViewControllerContext") ?: HIDEIvar(thread,"_threadViewControllerContext");
    id controller=HIDEGet(context,@"voiceController");
    return HIDECanCall(controller,NSSelectorFromString(HIDEVoiceSender6()),"v@:@@@dqq") ? controller : nil;
}
BOOL HIDEVoiceImportSupported(UIViewController *thread) {
    return thread && HIDEVoiceSender(thread) && NSClassFromString(@"IGDirectAudioWaveform");
}
static NSURL *HIDEVoiceImportDirectory(void) {
    NSURL *cache=[NSFileManager.defaultManager URLsForDirectory:NSCachesDirectory inDomains:NSUserDomainMask].firstObject;
    NSURL *directory=[cache URLByAppendingPathComponent:@"HIDEVoiceImports" isDirectory:YES];
    NSError *error=nil;
    if (![NSFileManager.defaultManager createDirectoryAtURL:directory withIntermediateDirectories:YES attributes:@{NSFileProtectionKey:NSFileProtectionComplete} error:&error]) return nil;
    return directory;
}
static void HIDEPruneVoiceImports(void) {
    NSURL *directory=HIDEVoiceImportDirectory(); if (!directory) return;
    NSArray *files=[NSFileManager.defaultManager contentsOfDirectoryAtURL:directory includingPropertiesForKeys:@[NSURLContentModificationDateKey] options:0 error:nil];
    for (NSURL *file in files) {
        NSDate *date=nil; [file getResourceValue:&date forKey:NSURLContentModificationDateKey error:nil];
        if ([file.lastPathComponent hasPrefix:@"HIDE_voice_"] && date && -date.timeIntervalSinceNow>86400)
            [NSFileManager.defaultManager removeItemAtURL:file error:nil];
    }
}

// PCM-derived 100ms RMS levels, rather than a fabricated waveform.
static NSArray<NSNumber *> *HIDEAudioLevels(NSURL *file) {
    AVURLAsset *asset=[AVURLAsset URLAssetWithURL:file options:nil];
    AVAssetTrack *track=[asset tracksWithMediaType:AVMediaTypeAudio].firstObject;
    if (!track) return nil;
    NSError *error=nil; AVAssetReader *reader=[[AVAssetReader alloc] initWithAsset:asset error:&error];
    if (!reader) return nil;
    NSDictionary *settings=@{AVFormatIDKey:@(kAudioFormatLinearPCM),AVSampleRateKey:@8000,AVNumberOfChannelsKey:@1,
        AVLinearPCMBitDepthKey:@16,AVLinearPCMIsFloatKey:@NO,AVLinearPCMIsBigEndianKey:@NO,AVLinearPCMIsNonInterleaved:@NO};
    AVAssetReaderTrackOutput *output=[[AVAssetReaderTrackOutput alloc] initWithTrack:track outputSettings:settings];
    if (![reader canAddOutput:output]) return nil; [reader addOutput:output];
    if (![reader startReading]) return nil;
    NSMutableArray *levels=[NSMutableArray array]; double squares=0; NSUInteger samples=0;
    while (reader.status==AVAssetReaderStatusReading) {
        CMSampleBufferRef buffer=[output copyNextSampleBuffer]; if (!buffer) break;
        CMBlockBufferRef block=CMSampleBufferGetDataBuffer(buffer); size_t length=block ? CMBlockBufferGetDataLength(block) : 0;
        NSMutableData *data=[NSMutableData dataWithLength:length];
        if (length && CMBlockBufferCopyDataBytes(block,0,length,data.mutableBytes)==kCMBlockBufferNoErr) {
            const int16_t *values=data.bytes;
            for (size_t i=0;i<length/sizeof(int16_t);i++) {
                double value=(double)values[i]/32768.0; squares+=value*value; samples++;
                if (samples==800) { [levels addObject:@(sqrt(squares/samples))]; squares=0;samples=0; }
            }
        }
        CFRelease(buffer);
    }
    if (samples) [levels addObject:@(sqrt(squares/samples))];
    return reader.status==AVAssetReaderStatusCompleted && levels.count ? levels : nil;
}

@interface HIDEVoiceImporter : NSObject <UIDocumentPickerDelegate,PHPickerViewControllerDelegate>
@property(nonatomic,weak) UIViewController *thread;
@property(nonatomic,strong) NSURL *source;
@property(nonatomic,strong) NSURL *audio;
@property(nonatomic,strong) AVAssetExportSession *exporter;
@property(nonatomic,strong) UIAlertController *progress;
@property(atomic) BOOL cancelled;
- (void)chooseSource;
@end
@implementation HIDEVoiceImporter
- (void)finishKeepingAudio:(BOOL)keep {
    if (self.source) [NSFileManager.defaultManager removeItemAtURL:self.source error:nil];
    if (!keep && self.audio) [NSFileManager.defaultManager removeItemAtURL:self.audio error:nil];
    if (self.progress.presentingViewController) [self.progress dismissViewControllerAnimated:YES completion:nil];
    self.progress=nil;self.exporter=nil;
    if (objc_getAssociatedObject(self.thread,voiceImporterKey)==self)
        objc_setAssociatedObject(self.thread,voiceImporterKey,nil,OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}
- (void)fail:(NSString *)message {
    dispatch_async(dispatch_get_main_queue(), ^{ [self finishKeepingAudio:NO]; if(!self.cancelled)HIDEToast(message); });
}
- (void)chooseSource {
    UIAlertController *menu=[UIAlertController alertControllerWithTitle:HIDEL(@"VOICE_IMPORT") message:HIDEL(@"VOICE_IMPORT_HINT") preferredStyle:UIAlertControllerStyleAlert];
    [menu addAction:[UIAlertAction actionWithTitle:HIDEL(@"FROM_FILES") style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
        UIDocumentPickerViewController *picker=[[UIDocumentPickerViewController alloc] initForOpeningContentTypes:@[UTTypeAudio,UTTypeMovie] asCopy:YES];
        picker.allowsMultipleSelection=NO;picker.delegate=self;[HIDETopViewController() presentViewController:picker animated:YES completion:nil];
    }]];
    [menu addAction:[UIAlertAction actionWithTitle:HIDEL(@"FROM_PHOTOS") style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
        PHPickerConfiguration *configuration=[PHPickerConfiguration new];configuration.filter=PHPickerFilter.videosFilter;configuration.selectionLimit=1;
        PHPickerViewController *picker=[[PHPickerViewController alloc] initWithConfiguration:configuration];picker.delegate=self;
        [HIDETopViewController() presentViewController:picker animated:YES completion:nil];
    }]];
    [menu addAction:[UIAlertAction actionWithTitle:HIDEL(@"CANCEL") style:UIAlertActionStyleCancel handler:^(UIAlertAction *action) { [self finishKeepingAudio:NO]; }]];
    [HIDETopViewController() presentViewController:menu animated:YES completion:nil];
}
- (NSURL *)copySource:(NSURL *)source {
    NSURL *directory=HIDEVoiceImportDirectory(); if (!directory) return nil;
    NSString *extension=source.pathExtension.length ? source.pathExtension : @"media";
    NSURL *copy=[directory URLByAppendingPathComponent:[NSString stringWithFormat:@"HIDE_voice_source_%@.%@",NSUUID.UUID.UUIDString,extension]];
    BOOL scoped=[source startAccessingSecurityScopedResource]; NSError *error=nil;
    BOOL ok=[NSFileManager.defaultManager copyItemAtURL:source toURL:copy error:&error];
    if (scoped) [source stopAccessingSecurityScopedResource];
    return ok ? copy : nil;
}
- (void)documentPickerWasCancelled:(UIDocumentPickerViewController *)controller { [self finishKeepingAudio:NO]; }
- (void)documentPicker:(UIDocumentPickerViewController *)controller didPickDocumentsAtURLs:(NSArray<NSURL *> *)urls {
    NSURL *source=urls.firstObject;
    if (!source) { [self finishKeepingAudio:NO]; return; }
    // Keep the provider URL valid until its copy completes.
    [controller dismissViewControllerAnimated:YES completion:^{
        dispatch_async(dispatch_get_global_queue(QOS_CLASS_UTILITY,0), ^{
            NSURL *copy=[self copySource:source];
            dispatch_async(dispatch_get_main_queue(), ^{ if (copy) [self convert:copy]; else [self fail:HIDEL(@"ERROR")]; });
        });
    }];
}
- (void)picker:(PHPickerViewController *)picker didFinishPicking:(NSArray<PHPickerResult *> *)results {
    [picker dismissViewControllerAnimated:YES completion:^{
        NSItemProvider *provider=results.firstObject.itemProvider;
        if (!provider) { [self finishKeepingAudio:NO]; return; }
        [provider loadFileRepresentationForTypeIdentifier:UTTypeMovie.identifier completionHandler:^(NSURL *url,NSError *error) {
            // File-representation URLs expire as soon as this completion returns.
            NSURL *copy=url ? [self copySource:url] : nil;
            dispatch_async(dispatch_get_main_queue(), ^{ if (copy) [self convert:copy]; else [self fail:HIDEL(@"ERROR")]; });
        }];
    }];
}
- (void)convert:(NSURL *)source {
    self.source=source;
    if (self.cancelled || !self.thread.view.window) { [self finishKeepingAudio:NO]; return; }
    self.progress=[UIAlertController alertControllerWithTitle:HIDEL(@"VOICE_IMPORT") message:HIDEL(@"CONVERTING_AUDIO") preferredStyle:UIAlertControllerStyleAlert];
    [self.progress addAction:[UIAlertAction actionWithTitle:HIDEL(@"CANCEL") style:UIAlertActionStyleCancel handler:^(UIAlertAction *action) {
        self.cancelled=YES;[self.exporter cancelExport];[self finishKeepingAudio:NO];
    }]];
    [HIDETopViewController() presentViewController:self.progress animated:YES completion:nil];
    AVURLAsset *asset=[AVURLAsset URLAssetWithURL:source options:nil];
    [asset loadValuesAsynchronouslyForKeys:@[@"tracks",@"duration"] completionHandler:^{
        NSError *error=nil;
        double seconds=CMTimeGetSeconds(asset.duration);
        if ([asset statusOfValueForKey:@"tracks" error:&error]!=AVKeyValueStatusLoaded ||
            [asset statusOfValueForKey:@"duration" error:&error]!=AVKeyValueStatusLoaded ||
            !HIDEVoiceImportDurationAllowed(seconds) || ![asset tracksWithMediaType:AVMediaTypeAudio].count) {
            [self fail:HIDEL(@"INVALID_AUDIO")];return;
        }
        dispatch_async(dispatch_get_main_queue(), ^{
        if (self.cancelled) { [self finishKeepingAudio:NO];return; }
        AVAssetExportSession *exporter=[[AVAssetExportSession alloc] initWithAsset:asset presetName:AVAssetExportPresetAppleM4A];
        NSURL *directory=HIDEVoiceImportDirectory();
        NSURL *audio=[directory URLByAppendingPathComponent:[NSString stringWithFormat:@"HIDE_voice_%@.m4a",NSUUID.UUID.UUIDString]];
        if (!exporter || !directory || ![exporter.supportedFileTypes containsObject:AVFileTypeAppleM4A]) { [self fail:HIDEL(@"ERROR")]; return; }
        self.audio=audio;self.exporter=exporter;exporter.outputURL=audio;exporter.outputFileType=AVFileTypeAppleM4A;
        [exporter exportAsynchronouslyWithCompletionHandler:^{
            if (self.cancelled) { [self finishOnMain:NO];return; }
            if (exporter.status!=AVAssetExportSessionStatusCompleted) { [self fail:HIDEL(@"ERROR")];return; }
            dispatch_async(dispatch_get_global_queue(QOS_CLASS_UTILITY,0),^{
                NSArray *levels=HIDEAudioLevels(audio);
                if (!levels) { [self fail:HIDEL(@"ERROR")];return; }
                dispatch_async(dispatch_get_main_queue(), ^{ [self review:seconds levels:levels]; });
            });
        }];
        });
    }];
}
- (void)finishOnMain:(BOOL)keep { dispatch_async(dispatch_get_main_queue(),^{[self finishKeepingAudio:keep];}); }
- (void)review:(double)seconds levels:(NSArray *)levels {
    if (self.cancelled || !self.thread.view.window || !HIDEVoiceImportSupported(self.thread)) { [self fail:HIDEL(@"FEATURE_UNAVAILABLE")];return; }
    UIAlertController *progress=self.progress;self.progress=nil;
    void (^present)(void)=^{
        NSString *message=[NSString stringWithFormat:HIDEL(@"VOICE_SEND_REVIEW"),self.thread.title ?: HIDEL(@"CURRENT_CHAT"),seconds];
        UIAlertController *review=[UIAlertController alertControllerWithTitle:HIDEL(@"VOICE_IMPORT") message:message preferredStyle:UIAlertControllerStyleAlert];
        [review addAction:[UIAlertAction actionWithTitle:HIDEL(@"SEND_VOICE") style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) { [self send:seconds levels:levels]; }]];
        [review addAction:[UIAlertAction actionWithTitle:HIDEL(@"CANCEL") style:UIAlertActionStyleCancel handler:^(UIAlertAction *action) { [self finishKeepingAudio:NO]; }]];
        [HIDETopViewController() presentViewController:review animated:YES completion:nil];
    };
    if (progress.presentingViewController) [progress dismissViewControllerAnimated:YES completion:present];else present();
}
- (void)send:(double)seconds levels:(NSArray *)levels {
    UIViewController *thread=self.thread;id sender=HIDEVoiceSender(thread);
    if (!HIDEPref(kHideVoiceImport) || !sender || !thread.view.window) { [self fail:HIDEL(@"FEATURE_UNAVAILABLE")];return; }
    id wave=[NSClassFromString(@"IGDirectAudioWaveform") alloc];
    SEL initializer=NSSelectorFromString(@"initWithVolumeRecordingInterval:averageVolume:");
    if (!HIDECanCall(wave,initializer,"@@:d@")) { [self fail:HIDEL(@"FEATURE_UNAVAILABLE")];return; }
    typedef id (*WaveInit)(id __attribute__((ns_consumed)),SEL,double,id) __attribute__((ns_returns_retained));
    wave=((WaveInit)objc_msgSend)(wave,initializer,0.1,levels);
    if (!wave) { [self fail:HIDEL(@"ERROR")];return; }
    @try {
        SEL selector=NSSelectorFromString(HIDEVoiceSender5());
        if (HIDECanCall(sender,selector,"v@:@@@dq"))
            ((void (*)(id,SEL,id,id,id,double,long long))objc_msgSend)(sender,selector,thread,self.audio,wave,seconds,0);
        else {
            selector=NSSelectorFromString(HIDEVoiceSender6());
            if (!HIDECanCall(sender,selector,"v@:@@@dqq")) { [self fail:HIDEL(@"FEATURE_UNAVAILABLE")];return; }
            ((void (*)(id,SEL,id,id,id,double,long long,long long))objc_msgSend)(sender,selector,thread,self.audio,wave,seconds,0,0);
        }
        // Native sending is asynchronous; keep the file in the private cache for up to a day.
        // Do not report "sent": only the native messaging UI can confirm delivery.
        [self finishKeepingAudio:YES];
    } @catch (__unused NSException *exception) { [self fail:HIDEL(@"ERROR")]; }
}
@end

void HIDEPresentVoiceImport(UIViewController *thread) {
    if (!HIDEVoiceImportSupported(thread)) { HIDEToast(HIDEL(@"FEATURE_UNAVAILABLE"));return; }
    if (objc_getAssociatedObject(thread,voiceImporterKey)) return;
    HIDEVoiceImporter *importer=[HIDEVoiceImporter new];importer.thread=thread;
    objc_setAssociatedObject(thread,voiceImporterKey,importer,OBJC_ASSOCIATION_RETAIN_NONATOMIC);[importer chooseSource];
}
static UIViewController *HIDEThreadFromView(UIView *view) {
    Class threadClass=NSClassFromString(@"IGDirectThreadViewController");
    for (UIResponder *responder=view;responder;responder=responder.nextResponder)
        if (threadClass && [responder isKindOfClass:threadClass]) return (UIViewController *)responder;
    return nil;
}
@interface HIDEVoiceImportGesture : NSObject <UIGestureRecognizerDelegate>
@end
@implementation HIDEVoiceImportGesture
+ (instancetype)shared { static id object;static dispatch_once_t once;dispatch_once(&once,^{object=[self new];});return object; }
- (BOOL)gestureRecognizerShouldBegin:(UIGestureRecognizer *)gesture { return HIDEPref(kHideVoiceImport); }
- (void)press:(UILongPressGestureRecognizer *)gesture {
    if (gesture.state==UIGestureRecognizerStateBegan && HIDEPref(kHideVoiceImport)) HIDEPresentVoiceImport(HIDEThreadFromView(gesture.view));
}
@end
static void (*originalComposerLayout)(id,SEL);
static void hide_importComposer(UIView *composer,SEL selector) {
    originalComposerLayout(composer,selector);
    UIView *button=HIDEIvar(composer,"_galleryButton") ?: HIDEGet(composer,@"galleryButton");
    if (![button isKindOfClass:UIView.class] || objc_getAssociatedObject(button,voiceImportGestureKey)) return;
    UILongPressGestureRecognizer *gesture=[[UILongPressGestureRecognizer alloc] initWithTarget:[HIDEVoiceImportGesture shared] action:@selector(press:)];
    gesture.minimumPressDuration=0.7;gesture.delegate=[HIDEVoiceImportGesture shared];[button addGestureRecognizer:gesture];
    objc_setAssociatedObject(button,voiceImportGestureKey,gesture,OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}
void HIDEInstallVoiceImport(void) {
    originalComposerLayout=(void *)HIDEHookChecked(@"IGDirectComposer",@selector(layoutSubviews),(IMP)hide_importComposer,"v@:");
    dispatch_async(dispatch_get_global_queue(QOS_CLASS_UTILITY,0),^{HIDEPruneVoiceImports();});
}
