/* Address: 00091640 | Name: instance_MBProgressHUD__hideAnimated_ | Body bytes: 736 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x14 bytes */

void MBProgressHUD::instance_MBProgressHUD__hideAnimated_(ID param_1,SEL param_2,bool param_3)

{
  cfstringStruct *pcVar1;
  bool bVar2;
  ID IVar3;
  ID IVar4;
  cfstringStruct *pcVar5;
  double dVar6;
  double extraout_d0;
  
  IVar3 = NSThread::isMainThread((ID)&_OBJC_CLASS___NSThread,"isMainThread");
  if ((IVar3 & 1) == 0) {
    pcVar5 = (cfstringStruct *)
             NSString::stringWithUTF8String_
                       ((ID)&_OBJC_CLASS___NSString,"stringWithUTF8String:","Helper/MBProgressHUD.m"
                       );
    pcVar1 = &cf_<UnknownFile>;
    if (pcVar5 != (cfstringStruct *)0x0) {
      pcVar1 = pcVar5;
    }
    IVar3 = NSAssertionHandler::currentHandler
                      ((ID)&_OBJC_CLASS___NSAssertionHandler,"currentHandler");
    NSAssertionHandler::handleFailureInMethod_object_file_lineNumber_description_
              (IVar3,"handleFailureInMethod:object:file:lineNumber:description:",param_2,param_1,
               pcVar1,0x93,&cf_MBProgressHUDneedstobeaccessedonthemainthread_);
  }
  IVar3 = instance_MBProgressHUD__graceTimer(param_1,"graceTimer");
  _objc_msgSend(IVar3,"invalidate");
  instance_MBProgressHUD__setUseAnimation_(param_1,"setUseAnimation:",param_3);
  instance_MBProgressHUD__setFinished_(param_1,"setFinished:",1);
  dVar6 = instance_MBProgressHUD__minShowTime(param_1,"minShowTime");
  if ((0.0 < dVar6) &&
     (IVar3 = instance_MBProgressHUD__showStarted(param_1,"showStarted"), IVar3 != 0)) {
    IVar3 = NSDate::date((ID)&_OBJC_CLASS___NSDate,"date");
    IVar4 = instance_MBProgressHUD__showStarted(param_1,"showStarted");
    NSDate::timeIntervalSinceDate_(IVar3,"timeIntervalSinceDate:",IVar4);
    dVar6 = instance_MBProgressHUD__minShowTime(param_1,"minShowTime");
    if (extraout_d0 < dVar6) {
      dVar6 = instance_MBProgressHUD__minShowTime(param_1,"minShowTime");
      IVar3 = NSTimer::timerWithTimeInterval_target_selector_userInfo_repeats_
                        ((ID)&_OBJC_CLASS___NSTimer,
                         "timerWithTimeInterval:target:selector:userInfo:repeats:",
                         dVar6 - extraout_d0,param_1,"handleMinShowTimer:",0,0);
      IVar4 = NSRunLoop::currentRunLoop((ID)&_OBJC_CLASS___NSRunLoop,"currentRunLoop");
      NSRunLoop::addTimer_forMode_
                (IVar4,"addTimer:forMode:",IVar3,*(undefined8 *)PTR__NSRunLoopCommonModes_000e8088);
      instance_MBProgressHUD__setMinShowTimer_(param_1,"setMinShowTimer:",IVar3);
      return;
    }
  }
  bVar2 = instance_MBProgressHUD__useAnimation(param_1,"useAnimation");
  instance_MBProgressHUD__hideUsingAnimation_(param_1,"hideUsingAnimation:",bVar2);
  return;
}

