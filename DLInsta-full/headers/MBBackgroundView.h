// Reconstructed from Objective-C runtime metadata, not original source.
// External SDK types, superclass declarations and struct definitions may be required.
#import <Foundation/Foundation.h>

@interface MBBackgroundView : UIView
{
@private
    long long _style; // offset 8, size 8; encoding q
    long long _blurEffectStyle; // offset 16, size 8; encoding q
    UIColor * _color; // offset 24, size 8; encoding @"UIColor"
    UIVisualEffectView * _effectView; // offset 32, size 8; encoding @"UIVisualEffectView"
}
// Property effectView | attributes: T@"UIVisualEffectView",&,V_effectView
// Property style | attributes: Tq,N,V_style
// Property blurEffectStyle | attributes: Tq,N,V_blurEffectStyle
// Property color | attributes: T@"UIColor",&,N,V_color
// Implementation 0x964f4 | runtime encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (id)initWithFrame:(struct CGRect)arg1;
// Implementation 0x965c0 | runtime encoding: {CGSize=dd}16@0:8
- (struct CGSize)intrinsicContentSize;
// Implementation 0x965d0 | runtime encoding: v24@0:8q16
- (void)setStyle:(long long)arg1;
// Implementation 0x965f8 | runtime encoding: v24@0:8@16
- (void)setColor:(id)arg1;
// Implementation 0x9672c | runtime encoding: v24@0:8q16
- (void)setBlurEffectStyle:(long long)arg1;
// Implementation 0x96754 | runtime encoding: v16@0:8
- (void)updateForBackgroundStyle;
// Implementation 0x9693c | runtime encoding: v24@0:8@16
- (void)updateViewsForColor:(id)arg1;
// Implementation 0x96998 | runtime encoding: q16@0:8
- (long long)style;
// Implementation 0x969a8 | runtime encoding: q16@0:8
- (long long)blurEffectStyle;
// Implementation 0x969b8 | runtime encoding: @16@0:8
- (id)color;
// Implementation 0x969c8 | runtime encoding: @16@0:8
- (id)effectView;
// Implementation 0x969d8 | runtime encoding: v24@0:8@16
- (void)setEffectView:(id)arg1;
// Implementation 0x969e4 | runtime encoding: v16@0:8
// Runtime-only method .cxx_destruct
@end
