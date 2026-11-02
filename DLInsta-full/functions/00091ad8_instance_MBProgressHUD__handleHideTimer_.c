/* Address: 00091ad8 | Name: instance_MBProgressHUD__handleHideTimer_ | Body bytes: 92 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void MBProgressHUD::instance_MBProgressHUD__handleHideTimer_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  IVar1 = _objc_msgSend(param_3,"userInfo");
  IVar1 = _objc_msgSend(IVar1,"boolValue");
  instance_MBProgressHUD__hideAnimated_(param_1,"hideAnimated:",(bool)IVar1);
  return;
}

