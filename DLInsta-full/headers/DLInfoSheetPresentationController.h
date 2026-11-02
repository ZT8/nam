// Reconstructed from Objective-C runtime metadata, not original source.
// External SDK types, superclass declarations and struct definitions may be required.
#import <Foundation/Foundation.h>

@interface DLInfoSheetPresentationController : UIPresentationController
{
@private
    UIView * _dimmingView; // offset 8, size 8; encoding @"UIView"
}
// Property dimmingView | attributes: T@"UIView",&,N,V_dimmingView
// Implementation 0xa6334 | runtime encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
- (struct CGRect)frameOfPresentedViewInContainerView;
// Implementation 0xa63fc | runtime encoding: @32@0:8@16@24
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;
// Implementation 0xa6538 | runtime encoding: v16@0:8
- (void)containerViewWillLayoutSubviews;
// Implementation 0xa67bc | runtime encoding: v16@0:8
- (void)presentationTransitionWillBegin;
// Implementation 0xa6990 | runtime encoding: v16@0:8
- (void)dismissalTransitionWillBegin;
// Implementation 0xa6a88 | runtime encoding: v24@0:8@16
- (void)dismissCustomVC:(id)arg1;
// Implementation 0xa6afc | runtime encoding: d16@0:8
- (double)bottomHeight;
// Implementation 0xa6b50 | runtime encoding: @16@0:8
- (id)dimmingView;
// Implementation 0xa6b60 | runtime encoding: v24@0:8@16
- (void)setDimmingView:(id)arg1;
// Implementation 0xa6b74 | runtime encoding: v16@0:8
// Runtime-only method .cxx_destruct
@end
