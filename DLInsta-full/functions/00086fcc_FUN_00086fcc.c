/* Address: 00086fcc | Name: FUN_00086fcc | Body bytes: 648 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_00086fcc(long param_1,undefined8 param_2)

{
  bool bVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  ID self;
  ID IVar5;
  ID IVar6;
  ID IVar7;
  ID *pIVar8;
  ID self_00;
  undefined8 local_160;
  long lStack_158;
  long *local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 auStack_120 [128];
  long local_a0;
  
  local_a0 = *(long *)PTR____stack_chk_guard_000e8260;
  pcVar2 = DAT_001001a0;
  if (DAT_001001a0 == (code *)0x0) {
    pcVar2 = (code *)_class_getMethodImplementation(DAT_00100198,"layoutSubviews");
  }
  (*pcVar2)(param_1,param_2);
  uVar3 = FUN_0008ce2c(param_1,"_buttons");
  if ((int)uVar3 != 0) {
    uVar3 = _object_getClass();
    lVar4 = _class_getInstanceVariable(uVar3,"_buttons");
    if (lVar4 == 0) {
      pIVar8 = (ID *)0x0;
    }
    else {
      lVar4 = _ivar_getOffset();
      pIVar8 = (ID *)(param_1 + lVar4);
    }
    self = *pIVar8;
    lStack_158 = 0;
    local_160 = 0;
    uStack_148 = 0;
    local_150 = (long *)0x0;
    uStack_138 = 0;
    local_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    IVar5 = _objc_msgSend(self,"countByEnumeratingWithState:objects:count:",&local_160,auStack_120,
                          0x10);
    if (IVar5 != 0) {
      lVar4 = *local_150;
      do {
        IVar7 = 0;
        do {
          if (*local_150 != lVar4) {
            _objc_enumerationMutation(self);
          }
          self_00 = *(ID *)(lStack_158 + IVar7 * 8);
          bVar1 = DLHelper::class_DLHelper__isDarkMode((ID)&objc::class_t::DLHelper,"isDarkMode");
          if (bVar1 == 0) {
            IVar6 = UIColor::colorWithRed_green_blue_alpha_
                              ((ID)&_OBJC_CLASS___UIColor,"colorWithRed:green:blue:alpha:",
                               0x3fa8181818181818,0x3fb0101010101010,0x3fb4141414141414,
                               0x3ff0000000000000);
            _objc_msgSend(self_00,"setTitleColor:forState:",IVar6,0);
          }
          else {
            IVar6 = UIColor::colorWithRed_green_blue_alpha_
                              ((ID)&_OBJC_CLASS___UIColor,"colorWithRed:green:blue:alpha:",
                               0x3fef1f1f1f1f1f1f,0x3fef3f3f3f3f3f3f,0x3fef3f3f3f3f3f3f,
                               0x3ff0000000000000);
            _objc_msgSend(self_00,"setTitleColor:forState:",IVar6,0);
          }
          IVar7 = IVar7 + 1;
        } while (IVar5 != IVar7);
        IVar5 = _objc_msgSend(self,"countByEnumeratingWithState:objects:count:",&local_160,
                              auStack_120,0x10);
      } while (IVar5 != 0);
    }
    uVar3 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_a0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(uVar3);
  }
  return;
}

