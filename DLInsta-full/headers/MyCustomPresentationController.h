// Reconstructed from Objective-C runtime metadata, not original source.
// External SDK types, superclass declarations and struct definitions may be required.
#import <Foundation/Foundation.h>

@interface MyCustomPresentationController : UIPresentationController
{
@private
    UIView * _dimmingView; // offset 8, size 8; encoding @"UIView"
}
// Property dimmingView | attributes: T@"UIView",&,V_dimmingView
// Implementation 0xa6cb4 | runtime encoding: v16@0:8
- (void)presentationTransitionWillBegin;
// Implementation 0xa6e60 | runtime encoding: v16@0:8
- (void)containerViewWillLayoutSubviews;
// Implementation 0xa6f98 | runtime encoding: v20@0:8B16
- (void)presentationTransitionDidEnd:(BOOL)arg1;
// Implementation 0xa7010 | runtime encoding: v16@0:8
- (void)dismissalTransitionWillBegin;
// Implementation 0xa71a8 | runtime encoding: v20@0:8B16
- (void)dismissalTransitionDidEnd:(BOOL)arg1;
// Implementation 0xa7220 | runtime encoding: @16@0:8
- (id)dimmingView;
// Implementation 0xa7230 | runtime encoding: v24@0:8@16
- (void)setDimmingView:(id)arg1;
// Implementation 0xa723c | runtime encoding: v16@0:8
// Runtime-only method .cxx_destruct
@end
