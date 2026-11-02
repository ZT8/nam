/* Address: 0008376c | Name: FUN_0008376c | Body bytes: 428 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

undefined8 FUN_0008376c(undefined8 param_1,undefined8 param_2,ID param_3,ID param_4)

{
  ID IVar1;
  code *pcVar2;
  undefined *local_58;
  undefined8 local_50;
  code *local_48;
  undefined *puStack_40;
  ID local_38;
  
  IVar1 = _objc_msgSend(param_4,"section");
  if ((IVar1 == 0) && (IVar1 = _objc_msgSend(param_4,"row"), IVar1 == 0)) {
    if (_isSettingsOpenFirstTime == '\0') {
      IVar1 = DLHelper::class_DLHelper__keyWindow((ID)&objc::class_t::DLHelper,"keyWindow");
      IVar1 = MBProgressHUD::class_MBProgressHUD__showHUDAddedTo_animated_
                        ((ID)&objc::class_t::MBProgressHUD,"showHUDAddedTo:animated:",IVar1,1);
      MBProgressHUD::instance_MBProgressHUD__setSquare_(IVar1,"setSquare:",1);
      local_58 = PTR___NSConcreteStackBlock_000e80d8;
      local_50 = 0xc2000000;
      local_48 = FUN_00082f38;
      puStack_40 = &DAT_000e8e68;
      local_38 = IVar1;
      FUN_00097480(&local_58);
    }
    else {
      FUN_0007e4e4(&PTR___NSConcreteGlobalBlock_000e8d18);
    }
    _objc_msgSend(param_3,"deselectRowAtIndexPath:animated:",param_4,1);
  }
  else {
    pcVar2 = DAT_001000f8;
    if (DAT_001000f8 == (code *)0x0) {
      pcVar2 = (code *)_class_getMethodImplementation
                                 (DAT_001000e8,"tableView:didSelectRowAtIndexPath:");
    }
    (*pcVar2)(param_1,param_2,param_3,param_4);
  }
  return 0;
}

