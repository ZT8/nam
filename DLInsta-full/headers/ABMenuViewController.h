// Reconstructed from Objective-C runtime metadata, not original source.
// External SDK types, superclass declarations and struct definitions may be required.
#import <Foundation/Foundation.h>

@interface ABMenuViewController : UIViewController
{
@private
    NSString * _actionTitle; // offset 8, size 8; encoding @"NSString"
    NSArray * _items; // offset 16, size 8; encoding @"NSArray"
    id _delegate; // offset 24, size 8; encoding @
}
// Property actionTitle | attributes: T@"NSString",&,N,V_actionTitle
// Property items | attributes: T@"NSArray",&,N,V_items
// Property delegate | attributes: T@,W,N,V_delegate
// Implementation 0x9ac90 | runtime encoding: @32@0:8@16@24
- (id)initWithTitle:(id)arg1 actionItems:(id)arg2;
// Implementation 0x9ad14 | runtime encoding: @24@0:8@16
- (id)initWithActionItems:(id)arg1;
// Implementation 0x9ad48 | runtime encoding: v36@0:8@16B24@?28
- (void)presentedFromViewController:(id)arg1 animated:(BOOL)arg2 completion:(id /* block; signature not encoded here */)arg3;
// Implementation 0x9b228 | runtime encoding: @16@0:8
- (id)actionTitle;
// Implementation 0x9b238 | runtime encoding: v24@0:8@16
- (void)setActionTitle:(id)arg1;
// Implementation 0x9b24c | runtime encoding: @16@0:8
- (id)items;
// Implementation 0x9b25c | runtime encoding: v24@0:8@16
- (void)setItems:(id)arg1;
// Implementation 0x9b270 | runtime encoding: @16@0:8
- (id)delegate;
// Implementation 0x9b290 | runtime encoding: v24@0:8@16
- (void)setDelegate:(id)arg1;
// Implementation 0x9b2a4 | runtime encoding: v16@0:8
// Runtime-only method .cxx_destruct
@end
