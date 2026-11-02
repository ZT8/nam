// Reconstructed from Objective-C runtime metadata, not original source.
// External SDK types, superclass declarations and struct definitions may be required.
#import <Foundation/Foundation.h>

@interface DLDownloadManager : NSObject
// Implementation 0x9ff6c | runtime encoding: v24@0:8@16
+ (void)mergeVideosAsOneVideoWithHud:(id)arg1;
// Implementation 0xa0788 | runtime encoding: v36@0:8@16B24@28
+ (void)exportVideoAfterMerged:(id)arg1 isSupportAudio:(BOOL)arg2 withHud:(id)arg3;
// Implementation 0xa09cc | runtime encoding: v32@0:8@16@?24
+ (void)removeAudioFromVideoURL:(id)arg1 handler:(id /* block; signature not encoded here */)arg2;
// Implementation 0xa0d80 | runtime encoding: B16@0:8
+ (BOOL)isAnyMediaHaveAudio;
// Implementation 0xa0f60 | runtime encoding: @16@0:8
+ (id)allMultiMediaFiles;
// Implementation 0xa0ff8 | runtime encoding: v16@0:8
+ (void)removeAllMultiFilesInFolder;
// Implementation 0xa120c | runtime encoding: @16@0:8
+ (id)multiMediaPath;
@end
