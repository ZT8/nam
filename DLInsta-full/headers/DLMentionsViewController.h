// Reconstructed from Objective-C runtime metadata, not original source.
// External SDK types, superclass declarations and struct definitions may be required.
#import <Foundation/Foundation.h>

@interface DLMentionsViewController : DLPopupViewController
{
@private
    UITableView * _tableView; // offset 24, size 8; encoding @"UITableView"
    NSArray * _users; // offset 32, size 8; encoding @"NSArray"
    UILabel * _titleLabel; // offset 40, size 8; encoding @"UILabel"
    UILabel * _emptyLabel; // offset 48, size 8; encoding @"UILabel"
}
// Property tableView | attributes: T@"UITableView",&,N,V_tableView
// Property users | attributes: T@"NSArray",&,N,V_users
// Property titleLabel | attributes: T@"UILabel",&,N,V_titleLabel
// Property emptyLabel | attributes: T@"UILabel",&,N,V_emptyLabel
// Property hash | attributes: TQ,R
// Property superclass | attributes: T#,R
// Property description | attributes: T@"NSString",R,C
// Property debugDescription | attributes: T@"NSString",R,C
// Implementation 0xab304 | runtime encoding: @24@0:8@16
- (id)initWithUsers:(id)arg1;
// Implementation 0xab388 | runtime encoding: v16@0:8
- (void)viewDidLayoutSubviews;
// Implementation 0xab56c | runtime encoding: v16@0:8
- (void)viewDidLoad;
// Implementation 0xac198 | runtime encoding: v32@0:8@16@24
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
// Implementation 0xac2c4 | runtime encoding: d32@0:8@16@24
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
// Implementation 0xac2d0 | runtime encoding: q24@0:8@16
- (long long)numberOfSectionsInTableView:(id)arg1;
// Implementation 0xac2d8 | runtime encoding: q32@0:8@16q24
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
// Implementation 0xac324 | runtime encoding: @32@0:8@16@24
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
// Implementation 0xac908 | runtime encoding: @16@0:8
- (id)tableView;
// Implementation 0xac918 | runtime encoding: v24@0:8@16
- (void)setTableView:(id)arg1;
// Implementation 0xac92c | runtime encoding: @16@0:8
- (id)users;
// Implementation 0xac93c | runtime encoding: v24@0:8@16
- (void)setUsers:(id)arg1;
// Implementation 0xac950 | runtime encoding: @16@0:8
- (id)titleLabel;
// Implementation 0xac960 | runtime encoding: v24@0:8@16
- (void)setTitleLabel:(id)arg1;
// Implementation 0xac974 | runtime encoding: @16@0:8
- (id)emptyLabel;
// Implementation 0xac984 | runtime encoding: v24@0:8@16
- (void)setEmptyLabel:(id)arg1;
// Implementation 0xac998 | runtime encoding: v16@0:8
// Runtime-only method .cxx_destruct
@end
