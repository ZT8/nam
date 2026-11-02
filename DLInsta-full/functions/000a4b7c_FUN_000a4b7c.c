/* Address: 000a4b7c | Name: FUN_000a4b7c | Body bytes: 128 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_000a4b7c(long param_1)

{
  undefined *puVar1;
  undefined *local_48;
  undefined8 local_40;
  code *local_38;
  undefined *puStack_30;
  undefined8 local_28;
  
  puVar1 = PTR___dispatch_main_q_000e8268;
  _objc_retainAutorelease(PTR___dispatch_main_q_000e8268);
  local_48 = PTR___NSConcreteStackBlock_000e80d8;
  local_40 = 0xc2000000;
  local_38 = FUN_000a4bfc;
  puStack_30 = &DAT_000e9798;
  local_28 = *(undefined8 *)(param_1 + 0x20);
  _dispatch_async(puVar1,&local_48);
  return 0;
}

