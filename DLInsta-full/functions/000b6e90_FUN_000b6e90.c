/* Address: 000b6e90 | Name: FUN_000b6e90 | Body bytes: 216 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_000b6e90(long param_1)

{
  ID IVar1;
  dispatch_queue_t pdVar2;
  undefined8 uVar3;
  undefined *local_50;
  undefined8 local_48;
  code *local_40;
  undefined *puStack_38;
  undefined8 local_30;
  undefined8 local_28;
  
  IVar1 = _objc_msgSend(*(ID *)(param_1 + 0x20),"HDProfilePicURL");
  if (IVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000b6f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0,0);
    return uVar3;
  }
  pdVar2 = _dispatch_get_global_queue(0,0);
  local_50 = PTR___NSConcreteStackBlock_000e80d8;
  local_48 = 0xc2000000;
  local_40 = FUN_000b6f68;
  puStack_38 = &DAT_000e9688;
  local_30 = *(undefined8 *)(param_1 + 0x20);
  local_28 = *(undefined8 *)(param_1 + 0x28);
  _dispatch_async(pdVar2,&local_50);
  return 0;
}

