// Reconstructed from Objective-C runtime metadata, not original source.
// External SDK types, superclass declarations and struct definitions may be required.
#import <Foundation/Foundation.h>

@interface DLUser : NSObject
{
@private
    NSString * _pk; // offset 8, size 8; encoding @"NSString"
    NSString * _fullname; // offset 16, size 8; encoding @"NSString"
    NSString * _username; // offset 24, size 8; encoding @"NSString"
    NSString * _avatarURL; // offset 32, size 8; encoding @"NSString"
    UIImage * _avatarImage; // offset 40, size 8; encoding @"UIImage"
}
// Property pk | attributes: T@"NSString",&,N,V_pk
// Property fullname | attributes: T@"NSString",&,N,V_fullname
// Property username | attributes: T@"NSString",&,N,V_username
// Property avatarURL | attributes: T@"NSString",&,N,V_avatarURL
// Property avatarImage | attributes: T@"UIImage",&,N,V_avatarImage
// Implementation 0xaca00 | runtime encoding: v32@0:8@16@?24
- (void)downloadAvatarFromUrl:(id)arg1 completion:(id /* block; signature not encoded here */)arg2;
// Implementation 0xacd10 | runtime encoding: @16@0:8
- (id)pk;
// Implementation 0xacd18 | runtime encoding: v24@0:8@16
- (void)setPk:(id)arg1;
// Implementation 0xacd24 | runtime encoding: @16@0:8
- (id)fullname;
// Implementation 0xacd2c | runtime encoding: v24@0:8@16
- (void)setFullname:(id)arg1;
// Implementation 0xacd38 | runtime encoding: @16@0:8
- (id)username;
// Implementation 0xacd40 | runtime encoding: v24@0:8@16
- (void)setUsername:(id)arg1;
// Implementation 0xacd4c | runtime encoding: @16@0:8
- (id)avatarURL;
// Implementation 0xacd54 | runtime encoding: v24@0:8@16
- (void)setAvatarURL:(id)arg1;
// Implementation 0xacd60 | runtime encoding: @16@0:8
- (id)avatarImage;
// Implementation 0xacd68 | runtime encoding: v24@0:8@16
- (void)setAvatarImage:(id)arg1;
// Implementation 0xacd74 | runtime encoding: v16@0:8
// Runtime-only method .cxx_destruct
@end
