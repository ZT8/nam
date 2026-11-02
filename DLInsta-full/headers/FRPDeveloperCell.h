// Reconstructed from Objective-C runtime metadata, not original source.
// External SDK types, superclass declarations and struct definitions may be required.
#import <Foundation/Foundation.h>

@interface FRPDeveloperCell : FRPCell
{
@private
    NSString * _url; // offset 8, size 8; encoding @"NSString"
    UIImage * _image; // offset 16, size 8; encoding @"UIImage"
}
// Property url | attributes: T@"NSString",&,N,V_url
// Property image | attributes: T@"UIImage",&,N,V_image
// Implementation 0xae998 | runtime encoding: @48@0:8@16@24@32@40
- (id)cellWithTitle:(id)arg1 detail:(id)arg2 image:(id)arg3 url:(id)arg4;
// Implementation 0xaec3c | runtime encoding: v16@0:8
- (void)layoutSubviews;
// Implementation 0xaecb0 | runtime encoding: v24@0:8@16
- (void)didSelectFromTable:(id)arg1;
// Implementation 0xaee08 | runtime encoding: @16@0:8
- (id)url;
// Implementation 0xaee18 | runtime encoding: v24@0:8@16
- (void)setUrl:(id)arg1;
// Implementation 0xaee2c | runtime encoding: @16@0:8
- (id)image;
// Implementation 0xaee3c | runtime encoding: v24@0:8@16
- (void)setImage:(id)arg1;
// Implementation 0xaee50 | runtime encoding: v16@0:8
// Runtime-only method .cxx_destruct
// Implementation 0xae8d0 | runtime encoding: @48@0:8@16@24@32@40
+ (id)cellWithTitle:(id)arg1 detail:(id)arg2 image:(id)arg3 url:(id)arg4;
@end
