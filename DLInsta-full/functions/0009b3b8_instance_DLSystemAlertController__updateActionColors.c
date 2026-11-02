/* Address: 0009b3b8 | Name: instance_DLSystemAlertController__updateActionColors | Body bytes: 456 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void DLSystemAlertController::instance_DLSystemAlertController__updateActionColors
               (ID param_1,SEL param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  ID IVar3;
  ID self;
  ID IVar4;
  long lVar5;
  ID IVar6;
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
  uVar2 = FUN_000bd0fc(2,0xd,0,0);
  if ((int)uVar2 != 0) {
    IVar3 = _objc_msgSend(param_1,"traitCollection");
    IVar3 = _objc_msgSend(IVar3,"userInterfaceStyle");
    ppuVar1 = &PTR_s_whiteColor_000fb648;
    if (IVar3 != 2) {
      ppuVar1 = &PTR_s_blackColor_000fbc88;
    }
    IVar3 = UIColor::blackColor((ID)&_OBJC_CLASS___UIColor,*ppuVar1);
    uStack_108 = 0;
    local_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    local_130 = 0;
    uStack_118 = 0;
    local_120 = (long *)0x0;
    self = _objc_msgSend(param_1,"actions");
    IVar4 = _objc_msgSend(self,"countByEnumeratingWithState:objects:count:",&local_130,auStack_e8,
                          0x10);
    if (IVar4 != 0) {
      lVar5 = *local_120;
      do {
        IVar6 = 0;
        do {
          if (*local_120 != lVar5) {
            _objc_enumerationMutation(self);
          }
          _objc_msgSend(*(ID *)(lStack_128 + IVar6 * 8),"setValue:forKey:",IVar3,&cf_titleTextColor)
          ;
          IVar6 = IVar6 + 1;
        } while (IVar4 != IVar6);
        IVar4 = _objc_msgSend(self,"countByEnumeratingWithState:objects:count:",&local_130,
                              auStack_e8,0x10);
      } while (IVar4 != 0);
    }
    uVar2 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(uVar2);
  }
  return;
}

