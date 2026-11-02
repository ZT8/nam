// Reconstructed from Objective-C runtime metadata, not original source.
// External SDK types, superclass declarations and struct definitions may be required.
#import <Foundation/Foundation.h>

@interface FRPSettings : NSObject
{
@private
    NSString * _key; // offset 8, size 8; encoding @"NSString"
    NSString * _fileSave; // offset 16, size 8; encoding @"NSString"
    id /* block; signature not encoded here */ _valueDidChangeBlock; // offset 24, size 8; encoding @?
}
// Property valueDidChangeBlock | attributes: T@?,C,N,V_valueDidChangeBlock
// Property key | attributes: T@"NSString",&,N,V_key
// Property value | attributes: T@,&,N
// Property fileSave | attributes: T@"NSString",&,N,V_fileSave
// Implementation 0xb1b78 | runtime encoding: @32@0:8@16@24
- (id)initWithKey:(id)arg1 defaultValue:(id)arg2;
// Implementation 0xb1cd8 | runtime encoding: v48@0:8@16@24@32^v40
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
// Implementation 0xb1d54 | runtime encoding: @16@0:8
- (id)value;
// Implementation 0xb1de8 | runtime encoding: v24@0:8@16
- (void)setValue:(id)arg1;
// Implementation 0xb1f2c | runtime encoding: v24@0:8@16
- (void)saveValue:(id)arg1;
// Implementation 0xb2050 | runtime encoding: @16@0:8
- (id)key;
// Implementation 0xb2058 | runtime encoding: v24@0:8@16
- (void)setKey:(id)arg1;
// Implementation 0xb2064 | runtime encoding: @16@0:8
- (id)fileSave;
// Implementation 0xb206c | runtime encoding: v24@0:8@16
- (void)setFileSave:(id)arg1;
// Implementation 0xb2078 | runtime encoding: @?16@0:8
- (id /* block; signature not encoded here */)valueDidChangeBlock;
// Implementation 0xb2080 | runtime encoding: v24@0:8@?16
- (void)setValueDidChangeBlock:(id /* block; signature not encoded here */)arg1;
// Implementation 0xb2088 | runtime encoding: v16@0:8
// Runtime-only method .cxx_destruct
// Implementation 0xb1b04 | runtime encoding: @32@0:8@16@24
+ (id)settingsWithKey:(id)arg1 defaultValue:(id)arg2;
@end
