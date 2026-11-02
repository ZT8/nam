/* Address: 00094b60 | Name: instance_MBProgressHUD__setContentColor_ | Body bytes: 132 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void MBProgressHUD::instance_MBProgressHUD__setContentColor_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  long lVar2;
  
  lVar2 = (long)_contentColor;
  if ((*(ID *)(param_1 + lVar2) != param_3) &&
     (IVar1 = _objc_msgSend(param_3,"isEqual:"), (IVar1 & 1) == 0)) {
    *(ID *)(param_1 + lVar2) = param_3;
    instance_MBProgressHUD__updateViewsForColor_(param_1,"updateViewsForColor:",param_3);
  }
  return;
}

