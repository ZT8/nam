// Reconstructed from Objective-C runtime metadata, not original source.
// External SDK types, superclass declarations and struct definitions may be required.
#import <Foundation/Foundation.h>

@interface DLSSProfileViewController : UIViewController
{
@private
    UIActivityIndicatorView * indecatorView; // offset 8, size 8; encoding @"UIActivityIndicatorView"
    NSURL * _HDProfilePicURL; // offset 16, size 8; encoding @"NSURL"
    NSString * _userPK; // offset 24, size 8; encoding @"NSString"
    UIImageView * _imageView; // offset 32, size 8; encoding @"UIImageView"
    UIScrollView * _scrollView; // offset 40, size 8; encoding @"UIScrollView"
    UILabel * _errorLabel; // offset 48, size 8; encoding @"UILabel"
}
// Property HDProfilePicURL | attributes: T@"NSURL",&,N,V_HDProfilePicURL
// Property userPK | attributes: T@"NSString",&,N,V_userPK
// Property imageView | attributes: T@"UIImageView",&,N,V_imageView
// Property scrollView | attributes: T@"UIScrollView",&,N,V_scrollView
// Property errorLabel | attributes: T@"UILabel",&,N,V_errorLabel
// Property hash | attributes: TQ,R
// Property superclass | attributes: T#,R
// Property description | attributes: T@"NSString",R,C
// Property debugDescription | attributes: T@"NSString",R,C
// Implementation 0xb5c20 | runtime encoding: @24@0:8@16
- (id)initWithProfilePicURL:(id)arg1;
// Implementation 0xb5c94 | runtime encoding: @24@0:8@16
- (id)initWithProfilePicByUserPK:(id)arg1;
// Implementation 0xb5d08 | runtime encoding: v16@0:8
- (void)viewDidLoad;
// Implementation 0xb6730 | runtime encoding: v16@0:8
- (void)prepareImageToDownload;
// Implementation 0xb6de0 | runtime encoding: v24@0:8@?16
- (void)downloadImage:(id /* block; signature not encoded here */)arg1;
// Implementation 0xb70b4 | runtime encoding: v16@0:8
- (void)dismissCV;
// Implementation 0xb70c8 | runtime encoding: v16@0:8
- (void)shareNow;
// Implementation 0xb71f0 | runtime encoding: v16@0:8
- (void)viewDidLayoutSubviews;
// Implementation 0xb71fc | runtime encoding: @24@0:8@16
- (id)viewForZoomingInScrollView:(id)arg1;
// Implementation 0xb7208 | runtime encoding: v24@0:8@16
- (void)scrollViewDidZoom:(id)arg1;
// Implementation 0xb7214 | runtime encoding: v16@0:8
- (void)centerContentInScrollViewIfNeeded;
// Implementation 0xb7424 | runtime encoding: @16@0:8
- (id)HDProfilePicURL;
// Implementation 0xb7434 | runtime encoding: v24@0:8@16
- (void)setHDProfilePicURL:(id)arg1;
// Implementation 0xb7448 | runtime encoding: @16@0:8
- (id)userPK;
// Implementation 0xb7458 | runtime encoding: v24@0:8@16
- (void)setUserPK:(id)arg1;
// Implementation 0xb746c | runtime encoding: @16@0:8
- (id)imageView;
// Implementation 0xb747c | runtime encoding: v24@0:8@16
- (void)setImageView:(id)arg1;
// Implementation 0xb7490 | runtime encoding: @16@0:8
- (id)scrollView;
// Implementation 0xb74a0 | runtime encoding: v24@0:8@16
- (void)setScrollView:(id)arg1;
// Implementation 0xb74b4 | runtime encoding: @16@0:8
- (id)errorLabel;
// Implementation 0xb74c4 | runtime encoding: v24@0:8@16
- (void)setErrorLabel:(id)arg1;
// Implementation 0xb74d8 | runtime encoding: v16@0:8
// Runtime-only method .cxx_destruct
@end
