// Reconstructed from Objective-C runtime metadata, not original source.
// External SDK types, superclass declarations and struct definitions may be required.
#import <Foundation/Foundation.h>

@interface DLMediaData : NSObject
{
@private
    BOOL _fetching; // offset 8, size 1; encoding B
    BOOL _select; // offset 9, size 1; encoding B
    NSString * _coverUrl; // offset 16, size 8; encoding @"NSString"
    NSString * _url; // offset 24, size 8; encoding @"NSString"
    UIImage * _coverImage; // offset 32, size 8; encoding @"UIImage"
    unsigned long long _mediaType; // offset 40, size 8; encoding Q
    double _duration; // offset 48, size 8; encoding d
    double _takenAtDate; // offset 56, size 8; encoding d
}
// Property coverUrl | attributes: T@"NSString",&,N,V_coverUrl
// Property url | attributes: T@"NSString",&,N,V_url
// Property coverImage | attributes: T@"UIImage",&,N,V_coverImage
// Property mediaType | attributes: TQ,N,V_mediaType
// Property duration | attributes: Td,N,V_duration
// Property takenAtDate | attributes: Td,N,V_takenAtDate
// Property fetching | attributes: TB,N,GisFetching,V_fetching
// Property select | attributes: TB,N,GisSelected,V_select
// Implementation 0xa4370 | runtime encoding: v32@0:8@16@?24
- (void)downloadImageFromUrl:(id)arg1 completion:(id /* block; signature not encoded here */)arg2;
// Implementation 0xa45c8 | runtime encoding: @24@0:8d16
- (id)convertTimeToString:(double)arg1;
// Implementation 0xa467c | runtime encoding: @16@0:8
- (id)coverUrl;
// Implementation 0xa4684 | runtime encoding: v24@0:8@16
- (void)setCoverUrl:(id)arg1;
// Implementation 0xa4690 | runtime encoding: @16@0:8
- (id)url;
// Implementation 0xa4698 | runtime encoding: v24@0:8@16
- (void)setUrl:(id)arg1;
// Implementation 0xa46a4 | runtime encoding: @16@0:8
- (id)coverImage;
// Implementation 0xa46ac | runtime encoding: v24@0:8@16
- (void)setCoverImage:(id)arg1;
// Implementation 0xa46b8 | runtime encoding: Q16@0:8
- (unsigned long long)mediaType;
// Implementation 0xa46c0 | runtime encoding: v24@0:8Q16
- (void)setMediaType:(unsigned long long)arg1;
// Implementation 0xa46c8 | runtime encoding: d16@0:8
- (double)duration;
// Implementation 0xa46d0 | runtime encoding: v24@0:8d16
- (void)setDuration:(double)arg1;
// Implementation 0xa46d8 | runtime encoding: d16@0:8
- (double)takenAtDate;
// Implementation 0xa46e0 | runtime encoding: v24@0:8d16
- (void)setTakenAtDate:(double)arg1;
// Implementation 0xa46e8 | runtime encoding: B16@0:8
- (BOOL)isFetching;
// Implementation 0xa46f0 | runtime encoding: v20@0:8B16
- (void)setFetching:(BOOL)arg1;
// Implementation 0xa46f8 | runtime encoding: B16@0:8
- (BOOL)isSelected;
// Implementation 0xa4700 | runtime encoding: v20@0:8B16
- (void)setSelect:(BOOL)arg1;
// Implementation 0xa4708 | runtime encoding: v16@0:8
// Runtime-only method .cxx_destruct
@end
