// Reconstructed from Objective-C runtime metadata, not original source.
// External SDK types, superclass declarations and struct definitions may be required.
#import <Foundation/Foundation.h>

@interface DLBarButtonItem : UIBarButtonItem
{
@private
    id /* block; signature not encoded here */ onPressHandler; // offset 8, size 8; encoding @?
}
// Implementation 0x9f78c | runtime encoding: @40@0:8@16q24@?32
- (id)initWithTitle:(id)arg1 style:(long long)arg2 action:(id /* block; signature not encoded here */)arg3;
// Implementation 0x9f82c | runtime encoding: @40@0:8@16q24@?32
- (id)initWithImage:(id)arg1 style:(long long)arg2 action:(id /* block; signature not encoded here */)arg3;
// Implementation 0x9f8cc | runtime encoding: v24@0:8@16
- (void)didPressBarButton:(id)arg1;
// Implementation 0x9f8e8 | runtime encoding: v16@0:8
// Runtime-only method .cxx_destruct
@end
