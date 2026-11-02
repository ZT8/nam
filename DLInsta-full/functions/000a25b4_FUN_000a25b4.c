/* Address: 000a25b4 | Name: FUN_000a25b4 | Body bytes: 292 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_000a25b4(long param_1)

{
  ID IVar1;
  undefined *local_68;
  undefined8 local_60;
  code *local_58;
  undefined *puStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  IVar1 = DLHelper::class_DLHelper__keyWindow((ID)&objc::class_t::DLHelper,"keyWindow");
  IVar1 = MBProgressHUD::class_MBProgressHUD__showHUDAddedTo_animated_
                    ((ID)&objc::class_t::MBProgressHUD,"showHUDAddedTo:animated:",IVar1,1);
  _objc_msgSend(*(ID *)(param_1 + 0x20),"setHud:",IVar1);
  IVar1 = _objc_msgSend(*(ID *)(param_1 + 0x20),"hud");
  _objc_msgSend(IVar1,"setSquare:",1);
  local_68 = PTR___NSConcreteStackBlock_000e80d8;
  local_60 = 0xc2000000;
  local_58 = FUN_000a26d8;
  puStack_50 = &DAT_000e99d8;
  local_40 = *(undefined8 *)(param_1 + 0x28);
  local_38 = *(undefined8 *)(param_1 + 0x30);
  local_48 = *(undefined8 *)(param_1 + 0x20);
  FUN_00097610(local_40,&local_68);
  return 0;
}

