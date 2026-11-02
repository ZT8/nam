/* Address: 000409b4 | Name: FUN_000409b4 | Body bytes: 2932 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_000409b4(void)

{
  undefined8 uVar1;
  ID IVar2;
  undefined8 uVar3;
  undefined4 local_468;
  undefined1 local_464;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_000e8260;
  uVar1 = _objc_getClass("IGTallNavigationBarView");
  DAT_000ffc98 = _class_getSuperclass();
  FUN_00041558(uVar1,"setRightBarButtonItems:",FUN_00041648,&DAT_000ffca0);
  local_468 = 0x3a4076;
  _class_addMethod(uVar1,"d_didPressSeenButton",FUN_00041a18,&local_468);
  IVar2 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf__s__);
  IVar2 = _objc_retainAutorelease(IVar2);
  IVar2 = _objc_msgSend(IVar2,"UTF8String");
  _class_addMethod(uVar1,"seenBtn",FUN_0004073c,IVar2);
  IVar2 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_v___s);
  IVar2 = _objc_retainAutorelease(IVar2);
  IVar2 = _objc_msgSend(IVar2,"UTF8String");
  _class_addMethod(uVar1,"setSeenBtn:",FUN_00040760,IVar2);
  uVar1 = _objc_getClass("IGDirectThreadViewListAdapterDataSource");
  uVar3 = _object_getClass();
  DAT_000ffca8 = _class_getSuperclass(uVar1);
  DAT_000ffcb0 = _class_getSuperclass(uVar3);
  FUN_00041558(uVar1,
               "initWithUserSession:threadKey:threadViewModelPipe:analyticsLogger:audioPlaybackService:messageDataSource:messagesSortingInfoCache:messagesClientStateManager:nuxProvider:threadNavigationPerfComponents:entryPointContext:"
               ,FUN_00041c98,&DAT_000ffcb8);
  FUN_00041558(uVar1,
               "initWithUserSession:threadKey:threadViewModelPipe:analyticsLogger:audioPlaybackService:messageDataSource:messagesSortingInfoCache:messagesClientStateManager:nuxProvider:threadNavigationPerfComponents:entryPointContext:bloksViewHelperDict:"
               ,FUN_000421e0,&DAT_000ffcc0);
  FUN_00041558(uVar1,
               "initWithUserSession:threadKey:threadViewModelPipe:analyticsLogger:audioPlaybackService:messageDataSource:messagesSortingInfoCache:messagesClientStateManager:nuxProvider:threadNavigationPerfComponents:entryPointContext:bloksXMAViewHelper:initialParams:"
               ,FUN_00042728,&DAT_000ffcc8);
  FUN_00041558(uVar1,
               "initWithUserSession:threadKey:threadViewModelPipe:analyticsLogger:audioPlaybackService:messageDataSource:messagesSortingInfoCache:messagesClientStateManager:nuxProvider:threadNavigationPerfComponents:entryPointContext:bloksXMAViewHelper:initialParams:channelsDataFetcher:"
               ,FUN_00042c74,&DAT_000ffcd0);
  FUN_00041558(uVar1,
               "initWithUserSession:threadKey:threadViewModelPipe:analyticsLogger:audioPlaybackService:audioSegmentPlaybackService:messageDataSource:messagesSortingInfoCache:messagesClientStateManager:nuxProvider:threadNavigationPerfComponents:entryPointContext:bloksXMAViewHelper:initialParams:channelsDataFetcher:"
               ,FUN_000431f0,&DAT_000ffcd8);
  local_468 = 0x3a4076;
  _class_addMethod(uVar1,"d_updateMarkAsSeenIfNeeded",FUN_000437a0,&local_468);
  FUN_00041558(uVar1,"shouldUpdateLastSeenMessage",FUN_0004396c,&DAT_000ffce0);
  local_468 = 0x3a4042;
  _class_addMethod(uVar3,"isUserHaveSeenMessage",FUN_00043c10,&local_468);
  IVar2 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf__s__);
  IVar2 = _objc_retainAutorelease(IVar2);
  IVar2 = _objc_msgSend(IVar2,"UTF8String");
  _class_addMethod(uVar1,"userHaveSeenMessage",FUN_00040780,IVar2);
  IVar2 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_v___s);
  IVar2 = _objc_retainAutorelease(IVar2);
  IVar2 = _objc_msgSend(IVar2,"UTF8String");
  _class_addMethod(uVar1,"setUserHaveSeenMessage:",FUN_000407e0,IVar2);
  uVar1 = _objc_getClass("IGDirectVisualMessageViewerController");
  DAT_000ffce8 = _class_getSuperclass();
  FUN_00041558(uVar1,"viewDidAppear:",FUN_00043c1c,&DAT_000ffcf0);
  local_468 = 0x403a4076;
  local_464 = 0;
  _class_addMethod(uVar1,"userSelectSeenDMStory:",FUN_00043df8,&local_468);
  FUN_00041558(uVar1,"storyPlayerMediaViewDidPlayToEnd:",FUN_0004426c,&DAT_000ffcf8);
  IVar2 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf__s__);
  IVar2 = _objc_retainAutorelease(IVar2);
  IVar2 = _objc_msgSend(IVar2,"UTF8String");
  _class_addMethod(uVar1,"userHaveSeenDMStory",FUN_00040878,IVar2);
  IVar2 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_v___s);
  IVar2 = _objc_retainAutorelease(IVar2);
  IVar2 = _objc_msgSend(IVar2,"UTF8String");
  _class_addMethod(uVar1,"setUserHaveSeenDMStory:",FUN_000408d8,IVar2);
  uVar1 = _objc_getClass("IGDirectVisualMessageViewerEventHandler");
  DAT_000ffd00 = _class_getSuperclass();
  FUN_00041558(uVar1,"visualMessageViewerController:didBeginPlaybackForVisualMessage:atIndex:",
               FUN_00044598,&DAT_000ffd08);
  _objc_getClass("IGDirectMessageUpdate");
  uVar1 = _object_getClass();
  DAT_000ffd10 = _class_getSuperclass();
  FUN_00041558(uVar1,"removeMessageWithMessageId:reason:",FUN_000447d0,&DAT_000ffd18);
  FUN_00041558(uVar1,"removeMessageWithMessageKey:reason:",FUN_00044e84,&DAT_000ffd20);
  FUN_00041558(uVar1,"removeMessagesWithMessageKeys:reason:",FUN_000455f8,&DAT_000ffd28);
  _objc_getClass("IGDirectMessageUpdateMatcher");
  uVar1 = _object_getClass();
  DAT_000ffd30 = _class_getSuperclass();
  FUN_00041558(uVar1,"match:insertMessages:removeMessages:replaceMessages:mutateMessage:",
               FUN_00045ec4,&DAT_000ffd38);
  uVar1 = _objc_getClass("IGDirectCache");
  DAT_000ffd40 = _class_getSuperclass();
  FUN_00041558(uVar1,"_applyThreadUpdates:toThreadWithId:",FUN_000469a8,&DAT_000ffd48);
  FUN_00041558(uVar1,"_applyThreadUpdates:toThreadWithId:mutationId:",FUN_000473e0,&DAT_000ffd50);
  FUN_00041558(uVar1,"_applyThreadUpdates:toThreadWithId:mutationId:sequenceId:",FUN_00047e54,
               &DAT_000ffd58);
  uVar1 = _objc_getClass("IGDirectThreadUpdate");
  DAT_000ffd60 = _class_getSuperclass();
  FUN_00041558(uVar1,"init",FUN_000488fc,&DAT_000ffd68);
  uVar1 = _objc_getClass("IGDirectMessageListViewController");
  DAT_000ffd70 = _class_getSuperclass();
  FUN_00041558(uVar1,"viewDidAppear:",FUN_000489e8,&DAT_000ffd78);
  uVar1 = _objc_getClass("IGDirectMessageMenuActionHandler");
  DAT_000ffd80 = _class_getSuperclass();
  FUN_00041558(uVar1,
               "unsendWithMessageViewModel:threadId:consistentThreadFbid:threadSubtype:audienceType:"
               ,FUN_00048d10,&DAT_000ffd88);
  uVar1 = _objc_getClass("IGDirectMessageCell");
  DAT_000ffd90 = _class_getSuperclass();
  FUN_00041558(uVar1,"layoutSubviews",FUN_00048f48,&DAT_000ffd98);
  FUN_00041558(uVar1,"configureWithViewModel:ringViewSpecFactory:launcherSet:",FUN_00049254,
               &DAT_000ffda0);
  IVar2 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf__s__);
  IVar2 = _objc_retainAutorelease(IVar2);
  IVar2 = _objc_msgSend(IVar2,"UTF8String");
  _class_addMethod(uVar1,"dlDeleteInfo",FUN_00040970,IVar2);
  IVar2 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_v___s);
  IVar2 = _objc_retainAutorelease(IVar2);
  IVar2 = _objc_msgSend(IVar2,"UTF8String");
  _class_addMethod(uVar1,"setDlDeleteInfo:",FUN_00040994,IVar2);
  uVar1 = _objc_getClass("IGDirectInboxDjangoPullToRefreshCoordinator");
  DAT_000ffda8 = _class_getSuperclass();
  FUN_00041558(uVar1,"canPullToRefresh:",FUN_00049d74,&DAT_000ffdb0);
  FUN_00041558(uVar1,"canPullToRefresh:threadsFilterSet:",FUN_00049f04,&DAT_000ffdb8);
  uVar1 = _objc_getClass("IGDirectTypingStatusService");
  DAT_000ffdc0 = _class_getSuperclass();
  FUN_00041558(uVar1,"_shouldSendStatus:typingStatusType:",FUN_0004a0d8,&DAT_000ffdc8);
  FUN_00041558(uVar1,"updateOutgoingStatusIsActive:threadKey:typingStatusType:",FUN_0004a27c,
               &DAT_000ffdd0);
  FUN_00041558(uVar1,"updateOutgoingStatusIsActive:threadKey:threadMetaData:typingStatusType:",
               FUN_0004a42c,&DAT_000ffdd8);
  FUN_00041558(uVar1,"updateOutgoingStatusIsActive:threadKey:threadMetadata:typingStatusType:",
               FUN_0004a638,&DAT_000ffde0);
  _objc_getClass("IGDirectMessageMarkType");
  uVar1 = _object_getClass();
  DAT_000ffde8 = _class_getSuperclass();
  FUN_00041558(uVar1,"visualItemScreenshotted",FUN_0004a844,&DAT_000ffdf0);
  _objc_getClass("IGDirectMessageMarkTypeMatcher");
  uVar1 = _object_getClass();
  DAT_000ffdf8 = _class_getSuperclass();
  FUN_00041558(uVar1,
               "match:threadItemSeen:visualItemSeen:visualItemReplayed:visualItemScreenshotted:threadItemWatched:"
               ,FUN_0004a9c4,0xffe00);
  uVar1 = _objc_getClass("IGDirectMessageMark");
  DAT_000ffe08 = _class_getSuperclass();
  FUN_00041558(uVar1,
               "initWithClientId:threadId:messageId:type:isE2ELoggingSampled:originalMessageClientContext:productType:"
               ,FUN_0004ad2c,&DAT_000ffe10);
  uVar1 = _objc_getClass("IGStoryViewerContainerView");
  DAT_000ffe18 = _class_getSuperclass();
  FUN_00041558(uVar1,"setShouldBlockScreenshot:viewModel:",FUN_0004b1d8,&DAT_000ffe20);
  uVar1 = _objc_getClass("IGDirectVoiceRecordViewController");
  DAT_000ffe28 = _class_getSuperclass();
  FUN_00041558(uVar1,"startRecordingWithButtonTapFromEntryPoint:",FUN_0004b380,&DAT_000ffe30);
  uVar1 = _objc_getClass("IGDirectThreadViewController");
  DAT_000ffe38 = _class_getSuperclass();
  FUN_00041558(uVar1,"voiceRecordViewController:didUpdateState:",FUN_0004b6fc,&DAT_000ffe40);
  uVar1 = _objc_getClass("IGDirectVoiceRecordInputView");
  DAT_000ffe48 = _class_getSuperclass();
  FUN_00041558(uVar1,"setDuration:",FUN_0004baf0,&DAT_000ffe50);
  uVar1 = _objc_getClass("IGDirectMessageActionsViewController");
  DAT_000ffe58 = _class_getSuperclass();
  FUN_00041558(uVar1,"viewDidLoad",FUN_0004bf1c,&DAT_000ffe60);
  FUN_00041558(uVar1,
               "initWithMenuConfiguration:launcherSet:contentContainer:messageContentView:contentAccessoryFrame:unmanagedHeaderSize:horizontalAlignment:addContentShadow:shouldAllowTapActionOnLongPress:prioritizeContextMenuAbove:shouldBlockMessageListUpdates:allowScalingContent:accessibilityEscapeBlock:menuHeaderText:additionalBottomPadding:multiReactView:multiReactPaddingRight:showEmojiModerationNux:coreImageContext:"
               ,FUN_0004c6ac,&DAT_000ffe68);
  FUN_00041558(uVar1,
               "initWithMenuConfiguration:launcherSet:contentContainer:messageContentView:contentAccessoryFrame:unmanagedHeaderSize:horizontalAlignment:addContentShadow:shouldAllowTapActionOnLongPress:prioritizeContextMenuAbove:shouldBlockMessageListUpdates:allowScalingContent:accessibilityEscapeBlock:menuHeaderText:menuHeaderElement:additionalBottomPadding:multiReactView:multiReactPaddingRight:showEmojiModerationNux:coreImageContext:"
               ,FUN_0004ce30,&DAT_000ffe70);
  uVar1 = _objc_getClass("IGDirectComposer");
  DAT_000ffe78 = _class_getSuperclass();
  FUN_00041558(uVar1,"layoutSubviews",FUN_0004d864,&DAT_000ffe80);
  local_468 = 0x403a4076;
  local_464 = 0;
  _class_addMethod(uVar1,"dl_cameraLongPress:",FUN_0004da98,&local_468);
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

