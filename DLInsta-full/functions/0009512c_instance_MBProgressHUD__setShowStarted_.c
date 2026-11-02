/* Address: 0009512c | Name: instance_MBProgressHUD__setShowStarted_ | Body bytes: 20 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void MBProgressHUD::instance_MBProgressHUD__setShowStarted_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_showStarted) = param_3;
  return;
}

