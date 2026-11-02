// Reconstructed from Objective-C runtime metadata, not original source.
// External SDK types, superclass declarations and struct definitions may be required.
#import <Foundation/Foundation.h>

@interface DLSaveMedia : NSObject
// Implementation 0xa4744 | runtime encoding: v24@0:8@16
+ (void)shareMediaFile:(id)arg1;
// Implementation 0xa4a64 | runtime encoding: v36@0:8@16Q24B32
+ (void)saveMediaOnCamera:(id)arg1 mediaType:(unsigned long long)arg2 needShare:(BOOL)arg3;
// Implementation 0xa4e88 | runtime encoding: v36@0:8@16Q24B32
+ (void)saveMediaOnCamera:(id)arg1 mediaType:(unsigned long long)arg2 showSuccess:(BOOL)arg3;
// Implementation 0xa4eb0 | runtime encoding: v32@0:8@16Q24
+ (void)saveMediaOnCamera:(id)arg1 mediaType:(unsigned long long)arg2;
// Implementation 0xa4f20 | runtime encoding: v40@0:8@16Q24@?32
+ (void)saveMediaOnCamera:(id)arg1 mediaType:(unsigned long long)arg2 completion:(id /* block; signature not encoded here */)arg3;
// Implementation 0xa5244 | runtime encoding: v24@0:8Q16
+ (void)showHUDInThreadWithState:(unsigned long long)arg1;
// Implementation 0xa52d0 | runtime encoding: v16@0:8
+ (void)clearCacheIfNeeded;
@end
