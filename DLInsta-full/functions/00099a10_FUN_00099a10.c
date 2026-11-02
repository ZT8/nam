/* Address: 00099a10 | Name: FUN_00099a10 | Body bytes: 556 */

/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_00099a10(long param_1)

{
  undefined *puVar1;
  ID IVar2;
  long lVar3;
  undefined8 local_90;
  undefined8 *local_88;
  undefined8 local_80;
  code *local_78;
  code *pcStack_70;
  undefined8 local_68;
  undefined *local_60;
  undefined8 local_58;
  code *local_50;
  undefined *puStack_48;
  ID local_40;
  ID IStack_38;
  
  puVar1 = PTR___NSConcreteStackBlock_000e80d8;
  local_88 = &local_90;
  local_90 = 0;
  local_80 = 0x3032000000;
  local_78 = FUN_00097af4;
  pcStack_70 = FUN_00097b04;
  local_68 = 0;
  FUN_00099c54();
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 == 3) {
    IVar2 = _objc_retainAutorelease(local_88[5]);
    IVar2 = _objc_msgSend(IVar2,"UTF8String");
    IStack_38 = _objc_msgSend(DAT_00100670,"UTF8String");
    local_60 = puVar1;
    local_58 = 0xc0000000;
    local_50 = FUN_0009713c;
    puStack_48 = &DAT_000e9218;
    local_40 = IVar2;
    FUN_0009713c();
  }
  else if (lVar3 == 2) {
    IVar2 = _objc_retainAutorelease(local_88[5]);
    IVar2 = _objc_msgSend(IVar2,"UTF8String");
    IStack_38 = _objc_msgSend(DAT_00100698,"UTF8String");
    local_60 = puVar1;
    local_58 = 0xc0000000;
    local_50 = FUN_0009713c;
    puStack_48 = &DAT_000e9218;
    local_40 = IVar2;
    FUN_0009713c();
  }
  else if (lVar3 == 1) {
    IVar2 = _objc_retainAutorelease(local_88[5]);
    IVar2 = _objc_msgSend(IVar2,"UTF8String");
    IStack_38 = _objc_msgSend(DAT_00100680,"UTF8String");
    local_60 = puVar1;
    local_58 = 0xc0000000;
    local_50 = FUN_0009713c;
    puStack_48 = &DAT_000e9218;
    local_40 = IVar2;
    FUN_0009713c();
  }
  __Block_object_dispose(&local_90,8);
  return 0;
}

