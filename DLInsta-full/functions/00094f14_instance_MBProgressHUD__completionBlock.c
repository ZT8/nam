/* Address: 00094f14 | Name: instance_MBProgressHUD__completionBlock | Body bytes: 16 */

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* Function Stack Size: 0x10 bytes */

ID MBProgressHUD::instance_MBProgressHUD__completionBlock(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_completionBlock);
}

