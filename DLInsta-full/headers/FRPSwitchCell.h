// Reconstructed from Objective-C runtime metadata, not original source.
// External SDK types, superclass declarations and struct definitions may be required.
#import <Foundation/Foundation.h>

@interface FRPSwitchCell : FRPCell
{
@private
    UISwitch * _switchView; // offset 8, size 8; encoding @"UISwitch"
}
// Property switchView | attributes: T@"UISwitch",&,N,V_switchView
// Implementation 0xb3344 | runtime encoding: @48@0:8@16@24@32@?40
- (id)cellWithTitle:(id)arg1 setting:(id)arg2 postNotification:(id)arg3 changeBlock:(id /* block; signature not encoded here */)arg4;
// Implementation 0xb35a8 | runtime encoding: v24@0:8@16
- (void)switchChanged:(id)arg1;
// Implementation 0xb3704 | runtime encoding: v16@0:8
- (void)layoutSubviews;
// Implementation 0xb38c4 | runtime encoding: @16@0:8
- (id)switchView;
// Implementation 0xb38d4 | runtime encoding: v24@0:8@16
- (void)setSwitchView:(id)arg1;
// Implementation 0xb38e8 | runtime encoding: v16@0:8
// Runtime-only method .cxx_destruct
// Implementation 0xb327c | runtime encoding: @48@0:8@16@24@32@?40
+ (id)cellWithTitle:(id)arg1 setting:(id)arg2 postNotification:(id)arg3 changeBlock:(id /* block; signature not encoded here */)arg4;
@end
