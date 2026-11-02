// Reconstructed from Objective-C runtime metadata, not original source.
// External SDK types, superclass declarations and struct definitions may be required.
#import <Foundation/Foundation.h>

@interface DLRadioSelectView : UIView
{
@private
    BOOL _checked; // offset 8, size 1; encoding B
    CALayer * _checkedDotLayer; // offset 16, size 8; encoding @"CALayer"
}
// Property checked | attributes: TB,N,V_checked
// Property checkedDotLayer | attributes: T@"CALayer",&,N,V_checkedDotLayer
// Implementation 0xb0880 | runtime encoding: v16@0:8
- (void)layoutSubviews;
// Implementation 0xb0d70 | runtime encoding: B16@0:8
- (BOOL)checked;
// Implementation 0xb0d80 | runtime encoding: v20@0:8B16
- (void)setChecked:(BOOL)arg1;
// Implementation 0xb0d90 | runtime encoding: @16@0:8
- (id)checkedDotLayer;
// Implementation 0xb0da0 | runtime encoding: v24@0:8@16
- (void)setCheckedDotLayer:(id)arg1;
// Implementation 0xb0db4 | runtime encoding: v16@0:8
// Runtime-only method .cxx_destruct
@end
