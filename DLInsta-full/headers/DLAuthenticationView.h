// Reconstructed from Objective-C runtime metadata, not original source.
// External SDK types, superclass declarations and struct definitions may be required.
#import <Foundation/Foundation.h>

@interface DLAuthenticationView : UIView
{
@private
    BOOL _authenticated; // offset 8, size 1; encoding B
    LAContext * _context; // offset 16, size 8; encoding @"LAContext"
    UIVisualEffectView * _dlBlurView; // offset 24, size 8; encoding @"UIVisualEffectView"
}
// Property dlBlurView | attributes: T@"UIVisualEffectView",&,N,V_dlBlurView
// Property context | attributes: T@"LAContext",&,N,V_context
// Property authenticated | attributes: TB,N,GisAuthenticated,V_authenticated
// Implementation 0x9f8fc | runtime encoding: v16@0:8
- (void)layoutSubviews;
// Implementation 0x9fa50 | runtime encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (id)initWithFrame:(struct CGRect)arg1;
// Implementation 0x9faa8 | runtime encoding: v16@0:8
- (void)setupBlurView;
// Implementation 0x9fcb4 | runtime encoding: v24@0:8@?16
- (void)contextAuthenticated:(id /* block; signature not encoded here */)arg1;
// Implementation 0x9fec4 | runtime encoding: @16@0:8
- (id)context;
// Implementation 0x9fed4 | runtime encoding: v24@0:8@16
- (void)setContext:(id)arg1;
// Implementation 0x9fee8 | runtime encoding: B16@0:8
- (BOOL)isAuthenticated;
// Implementation 0x9fef8 | runtime encoding: v20@0:8B16
- (void)setAuthenticated:(BOOL)arg1;
// Implementation 0x9ff08 | runtime encoding: @16@0:8
- (id)dlBlurView;
// Implementation 0x9ff18 | runtime encoding: v24@0:8@16
- (void)setDlBlurView:(id)arg1;
// Implementation 0x9ff2c | runtime encoding: v16@0:8
// Runtime-only method .cxx_destruct
@end
