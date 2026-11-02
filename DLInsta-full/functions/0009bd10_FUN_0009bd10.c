/* Address: 0009bd10 | Name: FUN_0009bd10 | Body bytes: 168 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_0009bd10(long param_1)

{
  undefined *puVar1;
  undefined *local_58;
  undefined8 local_50;
  code *local_48;
  undefined *puStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  puVar1 = PTR___dispatch_main_q_000e8268;
  _objc_retainAutorelease(PTR___dispatch_main_q_000e8268);
  local_58 = PTR___NSConcreteStackBlock_000e80d8;
  local_50 = 0xc2000000;
  local_48 = FUN_0009bdb8;
  puStack_40 = &DAT_000e9608;
  local_38 = *(undefined8 *)(param_1 + 0x20);
  local_30 = *(undefined8 *)(param_1 + 0x28);
  local_28 = *(undefined8 *)(param_1 + 0x30);
  _dispatch_async(puVar1,&local_58);
  return 0;
}

