/* Address: 000946b8 | Name: instance_MBProgressHUD__applyPriority_toConstraints_ | Body bytes: 288 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x1c bytes */

void MBProgressHUD::instance_MBProgressHUD__applyPriority_toConstraints_
               (ID param_1,SEL param_2,float param_3,ID param_4)

{
  ID IVar1;
  long lVar2;
  ID IVar3;
  undefined4 in_register_00005004;
  undefined8 local_130;
  long lStack_128;
  long *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_000e8260;
  lStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (long *)0x0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  IVar1 = _objc_msgSend(param_4,"countByEnumeratingWithState:objects:count:",&local_130,auStack_e8,
                        0x10);
  if (IVar1 != 0) {
    lVar2 = *local_120;
    do {
      IVar3 = 0;
      do {
        if (*local_120 != lVar2) {
          _objc_enumerationMutation(param_4);
        }
        _objc_msgSend(*(ID *)(lStack_128 + IVar3 * 8),"setPriority:",
                      CONCAT44(in_register_00005004,param_3));
        IVar3 = IVar3 + 1;
      } while (IVar1 != IVar3);
      IVar1 = _objc_msgSend(param_4,"countByEnumeratingWithState:objects:count:",&local_130,
                            auStack_e8,0x10);
    } while (IVar1 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}

