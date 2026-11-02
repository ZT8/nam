/* Address: 0009db78 | Name: FUN_0009db78 | Body bytes: 292 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_0009db78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  dispatch_time_t dVar2;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  
  dVar2 = _dispatch_time(0,500000000);
  puVar1 = PTR___dispatch_main_q_000e8268;
  _objc_retainAutorelease(PTR___dispatch_main_q_000e8268);
  local_90 = PTR___NSConcreteStackBlock_000e80d8;
  local_88 = 0xc2000000;
  local_80 = FUN_0009dc9c;
  puStack_78 = &DAT_000e96e8;
  local_70 = param_4;
  local_68 = param_2;
  local_60 = param_3;
  local_58 = param_1;
  _dispatch_after(dVar2,puVar1,&local_90);
  return 0;
}

