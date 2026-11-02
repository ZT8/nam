// Reconstructed from Objective-C runtime metadata, not original source.
// External SDK types, superclass declarations and struct definitions may be required.
#import <Foundation/Foundation.h>

@interface DLMultiMediaViewController : DLPopupViewController
{
@private
    NSMutableArray * _posts; // offset 24, size 8; encoding @"NSMutableArray"
    UIView * _containerMediaCollectionView; // offset 32, size 8; encoding @"UIView"
    UICollectionView * _mediaCollectionView; // offset 40, size 8; encoding @"UICollectionView"
    UILabel * _titleLabel; // offset 48, size 8; encoding @"UILabel"
    NSMutableArray * _allSelectedMedia; // offset 56, size 8; encoding @"NSMutableArray"
    UITableView * _optionTableView; // offset 64, size 8; encoding @"UITableView"
    struct CGSize _collectionCellSize; // offset 72, size 16; encoding {CGSize="width"d"height"d}
}
// Property containerMediaCollectionView | attributes: T@"UIView",&,N,V_containerMediaCollectionView
// Property mediaCollectionView | attributes: T@"UICollectionView",&,N,V_mediaCollectionView
// Property titleLabel | attributes: T@"UILabel",&,N,V_titleLabel
// Property allSelectedMedia | attributes: T@"NSMutableArray",&,N,V_allSelectedMedia
// Property collectionCellSize | attributes: T{CGSize=dd},N,V_collectionCellSize
// Property optionTableView | attributes: T@"UITableView",&,N,V_optionTableView
// Property posts | attributes: T@"NSMutableArray",&,N,V_posts
// Property hash | attributes: TQ,R
// Property superclass | attributes: T#,R
// Property description | attributes: T@"NSString",R,C
// Property debugDescription | attributes: T@"NSString",R,C
// Implementation 0xb99fc | runtime encoding: v16@0:8
- (void)viewDidLoad;
// Implementation 0xb9d6c | runtime encoding: v16@0:8
- (void)setupMediaCollectionView;
// Implementation 0xbab0c | runtime encoding: v32@0:8{CGSize=dd}16
- (void)updateCollectionViewForSize:(struct CGSize)arg1;
// Implementation 0xbaba0 | runtime encoding: q32@0:8@16q24
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
// Implementation 0xbabec | runtime encoding: @32@0:8@16@24
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
// Implementation 0xbb32c | runtime encoding: {CGSize=dd}40@0:8@16@24@32
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
// Implementation 0xbb338 | runtime encoding: v32@0:8@16@24
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
// Implementation 0xbb71c | runtime encoding: v16@0:8
- (void)setupOptionTableView;
// Implementation 0xbbd68 | runtime encoding: q32@0:8@16q24
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
// Implementation 0xbbd70 | runtime encoding: @32@0:8@16@24
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
// Implementation 0xbc054 | runtime encoding: v40@0:8@16@24@32
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
// Implementation 0xbc0f0 | runtime encoding: v32@0:8@16@24
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
// Implementation 0xbc2b8 | runtime encoding: d32@0:8@16@24
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
// Implementation 0xbc2c4 | runtime encoding: v16@0:8
- (void)didPressSelectAllMedia;
// Implementation 0xbc5b0 | runtime encoding: v16@0:8
- (void)didPressUnselectAllMedia;
// Implementation 0xbc7b8 | runtime encoding: v16@0:8
- (void)didPressDownloadMedia;
// Implementation 0xbce7c | runtime encoding: @16@0:8
- (id)posts;
// Implementation 0xbce8c | runtime encoding: v24@0:8@16
- (void)setPosts:(id)arg1;
// Implementation 0xbcea0 | runtime encoding: @16@0:8
- (id)containerMediaCollectionView;
// Implementation 0xbceb0 | runtime encoding: v24@0:8@16
- (void)setContainerMediaCollectionView:(id)arg1;
// Implementation 0xbcec4 | runtime encoding: @16@0:8
- (id)mediaCollectionView;
// Implementation 0xbced4 | runtime encoding: v24@0:8@16
- (void)setMediaCollectionView:(id)arg1;
// Implementation 0xbcee8 | runtime encoding: @16@0:8
- (id)titleLabel;
// Implementation 0xbcef8 | runtime encoding: v24@0:8@16
- (void)setTitleLabel:(id)arg1;
// Implementation 0xbcf0c | runtime encoding: @16@0:8
- (id)allSelectedMedia;
// Implementation 0xbcf1c | runtime encoding: v24@0:8@16
- (void)setAllSelectedMedia:(id)arg1;
// Implementation 0xbcf30 | runtime encoding: {CGSize=dd}16@0:8
- (struct CGSize)collectionCellSize;
// Implementation 0xbcf44 | runtime encoding: v32@0:8{CGSize=dd}16
- (void)setCollectionCellSize:(struct CGSize)arg1;
// Implementation 0xbcf58 | runtime encoding: @16@0:8
- (id)optionTableView;
// Implementation 0xbcf68 | runtime encoding: v24@0:8@16
- (void)setOptionTableView:(id)arg1;
// Implementation 0xbcf7c | runtime encoding: v16@0:8
// Runtime-only method .cxx_destruct
@end
