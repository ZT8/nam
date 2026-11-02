/* Address: 00094800 | Name: instance_MBProgressHUD__setCustomView_ | Body bytes: 132 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void MBProgressHUD::instance_MBProgressHUD__setCustomView_(ID param_1,SEL param_2,ID param_3)

{
  long_long lVar1;
  
  if (*(ID *)(param_1 + (long)_customView) != param_3) {
    *(ID *)(param_1 + (long)_customView) = param_3;
    lVar1 = instance_MBProgressHUD__mode(param_1,"mode");
    if (lVar1 == 4) {
      instance_MBProgressHUD__updateIndicators(param_1,"updateIndicators");
    }
  }
  return;
}

