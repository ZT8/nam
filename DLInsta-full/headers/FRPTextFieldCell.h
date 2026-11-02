// Reconstructed from Objective-C runtime metadata, not original source.
// External SDK types, superclass declarations and struct definitions may be required.
#import <Foundation/Foundation.h>

@interface FRPTextFieldCell : FRPCell
{
@private
    UITextField * _textField; // offset 8, size 8; encoding @"UITextField"
}
// Property textField | attributes: T@"UITextField",&,N,V_textField
// Property hash | attributes: TQ,R
// Property superclass | attributes: T#,R
// Property description | attributes: T@"NSString",R,C
// Property debugDescription | attributes: T@"NSString",R,C
// Implementation 0xb39e8 | runtime encoding: @56@0:8@16@24@32@40@?48
- (id)cellWithTitle:(id)arg1 setting:(id)arg2 placeholder:(id)arg3 postNotification:(id)arg4 changeBlock:(id /* block; signature not encoded here */)arg5;
// Implementation 0xb3d1c | runtime encoding: v24@0:8@16
- (void)textFieldChanged:(id)arg1;
// Implementation 0xb3e5c | runtime encoding: B24@0:8@16
- (BOOL)textFieldShouldReturn:(id)arg1;
// Implementation 0xb3e80 | runtime encoding: v16@0:8
- (void)layoutSubviews;
// Implementation 0xb3f18 | runtime encoding: @16@0:8
- (id)textField;
// Implementation 0xb3f28 | runtime encoding: v24@0:8@16
- (void)setTextField:(id)arg1;
// Implementation 0xb3f3c | runtime encoding: v16@0:8
// Runtime-only method .cxx_destruct
// Implementation 0xb38fc | runtime encoding: @56@0:8@16@24@32@40@?48
+ (id)cellWithTitle:(id)arg1 setting:(id)arg2 placeholder:(id)arg3 postNotification:(id)arg4 changeBlock:(id /* block; signature not encoded here */)arg5;
@end
