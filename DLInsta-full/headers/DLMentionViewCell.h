// Reconstructed from Objective-C runtime metadata, not original source.
// External SDK types, superclass declarations and struct definitions may be required.
#import <Foundation/Foundation.h>

@interface DLMentionViewCell : UITableViewCell
{
@private
    id /* block; signature not encoded here */ _avatarImageTapAction; // offset 8, size 8; encoding @?
    UIImageView * _avatarImageView; // offset 16, size 8; encoding @"UIImageView"
    UILabel * _usernameLabel; // offset 24, size 8; encoding @"UILabel"
    UILabel * _fullnameLabel; // offset 32, size 8; encoding @"UILabel"
}
// Property avatarImageTapAction | attributes: T@?,C,N,V_avatarImageTapAction
// Property avatarImageView | attributes: T@"UIImageView",&,N,V_avatarImageView
// Property usernameLabel | attributes: T@"UILabel",&,N,V_usernameLabel
// Property fullnameLabel | attributes: T@"UILabel",&,N,V_fullnameLabel
// Implementation 0xa9cb8 | runtime encoding: @32@0:8q16@24
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
// Implementation 0xa9d44 | runtime encoding: v16@0:8
- (void)prepareForReuse;
// Implementation 0xa9db8 | runtime encoding: v16@0:8
- (void)layoutSubviews;
// Implementation 0xaa238 | runtime encoding: v16@0:8
- (void)setupViews;
// Implementation 0xab180 | runtime encoding: v24@0:8@16
- (void)avatarImageTapped:(id)arg1;
// Implementation 0xab214 | runtime encoding: @?16@0:8
- (id /* block; signature not encoded here */)avatarImageTapAction;
// Implementation 0xab224 | runtime encoding: v24@0:8@?16
- (void)setAvatarImageTapAction:(id /* block; signature not encoded here */)arg1;
// Implementation 0xab230 | runtime encoding: @16@0:8
- (id)avatarImageView;
// Implementation 0xab240 | runtime encoding: v24@0:8@16
- (void)setAvatarImageView:(id)arg1;
// Implementation 0xab254 | runtime encoding: @16@0:8
- (id)usernameLabel;
// Implementation 0xab264 | runtime encoding: v24@0:8@16
- (void)setUsernameLabel:(id)arg1;
// Implementation 0xab278 | runtime encoding: @16@0:8
- (id)fullnameLabel;
// Implementation 0xab288 | runtime encoding: v24@0:8@16
- (void)setFullnameLabel:(id)arg1;
// Implementation 0xab29c | runtime encoding: v16@0:8
// Runtime-only method .cxx_destruct
@end
