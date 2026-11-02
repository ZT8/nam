// Reconstructed from Objective-C runtime metadata, not original source.
// External SDK types, superclass declarations and struct definitions may be required.
#import <Foundation/Foundation.h>

@interface FRPCell : UITableViewCell
{
@private
    int _height; // offset 8, size 4; encoding i
    UIColor * _tintUIColor; // offset 16, size 8; encoding @"UIColor"
    FRPSettings * _setting; // offset 24, size 8; encoding @"FRPSettings"
    NSString * _title; // offset 32, size 8; encoding @"NSString"
    NSString * _postNotification; // offset 40, size 8; encoding @"NSString"
    id /* block; signature not encoded here */ _valueChanged; // offset 48, size 8; encoding @?
}
// Property tintUIColor | attributes: T@"UIColor",&,N,V_tintUIColor
// Property setting | attributes: T@"FRPSettings",&,N,V_setting
// Property title | attributes: T@"NSString",&,N,V_title
// Property postNotification | attributes: T@"NSString",&,N,V_postNotification
// Property valueChanged | attributes: T@?,C,N,V_valueChanged
// Property height | attributes: Ti,N,V_height
// Implementation 0xae664 | runtime encoding: @32@0:8@16@24
- (id)initWithTitle:(id)arg1 setting:(id)arg2;
// Implementation 0xae784 | runtime encoding: v24@0:8@16
- (void)didSelectFromTable:(id)arg1;
// Implementation 0xae788 | runtime encoding: @16@0:8
- (id)tintUIColor;
// Implementation 0xae798 | runtime encoding: v24@0:8@16
- (void)setTintUIColor:(id)arg1;
// Implementation 0xae7ac | runtime encoding: @16@0:8
- (id)setting;
// Implementation 0xae7bc | runtime encoding: v24@0:8@16
- (void)setSetting:(id)arg1;
// Implementation 0xae7d0 | runtime encoding: @16@0:8
- (id)title;
// Implementation 0xae7e0 | runtime encoding: v24@0:8@16
- (void)setTitle:(id)arg1;
// Implementation 0xae7f4 | runtime encoding: @16@0:8
- (id)postNotification;
// Implementation 0xae804 | runtime encoding: v24@0:8@16
- (void)setPostNotification:(id)arg1;
// Implementation 0xae818 | runtime encoding: @?16@0:8
- (id /* block; signature not encoded here */)valueChanged;
// Implementation 0xae828 | runtime encoding: v24@0:8@?16
- (void)setValueChanged:(id /* block; signature not encoded here */)arg1;
// Implementation 0xae834 | runtime encoding: i16@0:8
- (int)height;
// Implementation 0xae844 | runtime encoding: v20@0:8i16
- (void)setHeight:(int)arg1;
// Implementation 0xae854 | runtime encoding: v16@0:8
// Runtime-only method .cxx_destruct
// Implementation 0xae5f0 | runtime encoding: @32@0:8@16@24
+ (id)cellWithTitle:(id)arg1 setting:(id)arg2;
@end
