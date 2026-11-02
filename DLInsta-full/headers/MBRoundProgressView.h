// Reconstructed from Objective-C runtime metadata, not original source.
// External SDK types, superclass declarations and struct definitions may be required.
#import <Foundation/Foundation.h>

@interface MBRoundProgressView : UIView
{
@private
    BOOL _annular; // offset 8, size 1; encoding B
    float _progress; // offset 12, size 4; encoding f
    UIColor * _progressTintColor; // offset 16, size 8; encoding @"UIColor"
    UIColor * _backgroundTintColor; // offset 24, size 8; encoding @"UIColor"
}
// Property progress | attributes: Tf,N,V_progress
// Property progressTintColor | attributes: T@"UIColor",&,N,V_progressTintColor
// Property backgroundTintColor | attributes: T@"UIColor",&,N,V_backgroundTintColor
// Property annular | attributes: TB,N,GisAnnular,V_annular
// Implementation 0x95434 | runtime encoding: @16@0:8
- (id)init;
// Implementation 0x95454 | runtime encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (id)initWithFrame:(struct CGRect)arg1;
// Implementation 0x95578 | runtime encoding: {CGSize=dd}16@0:8
- (struct CGSize)intrinsicContentSize;
// Implementation 0x95588 | runtime encoding: v20@0:8f16
- (void)setProgress:(float)arg1;
// Implementation 0x955b0 | runtime encoding: v24@0:8@16
- (void)setProgressTintColor:(id)arg1;
// Implementation 0x956e0 | runtime encoding: v24@0:8@16
- (void)setBackgroundTintColor:(id)arg1;
// Implementation 0x95810 | runtime encoding: v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (void)drawRect:(struct CGRect)arg1;
// Implementation 0x95bc8 | runtime encoding: f16@0:8
- (float)progress;
// Implementation 0x95bd8 | runtime encoding: @16@0:8
- (id)progressTintColor;
// Implementation 0x95be8 | runtime encoding: @16@0:8
- (id)backgroundTintColor;
// Implementation 0x95bf8 | runtime encoding: B16@0:8
- (BOOL)isAnnular;
// Implementation 0x95c08 | runtime encoding: v20@0:8B16
- (void)setAnnular:(BOOL)arg1;
// Implementation 0x95c18 | runtime encoding: v16@0:8
// Runtime-only method .cxx_destruct
@end
