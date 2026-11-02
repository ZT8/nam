/* Address: 00094ce0 | Name: instance_MBProgressHUD__updateProgressFromProgressObject | Body bytes: 88 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void MBProgressHUD::instance_MBProgressHUD__updateProgressFromProgressObject(ID param_1,SEL param_2)

{
  ID self;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  
  self = instance_MBProgressHUD__progressObject(param_1,"progressObject");
  _objc_msgSend(self,"fractionCompleted");
  instance_MBProgressHUD__setProgress_
            (param_1,"setProgress:",(float)(double)CONCAT44(extraout_var,extraout_s0));
  return;
}

