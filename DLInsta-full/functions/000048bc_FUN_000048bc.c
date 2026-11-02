/* Address: 000048bc | Name: FUN_000048bc | Body bytes: 3496 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_000048bc(void)

{
  undefined8 uVar1;
  ID IVar2;
  undefined4 local_458;
  undefined2 local_454;
  undefined1 local_452;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_000e8260;
  uVar1 = _objc_getClass("IGVideoPlayerConfig");
  DAT_000ff818 = _class_getSuperclass();
  FUN_0000568c(uVar1,"looping",FUN_0000577c,&DAT_000ff820);
  uVar1 = _objc_getClass("IGVideoPlaybackConfiguration");
  DAT_000ff828 = _class_getSuperclass();
  FUN_0000568c(uVar1,"looping",FUN_00005904,&DAT_000ff830);
  uVar1 = _objc_getClass("IGStoryViewerViewController");
  DAT_000ff838 = _class_getSuperclass();
  FUN_0000568c(uVar1,"fullscreenSectionController:didMarkItemAsSeen:",FUN_00005a8c,&DAT_000ff840);
  uVar1 = _objc_getClass("IGStoryFullscreenSectionController");
  DAT_000ff848 = _class_getSuperclass();
  FUN_0000568c(uVar1,"storyPlayerMediaViewDidPlayToEnd:",FUN_00005dc8,&DAT_000ff850);
  IVar2 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf__s__);
  IVar2 = _objc_retainAutorelease(IVar2);
  IVar2 = _objc_msgSend(IVar2,"UTF8String");
  _class_addMethod(uVar1,"userHaveSeenStory",FUN_00004688,IVar2);
  IVar2 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_v___s);
  IVar2 = _objc_retainAutorelease(IVar2);
  IVar2 = _objc_msgSend(IVar2,"UTF8String");
  _class_addMethod(uVar1,"setUserHaveSeenStory:",FUN_000046e8,IVar2);
  uVar1 = _objc_getClass("IGGalleryDataSource");
  DAT_000ff858 = _class_getSuperclass();
  FUN_0000568c(uVar1,"setPreferredMediaTypes:",FUN_00006224,&DAT_000ff860);
  uVar1 = _objc_getClass("IGLiveViewerCountIntervalPuller");
  DAT_000ff868 = _class_getSuperclass();
  FUN_0000568c(uVar1,
               "initWithUserSession:broadcastId:pullInterval:networker:loggingContext:mode:surface:infoProvider:"
               ,FUN_000063f0,&DAT_000ff870);
  uVar1 = _objc_getClass("IGFollowController");
  DAT_000ff878 = _class_getSuperclass();
  FUN_0000568c(uVar1,"_didPressFollowButton",FUN_000066a0,&DAT_000ff880);
  uVar1 = _objc_getClass("IGUnifiedVideoFollowButton");
  DAT_000ff888 = _class_getSuperclass();
  FUN_0000568c(uVar1,"_hackilyHandleOurOwnButtonTaps:event:",FUN_00006c84,&DAT_000ff890);
  uVar1 = _objc_getClass("IGFeedPhotoView");
  DAT_000ff898 = _class_getSuperclass();
  FUN_0000568c(uVar1,"_onDoubleTap:",FUN_00007170,&DAT_000ff8a0);
  uVar1 = _objc_getClass("IGFeedItemVideoView");
  DAT_000ff8a8 = _class_getSuperclass();
  FUN_0000568c(uVar1,"overlayViewDidDoubleTap:",FUN_000079e0,&DAT_000ff8b0);
  uVar1 = _objc_getClass("IGModernFeedVideoCell");
  DAT_000ff8b8 = _class_getSuperclass();
  FUN_0000568c(uVar1,"videoPlayerOverlayControllerDidDoubleTap:locationInfo:",FUN_00008274,
               &DAT_000ff8c0);
  uVar1 = _objc_getClass("IGModernFeedVideoCell.IGModernFeedVideoCell");
  DAT_000ff8c8 = _class_getSuperclass();
  FUN_0000568c(uVar1,"videoPlayerOverlayControllerDidDoubleTap:locationInfo:",FUN_0000881c,
               &DAT_000ff8d0);
  uVar1 = _objc_getClass("IGUFIButtonBarView");
  DAT_000ff8d8 = _class_getSuperclass();
  FUN_0000568c(uVar1,"_onLikeButtonPressed:",FUN_00008dc4,&DAT_000ff8e0);
  uVar1 = _objc_getClass("IGFeedItemUFICell");
  DAT_000ff8e8 = _class_getSuperclass();
  FUN_0000568c(uVar1,"UFIButtonBarDidTapOnLike:",FUN_00009570,&DAT_000ff8f0);
  uVar1 = _objc_getClass("IGSundialViewerVideoCell");
  DAT_000ff8f8 = _class_getSuperclass();
  FUN_0000568c(uVar1,"controlsOverlayControllerDidTapLikeButton:",FUN_00009d40,&DAT_000ff900);
  FUN_0000568c(uVar1,"gestureController:didObserveDoubleTap:",FUN_0000a494,&DAT_000ff908);
  uVar1 = _objc_getClass("IGCoreTextView");
  DAT_000ff910 = _class_getSuperclass();
  FUN_0000568c(uVar1,"initWithFrame:",FUN_0000aa04,&DAT_000ff918);
  local_458 = 0x403a4076;
  local_454 = (ushort)local_454._1_1_ << 8;
  _class_addMethod(uVar1,"dl_showOptionsCopy:",FUN_0000ac38,&local_458);
  uVar1 = _objc_getClass("IGCommentActionMenu.IGCommentActionMenu");
  DAT_000ff920 = _class_getSuperclass();
  FUN_0000568c(uVar1,
               "initWithMenuType:cell:comment:isEligibleForStoryShare:isEligibleToPinComment:isStoryComment:isEligibleToReply:isEligibleToHideReplies:isEligibleToReplyWithReel:isEligibleToLike:isEligibleToLaunchDirectShareSheet:"
               ,FUN_0000b354,&DAT_000ff928);
  uVar1 = _objc_getClass("IGProfileSimpleAvatarStatsCell");
  DAT_000ff930 = _class_getSuperclass();
  FUN_0000568c(uVar1,"layoutSubviews",FUN_0000b850,&DAT_000ff938);
  local_458 = 0x403a4076;
  local_454 = 0x4264;
  local_452 = 0;
  _class_addMethod(uVar1,"setupFollowStatusLabelInView:bottomConstant:center:",FUN_0000c0b4,
                   &local_458);
  IVar2 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf__s__);
  IVar2 = _objc_retainAutorelease(IVar2);
  IVar2 = _objc_msgSend(IVar2,"UTF8String");
  _class_addMethod(uVar1,"followStatusLabel",FUN_00004780,IVar2);
  IVar2 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_v___s);
  IVar2 = _objc_retainAutorelease(IVar2);
  IVar2 = _objc_msgSend(IVar2,"UTF8String");
  _class_addMethod(uVar1,"setFollowStatusLabel:",FUN_000047a4,IVar2);
  uVar1 = _objc_getClass("IGLikerConfig");
  DAT_000ff940 = _class_getSuperclass();
  FUN_0000568c(uVar1,"isInDaisy",FUN_0000c4c8,&DAT_000ff948);
  FUN_0000568c(uVar1,"showLikeCountInLikersList",FUN_0000c660,&DAT_000ff950);
  FUN_0000568c(uVar1,"showViewCountInLikersList",FUN_0000c7f8,&DAT_000ff958);
  uVar1 = _objc_getClass("IGMedia");
  DAT_000ff960 = _class_getSuperclass();
  FUN_0000568c(uVar1,"buildLikeCellStyledStringWithIcon:andText:style:",FUN_0000c990,&DAT_000ff968);
  FUN_0000568c(uVar1,"likeAndViewCountsDisabled",FUN_0000d000,&DAT_000ff970);
  uVar1 = _objc_getClass("IGFeedItemUFICellViewModel.IGFeedItemUFICellViewModel");
  DAT_000ff978 = _class_getSuperclass();
  FUN_0000568c(uVar1,"isInDaisy",FUN_0000d188,&DAT_000ff980);
  FUN_0000568c(uVar1,"likeAndViewCountsDisabled",FUN_0000d310,&DAT_000ff988);
  FUN_0000568c(uVar1,"shareCountDisabled",FUN_0000d498,&DAT_000ff990);
  uVar1 = _objc_getClass("IGVideoPlayerTimeIndicatorOverlay");
  DAT_000ff998 = _class_getSuperclass();
  FUN_0000568c(uVar1,"_setIndicatorShowing:animated:completion:",FUN_0000d620,&DAT_000ff9a0);
  uVar1 = _objc_getClass("UIViewController");
  DAT_000ff9a8 = _class_getSuperclass();
  FUN_0000568c(uVar1,"presentViewController:animated:completion:",FUN_0000d7d8,&DAT_000ff9b0);
  uVar1 = _objc_getClass("IGMainFeedListAdapterDataSource");
  DAT_000ff9b8 = _class_getSuperclass();
  FUN_0000568c(uVar1,"objectsForListAdapter:",FUN_0000dca4,&DAT_000ff9c0);
  uVar1 = _objc_getClass("IGVideoFeedViewController");
  DAT_000ff9c8 = _class_getSuperclass();
  FUN_0000568c(uVar1,"objectsForListAdapter:",FUN_0000deb4,&DAT_000ff9d0);
  uVar1 = _objc_getClass("IGChainingFeedViewController");
  DAT_000ff9d8 = _class_getSuperclass();
  FUN_0000568c(uVar1,"objectsForListAdapter:",FUN_0000e0c4,&DAT_000ff9e0);
  uVar1 = _objc_getClass("IGSundialFeedDataSource");
  DAT_000ff9e8 = _class_getSuperclass();
  FUN_0000568c(uVar1,"objectsForListAdapter:",FUN_0000e2d4,&DAT_000ff9f0);
  uVar1 = _objc_getClass("IGSearchListKitDataSource");
  DAT_000ff9f8 = _class_getSuperclass();
  FUN_0000568c(uVar1,"objectsForListAdapter:",FUN_0000e4e4,&DAT_000ffa00);
  uVar1 = _objc_getClass("IGContextualFeedViewController");
  DAT_000ffa08 = _class_getSuperclass();
  FUN_0000568c(uVar1,"objectsForListAdapter:",FUN_0000e6f4,&DAT_000ffa10);
  uVar1 = _objc_getClass("IGStoryAdPool");
  DAT_000ffa18 = _class_getSuperclass();
  FUN_0000568c(uVar1,"initWithUserSession:",FUN_0000e904,&DAT_000ffa20);
  uVar1 = _objc_getClass("IGStoryAdsManager");
  DAT_000ffa28 = _class_getSuperclass();
  FUN_0000568c(uVar1,
               "initWithUserSession:storyViewerLoggingContext:storyFullscreenSectionLoggingContext:viewController:"
               ,FUN_0000eac0,&DAT_000ffa30);
  FUN_0000568c(uVar1,
               "initWithUserSession:storyAdsManagerDelegate:storyViewerLoggingContext:storyFullscreenSectionLoggingContext:viewController:storyViewerNavigator:"
               ,FUN_0000ed10,&DAT_000ffa38);
  uVar1 = _objc_getClass("IGStoryAdsMediaManager");
  DAT_000ffa40 = _class_getSuperclass();
  FUN_0000568c(uVar1,"initWithUserSession:delegate:module:",FUN_0000efac,&DAT_000ffa48);
  uVar1 = _objc_getClass("IGStoryAdsFetcher");
  DAT_000ffa50 = _class_getSuperclass();
  FUN_0000568c(uVar1,"initWithUserSession:delegate:",FUN_0000f1b8,&DAT_000ffa58);
  uVar1 = _objc_getClass("IGStoryAdsResponseParser");
  DAT_000ffa60 = _class_getSuperclass();
  FUN_0000568c(uVar1,"parsedObjectFromResponse:",FUN_0000f3a0,&DAT_000ffa68);
  FUN_0000568c(uVar1,"initWithReelStore:adPlatformToolbox:",FUN_0000f550,&DAT_000ffa70);
  uVar1 = _objc_getClass("IGStoryAdsOptInTextView");
  DAT_000ffa78 = _class_getSuperclass();
  FUN_0000568c(uVar1,"initWithBrandedContentStyledString:sponsoredPostLabel:",FUN_0000f71c,
               &DAT_000ffa80);
  FUN_0000568c(uVar1,"init",FUN_0000f904,&DAT_000ffa88);
  uVar1 = _objc_getClass("IGStoryAdsTextManager");
  DAT_000ffa90 = _class_getSuperclass();
  FUN_0000568c(uVar1,"initWithUserSession:",FUN_0000faa0,&DAT_000ffa98);
  uVar1 = _objc_getClass("IGSundialAdsResponseParser");
  DAT_000ffaa0 = _class_getSuperclass();
  FUN_0000568c(uVar1,"parsedObjectFromResponse:",FUN_0000fc5c,&DAT_000ffaa8);
  FUN_0000568c(uVar1,"initWithMediaStore:userStore:",FUN_0000fe0c,&DAT_000ffab0);
  uVar1 = _objc_getClass("IGExploreAdsResponseParser");
  DAT_000ffab8 = _class_getSuperclass();
  FUN_0000568c(uVar1,"parsedObjectFromResponse:",FUN_0000fff4,&DAT_000ffac0);
  FUN_0000568c(uVar1,"initWithObjectStores:",FUN_000101a4,&DAT_000ffac8);
  uVar1 = _objc_getClass("IGExploreListKitDataSource");
  DAT_000ffad0 = _class_getSuperclass();
  FUN_0000568c(uVar1,"objectsForListAdapter:",FUN_00010360,&DAT_000ffad8);
  uVar1 = _objc_getClass("IGActionSheetController");
  DAT_000ffae0 = _class_getSuperclass();
  FUN_0000568c(uVar1,"viewDidAppear:",FUN_00010604,&DAT_000ffae8);
  FUN_0000568c(uVar1,"viewDidLoad",FUN_00010674,&DAT_000ffaf0);
  IVar2 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf__s__);
  IVar2 = _objc_retainAutorelease(IVar2);
  IVar2 = _objc_msgSend(IVar2,"UTF8String");
  _class_addMethod(uVar1,"dLInstaStatus",FUN_000047c4,IVar2);
  IVar2 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_v___s);
  IVar2 = _objc_retainAutorelease(IVar2);
  IVar2 = _objc_msgSend(IVar2,"UTF8String");
  _class_addMethod(uVar1,"setDLInstaStatus:",FUN_00004824,IVar2);
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}

