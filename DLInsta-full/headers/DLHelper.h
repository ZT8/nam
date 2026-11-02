// Reconstructed from Objective-C runtime metadata, not original source.
// External SDK types, superclass declarations and struct definitions may be required.
#import <Foundation/Foundation.h>

@interface DLHelper : NSObject
// Implementation 0x8d0ec | runtime encoding: v24@0:8Q16
+ (void)HUDWithState:(unsigned long long)arg1;
// Implementation 0x8d8c8 | runtime encoding: @24@0:8@16
+ (id)getFile:(id)arg1;
// Implementation 0x8d984 | runtime encoding: v48@0:8@16Q24@32d40
+ (void)addLine:(id)arg1 atPosition:(unsigned long long)arg2 withColor:(id)arg3 lineHeight:(double)arg4;
// Implementation 0x8dbec | runtime encoding: B16@0:8
+ (BOOL)is_iPhoneX;
// Implementation 0x8dc4c | runtime encoding: @16@0:8
+ (id)topWindow;
// Implementation 0x8dcd0 | runtime encoding: @24@0:8@16
+ (id)imageIcon:(id)arg1;
// Implementation 0x8ddd0 | runtime encoding: @32@0:8@16@24
+ (id)image:(id)arg1 color:(id)arg2;
// Implementation 0x8def0 | runtime encoding: @40@0:8@16{CGSize=dd}24
+ (id)resizeImageView:(id)arg1 size:(struct CGSize)arg2;
// Implementation 0x8e080 | runtime encoding: v32@0:8@16@24
+ (void)showMessageWithTitle:(id)arg1 message:(id)arg2;
// Implementation 0x8eb1c | runtime encoding: v40@0:8@16@24@32
+ (void)showMessageWithTitle:(id)arg1 message:(id)arg2 viewController:(id)arg3;
// Implementation 0x8eec8 | runtime encoding: v32@0:8@?16@?24
+ (void)showConfirmMessageSave:(id /* block; signature not encoded here */)arg1 share:(id /* block; signature not encoded here */)arg2;
// Implementation 0x8f6ac | runtime encoding: @40@0:8@16^@24^@32
+ (id)sendSynchronousRequest:(id)arg1 returningResponse:(id *)arg2 error:(id *)arg3;
// Implementation 0x8faa8 | runtime encoding: q24@0:8@16
+ (long long)DLMediaSize:(id)arg1;
// Implementation 0x8fb8c | runtime encoding: q24@0:8@16
+ (long long)getStatusCodeFromURL:(id)arg1;
// Implementation 0x8fc64 | runtime encoding: v24@0:8@16
+ (void)switchToRTL:(id)arg1;
// Implementation 0x8fcb8 | runtime encoding: B16@0:8
+ (BOOL)isDarkMode;
// Implementation 0x8fd58 | runtime encoding: @48@0:8@16@24@32q40
+ (id)cellWithTitle:(id)arg1 key:(id)arg2 defaultValue:(id)arg3 statusMode:(long long)arg4;
// Implementation 0x8fef4 | runtime encoding: @56@0:8@16@24@32@40q48
+ (id)cellWithTitle:(id)arg1 detail:(id)arg2 image:(id)arg3 url:(id)arg4 statusMode:(long long)arg5;
// Implementation 0x90010 | runtime encoding: v24@0:8@16
+ (void)saveMediaIdForStory:(id)arg1;
// Implementation 0x902b0 | runtime encoding: @24@0:8@16
+ (id)findViewController:(id)arg1;
// Implementation 0x90388 | runtime encoding: @16@0:8
+ (id)topMostController;
// Implementation 0x90480 | runtime encoding: @16@0:8
+ (id)keyWindow;
// Implementation 0x90600 | runtime encoding: v20@0:8i16
+ (void)vibration:(int)arg1;
// Implementation 0x9064c | runtime encoding: B16@0:8
+ (BOOL)isDeviceLanguageArabic;
// Implementation 0x906d0 | runtime encoding: v28@0:8B16@20
+ (void)setBool:(BOOL)arg1 forKey:(id)arg2;
// Implementation 0x9077c | runtime encoding: v32@0:8@16@24
+ (void)setObject:(id)arg1 forKey:(id)arg2;
// Implementation 0x9083c | runtime encoding: B24@0:8@16
+ (BOOL)boolForKey:(id)arg1;
@end
