/* Address: 00097520 | Name: FUN_00097520 | Body bytes: 212 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_00097520(long param_1)

{
  undefined *puVar1;
  undefined *local_88;
  undefined8 local_80;
  code *local_78;
  undefined *puStack_70;
  undefined8 local_68;
  undefined *local_60;
  undefined8 local_58;
  code *local_50;
  undefined *puStack_48;
  undefined **local_40;
  undefined8 local_38;
  
  puVar1 = PTR___NSConcreteStackBlock_000e80d8;
  local_88 = PTR___NSConcreteStackBlock_000e80d8;
  local_80 = 0xc2000000;
  local_78 = FUN_000976f0;
  puStack_70 = &DAT_000e92c8;
  local_68 = *(undefined8 *)(param_1 + 0x20);
  FUN_0008729c();
  local_60 = puVar1;
  local_58 = 0xc2000000;
  local_50 = FUN_00099cb8;
  puStack_48 = &DAT_000e95d8;
  local_38 = 0;
  local_40 = &local_88;
  FUN_00099cb8();
  return 0;
}

