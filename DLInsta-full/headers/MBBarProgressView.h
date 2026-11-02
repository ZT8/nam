// Reconstructed from Objective-C runtime metadata, not original source.
// External SDK types, superclass declarations and struct definitions may be required.
#import <Foundation/Foundation.h>

@interface MBBarProgressView : UIView
{
@private
    float _progress; // offset 8, size 4; encoding f
    UIColor * _lineColor; // offset 16, size 8; encoding @"UIColor"
    UIColor * _progressRemainingColor; // offset 24, size 8; encoding @"UIColor"
    UIColor * _progressColor; // offset 32, size 8; encoding @"UIColor"
}
// Property progress | attributes: Tf,N,V_progress
// Property lineColor | attributes: T@"UIColor",&,N,V_lineColor
// Property progressRemainingColor | attributes: T@"UIColor",&,N,V_progressRemainingColor
// Property progressColor | attributes: T@"UIColor",&,N,V_progressColor
// Implementation 0x95c58 | runtime encoding: @16@0:8
- (id)init;
// Implementation 0x95c78 | runtime encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (id)initWithFrame:(struct CGRect)arg1;
// Implementation 0x95db4 | runtime encoding: {CGSize=dd}16@0:8
- (struct CGSize)intrinsicContentSize;
// Implementation 0x95dc4 | runtime encoding: v20@0:8f16
- (void)setProgress:(float)arg1;
// Implementation 0x95dec | runtime encoding: v24@0:8@16
- (void)setProgressColor:(id)arg1;
// Implementation 0x95f1c | runtime encoding: v24@0:8@16
- (void)setProgressRemainingColor:(id)arg1;
// Implementation 0x9604c | runtime encoding: v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (void)drawRect:(struct CGRect)arg1;
// Implementation 0x9644c | runtime encoding: f16@0:8
- (float)progress;
// Implementation 0x9645c | runtime encoding: @16@0:8
- (id)lineColor;
// Implementation 0x9646c | runtime encoding: v24@0:8@16
- (void)setLineColor:(id)arg1;
// Implementation 0x96480 | runtime encoding: @16@0:8
- (id)progressRemainingColor;
// Implementation 0x96490 | runtime encoding: @16@0:8
- (id)progressColor;
// Implementation 0x964a0 | runtime encoding: v16@0:8
// Runtime-only method .cxx_destruct
@end
