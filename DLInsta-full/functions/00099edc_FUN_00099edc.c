/* Address: 00099edc | Name: FUN_00099edc | Body bytes: 276 */

/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_00099edc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *local_b8;
  undefined8 local_b0;
  code *local_a8;
  undefined *puStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined *local_68;
  undefined8 local_60;
  code *local_58;
  undefined *puStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  puVar1 = PTR___NSConcreteStackBlock_000e80d8;
  uStack_40 = *(undefined8 *)(param_1 + 0x30);
  local_48 = *(undefined8 *)(param_1 + 0x28);
  local_38 = *(undefined8 *)(param_1 + 0x38);
  local_68 = PTR___NSConcreteStackBlock_000e80d8;
  local_60 = 0xc0000000;
  local_58 = FUN_00099758;
  puStack_50 = &DAT_000e9558;
  uVar3 = FUN_00099758();
  puVar2 = PTR___dispatch_main_q_000e8268;
  _objc_retainAutorelease(PTR___dispatch_main_q_000e8268);
  local_b8 = puVar1;
  local_b0 = 0xc2000000;
  local_a8 = FUN_00099ff0;
  puStack_a0 = &DAT_000e9578;
  local_90 = *(undefined8 *)(param_1 + 0x20);
  local_70 = *(undefined8 *)(param_1 + 0x28);
  uStack_88 = *(undefined8 *)(param_1 + 0x30);
  uStack_78 = *(undefined8 *)(param_1 + 0x48);
  local_80 = *(undefined8 *)(param_1 + 0x40);
  local_98 = uVar3;
  _dispatch_async(puVar2,&local_b8);
  return 0;
}

