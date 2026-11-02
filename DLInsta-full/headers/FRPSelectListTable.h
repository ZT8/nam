// Reconstructed from Objective-C runtime metadata, not original source.
// External SDK types, superclass declarations and struct definitions may be required.
#import <Foundation/Foundation.h>

@interface FRPSelectListTable : UITableViewController
{
@private
    NSArray * listItems; // offset 8, size 8; encoding @"NSArray"
    NSArray * listValues; // offset 16, size 8; encoding @"NSArray"
    NSString * currentValue; // offset 24, size 8; encoding @"NSString"
    NSString * pageTitle; // offset 32, size 8; encoding @"NSString"
    BOOL popView; // offset 40, size 1; encoding B
    id /* block; signature not encoded here */ _itemChanged; // offset 48, size 8; encoding @?
    UIColor * _tintUIColor; // offset 56, size 8; encoding @"UIColor"
}
// Property itemChanged | attributes: T@?,C,N,V_itemChanged
// Property tintUIColor | attributes: T@"UIColor",C,N,V_tintUIColor
// Property hash | attributes: TQ,R
// Property superclass | attributes: T#,R
// Property description | attributes: T@"NSString",R,C
// Property debugDescription | attributes: T@"NSString",R,C
// Implementation 0xb0dc8 | runtime encoding: v16@0:8
- (void)viewWillLayoutSubviews;
// Implementation 0xb0eb8 | runtime encoding: @68@0:8q16@24@32@40@48B56@?60
- (id)initWithStyle:(long long)arg1 title:(id)arg2 items:(id)arg3 values:(id)arg4 currentValue:(id)arg5 popViewOnSelect:(BOOL)arg6 changeBlock:(id /* block; signature not encoded here */)arg7;
// Implementation 0xb10a0 | runtime encoding: v16@0:8
- (void)viewDidLoad;
// Implementation 0xb1294 | runtime encoding: q24@0:8@16
- (long long)numberOfSectionsInTableView:(id)arg1;
// Implementation 0xb129c | runtime encoding: q32@0:8@16q24
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
// Implementation 0xb12b4 | runtime encoding: @32@0:8@16@24
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
// Implementation 0xb1588 | runtime encoding: d32@0:8@16@24
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
// Implementation 0xb1594 | runtime encoding: @32@0:8@16q24
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
// Implementation 0xb1790 | runtime encoding: v32@0:8@16@24
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
// Implementation 0xb1a08 | runtime encoding: v16@0:8
- (void)didReceiveMemoryWarning;
// Implementation 0xb1a3c | runtime encoding: @?16@0:8
- (id /* block; signature not encoded here */)itemChanged;
// Implementation 0xb1a4c | runtime encoding: v24@0:8@?16
- (void)setItemChanged:(id /* block; signature not encoded here */)arg1;
// Implementation 0xb1a58 | runtime encoding: @16@0:8
- (id)tintUIColor;
// Implementation 0xb1a68 | runtime encoding: v24@0:8@16
- (void)setTintUIColor:(id)arg1;
// Implementation 0xb1a74 | runtime encoding: v16@0:8
// Runtime-only method .cxx_destruct
@end
