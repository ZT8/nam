/* Address: 00094e50 | Name: instance_MBProgressHUD__updateForCurrentOrientationAnimated_ | Body bytes: 144 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x14 bytes */

void MBProgressHUD::instance_MBProgressHUD__updateForCurrentOrientationAnimated_
               (ID param_1,SEL param_2,bool param_3)

{
  ID IVar1;
  
  IVar1 = _objc_msgSend(param_1,"superview",(ulong)param_3);
  if (IVar1 == 0) {
    return;
  }
  IVar1 = _objc_msgSend(param_1,"superview");
  _objc_msgSend(IVar1,"bounds");
  _objc_msgSend(param_1,"setFrame:");
  return;
}

