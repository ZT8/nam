// Reconstructed from Objective-C runtime metadata, not original source.
// External SDK types, superclass declarations and struct definitions may be required.
#import <Foundation/Foundation.h>

@interface DLMaxAlertAction : NSObject
{
@private
    NSString * _title; // offset 8, size 8; encoding @"NSString"
    id /* block; signature not encoded here */ _actionHandler; // offset 16, size 8; encoding @?
}
// Property title | attributes: T@"NSString",R,N,V_title
// Property actionHandler | attributes: T@?,R,C,N,V_actionHandler
// Implementation 0xa7904 | runtime encoding: @32@0:8@16@?24
- (id)initWithTitle:(id)arg1 action:(id /* block; signature not encoded here */)arg2;
// Implementation 0xa79ac | runtime encoding: @16@0:8
- (id)title;
// Implementation 0xa79b4 | runtime encoding: @?16@0:8
- (id /* block; signature not encoded here */)actionHandler;
// Implementation 0xa79bc | runtime encoding: v16@0:8
// Runtime-only method .cxx_destruct
@end
