/* Address: 00094f24 | Name: instance_MBProgressHUD__setCompletionBlock_ | Body bytes: 12 */

/* WARNING: Function: _objc_setProperty_atomic_copy replaced with injection: _objc_setProperty_fixup
    */
/* Function Stack Size: 0x18 bytes */

void MBProgressHUD::instance_MBProgressHUD__setCompletionBlock_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  *(ID *)(param_1 + (long)_completionBlock) = param_3;
  return;
}

