/* Address: 00090de4 | Name: class_MBProgressHUD__showHUDAddedTo_animated_ | Body bytes: 148 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x1c bytes */

ID MBProgressHUD::class_MBProgressHUD__showHUDAddedTo_animated_
             (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  ID IVar1;
  
  IVar1 = _objc_alloc(param_1);
  IVar1 = instance_MBProgressHUD__initWithView_(IVar1,"initWithView:",param_3);
  instance_MBProgressHUD__setRemoveFromSuperViewOnHide_(IVar1,"setRemoveFromSuperViewOnHide:",1);
  _objc_msgSend(param_3,"addSubview:",IVar1);
  instance_MBProgressHUD__showAnimated_(IVar1,"showAnimated:",param_4);
  return IVar1;
}

