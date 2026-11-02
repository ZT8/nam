// Reconstructed from Objective-C runtime metadata, not original source.
// External SDK types, superclass declarations and struct definitions may be required.
#import <Foundation/Foundation.h>

@interface DLMaxAlertViewController : UIViewController
{
@private
    double _cornerRadius; // offset 8, size 8; encoding d
    UIView * _containerView; // offset 16, size 8; encoding @"UIView"
    UILabel * _titleLabel; // offset 24, size 8; encoding @"UILabel"
    NSString * _tweakName; // offset 32, size 8; encoding @"NSString"
    NSString * _message; // offset 40, size 8; encoding @"NSString"
    DLMaxAlertTextView * _bodyText; // offset 48, size 8; encoding @"DLMaxAlertTextView"
    NSArray * _actions; // offset 56, size 8; encoding @"NSArray"
    NSLayoutConstraint * _containerViewHeightConstraint; // offset 64, size 8; encoding @"NSLayoutConstraint"
    NSLayoutConstraint * _containerViewWidthConstraint; // offset 72, size 8; encoding @"NSLayoutConstraint"
}
// Property containerView | attributes: T@"UIView",&,V_containerView
// Property titleLabel | attributes: T@"UILabel",&,V_titleLabel
// Property tweakName | attributes: T@"NSString",&,V_tweakName
// Property message | attributes: T@"NSString",&,V_message
// Property bodyText | attributes: T@"DLMaxAlertTextView",&,V_bodyText
// Property actions | attributes: T@"NSArray",&,V_actions
// Property containerViewHeightConstraint | attributes: T@"NSLayoutConstraint",&,V_containerViewHeightConstraint
// Property containerViewWidthConstraint | attributes: T@"NSLayoutConstraint",&,V_containerViewWidthConstraint
// Property cornerRadius | attributes: Td,V_cornerRadius
// Property hash | attributes: TQ,R
// Property superclass | attributes: T#,R
// Property description | attributes: T@"NSString",R,C
// Property debugDescription | attributes: T@"NSString",R,C
// Implementation 0xa7b18 | runtime encoding: v16@0:8
- (void)viewWillLayoutSubviews;
// Implementation 0xa7e14 | runtime encoding: @40@0:8@16@24@32
- (id)initWithTweakName:(id)arg1 message:(id)arg2 actions:(id)arg3;
// Implementation 0xa7f18 | runtime encoding: v16@0:8
- (void)viewDidLoad;
// Implementation 0xa92a4 | runtime encoding: @40@0:8@16@24@32
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
// Implementation 0xa931c | runtime encoding: v16@0:8
- (void)dismissAlertController;
// Implementation 0xa9330 | runtime encoding: v24@0:8@16
- (void)traitCollectionDidChange:(id)arg1;
// Implementation 0xa95b4 | runtime encoding: v16@0:8
- (void)applyCustomFontForBodyText;
// Implementation 0xa9af8 | runtime encoding: d16@0:8
- (double)cornerRadius;
// Implementation 0xa9b0c | runtime encoding: v24@0:8d16
- (void)setCornerRadius:(double)arg1;
// Implementation 0xa9b20 | runtime encoding: @16@0:8
- (id)containerView;
// Implementation 0xa9b30 | runtime encoding: v24@0:8@16
- (void)setContainerView:(id)arg1;
// Implementation 0xa9b3c | runtime encoding: @16@0:8
- (id)titleLabel;
// Implementation 0xa9b4c | runtime encoding: v24@0:8@16
- (void)setTitleLabel:(id)arg1;
// Implementation 0xa9b58 | runtime encoding: @16@0:8
- (id)tweakName;
// Implementation 0xa9b68 | runtime encoding: v24@0:8@16
- (void)setTweakName:(id)arg1;
// Implementation 0xa9b74 | runtime encoding: @16@0:8
- (id)message;
// Implementation 0xa9b84 | runtime encoding: v24@0:8@16
- (void)setMessage:(id)arg1;
// Implementation 0xa9b90 | runtime encoding: @16@0:8
- (id)bodyText;
// Implementation 0xa9ba0 | runtime encoding: v24@0:8@16
- (void)setBodyText:(id)arg1;
// Implementation 0xa9bac | runtime encoding: @16@0:8
- (id)actions;
// Implementation 0xa9bbc | runtime encoding: v24@0:8@16
- (void)setActions:(id)arg1;
// Implementation 0xa9bc8 | runtime encoding: @16@0:8
- (id)containerViewHeightConstraint;
// Implementation 0xa9bd8 | runtime encoding: v24@0:8@16
- (void)setContainerViewHeightConstraint:(id)arg1;
// Implementation 0xa9be4 | runtime encoding: @16@0:8
- (id)containerViewWidthConstraint;
// Implementation 0xa9bf4 | runtime encoding: v24@0:8@16
- (void)setContainerViewWidthConstraint:(id)arg1;
// Implementation 0xa9c00 | runtime encoding: v16@0:8
// Runtime-only method .cxx_destruct
@end
