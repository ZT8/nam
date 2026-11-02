/* Address: 00043df8 | Name: FUN_00043df8 | Body bytes: 736 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_00043df8(ID param_1)

{
  ID IVar1;
  undefined8 uVar2;
  long lVar3;
  ID self;
  ID IVar4;
  undefined8 uVar5;
  ID IVar6;
  undefined8 *puVar7;
  ID *pIVar8;
  ID self_00;
  ID IVar9;
  undefined8 local_130;
  long lStack_128;
  long *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_000e8260;
  _objc_msgSend(param_1,"setUserHaveSeenDMStory:",1);
  IVar1 = _objc_msgSend(param_1,"valueForKey:",
                        &cf__currentVisualMessageFromPlaylistWhenViewerWasLaunched);
  uVar2 = _object_getClass();
  lVar3 = _class_getInstanceVariable(uVar2,"_eventResponders");
  if (lVar3 == 0) {
    pIVar8 = (ID *)0x0;
  }
  else {
    lVar3 = _ivar_getOffset();
    pIVar8 = (ID *)(param_1 + lVar3);
  }
  self = *pIVar8;
  uVar2 = _object_getClass();
  lVar3 = _class_getInstanceVariable(uVar2,"_currentVisualMessageIndex");
  if (lVar3 == 0) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    lVar3 = _ivar_getOffset();
    puVar7 = (undefined8 *)(param_1 + lVar3);
  }
  uVar2 = *puVar7;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (long *)0x0;
  IVar4 = _objc_msgSend(self,"countByEnumeratingWithState:objects:count:",&local_130,auStack_f0,0x10
                       );
  if (IVar4 != 0) {
    lVar3 = *local_120;
    do {
      IVar9 = 0;
      do {
        if (*local_120 != lVar3) {
          _objc_enumerationMutation(self);
        }
        self_00 = *(ID *)(lStack_128 + IVar9 * 8);
        if (DAT_000ffee0 == 0) {
          DAT_000ffee0 = _objc_getClass("IGDirectVisualMessageViewerEventHandler");
        }
        uVar5 = _objc_retainAutorelease();
        IVar6 = _objc_msgSend(self_00,"isMemberOfClass:",uVar5);
        if ((int)IVar6 != 0) {
          _objc_msgSend(self_00,
                        "visualMessageViewerController:didBeginPlaybackForVisualMessage:atIndex:",
                        param_1,IVar1,uVar2);
          goto LAB_00044010;
        }
        IVar9 = IVar9 + 1;
      } while (IVar4 != IVar9);
      IVar4 = _objc_msgSend(self,"countByEnumeratingWithState:objects:count:",&local_130,auStack_f0,
                            0x10);
    } while (IVar4 != 0);
  }
LAB_00044010:
  IVar1 = _objc_msgSend(param_1,"valueForKey:",&cf__viewerContainerView);
  IVar1 = _objc_msgSend(IVar1,"performSelector:","mediaView");
  _objc_msgSend(param_1,"performSelector:withObject:","storyPlayerMediaViewDidPlayToEnd:",IVar1);
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}

