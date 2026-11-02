/* Address: 00095224 | Name: instance_MBProgressHUD__setMinShowTimer_ | Body bytes: 20 */

/* WARNING: Function: _objc_storeWeak replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void MBProgressHUD::instance_MBProgressHUD__setMinShowTimer_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_minShowTimer) = param_3;
  return;
}

