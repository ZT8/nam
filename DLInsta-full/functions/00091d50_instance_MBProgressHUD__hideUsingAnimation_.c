/* Address: 00091d50 | Name: instance_MBProgressHUD__hideUsingAnimation_ | Body bytes: 400 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x14 bytes */

void MBProgressHUD::instance_MBProgressHUD__hideUsingAnimation_(ID param_1,SEL param_2,bool param_3)

{
  ID IVar1;
  long_long lVar2;
  undefined4 in_w5;
  undefined *local_58;
  undefined8 local_50;
  code *local_48;
  undefined *puStack_40;
  ID local_38;
  
  IVar1 = instance_MBProgressHUD__hideDelayTimer(param_1,"hideDelayTimer");
  _objc_msgSend(IVar1,"invalidate");
  if ((param_3 == 0) ||
     (IVar1 = instance_MBProgressHUD__showStarted(param_1,"showStarted"), IVar1 == 0)) {
    instance_MBProgressHUD__setShowStarted_(param_1,"setShowStarted:",0);
    IVar1 = instance_MBProgressHUD__bezelView(param_1,"bezelView");
    _objc_msgSend(IVar1,"setAlpha:",0);
    IVar1 = instance_MBProgressHUD__backgroundView(param_1,"backgroundView");
    _objc_msgSend(IVar1,"setAlpha:",0x3ff0000000000000);
    instance_MBProgressHUD__done(param_1,"done");
    return;
  }
  instance_MBProgressHUD__setShowStarted_(param_1,"setShowStarted:",0);
  lVar2 = instance_MBProgressHUD__animationType(param_1,"animationType");
  local_58 = PTR___NSConcreteStackBlock_000e80d8;
  local_50 = 0xc2000000;
  local_48 = FUN_00091ee0;
  puStack_40 = &DAT_000e9138;
  local_38 = param_1;
  instance_MBProgressHUD__animateIn_withType_completion_
            (param_1,"animateIn:withType:completion:",0,lVar2,(ID)&local_58,in_w5);
  return;
}

