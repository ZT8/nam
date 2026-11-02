// Reconstructed from Objective-C runtime metadata, not original source.
// External SDK types, superclass declarations and struct definitions may be required.
#import <Foundation/Foundation.h>

@interface DLButton : UIButton
{
@private
    id /* block; signature not encoded here */ _handler; // offset 8, size 8; encoding @?
}
// Implementation 0x9f620 | runtime encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (id)initWithFrame:(struct CGRect)arg1;
// Implementation 0x9f688 | runtime encoding: v24@0:8@?16
- (void)actionHandler:(id /* block; signature not encoded here */)arg1;
// Implementation 0x9f6c0 | runtime encoding: v24@0:8@16
- (void)didPressButton:(id)arg1;
// Implementation 0x9f6dc | runtime encoding: v16@0:8
// Runtime-only method .cxx_destruct
@end
