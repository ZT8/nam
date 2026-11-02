/* Address: 000b1790 | Name: instance_FRPSelectListTable__tableView_didSelectRowAtIndexPath_ | Body bytes: 632 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_unsafeClaimAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

void FRPSelectListTable::instance_FRPSelectListTable__tableView_didSelectRowAtIndexPath_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  long lVar4;
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
  IVar1 = instance_FRPSelectListTable__itemChanged(param_1,"itemChanged");
  IVar3 = *(ID *)(param_1 + (long)listItems);
  IVar2 = _objc_msgSend(param_4,"row");
  IVar2 = _objc_msgSend(IVar3,"objectAtIndex:",IVar2);
  (**(code **)(IVar1 + 0x10))(IVar1,IVar2);
  _objc_msgSend(param_3,"deselectRowAtIndexPath:animated:",param_4,1);
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (long *)0x0;
  IVar1 = _objc_msgSend(param_3,"visibleCells");
  IVar2 = _objc_msgSend(IVar1,"countByEnumeratingWithState:objects:count:",&local_130,auStack_f0,
                        0x10);
  if (IVar2 != 0) {
    lVar4 = *local_120;
    do {
      IVar3 = 0;
      do {
        if (*local_120 != lVar4) {
          _objc_enumerationMutation(IVar1);
        }
        _objc_msgSend(*(ID *)(lStack_128 + IVar3 * 8),"setAccessoryType:",0);
        IVar3 = IVar3 + 1;
      } while (IVar2 != IVar3);
      IVar2 = _objc_msgSend(IVar1,"countByEnumeratingWithState:objects:count:",&local_130,auStack_f0
                            ,0x10);
    } while (IVar2 != 0);
  }
  IVar1 = _objc_msgSend(param_3,"cellForRowAtIndexPath:",param_4);
  _objc_msgSend(IVar1,"setAccessoryType:",3);
  if (*(char *)(param_1 + (long)popView) != '\0') {
    IVar1 = _objc_msgSend(param_1,"navigationController");
    _objc_msgSend(IVar1,"popViewControllerAnimated:",1);
  }
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}

