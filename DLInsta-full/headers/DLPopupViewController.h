// Reconstructed from Objective-C runtime metadata, not original source.
// External SDK types, superclass declarations and struct definitions may be required.
#import <Foundation/Foundation.h>

@interface DLPopupViewController : UIViewController
{
@private
    UIView * backgroundView; // offset 8, size 8; encoding @"UIView"
    DLVisualEffectView * blurView; // offset 16, size 8; encoding @"DLVisualEffectView"
    UIView * _popupView; // offset 24, size 8; encoding @"UIView"
    NSLayoutConstraint * _blurWidthLayoutConstraint; // offset 32, size 8; encoding @"NSLayoutConstraint"
    double _customHeight; // offset 40, size 8; encoding d
    struct CGPoint _initialTouchPoint; // offset 48, size 16; encoding {CGPoint="x"d"y"d}
}
// Property blurWidthLayoutConstraint | attributes: T@"NSLayoutConstraint",&,N,V_blurWidthLayoutConstraint
// Property customHeight | attributes: Td,N,V_customHeight
// Property popupView | attributes: T@"UIView",&,N,V_popupView
// Property initialTouchPoint | attributes: T{CGPoint=dd},N,V_initialTouchPoint
// Implementation 0xacdc8 | runtime encoding: v16@0:8
- (void)showController;
// Implementation 0xacf14 | runtime encoding: v24@0:8@?16
- (void)hideController:(id /* block; signature not encoded here */)arg1;
// Implementation 0xad0a0 | runtime encoding: v24@0:8@16
- (void)panGestureRecognizerHandler:(id)arg1;
// Implementation 0xad370 | runtime encoding: Q16@0:8
- (unsigned long long)supportedInterfaceOrientations;
// Implementation 0xad378 | runtime encoding: q16@0:8
- (long long)preferredInterfaceOrientationForPresentation;
// Implementation 0xad514 | runtime encoding: @24@0:8d16
- (id)initWithCustomHeight:(double)arg1;
// Implementation 0xad5a0 | runtime encoding: d16@0:8
- (double)popupViewHeight;
// Implementation 0xad634 | runtime encoding: v16@0:8
- (void)viewDidLayoutSubviews;
// Implementation 0xad8a4 | runtime encoding: v16@0:8
- (void)viewDidLoad;
// Implementation 0xad914 | runtime encoding: v20@0:8B16
- (void)viewWillAppear:(BOOL)arg1;
// Implementation 0xad964 | runtime encoding: v20@0:8B16
- (void)viewDidAppear:(BOOL)arg1;
// Implementation 0xad9b0 | runtime encoding: v16@0:8
- (void)setupBackgroundView;
// Implementation 0xadba0 | runtime encoding: v16@0:8
- (void)setupBlurView;
// Implementation 0xadfcc | runtime encoding: v16@0:8
- (void)setupPopupView;
// Implementation 0xae428 | runtime encoding: v16@0:8
- (void)dismissPopup;
// Implementation 0xae4f8 | runtime encoding: @16@0:8
- (id)popupView;
// Implementation 0xae508 | runtime encoding: v24@0:8@16
- (void)setPopupView:(id)arg1;
// Implementation 0xae51c | runtime encoding: {CGPoint=dd}16@0:8
- (struct CGPoint)initialTouchPoint;
// Implementation 0xae530 | runtime encoding: v32@0:8{CGPoint=dd}16
- (void)setInitialTouchPoint:(struct CGPoint)arg1;
// Implementation 0xae544 | runtime encoding: @16@0:8
- (id)blurWidthLayoutConstraint;
// Implementation 0xae554 | runtime encoding: v24@0:8@16
- (void)setBlurWidthLayoutConstraint:(id)arg1;
// Implementation 0xae568 | runtime encoding: d16@0:8
- (double)customHeight;
// Implementation 0xae578 | runtime encoding: v24@0:8d16
- (void)setCustomHeight:(double)arg1;
// Implementation 0xae588 | runtime encoding: v16@0:8
// Runtime-only method .cxx_destruct
@end
