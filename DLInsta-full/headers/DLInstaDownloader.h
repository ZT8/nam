// Reconstructed from Objective-C runtime metadata, not original source.
// External SDK types, superclass declarations and struct definitions may be required.
#import <Foundation/Foundation.h>

@interface DLInstaDownloader : NSObject
{
@private
    MBProgressHUD * _hud; // offset 8, size 8; encoding @"MBProgressHUD"
    NSURLSessionDownloadTask * _task; // offset 16, size 8; encoding @"NSURLSessionDownloadTask"
    DLDownloaderMinimizeView * _minimizeView; // offset 24, size 8; encoding @"DLDownloaderMinimizeView"
    unsigned long long _mediaType; // offset 32, size 8; encoding Q
}
// Property hud | attributes: T@"MBProgressHUD",&,N,V_hud
// Property task | attributes: T@"NSURLSessionDownloadTask",&,N,V_task
// Property minimizeView | attributes: T@"DLDownloaderMinimizeView",&,N,V_minimizeView
// Property mediaType | attributes: TQ,N,V_mediaType
// Property hash | attributes: TQ,R
// Property superclass | attributes: T#,R
// Property description | attributes: T@"NSString",R,C
// Property debugDescription | attributes: T@"NSString",R,C
// Implementation 0xa17c0 | runtime encoding: v36@0:8@16B24@?28
- (void)downloadMultibileItems:(id)arg1 isNeedMerge:(BOOL)arg2 completion:(id /* block; signature not encoded here */)arg3;
// Implementation 0xa2518 | runtime encoding: v32@0:8@16Q24
- (void)downloadMediaURLString:(id)arg1 mediaType:(unsigned long long)arg2;
// Implementation 0xa3184 | runtime encoding: v16@0:8
- (void)setupMinimizeView;
// Implementation 0xa33c4 | runtime encoding: v16@0:8
- (void)cancel;
// Implementation 0xa342c | runtime encoding: v16@0:8
- (void)DLHUDHide;
// Implementation 0xa3484 | runtime encoding: v16@0:8
- (void)whenHideHUD;
// Implementation 0xa3514 | runtime encoding: v16@0:8
- (void)showHUDAgain;
// Implementation 0xa3598 | runtime encoding: v16@0:8
- (void)hideHUDIfNeeded;
// Implementation 0xa35dc | runtime encoding: v16@0:8
- (void)removeViewAndHideHUD;
// Implementation 0xa366c | runtime encoding: v40@0:8@16@24@32
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
// Implementation 0xa3898 | runtime encoding: v24@0:8@16
- (void)didFinishDownloadingToPath:(id)arg1;
// Implementation 0xa3a4c | runtime encoding: v56@0:8@16@24q32q40q48
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
// Implementation 0xa42e8 | runtime encoding: @16@0:8
- (id)hud;
// Implementation 0xa42f0 | runtime encoding: v24@0:8@16
- (void)setHud:(id)arg1;
// Implementation 0xa42fc | runtime encoding: @16@0:8
- (id)task;
// Implementation 0xa4304 | runtime encoding: v24@0:8@16
- (void)setTask:(id)arg1;
// Implementation 0xa4310 | runtime encoding: @16@0:8
- (id)minimizeView;
// Implementation 0xa4318 | runtime encoding: v24@0:8@16
- (void)setMinimizeView:(id)arg1;
// Implementation 0xa4324 | runtime encoding: Q16@0:8
- (unsigned long long)mediaType;
// Implementation 0xa432c | runtime encoding: v24@0:8Q16
- (void)setMediaType:(unsigned long long)arg1;
// Implementation 0xa4334 | runtime encoding: v16@0:8
// Runtime-only method .cxx_destruct
// Implementation 0xa3c8c | runtime encoding: v40@0:8@16@24@?32
+ (void)downloadMedia:(id)arg1 filePath:(id)arg2 completion:(id /* block; signature not encoded here */)arg3;
// Implementation 0xa405c | runtime encoding: @16@0:8
+ (id)documentsDirectoryPath;
// Implementation 0xa40b8 | runtime encoding: @24@0:8@16
+ (id)imageTypeFromData:(id)arg1;
@end
