// Reconstructed from Objective-C runtime metadata, not original source.
// External SDK types, superclass declarations and struct definitions may be required.
#import <Foundation/Foundation.h>

@interface FRPSegmentCell : FRPCell
{
@private
    UISegmentedControl * _segment; // offset 8, size 8; encoding @"UISegmentedControl"
    NSArray * _values; // offset 16, size 8; encoding @"NSArray"
    NSArray * _displayedValues; // offset 24, size 8; encoding @"NSArray"
}
// Property segment | attributes: T@"UISegmentedControl",&,N,V_segment
// Property values | attributes: T@"NSArray",&,N,V_values
// Property displayedValues | attributes: T@"NSArray",&,N,V_displayedValues
// Implementation 0xb0270 | runtime encoding: @64@0:8@16@24@32@40@48@?56
- (id)cellWithTitle:(id)arg1 setting:(id)arg2 values:(id)arg3 displayedValues:(id)arg4 postNotification:(id)arg5 changeBlock:(id /* block; signature not encoded here */)arg6;
// Implementation 0xb05a4 | runtime encoding: v24@0:8@16
- (void)segmentAction:(id)arg1;
// Implementation 0xb0728 | runtime encoding: v16@0:8
- (void)layoutSubviews;
// Implementation 0xb07c0 | runtime encoding: @16@0:8
- (id)segment;
// Implementation 0xb07d0 | runtime encoding: v24@0:8@16
- (void)setSegment:(id)arg1;
// Implementation 0xb07e4 | runtime encoding: @16@0:8
- (id)values;
// Implementation 0xb07f4 | runtime encoding: v24@0:8@16
- (void)setValues:(id)arg1;
// Implementation 0xb0808 | runtime encoding: @16@0:8
- (id)displayedValues;
// Implementation 0xb0818 | runtime encoding: v24@0:8@16
- (void)setDisplayedValues:(id)arg1;
// Implementation 0xb082c | runtime encoding: v16@0:8
// Runtime-only method .cxx_destruct
// Implementation 0xaff88 | runtime encoding: @56@0:8@16@24@32@40@?48
+ (id)cellWithTitle:(id)arg1 setting:(id)arg2 items:(id)arg3 postNotification:(id)arg4 changeBlock:(id /* block; signature not encoded here */)arg5;
// Implementation 0xb0078 | runtime encoding: @64@0:8@16@24@32@40@48@?56
+ (id)cellWithTitle:(id)arg1 setting:(id)arg2 values:(id)arg3 displayedValues:(id)arg4 postNotification:(id)arg5 changeBlock:(id /* block; signature not encoded here */)arg6;
// Implementation 0xb0180 | runtime encoding: @56@0:8@16@24@32@40@?48
+ (id)cellWithTitle:(id)arg1 setting:(id)arg2 values:(id)arg3 postNotification:(id)arg4 changeBlock:(id /* block; signature not encoded here */)arg5;
@end
