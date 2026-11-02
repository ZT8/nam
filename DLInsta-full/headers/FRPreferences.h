// Reconstructed from Objective-C runtime metadata, not original source.
// External SDK types, superclass declarations and struct definitions may be required.
#import <Foundation/Foundation.h>

@interface FRPreferences : UITableViewController
{
@private
    NSArray * _sections; // offset 8, size 8; encoding @"NSArray"
    NSString * _plistPath; // offset 16, size 8; encoding @"NSString"
    UIColor * _tintUIColor; // offset 24, size 8; encoding @"UIColor"
}
// Property tintUIColor | attributes: T@"UIColor",&,N,V_tintUIColor
// Property sections | attributes: T@"NSArray",&,N,V_sections
// Property plistPath | attributes: T@"NSString",&,N,V_plistPath
// Implementation 0xb4708 | runtime encoding: @24@0:8@16
- (id)initTableWithSections:(id)arg1;
// Implementation 0xb4780 | runtime encoding: v16@0:8
- (void)updateTintColors;
// Implementation 0xb4ad4 | runtime encoding: v20@0:8B16
- (void)viewDidDisappear:(BOOL)arg1;
// Implementation 0xb4b08 | runtime encoding: v20@0:8B16
- (void)viewWillAppear:(BOOL)arg1;
// Implementation 0xb5138 | runtime encoding: @24@0:8@16
- (id)cellForIndexPath:(id)arg1;
// Implementation 0xb5230 | runtime encoding: q24@0:8@16
- (long long)numberOfSectionsInTableView:(id)arg1;
// Implementation 0xb527c | runtime encoding: @32@0:8@16q24
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
// Implementation 0xb5300 | runtime encoding: q32@0:8@16q24
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
// Implementation 0xb53a0 | runtime encoding: d32@0:8@16@24
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
// Implementation 0xb541c | runtime encoding: @32@0:8@16@24
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
// Implementation 0xb552c | runtime encoding: v32@0:8@16@24
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
// Implementation 0xb559c | runtime encoding: @32@0:8@16q24
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
// Implementation 0xb5620 | runtime encoding: v40@0:8@16@24q32
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
// Implementation 0xb5830 | runtime encoding: v40@0:8@16@24q32
- (void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3;
// Implementation 0xb5904 | runtime encoding: @32@0:8@16q24
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
// Implementation 0xb5b20 | runtime encoding: v16@0:8
- (void)reloadTableView;
// Implementation 0xb5b60 | runtime encoding: @16@0:8
- (id)sections;
// Implementation 0xb5b70 | runtime encoding: v24@0:8@16
- (void)setSections:(id)arg1;
// Implementation 0xb5b84 | runtime encoding: @16@0:8
- (id)plistPath;
// Implementation 0xb5b94 | runtime encoding: v24@0:8@16
- (void)setPlistPath:(id)arg1;
// Implementation 0xb5ba8 | runtime encoding: @16@0:8
- (id)tintUIColor;
// Implementation 0xb5bb8 | runtime encoding: v24@0:8@16
- (void)setTintUIColor:(id)arg1;
// Implementation 0xb5bcc | runtime encoding: v16@0:8
// Runtime-only method .cxx_destruct
// Implementation 0xb4658 | runtime encoding: @40@0:8@16@24@32
+ (id)tableWithSections:(id)arg1 title:(id)arg2 tintColor:(id)arg3;
@end
