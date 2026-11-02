/* Address: 00094a18 | Name: instance_MBProgressHUD__setProgressObject_ | Body bytes: 112 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void MBProgressHUD::instance_MBProgressHUD__setProgressObject_(ID param_1,SEL param_2,ID param_3)

{
  if (*(ID *)(param_1 + (long)_progressObject) != param_3) {
    *(ID *)(param_1 + (long)_progressObject) = param_3;
    instance_MBProgressHUD__setNSProgressDisplayLinkEnabled_
              (param_1,"setNSProgressDisplayLinkEnabled:",1);
  }
  return;
}

