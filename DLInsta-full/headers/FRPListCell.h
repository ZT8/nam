// Reconstructed from Objective-C runtime metadata, not original source.
// External SDK types, superclass declarations and struct definitions may be required.
#import <Foundation/Foundation.h>

@interface FRPListCell : FRPCell
{
@private
    BOOL _popView; // offset 8, size 1; encoding B
    NSArray * _items; // offset 16, size 8; encoding @"NSArray"
    NSArray * _values; // offset 24, size 8; encoding @"NSArray"
}
// Property items | attributes: T@"NSArray",&,N,V_items
// Property values | attributes: T@"NSArray",&,N,V_values
// Property popView | attributes: TB,N,V_popView
// Implementation 0xaf210 | runtime encoding: @68@0:8@16@24@32@40B48@52@?60
- (id)cellWithTitle:(id)arg1 setting:(id)arg2 items:(id)arg3 value:(id)arg4 popViewOnSelect:(BOOL)arg5 postNotification:(id)arg6 changedBlock:(id /* block; signature not encoded here */)arg7;
// Implementation 0xaf5b0 | runtime encoding: v24@0:8@16
- (void)didSelectFromTable:(id)arg1;
// Implementation 0xafb20 | runtime encoding: v16@0:8
- (void)layoutSubviews;
// Implementation 0xafb54 | runtime encoding: @16@0:8
- (id)items;
// Implementation 0xafb64 | runtime encoding: v24@0:8@16
- (void)setItems:(id)arg1;
// Implementation 0xafb78 | runtime encoding: @16@0:8
- (id)values;
// Implementation 0xafb88 | runtime encoding: v24@0:8@16
- (void)setValues:(id)arg1;
// Implementation 0xafb9c | runtime encoding: B16@0:8
- (BOOL)popView;
// Implementation 0xafbac | runtime encoding: v20@0:8B16
- (void)setPopView:(BOOL)arg1;
// Implementation 0xafbbc | runtime encoding: v16@0:8
// Runtime-only method .cxx_destruct
// Implementation 0xaf0f8 | runtime encoding: @68@0:8@16@24@32@40B48@52@?60
+ (id)cellWithTitle:(id)arg1 setting:(id)arg2 items:(id)arg3 value:(id)arg4 popViewOnSelect:(BOOL)arg5 postNotification:(id)arg6 changedBlock:(id /* block; signature not encoded here */)arg7;
@end
