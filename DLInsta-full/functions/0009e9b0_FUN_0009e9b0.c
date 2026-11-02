/* Address: 0009e9b0 | Name: FUN_0009e9b0 | Body bytes: 432 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_0009e9b0(long param_1,undefined8 param_2,ID param_3)

{
  undefined *puVar1;
  ID IVar2;
  dispatch_queue_t pdVar3;
  undefined *local_b0;
  undefined8 local_a8;
  code *local_a0;
  undefined *puStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined *local_80;
  undefined8 local_78;
  code *local_70;
  undefined *puStack_68;
  undefined8 local_60;
  undefined **local_58;
  
  puVar1 = PTR___NSConcreteStackBlock_000e80d8;
  if (param_3 == 0) {
    local_b0 = PTR___NSConcreteStackBlock_000e80d8;
    local_a8 = 0xc2000000;
    local_a0 = FUN_0009eb60;
    puStack_98 = &DAT_000e9718;
    local_90 = *(undefined8 *)(param_1 + 0x20);
    uStack_88 = *(undefined8 *)(param_1 + 0x28);
    pdVar3 = _dispatch_get_global_queue(0,0);
    local_80 = puVar1;
    local_78 = 0xc2000000;
    local_70 = FUN_0009cd20;
    puStack_68 = &DAT_000e9688;
    local_60 = param_2;
    local_58 = &local_b0;
    _dispatch_async(pdVar3,&local_80);
  }
  else {
    _objc_msgSend(*(ID *)(param_1 + 0x20),"hideAnimated:",1);
    _objc_msgSend(param_3,"localizedDescription");
    _NSLog(&cf___);
    IVar2 = _objc_msgSend(param_3,"localizedDescription");
    DLHelper::class_DLHelper__showMessageWithTitle_message_
              ((ID)&objc::class_t::DLHelper,"showMessageWithTitle:message:",0xea568,IVar2);
  }
  return 0;
}

