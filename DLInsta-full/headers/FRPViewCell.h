// Reconstructed from Objective-C runtime metadata, not original source.
// External SDK types, superclass declarations and struct definitions may be required.
#import <Foundation/Foundation.h>

@interface FRPViewCell : FRPCell
{
@private
    BOOL _hideSeperators; // offset 8, size 1; encoding B
    id /* block; signature not encoded here */ _layoutBlock; // offset 16, size 8; encoding @?
}
// Property layoutBlock | attributes: T@?,C,N,V_layoutBlock
// Property hideSeperators | attributes: TB,N,V_hideSeperators
// Implementation 0xb4138 | runtime encoding: @36@0:8i16@?20@?28
- (id)cellWithHeight:(int)arg1 initBlock:(id /* block; signature not encoded here */)arg2 layoutBlock:(id /* block; signature not encoded here */)arg3;
// Implementation 0xb423c | runtime encoding: v16@0:8
- (void)layoutSubviews;
// Implementation 0xb42d8 | runtime encoding: v24@0:8@16
- (void)addSubview:(id)arg1;
// Implementation 0xb43b0 | runtime encoding: @?16@0:8
- (id /* block; signature not encoded here */)layoutBlock;
// Implementation 0xb43c0 | runtime encoding: v24@0:8@?16
- (void)setLayoutBlock:(id /* block; signature not encoded here */)arg1;
// Implementation 0xb43cc | runtime encoding: B16@0:8
- (BOOL)hideSeperators;
// Implementation 0xb43dc | runtime encoding: v20@0:8B16
- (void)setHideSeperators:(BOOL)arg1;
// Implementation 0xb43ec | runtime encoding: v16@0:8
// Runtime-only method .cxx_destruct
// Implementation 0xb40a8 | runtime encoding: @36@0:8i16@?20@?28
+ (id)cellWithHeight:(int)arg1 initBlock:(id /* block; signature not encoded here */)arg2 layoutBlock:(id /* block; signature not encoded here */)arg3;
@end
