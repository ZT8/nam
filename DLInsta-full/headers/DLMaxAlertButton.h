// Reconstructed from Objective-C runtime metadata, not original source.
// External SDK types, superclass declarations and struct definitions may be required.
#import <Foundation/Foundation.h>

@interface DLMaxAlertButton : UIButton
{
@private
    UIView * _separatorView; // offset 8, size 8; encoding @"UIView"
    id /* block; signature not encoded here */ _handler; // offset 16, size 8; encoding @?
}
// Property handler | attributes: T@?,R,C,N,V_handler
// Implementation 0xa7250 | runtime encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (id)initWithFrame:(struct CGRect)arg1;
// Implementation 0xa75bc | runtime encoding: v24@0:8@?16
- (void)actionHandler:(id /* block; signature not encoded here */)arg1;
// Implementation 0xa7668 | runtime encoding: v16@0:8
- (void)didPressButton;
// Implementation 0xa76e4 | runtime encoding: v24@0:8@16
- (void)traitCollectionDidChange:(id)arg1;
// Implementation 0xa78b4 | runtime encoding: @?16@0:8
- (id /* block; signature not encoded here */)handler;
// Implementation 0xa78c4 | runtime encoding: v16@0:8
// Runtime-only method .cxx_destruct
@end
