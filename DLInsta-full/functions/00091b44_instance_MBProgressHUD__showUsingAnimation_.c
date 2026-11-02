/* Address: 00091b44 | Name: instance_MBProgressHUD__showUsingAnimation_ | Body bytes: 524 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x14 bytes */

void MBProgressHUD::instance_MBProgressHUD__showUsingAnimation_(ID param_1,SEL param_2,bool param_3)

{
  ID IVar1;
  long_long lVar2;
  undefined4 in_w5;
  
  IVar1 = instance_MBProgressHUD__bezelView(param_1,"bezelView");
  IVar1 = _objc_msgSend(IVar1,"layer");
  _objc_msgSend(IVar1,"removeAllAnimations");
  IVar1 = instance_MBProgressHUD__backgroundView(param_1,"backgroundView");
  IVar1 = _objc_msgSend(IVar1,"layer");
  _objc_msgSend(IVar1,"removeAllAnimations");
  IVar1 = instance_MBProgressHUD__hideDelayTimer(param_1,"hideDelayTimer");
  _objc_msgSend(IVar1,"invalidate");
  IVar1 = NSDate::date((ID)&_OBJC_CLASS___NSDate,"date");
  instance_MBProgressHUD__setShowStarted_(param_1,"setShowStarted:",IVar1);
  _objc_msgSend(param_1,"setAlpha:",0x3ff0000000000000);
  instance_MBProgressHUD__setNSProgressDisplayLinkEnabled_
            (param_1,"setNSProgressDisplayLinkEnabled:",1);
  if (param_3 == 0) {
    IVar1 = instance_MBProgressHUD__bezelView(param_1,"bezelView");
    _objc_msgSend(IVar1,"setAlpha:",0x3ff0000000000000);
    IVar1 = instance_MBProgressHUD__backgroundView(param_1,"backgroundView");
    _objc_msgSend(IVar1,"setAlpha:",0x3ff0000000000000);
    return;
  }
  lVar2 = instance_MBProgressHUD__animationType(param_1,"animationType");
  instance_MBProgressHUD__animateIn_withType_completion_
            (param_1,"animateIn:withType:completion:",1,lVar2,0,in_w5);
  return;
}

