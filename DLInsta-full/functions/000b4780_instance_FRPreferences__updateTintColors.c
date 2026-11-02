/* Address: 000b4780 | Name: instance_FRPreferences__updateTintColors | Body bytes: 852 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void FRPreferences::instance_FRPreferences__updateTintColors(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID self;
  ID self_00;
  ID IVar3;
  ID IVar4;
  long lVar5;
  ID IVar6;
  ID IVar7;
  ID IVar8;
  long lVar9;
  ID local_230;
  undefined8 local_1f0;
  long lStack_1e8;
  long *local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  long lStack_1a8;
  long *local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_000e8260;
  IVar1 = instance_FRPreferences__tintUIColor(param_1,"tintUIColor");
  lStack_1a8 = 0;
  local_1b0 = 0;
  uStack_198 = 0;
  local_1a0 = (long *)0x0;
  uStack_188 = 0;
  local_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  IVar2 = instance_FRPreferences__sections(param_1,"sections");
  local_230 = _objc_msgSend(IVar2,"countByEnumeratingWithState:objects:count:",&local_1b0,auStack_f0
                            ,0x10);
  if (local_230 != 0) {
    lVar5 = *local_1a0;
    do {
      IVar6 = 0;
      do {
        if (*local_1a0 != lVar5) {
          _objc_enumerationMutation(IVar2);
        }
        self = *(ID *)(lStack_1a8 + IVar6 * 8);
        lStack_1e8 = 0;
        local_1f0 = 0;
        uStack_1d8 = 0;
        local_1e0 = (long *)0x0;
        uStack_1c8 = 0;
        local_1d0 = 0;
        uStack_1b8 = 0;
        uStack_1c0 = 0;
        self_00 = _objc_msgSend(self,"cells");
        IVar3 = _objc_msgSend(self_00,"countByEnumeratingWithState:objects:count:",&local_1f0,
                              auStack_170,0x10);
        if (IVar3 != 0) {
          lVar9 = *local_1e0;
          do {
            IVar7 = 0;
            do {
              if (*local_1e0 != lVar9) {
                _objc_enumerationMutation(self_00);
              }
              IVar8 = *(ID *)(lStack_1e8 + IVar7 * 8);
              _objc_msgSend(IVar8,"setTintUIColor:",IVar1);
              IVar4 = instance_FRPreferences__plistPath(param_1,"plistPath");
              IVar4 = _objc_msgSend(IVar4,"length");
              if ((IVar4 != 0) && (IVar4 = _objc_msgSend(IVar8,"setting"), IVar4 != 0)) {
                IVar4 = instance_FRPreferences__plistPath(param_1,"plistPath");
                IVar8 = _objc_msgSend(IVar8,"setting");
                _objc_msgSend(IVar8,"setFileSave:",IVar4);
              }
              IVar7 = IVar7 + 1;
            } while (IVar3 != IVar7);
            IVar3 = _objc_msgSend(self_00,"countByEnumeratingWithState:objects:count:",&local_1f0,
                                  auStack_170,0x10);
          } while (IVar3 != 0);
        }
        _objc_msgSend(self,"setTintUIColor:",IVar1);
        IVar6 = IVar6 + 1;
      } while (IVar6 != local_230);
      local_230 = _objc_msgSend(IVar2,"countByEnumeratingWithState:objects:count:",&local_1b0,
                                auStack_f0,0x10);
    } while (local_230 != 0);
  }
  IVar2 = _objc_msgSend(param_1,"view");
  _objc_msgSend(IVar2,"setTintColor:",IVar1);
  IVar2 = _objc_msgSend(param_1,"tableView");
  _objc_msgSend(IVar2,"setTintColor:",IVar1);
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}

