// Reconstructed from Objective-C runtime metadata, not original source.
// External SDK types, superclass declarations and struct definitions may be required.
#import <Foundation/Foundation.h>

@interface DLMultiMediaViewCell : UICollectionViewCell
{
@private
    UIView * _containerViewCell; // offset 8, size 8; encoding @"UIView"
    UIActivityIndicatorView * _indicatorView; // offset 16, size 8; encoding @"UIActivityIndicatorView"
    UIImageView * _mediaImageView; // offset 24, size 8; encoding @"UIImageView"
    UIImage * _mediaImage; // offset 32, size 8; encoding @"UIImage"
    UILabel * _durationLabel; // offset 40, size 8; encoding @"UILabel"
    UIView * _checkmarkView; // offset 48, size 8; encoding @"UIView"
    UIImageView * _checkmarkImageView; // offset 56, size 8; encoding @"UIImageView"
    UILabel * _errorLabel; // offset 64, size 8; encoding @"UILabel"
}
// Property containerViewCell | attributes: T@"UIView",&,N,V_containerViewCell
// Property indicatorView | attributes: T@"UIActivityIndicatorView",&,N,V_indicatorView
// Property mediaImageView | attributes: T@"UIImageView",&,N,V_mediaImageView
// Property mediaImage | attributes: T@"UIImage",&,N,V_mediaImage
// Property durationLabel | attributes: T@"UILabel",&,N,V_durationLabel
// Property checkmarkView | attributes: T@"UIView",&,N,V_checkmarkView
// Property checkmarkImageView | attributes: T@"UIImageView",&,N,V_checkmarkImageView
// Property errorLabel | attributes: T@"UILabel",&,N,V_errorLabel
// Implementation 0xb8094 | runtime encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (id)initWithFrame:(struct CGRect)arg1;
// Implementation 0xb813c | runtime encoding: v16@0:8
- (void)layoutSubviews;
// Implementation 0xb82fc | runtime encoding: v16@0:8
- (void)prepareForReuse;
// Implementation 0xb8370 | runtime encoding: v16@0:8
- (void)setupContainerViewCell;
// Implementation 0xb86e8 | runtime encoding: v16@0:8
- (void)setupIndicatorView;
// Implementation 0xb8960 | runtime encoding: v16@0:8
- (void)setupMediaImageView;
// Implementation 0xb8c34 | runtime encoding: v16@0:8
- (void)setupErrorLabel;
// Implementation 0xb8f68 | runtime encoding: v16@0:8
- (void)setupDurationLabel;
// Implementation 0xb92a4 | runtime encoding: v16@0:8
- (void)setupCheckmarkView;
// Implementation 0xb9824 | runtime encoding: @16@0:8
- (id)containerViewCell;
// Implementation 0xb9834 | runtime encoding: v24@0:8@16
- (void)setContainerViewCell:(id)arg1;
// Implementation 0xb9848 | runtime encoding: @16@0:8
- (id)indicatorView;
// Implementation 0xb9858 | runtime encoding: v24@0:8@16
- (void)setIndicatorView:(id)arg1;
// Implementation 0xb986c | runtime encoding: @16@0:8
- (id)mediaImageView;
// Implementation 0xb987c | runtime encoding: v24@0:8@16
- (void)setMediaImageView:(id)arg1;
// Implementation 0xb9890 | runtime encoding: @16@0:8
- (id)mediaImage;
// Implementation 0xb98a0 | runtime encoding: v24@0:8@16
- (void)setMediaImage:(id)arg1;
// Implementation 0xb98b4 | runtime encoding: @16@0:8
- (id)durationLabel;
// Implementation 0xb98c4 | runtime encoding: v24@0:8@16
- (void)setDurationLabel:(id)arg1;
// Implementation 0xb98d8 | runtime encoding: @16@0:8
- (id)checkmarkView;
// Implementation 0xb98e8 | runtime encoding: v24@0:8@16
- (void)setCheckmarkView:(id)arg1;
// Implementation 0xb98fc | runtime encoding: @16@0:8
- (id)checkmarkImageView;
// Implementation 0xb990c | runtime encoding: v24@0:8@16
- (void)setCheckmarkImageView:(id)arg1;
// Implementation 0xb9920 | runtime encoding: @16@0:8
- (id)errorLabel;
// Implementation 0xb9930 | runtime encoding: v24@0:8@16
- (void)setErrorLabel:(id)arg1;
// Implementation 0xb9944 | runtime encoding: v16@0:8
// Runtime-only method .cxx_destruct
@end
