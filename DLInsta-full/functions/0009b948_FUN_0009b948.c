/* Address: 0009b948 | Name: FUN_0009b948 | Body bytes: 212 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_0009b948(undefined8 param_1,undefined8 param_2)

{
  dispatch_queue_t pdVar1;
  undefined *local_60;
  undefined8 local_58;
  code *local_50;
  undefined *puStack_48;
  undefined8 local_40;
  undefined8 local_38;
  
  pdVar1 = _dispatch_get_global_queue(0,0);
  local_60 = PTR___NSConcreteStackBlock_000e80d8;
  local_58 = 0xc2000000;
  local_50 = FUN_0009ba1c;
  puStack_48 = &DAT_000e95d8;
  local_40 = param_2;
  local_38 = param_1;
  _dispatch_async(pdVar1,&local_60);
  return 0;
}

