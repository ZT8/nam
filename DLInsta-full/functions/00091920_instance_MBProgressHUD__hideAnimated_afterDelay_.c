/* Address: 00091920 | Name: instance_MBProgressHUD__hideAnimated_afterDelay_ | Body bytes: 296 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x1c bytes */

void MBProgressHUD::instance_MBProgressHUD__hideAnimated_afterDelay_
               (ID param_1,SEL param_2,bool param_3,double param_4)

{
  ID IVar1;
  ID self;
  
  IVar1 = instance_MBProgressHUD__hideDelayTimer(param_1,"hideDelayTimer");
  _objc_msgSend(IVar1,"invalidate");
  IVar1 = NSNumber::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,"numberWithBool:",(ulong)param_3);
  IVar1 = NSTimer::timerWithTimeInterval_target_selector_userInfo_repeats_
                    ((ID)&_OBJC_CLASS___NSTimer,
                     "timerWithTimeInterval:target:selector:userInfo:repeats:",param_4,param_1,
                     "handleHideTimer:",IVar1,0);
  self = NSRunLoop::currentRunLoop((ID)&_OBJC_CLASS___NSRunLoop,"currentRunLoop");
  NSRunLoop::addTimer_forMode_
            (self,"addTimer:forMode:",IVar1,*(undefined8 *)PTR__NSRunLoopCommonModes_000e8088);
  instance_MBProgressHUD__setHideDelayTimer_(param_1,"setHideDelayTimer:",IVar1);
  return;
}

