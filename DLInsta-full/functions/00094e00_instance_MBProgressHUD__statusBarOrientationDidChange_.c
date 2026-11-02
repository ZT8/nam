/* Address: 00094e00 | Name: instance_MBProgressHUD__statusBarOrientationDidChange_ | Body bytes: 80 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void MBProgressHUD::instance_MBProgressHUD__statusBarOrientationDidChange_
               (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  IVar1 = _objc_msgSend(param_1,"superview");
  if (IVar1 != 0) {
    instance_MBProgressHUD__updateForCurrentOrientationAnimated_
              (param_1,"updateForCurrentOrientationAnimated:",1);
  }
  return;
}

