/* Address: 00090eec | Name: class_MBProgressHUD__HUDForView_ | Body bytes: 428 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID MBProgressHUD::class_MBProgressHUD__HUDForView_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID self;
  long lVar4;
  ID IVar5;
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
  IVar1 = _objc_msgSend(param_3,"subviews");
  IVar1 = _objc_msgSend(IVar1,"reverseObjectEnumerator");
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (long *)0x0;
  IVar2 = _objc_msgSend(IVar1,"countByEnumeratingWithState:objects:count:",&local_130,auStack_f0,
                        0x10);
  if (IVar2 != 0) {
    lVar4 = *local_120;
    do {
      IVar5 = 0;
      do {
        if (*local_120 != lVar4) {
          _objc_enumerationMutation(IVar1);
        }
        self = *(ID *)(lStack_128 + IVar5 * 8);
        IVar3 = _objc_msgSend(self,"isKindOfClass:",param_1);
        if (((int)IVar3 != 0) && (IVar3 = _objc_msgSend(self,"hasFinished"), (int)IVar3 == 0))
        goto LAB_00091048;
        IVar5 = IVar5 + 1;
      } while (IVar2 != IVar5);
      IVar2 = _objc_msgSend(IVar1,"countByEnumeratingWithState:objects:count:",&local_130,auStack_f0
                            ,0x10);
    } while (IVar2 != 0);
  }
  self = 0;
LAB_00091048:
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return self;
}

