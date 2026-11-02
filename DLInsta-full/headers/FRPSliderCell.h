// Reconstructed from Objective-C runtime metadata, not original source.
// External SDK types, superclass declarations and struct definitions may be required.
#import <Foundation/Foundation.h>

@interface FRPSliderCell : FRPCell
{
@private
    float _min; // offset 8, size 4; encoding f
    float _max; // offset 12, size 4; encoding f
    UISlider * _sliderCell; // offset 16, size 8; encoding @"UISlider"
    UILabel * _lLabel; // offset 24, size 8; encoding @"UILabel"
    UILabel * _rLabel; // offset 32, size 8; encoding @"UILabel"
    UILabel * _cLabel; // offset 40, size 8; encoding @"UILabel"
    UILabel * _vLabel; // offset 48, size 8; encoding @"UILabel"
}
// Property sliderCell | attributes: T@"UISlider",&,N,V_sliderCell
// Property lLabel | attributes: T@"UILabel",&,N,V_lLabel
// Property rLabel | attributes: T@"UILabel",&,N,V_rLabel
// Property cLabel | attributes: T@"UILabel",&,N,V_cLabel
// Property vLabel | attributes: T@"UILabel",&,N,V_vLabel
// Property min | attributes: Tf,N,V_min
// Property max | attributes: Tf,N,V_max
// Implementation 0xb21a4 | runtime encoding: @56@0:8@16@24f32f36@40@?48
- (id)cellWithTitle:(id)arg1 setting:(id)arg2 min:(float)arg3 max:(float)arg4 postNotification:(id)arg5 changeBlock:(id /* block; signature not encoded here */)arg6;
// Implementation 0xb2a6c | runtime encoding: v16@0:8
- (void)layoutSubviews;
// Implementation 0xb2f24 | runtime encoding: v24@0:8@16
- (void)sliderChanged:(id)arg1;
// Implementation 0xb310c | runtime encoding: @16@0:8
- (id)sliderCell;
// Implementation 0xb311c | runtime encoding: v24@0:8@16
- (void)setSliderCell:(id)arg1;
// Implementation 0xb3130 | runtime encoding: @16@0:8
- (id)lLabel;
// Implementation 0xb3140 | runtime encoding: v24@0:8@16
- (void)setLLabel:(id)arg1;
// Implementation 0xb3154 | runtime encoding: @16@0:8
- (id)rLabel;
// Implementation 0xb3164 | runtime encoding: v24@0:8@16
- (void)setRLabel:(id)arg1;
// Implementation 0xb3178 | runtime encoding: @16@0:8
- (id)cLabel;
// Implementation 0xb3188 | runtime encoding: v24@0:8@16
- (void)setCLabel:(id)arg1;
// Implementation 0xb319c | runtime encoding: @16@0:8
- (id)vLabel;
// Implementation 0xb31ac | runtime encoding: v24@0:8@16
- (void)setVLabel:(id)arg1;
// Implementation 0xb31c0 | runtime encoding: f16@0:8
- (float)min;
// Implementation 0xb31d0 | runtime encoding: v20@0:8f16
- (void)setMin:(float)arg1;
// Implementation 0xb31e0 | runtime encoding: f16@0:8
- (float)max;
// Implementation 0xb31f0 | runtime encoding: v20@0:8f16
- (void)setMax:(float)arg1;
// Implementation 0xb3200 | runtime encoding: v16@0:8
// Runtime-only method .cxx_destruct
// Implementation 0xb20c4 | runtime encoding: @56@0:8@16@24f32f36@40@?48
+ (id)cellWithTitle:(id)arg1 setting:(id)arg2 min:(float)arg3 max:(float)arg4 postNotification:(id)arg5 changeBlock:(id /* block; signature not encoded here */)arg6;
@end
