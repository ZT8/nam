// Reconstructed from Objective-C runtime metadata, not original source.
// External SDK types, superclass declarations and struct definitions may be required.
#import <Foundation/Foundation.h>

@interface DLMultiMediaOptionCell : UITableViewCell
{
@private
    UIView * _containerView; // offset 8, size 8; encoding @"UIView"
    UILabel * _titleLabel; // offset 16, size 8; encoding @"UILabel"
}
// Property containerView | attributes: T@"UIView",&,N,V_containerView
// Property titleLabel | attributes: T@"UILabel",&,N,V_titleLabel
// Implementation 0xb7570 | runtime encoding: @32@0:8q16@24
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
// Implementation 0xb7604 | runtime encoding: v16@0:8
- (void)layoutSubviews;
// Implementation 0xb77ec | runtime encoding: v16@0:8
- (void)setupViews;
// Implementation 0xb800c | runtime encoding: @16@0:8
- (id)containerView;
// Implementation 0xb801c | runtime encoding: v24@0:8@16
- (void)setContainerView:(id)arg1;
// Implementation 0xb8030 | runtime encoding: @16@0:8
- (id)titleLabel;
// Implementation 0xb8040 | runtime encoding: v24@0:8@16
- (void)setTitleLabel:(id)arg1;
// Implementation 0xb8054 | runtime encoding: v16@0:8
// Runtime-only method .cxx_destruct
@end
