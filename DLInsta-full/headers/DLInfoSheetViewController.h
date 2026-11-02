// Reconstructed from Objective-C runtime metadata, not original source.
// External SDK types, superclass declarations and struct definitions may be required.
#import <Foundation/Foundation.h>

@interface DLInfoSheetViewController : UIViewController
{
@private
    NSString * _titleInfo; // offset 8, size 8; encoding @"NSString"
    NSString * _info; // offset 16, size 8; encoding @"NSString"
    UILabel * _titleLabel; // offset 24, size 8; encoding @"UILabel"
    UILabel * _infoLabel; // offset 32, size 8; encoding @"UILabel"
    UIImageView * _iconImageView; // offset 40, size 8; encoding @"UIImageView"
}
// Property titleInfo | attributes: T@"NSString",&,N,V_titleInfo
// Property info | attributes: T@"NSString",&,N,V_info
// Property titleLabel | attributes: T@"UILabel",&,N,V_titleLabel
// Property infoLabel | attributes: T@"UILabel",&,N,V_infoLabel
// Property iconImageView | attributes: T@"UIImageView",&,N,V_iconImageView
// Implementation 0xa5418 | runtime encoding: @32@0:8@16@24
- (id)initWithTitle:(id)arg1 info:(id)arg2;
// Implementation 0xa54cc | runtime encoding: v16@0:8
- (void)viewDidLoad;
// Implementation 0xa5e6c | runtime encoding: v16@0:8
- (void)viewDidLayoutSubviews;
// Implementation 0xa6204 | runtime encoding: @16@0:8
- (id)titleInfo;
// Implementation 0xa6214 | runtime encoding: v24@0:8@16
- (void)setTitleInfo:(id)arg1;
// Implementation 0xa6228 | runtime encoding: @16@0:8
- (id)info;
// Implementation 0xa6238 | runtime encoding: v24@0:8@16
- (void)setInfo:(id)arg1;
// Implementation 0xa624c | runtime encoding: @16@0:8
- (id)titleLabel;
// Implementation 0xa625c | runtime encoding: v24@0:8@16
- (void)setTitleLabel:(id)arg1;
// Implementation 0xa6270 | runtime encoding: @16@0:8
- (id)infoLabel;
// Implementation 0xa6280 | runtime encoding: v24@0:8@16
- (void)setInfoLabel:(id)arg1;
// Implementation 0xa6294 | runtime encoding: @16@0:8
- (id)iconImageView;
// Implementation 0xa62a4 | runtime encoding: v24@0:8@16
- (void)setIconImageView:(id)arg1;
// Implementation 0xa62b8 | runtime encoding: v16@0:8
// Runtime-only method .cxx_destruct
@end
