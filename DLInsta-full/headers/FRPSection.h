// Reconstructed from Objective-C runtime metadata, not original source.
// External SDK types, superclass declarations and struct definitions may be required.
#import <Foundation/Foundation.h>

@interface FRPSection : UITableViewCell
{
@private
    NSString * _headerTitle; // offset 8, size 8; encoding @"NSString"
    NSString * _footerTitle; // offset 16, size 8; encoding @"NSString"
    NSMutableArray * _cells; // offset 24, size 8; encoding @"NSMutableArray"
    UIColor * _tintUIColor; // offset 32, size 8; encoding @"UIColor"
}
// Property headerTitle | attributes: T@"NSString",&,N,V_headerTitle
// Property footerTitle | attributes: T@"NSString",&,N,V_footerTitle
// Property cells | attributes: T@"NSMutableArray",&,N,V_cells
// Property tintUIColor | attributes: T@"UIColor",&,N,V_tintUIColor
// Implementation 0xafc70 | runtime encoding: @32@0:8@16@24
- (id)initWithTitle:(id)arg1 footer:(id)arg2;
// Implementation 0xafd4c | runtime encoding: v24@0:8@16
- (void)addCell:(id)arg1;
// Implementation 0xafdb8 | runtime encoding: v24@0:8@16
- (void)removeCell:(id)arg1;
// Implementation 0xafe24 | runtime encoding: v24@0:8@16
- (void)addCells:(id)arg1;
// Implementation 0xafe90 | runtime encoding: @16@0:8
- (id)headerTitle;
// Implementation 0xafea0 | runtime encoding: v24@0:8@16
- (void)setHeaderTitle:(id)arg1;
// Implementation 0xafeb4 | runtime encoding: @16@0:8
- (id)footerTitle;
// Implementation 0xafec4 | runtime encoding: v24@0:8@16
- (void)setFooterTitle:(id)arg1;
// Implementation 0xafed8 | runtime encoding: @16@0:8
- (id)cells;
// Implementation 0xafee8 | runtime encoding: v24@0:8@16
- (void)setCells:(id)arg1;
// Implementation 0xafefc | runtime encoding: @16@0:8
- (id)tintUIColor;
// Implementation 0xaff0c | runtime encoding: v24@0:8@16
- (void)setTintUIColor:(id)arg1;
// Implementation 0xaff20 | runtime encoding: v16@0:8
// Runtime-only method .cxx_destruct
// Implementation 0xafbfc | runtime encoding: @32@0:8@16@24
+ (id)sectionWithTitle:(id)arg1 footer:(id)arg2;
@end
