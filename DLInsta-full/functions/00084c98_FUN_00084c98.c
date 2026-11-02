/* Address: 00084c98 | Name: FUN_00084c98 | Body bytes: 308 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_00084c98(ID param_1,undefined8 param_2,ID param_3)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  dispatch_time_t dVar4;
  undefined *local_88;
  undefined8 local_80;
  code *local_78;
  undefined *puStack_70;
  ID local_68;
  ID IStack_60;
  undefined8 local_58;
  
  IVar2 = DLHelper::class_DLHelper__findViewController_
                    ((ID)&objc::class_t::DLHelper,"findViewController:",param_1);
  IVar2 = _objc_msgSend(IVar2,"user");
  if ((IVar2 != 0) && (IVar3 = _objc_msgSend(param_3,"state"), IVar3 == 1)) {
    dVar4 = _dispatch_time(0,330000000);
    puVar1 = PTR___dispatch_main_q_000e8268;
    _objc_retainAutorelease(PTR___dispatch_main_q_000e8268);
    local_88 = PTR___NSConcreteStackBlock_000e80d8;
    local_80 = 0xc2000000;
    local_78 = FUN_00086050;
    puStack_70 = &DAT_000e8808;
    local_68 = IVar2;
    IStack_60 = param_1;
    local_58 = param_2;
    _dispatch_after(dVar4,puVar1,&local_88);
  }
  return 0;
}

