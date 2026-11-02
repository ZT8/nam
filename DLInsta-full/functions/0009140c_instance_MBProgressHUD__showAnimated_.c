/* Address: 0009140c | Name: instance_MBProgressHUD__showAnimated_ | Body bytes: 564 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x14 bytes */

void MBProgressHUD::instance_MBProgressHUD__showAnimated_(ID param_1,SEL param_2,bool param_3)

{
  cfstringStruct *pcVar1;
  bool bVar2;
  ID IVar3;
  ID self;
  cfstringStruct *pcVar4;
  double dVar5;
  
  IVar3 = NSThread::isMainThread((ID)&_OBJC_CLASS___NSThread,"isMainThread");
  if ((IVar3 & 1) == 0) {
    pcVar4 = (cfstringStruct *)
             NSString::stringWithUTF8String_
                       ((ID)&_OBJC_CLASS___NSString,"stringWithUTF8String:","Helper/MBProgressHUD.m"
                       );
    pcVar1 = &cf_<UnknownFile>;
    if (pcVar4 != (cfstringStruct *)0x0) {
      pcVar1 = pcVar4;
    }
    IVar3 = NSAssertionHandler::currentHandler
                      ((ID)&_OBJC_CLASS___NSAssertionHandler,"currentHandler");
    NSAssertionHandler::handleFailureInMethod_object_file_lineNumber_description_
              (IVar3,"handleFailureInMethod:object:file:lineNumber:description:",param_2,param_1,
               pcVar1,0x82,&cf_MBProgressHUDneedstobeaccessedonthemainthread_);
  }
  IVar3 = instance_MBProgressHUD__minShowTimer(param_1,"minShowTimer");
  _objc_msgSend(IVar3,"invalidate");
  instance_MBProgressHUD__setUseAnimation_(param_1,"setUseAnimation:",param_3);
  instance_MBProgressHUD__setFinished_(param_1,"setFinished:",0);
  dVar5 = instance_MBProgressHUD__graceTime(param_1,"graceTime");
  if (0.0 < dVar5) {
    instance_MBProgressHUD__graceTime(param_1,"graceTime");
    IVar3 = NSTimer::timerWithTimeInterval_target_selector_userInfo_repeats_
                      ((ID)&_OBJC_CLASS___NSTimer,
                       "timerWithTimeInterval:target:selector:userInfo:repeats:",param_1,
                       "handleGraceTimer:",0,0);
    self = NSRunLoop::currentRunLoop((ID)&_OBJC_CLASS___NSRunLoop,"currentRunLoop");
    NSRunLoop::addTimer_forMode_
              (self,"addTimer:forMode:",IVar3,*(undefined8 *)PTR__NSRunLoopCommonModes_000e8088);
    instance_MBProgressHUD__setGraceTimer_(param_1,"setGraceTimer:",IVar3);
    return;
  }
  bVar2 = instance_MBProgressHUD__useAnimation(param_1,"useAnimation");
  instance_MBProgressHUD__showUsingAnimation_(param_1,"showUsingAnimation:",bVar2);
  return;
}

