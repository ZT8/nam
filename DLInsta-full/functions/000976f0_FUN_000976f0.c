/* Address: 000976f0 | Name: FUN_000976f0 | Body bytes: 844 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_000976f0(long param_1,long param_2,ulong param_3)

{
  undefined *puVar1;
  ID IVar2;
  undefined *local_d8;
  undefined8 local_d0;
  code *local_c8;
  undefined *puStack_c0;
  long local_b8;
  undefined **local_b0;
  undefined *local_a8;
  undefined **local_a0;
  code *local_98;
  code *local_90;
  code *local_88;
  undefined8 local_80;
  undefined *local_78;
  undefined8 local_70;
  code *local_68;
  undefined *puStack_60;
  char *local_58;
  
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),1);
  puVar1 = PTR___NSConcreteStackBlock_000e80d8;
  if ((param_2 == 0) || (param_3 != 1)) {
    if ((param_3 & 0xfffffffffffffffe) == 2) {
      DAT_000ff2c8 = 3;
    }
    else {
      DAT_000ff2c8 = 4;
    }
  }
  else {
    local_a8 = PTR___NSConcreteStackBlock_000e80d8;
    local_a0 = (undefined **)0xc2000000;
    local_98 = FUN_000984fc;
    local_90 = (code *)&DAT_000e9368;
    local_88 = (code *)param_2;
    IVar2 = FUN_000984fc();
    IVar2 = _objc_msgSend(IVar2,"length");
    if (IVar2 == 0) {
      local_a8 = puVar1;
      local_a0 = (undefined **)0xc0000000;
      local_98 = FUN_00097ddc;
      local_90 = (code *)&DAT_000e8978;
      local_88 = (code *)0xe3a2d;
      FUN_00097ddc();
    }
    else {
      local_a8 = (undefined *)0x0;
      local_98 = (code *)0x3032000000;
      local_90 = FUN_00097af4;
      local_88 = FUN_00097b04;
      local_80 = 0;
      local_d8 = puVar1;
      local_d0 = 0xc2000000;
      local_c8 = FUN_00097b0c;
      puStack_c0 = &DAT_000e9298;
      local_b8 = param_2;
      local_b0 = &local_a8;
      local_a0 = &local_a8;
      FUN_00097b0c(&local_d8,DAT_001006a8);
      IVar2 = _objc_msgSend((ID)local_a0[5],"isEqualToString:",DAT_001006a8);
      if ((int)IVar2 == 0) {
        local_78 = puVar1;
        local_70 = 0xc0000000;
        local_68 = FUN_00097ddc;
        puStack_60 = &DAT_000e8978;
        local_58 = "null";
        FUN_00097ddc();
        (*local_c8)(&local_d8,DAT_00100640);
        IVar2 = _objc_msgSend((ID)local_a0[5],"isEqualToString:",DAT_00100640);
        if ((int)IVar2 == 0) {
          (*local_c8)(&local_d8,DAT_00100630);
          IVar2 = _objc_msgSend((ID)local_a0[5],"isEqualToString:",DAT_00100630);
          if ((int)IVar2 == 0) {
            DAT_000ff2c8 = 4;
          }
          else {
            DAT_000ff2c8 = 1;
          }
        }
        else {
          DAT_000ff2c8 = 2;
        }
      }
      else {
        IVar2 = _objc_retainAutorelease(param_2);
        local_58 = (char *)_objc_msgSend(IVar2,"UTF8String");
        local_78 = puVar1;
        local_70 = 0xc0000000;
        local_68 = FUN_00097ddc;
        puStack_60 = &DAT_000e8978;
        FUN_00097ddc();
      }
      __Block_object_dispose(&local_a8,8);
    }
  }
  return 0;
}

