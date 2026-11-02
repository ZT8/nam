/* Address: 00058e34 | Name: FUN_00058e34 | Body bytes: 652 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_00058e34(ID param_1)

{
  ID IVar1;
  undefined8 uVar2;
  ID IVar3;
  ID IVar4;
  
  IVar1 = DLHelper::class_DLHelper__findViewController_
                    ((ID)&objc::class_t::DLHelper,"findViewController:",param_1);
  if (DAT_000fffb0 == 0) {
    DAT_000fffb0 = _objc_getClass("IGStoryViewerViewController");
  }
  uVar2 = _objc_retainAutorelease();
  IVar3 = _objc_msgSend(IVar1,"isMemberOfClass:",uVar2);
  if ((IVar3 & 1) != 0) {
    IVar3 = _objc_msgSend(param_1,"delegate");
    if (DAT_000fffb8 == 0) {
      DAT_000fffb8 = _objc_getClass("IGStoryFullscreenSectionController");
    }
    uVar2 = _objc_retainAutorelease();
    IVar3 = _objc_msgSend(IVar3,"isMemberOfClass:",uVar2);
    if ((IVar3 & 1) != 0) {
      IVar3 = _objc_msgSend(param_1,"item");
      IVar3 = _objc_msgSend(IVar3,"mediaId");
      if (IVar3 != 0) {
        IVar3 = _objc_msgSend(param_1,"delegate");
        _objc_msgSend(IVar3,"setUserHaveSeenStory:",1);
        IVar3 = _objc_msgSend(IVar1,"respondsToSelector:",
                              "fullscreenSectionController:didMarkItemAsSeen:");
        if ((int)IVar3 != 0) {
          IVar3 = _objc_msgSend(param_1,"delegate");
          IVar4 = _objc_msgSend(param_1,"item");
          _objc_msgSend(IVar1,"fullscreenSectionController:didMarkItemAsSeen:",IVar3,IVar4);
          IVar1 = _objc_msgSend(param_1,"item");
          IVar1 = _objc_msgSend(IVar1,"mediaId");
          DLHelper::class_DLHelper__saveMediaIdForStory_
                    ((ID)&objc::class_t::DLHelper,"saveMediaIdForStory:",IVar1);
          IVar1 = _objc_msgSend(param_1,"delegate");
          _objc_msgSend(IVar1,"storyPlayerMediaViewDidPlayToEnd:",param_1);
        }
      }
    }
  }
  return 0;
}

