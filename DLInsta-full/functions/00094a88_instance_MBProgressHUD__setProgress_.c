/* Address: 00094a88 | Name: instance_MBProgressHUD__setProgress_ | Body bytes: 216 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x14 bytes */

void MBProgressHUD::instance_MBProgressHUD__setProgress_(ID param_1,SEL param_2,float param_3)

{
  ID self;
  ID IVar1;
  
  if (*(float *)(param_1 + (long)_progress) == param_3) {
    return;
  }
  *(float *)(param_1 + (long)_progress) = param_3;
  self = instance_MBProgressHUD__indicator(param_1,"indicator");
  IVar1 = _objc_msgSend(self,"respondsToSelector:","setProgress:");
  if ((int)IVar1 != 0) {
    instance_MBProgressHUD__progress(param_1,"progress");
    IVar1 = NSNumber::numberWithFloat_((ID)&_OBJC_CLASS___NSNumber,"numberWithFloat:");
    _objc_msgSend(self,"setValue:forKey:",IVar1,&cf_progress);
  }
  return;
}

