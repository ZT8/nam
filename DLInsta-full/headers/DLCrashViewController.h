// Reconstructed from Objective-C runtime metadata, not original source.
// External SDK types, superclass declarations and struct definitions may be required.
#import <Foundation/Foundation.h>

@interface DLCrashViewController : UIViewController
{
@private
    NSDictionary * _infoDict; // offset 8, size 8; encoding @"NSDictionary"
    NSString * _appName; // offset 16, size 8; encoding @"NSString"
    NSString * _appVersion; // offset 24, size 8; encoding @"NSString"
}
// Property appName | attributes: T@"NSString",&,N,V_appName
// Property appVersion | attributes: T@"NSString",&,N,V_appVersion
// Property infoDict | attributes: T@"NSDictionary",&,N,V_infoDict
// Property hash | attributes: TQ,R
// Property superclass | attributes: T#,R
// Property description | attributes: T@"NSString",R,C
// Property debugDescription | attributes: T@"NSString",R,C
// Implementation 0x8991c | runtime encoding: v16@0:8
- (void)viewDidLoad;
// Implementation 0x8b8a4 | runtime encoding: v16@0:8
- (void)dismiss;
// Implementation 0x8b8b8 | runtime encoding: v24@0:8@16
- (void)sendCrash:(id)arg1;
// Implementation 0x8bdac | runtime encoding: v40@0:8@16q24@32
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
// Implementation 0x8c158 | runtime encoding: @16@0:8
- (id)infoDict;
// Implementation 0x8c168 | runtime encoding: v24@0:8@16
- (void)setInfoDict:(id)arg1;
// Implementation 0x8c17c | runtime encoding: @16@0:8
- (id)appName;
// Implementation 0x8c18c | runtime encoding: v24@0:8@16
- (void)setAppName:(id)arg1;
// Implementation 0x8c1a0 | runtime encoding: @16@0:8
- (id)appVersion;
// Implementation 0x8c1b0 | runtime encoding: v24@0:8@16
- (void)setAppVersion:(id)arg1;
// Implementation 0x8c1c4 | runtime encoding: v16@0:8
// Runtime-only method .cxx_destruct
@end
