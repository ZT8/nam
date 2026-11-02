/* Address: 00083e34 | Name: FUN_00083e34 | Body bytes: 268 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_00083e34(void)

{
  undefined8 uVar1;
  ID IVar2;
  undefined *local_58;
  undefined8 local_50;
  code *local_48;
  undefined *puStack_40;
  ID local_38;
  
  if (_isSettingsOpenFirstTime == '\0') {
    IVar2 = DLHelper::class_DLHelper__keyWindow((ID)&objc::class_t::DLHelper,"keyWindow");
    IVar2 = MBProgressHUD::class_MBProgressHUD__showHUDAddedTo_animated_
                      ((ID)&objc::class_t::MBProgressHUD,"showHUDAddedTo:animated:",IVar2,1);
    MBProgressHUD::instance_MBProgressHUD__setSquare_(IVar2,"setSquare:",1);
    local_58 = PTR___NSConcreteStackBlock_000e80d8;
    local_50 = 0xc2000000;
    local_48 = FUN_00082f38;
    puStack_40 = &DAT_000e8e68;
    local_38 = IVar2;
    FUN_00097480(&local_58);
    return 0;
  }
  uVar1 = FUN_0007e4e4(&PTR___NSConcreteGlobalBlock_000e8d18);
  return uVar1;
}

