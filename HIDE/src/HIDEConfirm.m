// Confirmation popups before like / follow.
#import "HIDECore.h"

static BOOL sLikeConfirmed = NO;

#define HIDE_CONFIRM_LIKE(call) do { \
    if (sLikeConfirmed || !HIDEPref(kHideConfirmLike)) { call; return; } \
    HIDEConfirm(@"HIDE", HIDEL(@"LIKE_Q"), HIDEL(@"CONFIRM"), ^{ \
        sLikeConfirmed = YES; @try { call; } @finally { sLikeConfirmed = NO; } \
    }); \
} while (0)

// Feed like button
static void (*orig_ufiLike)(id, SEL, id);
static void hide_ufiLike(id self, SEL _cmd, id sender) { HIDE_CONFIRM_LIKE(orig_ufiLike(self, _cmd, sender)); }

// Feed photo double tap
static void (*orig_photoDoubleTap)(id, SEL, id);
static void hide_photoDoubleTap(id self, SEL _cmd, id g) { HIDE_CONFIRM_LIKE(orig_photoDoubleTap(self, _cmd, g)); }

// Feed video double tap
static void (*orig_videoDoubleTap)(id, SEL, id);
static void hide_videoDoubleTap(id self, SEL _cmd, id v) { HIDE_CONFIRM_LIKE(orig_videoDoubleTap(self, _cmd, v)); }

// Reels like button
static void (*orig_reelLike)(id, SEL, id);
static void hide_reelLike(id self, SEL _cmd, id sender) { HIDE_CONFIRM_LIKE(orig_reelLike(self, _cmd, sender)); }

// Reels double tap
static void (*orig_reelDoubleTap)(id, SEL, id, id, id);
static void hide_reelDoubleTap(id self, SEL _cmd, id cell, id g, id info) { HIDE_CONFIRM_LIKE(orig_reelDoubleTap(self, _cmd, cell, g, info)); }

// Follow button
// The gesture variant may call the plain variant internally; this flag avoids asking twice.
static BOOL sFollowConfirmed = NO;
static void (*orig_follow)(id, SEL);
static void hide_follow(id self, SEL _cmd) {
    if (sFollowConfirmed || !HIDEPref(kHideConfirmFollow)) { orig_follow(self, _cmd); return; }
    HIDEConfirm(@"HIDE", HIDEL(@"FOLLOW_Q"), HIDEL(@"CONFIRM"), ^{
        sFollowConfirmed = YES;
        @try { orig_follow(self, _cmd); } @finally { sFollowConfirmed = NO; }
    });
}
static void (*orig_followGR)(id, SEL, id);
static void hide_followGR(id self, SEL _cmd, id g) {
    if (sFollowConfirmed || !HIDEPref(kHideConfirmFollow)) { orig_followGR(self, _cmd, g); return; }
    HIDEConfirm(@"HIDE", HIDEL(@"FOLLOW_Q"), HIDEL(@"CONFIRM"), ^{
        sFollowConfirmed = YES;
        @try { orig_followGR(self, _cmd, g); } @finally { sFollowConfirmed = NO; }
    });
}

static void HIDEInstallAdditionalConfirmation(NSString *className,NSString *name,BOOL follow,BOOL twoArguments) {
    SEL selector=NSSelectorFromString(name);Method method=class_getInstanceMethod(NSClassFromString(className),selector);
    __block IMP original=method ? method_getImplementation(method) : NULL;
    void (^invoke)(id,id,id)=^(id object,id first,id second){
        if(twoArguments)((void (*)(id,SEL,id,id))original)(object,selector,first,second);
        else((void (*)(id,SEL,id))original)(object,selector,first);
    };
    void (^confirm)(id,id,id)=^(id object,id first,id second){
        BOOL bypass=follow ? sFollowConfirmed : sLikeConfirmed;
        if(bypass || !HIDEPref(follow ? kHideConfirmFollow : kHideConfirmLike)){invoke(object,first,second);return;}
        HIDEConfirm(@"HIDE",HIDEL(follow ? @"FOLLOW_Q" : @"LIKE_Q"),HIDEL(@"CONFIRM"),^{
            if(follow)sFollowConfirmed=YES;else sLikeConfirmed=YES;
            @try{invoke(object,first,second);}@finally{if(follow)sFollowConfirmed=NO;else sLikeConfirmed=NO;}
        });
    };
    IMP replacement=twoArguments ? imp_implementationWithBlock(^(id object,id first,id second){confirm(object,first,second);}) : imp_implementationWithBlock(^(id object,id first){confirm(object,first,nil);});
    IMP installed=HIDEHookChecked(className,selector,replacement,twoArguments ? "v@:@@" : "v@:@");
    if(installed)original=installed;else imp_removeBlock(replacement);
}

void HIDEInstallConfirmations(void) {
    HIDEInstallAdditionalConfirmation(@"IGFeedItemUFICell",@"UFIButtonBarDidTapOnLike:",NO,NO);
    HIDEInstallAdditionalConfirmation(@"IGModernFeedVideoCell",@"videoPlayerOverlayControllerDidDoubleTap:locationInfo:",NO,YES);
    HIDEInstallAdditionalConfirmation(@"IGModernFeedVideoCell.IGModernFeedVideoCell",@"videoPlayerOverlayControllerDidDoubleTap:locationInfo:",NO,YES);
    HIDEInstallAdditionalConfirmation(@"IGSundialViewerVideoCell",@"controlsOverlayControllerDidTapLikeButton:",NO,NO);
    HIDEInstallAdditionalConfirmation(@"IGSundialViewerVideoCell",@"gestureController:didObserveDoubleTap:",NO,YES);
    HIDEInstallAdditionalConfirmation(@"IGUnifiedVideoFollowButton",@"_hackilyHandleOurOwnButtonTaps:event:",YES,YES);
    orig_ufiLike = (void *)HIDEHookChecked(@"IGUFIButtonBarView", NSSelectorFromString(@"_onLikeButtonPressed:"), (IMP)hide_ufiLike, "v@:@");
    orig_photoDoubleTap = (void *)HIDEHookChecked(@"IGFeedPhotoView", NSSelectorFromString(@"_onDoubleTap:"), (IMP)hide_photoDoubleTap, "v@:@");
    orig_videoDoubleTap = (void *)HIDEHookChecked(@"IGFeedItemVideoView", NSSelectorFromString(@"overlayViewDidDoubleTap:"), (IMP)hide_videoDoubleTap, "v@:@");
    orig_reelLike = (void *)HIDEHookChecked(@"IGSundialViewerVerticalUFI", NSSelectorFromString(@"_didTapLikeButton:"), (IMP)hide_reelLike, "v@:@");
    orig_reelDoubleTap = (void *)HIDEHookChecked(@"IGSundialViewerVideoSectionController", NSSelectorFromString(@"sundialViewerVideoCellDidDoubleTap:gestureRecognizer:locationInfo:"), (IMP)hide_reelDoubleTap, "v@:@@@");
    orig_follow = (void *)HIDEHookChecked(@"IGFollowController", NSSelectorFromString(@"_didPressFollowButton"), (IMP)hide_follow, "v@:");
    orig_followGR = (void *)HIDEHookChecked(@"IGFollowController", NSSelectorFromString(@"_didPressFollowButtonWithGestureRecognizer:"), (IMP)hide_followGR, "v@:@");
}
