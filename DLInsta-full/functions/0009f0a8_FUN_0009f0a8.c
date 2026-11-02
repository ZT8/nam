/* Address: 0009f0a8 | Name: FUN_0009f0a8 | Body bytes: 492 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_0009f0a8(long param_1,undefined8 param_2,ID param_3)

{
  undefined *puVar1;
  dispatch_queue_t pdVar2;
  undefined *local_f0;
  undefined8 local_e8;
  code *local_e0;
  undefined *puStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined *local_b8;
  undefined8 local_b0;
  code *local_a8;
  undefined *puStack_a0;
  ID local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  undefined8 local_70;
  undefined **local_68;
  
  puVar1 = PTR___NSConcreteStackBlock_000e80d8;
  if (param_3 == 0) {
    local_f0 = PTR___NSConcreteStackBlock_000e80d8;
    local_e8 = 0xc2000000;
    local_e0 = FUN_0009f2f0;
    puStack_d8 = &DAT_000e97c8;
    local_d0 = *(undefined8 *)(param_1 + 0x20);
    local_c8 = *(undefined8 *)(param_1 + 0x28);
    uStack_c0 = *(undefined8 *)(param_1 + 0x30);
    pdVar2 = _dispatch_get_global_queue(0,0);
    local_90 = puVar1;
    local_88 = 0xc2000000;
    local_80 = FUN_0009cd20;
    puStack_78 = &DAT_000e9688;
    local_70 = param_2;
    local_68 = &local_f0;
    _dispatch_async(pdVar2,&local_90);
  }
  else {
    _objc_msgSend(*(ID *)(param_1 + 0x20),"hideAnimated:",1);
    _objc_msgSend(param_3,"localizedDescription");
    _NSLog(&cf___);
    local_b8 = PTR___NSConcreteStackBlock_000e80d8;
    local_b0 = 0xc2000000;
    local_a8 = FUN_0009f294;
    puStack_a0 = &DAT_000e9798;
    local_98 = param_3;
    _objc_msgSend(*(ID *)(param_1 + 0x28),"dismissViewControllerAnimated:completion:",1,&local_b8);
  }
  return 0;
}

