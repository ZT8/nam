/* Address: 000987f8 | Name: FUN_000987f8 | Body bytes: 440 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

undefined8 FUN_000987f8(long param_1)

{
  undefined8 uVar1;
  undefined8 local_f0;
  undefined8 *local_e8;
  undefined8 local_e0;
  code *local_d8;
  code *pcStack_d0;
  undefined8 local_c8;
  undefined *local_c0;
  undefined8 local_b8;
  code *local_b0;
  undefined *puStack_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 *puStack_88;
  undefined8 local_80;
  code *local_78;
  code *pcStack_70;
  undefined8 local_68;
  
  local_98 = &local_90;
  local_90 = 0;
  local_80 = 0x3032000000;
  local_78 = FUN_00097af4;
  pcStack_70 = FUN_00097b04;
  local_68 = 0;
  local_c0 = PTR___NSConcreteStackBlock_000e80d8;
  local_b8 = 0xc2000000;
  local_b0 = FUN_00098a18;
  puStack_a8 = &DAT_000e9408;
  local_a0 = *(undefined8 *)(param_1 + 0x20);
  puStack_88 = local_98;
  FUN_00098a18();
  local_e8 = &local_f0;
  local_f0 = 0;
  local_e0 = 0x3032000000;
  local_d8 = FUN_00097af4;
  pcStack_d0 = FUN_00097b04;
  local_c8 = 0;
  FUN_00098b4c();
  FUN_00098b94();
  uVar1 = local_e8[5];
  __Block_object_dispose(&local_f0,8);
  __Block_object_dispose(&local_90,8);
  return uVar1;
}

