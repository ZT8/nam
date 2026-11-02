// Reconstructed from Objective-C runtime metadata, not original source.
// External SDK types, superclass declarations and struct definitions may be required.
#import <Foundation/Foundation.h>

@interface FRPViewSection : FRPSection
{
@private
    id /* block; signature not encoded here */ _cellBlock; // offset 8, size 8; encoding @?
}
// Property cellBlock | attributes: T@?,C,N,V_cellBlock
// Implementation 0xb447c | runtime encoding: @36@0:8i16@?20@?28
- (id)initWithHeight:(int)arg1 initBlock:(id /* block; signature not encoded here */)arg2 layoutBlock:(id /* block; signature not encoded here */)arg3;
// Implementation 0xb4628 | runtime encoding: @?16@0:8
- (id /* block; signature not encoded here */)cellBlock;
// Implementation 0xb4638 | runtime encoding: v24@0:8@?16
- (void)setCellBlock:(id /* block; signature not encoded here */)arg1;
// Implementation 0xb4644 | runtime encoding: v16@0:8
// Runtime-only method .cxx_destruct
// Implementation 0xb4400 | runtime encoding: @36@0:8i16@?20@?28
+ (id)sectionWithHeight:(int)arg1 initBlock:(id /* block; signature not encoded here */)arg2 layoutBlock:(id /* block; signature not encoded here */)arg3;
@end
