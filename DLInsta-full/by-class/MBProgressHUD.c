/* Automatic pseudocode grouped by Objective-C class. NOT original source. */

/* -[MBProgressHUD commonInit] | encoding v16@0:8 */
/* Address: 00091098 | Name: instance_MBProgressHUD__commonInit | Body bytes: 360 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void MBProgressHUD::instance_MBProgressHUD__commonInit(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined8 uVar2;
  
  *(undefined8 *)(param_1 + (long)_animationType) = 0;
  *(undefined8 *)(param_1 + (long)_mode) = 0;
  *(undefined8 *)(param_1 + (long)_margin) = 0x4034000000000000;
  *(undefined1 *)(param_1 + (long)_defaultMotionEffectsEnabled) = 1;
  IVar1 = UIColor::colorWithWhite_alpha_
                    ((ID)&_OBJC_CLASS___UIColor,"colorWithWhite:alpha:",0x3ff0000000000000,
                     0x3fe6666660000000);
  uVar2 = *(undefined8 *)(param_1 + (long)_contentColor);
  *(ID *)(param_1 + (long)_contentColor) = IVar1;
  _objc_msgSend(param_1,"setOpaque:",uVar2,0);
  IVar1 = UIColor::clearColor((ID)&_OBJC_CLASS___UIColor,"clearColor");
  _objc_msgSend(param_1,"setBackgroundColor:",IVar1);
  _objc_msgSend(param_1,"setAlpha:",0);
  _objc_msgSend(param_1,"setAutoresizingMask:",0x12);
  IVar1 = _objc_msgSend(param_1,"layer");
  _objc_msgSend(IVar1,"setAllowsGroupOpacity:",0);
  instance_MBProgressHUD__setupViews(param_1,"setupViews");
  instance_MBProgressHUD__updateIndicators(param_1,"updateIndicators");
  instance_MBProgressHUD__registerForNotifications(param_1,"registerForNotifications");
  return;
}


/* -[MBProgressHUD initWithFrame:] | encoding @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16 */
/* Address: 00091200 | Name: instance_MBProgressHUD__initWithFrame_ | Body bytes: 88 */

/* Function Stack Size: 0x30 bytes */

ID MBProgressHUD::instance_MBProgressHUD__initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  ID self;
  ID local_30;
  class_t *pcStack_28;
  
  pcStack_28 = &objc::class_t::MBProgressHUD;
  local_30 = param_1;
  self = UIView::initWithFrame_
                   ((ID)&local_30,"initWithFrame:",param_3.field0_0x0.field0_0x0,
                    param_3.field0_0x0.field1_0x8,param_3.field1_0x10.field0_0x0,
                    param_3.field1_0x10.field1_0x8);
  if (self != 0) {
    UIView::commonInit(self,"commonInit");
  }
  return self;
}


/* -[MBProgressHUD initWithCoder:] | encoding @24@0:8@16 */
/* Address: 00091258 | Name: instance_MBProgressHUD__initWithCoder_ | Body bytes: 88 */

/* Function Stack Size: 0x18 bytes */

ID MBProgressHUD::instance_MBProgressHUD__initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  ID self;
  ID local_30;
  class_t *pcStack_28;
  
  pcStack_28 = &objc::class_t::MBProgressHUD;
  local_30 = param_1;
  self = UIView::initWithCoder_((ID)&local_30,"initWithCoder:");
  if (self != 0) {
    UIView::commonInit(self,"commonInit");
  }
  return self;
}


/* -[MBProgressHUD initWithView:] | encoding @24@0:8@16 */
/* Address: 000912b0 | Name: instance_MBProgressHUD__initWithView_ | Body bytes: 272 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID MBProgressHUD::instance_MBProgressHUD__initWithView_(ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  ID IVar2;
  cfstringStruct *pcVar3;
  double extraout_d0;
  double in_d1;
  double in_d2;
  double in_d3;
  CGRect CVar4;
  
  if (param_3 == 0) {
    pcVar3 = (cfstringStruct *)
             NSString::stringWithUTF8String_
                       ((ID)&_OBJC_CLASS___NSString,"stringWithUTF8String:","Helper/MBProgressHUD.m"
                       );
    pcVar1 = &cf_<UnknownFile>;
    if (pcVar3 != (cfstringStruct *)0x0) {
      pcVar1 = pcVar3;
    }
    IVar2 = NSAssertionHandler::currentHandler
                      ((ID)&_OBJC_CLASS___NSAssertionHandler,"currentHandler");
    NSAssertionHandler::handleFailureInMethod_object_file_lineNumber_description_
              (IVar2,"handleFailureInMethod:object:file:lineNumber:description:",param_2,param_1,
               pcVar1,0x77,&cf_Viewmustnotbenil_);
  }
  _objc_msgSend(param_3,"bounds");
  CVar4.field0_0x0.field1_0x8 = in_d1;
  CVar4.field0_0x0.field0_0x0 = extraout_d0;
  CVar4.field1_0x10.field1_0x8 = in_d3;
  CVar4.field1_0x10.field0_0x0 = in_d2;
  IVar2 = instance_MBProgressHUD__initWithFrame_(param_1,"initWithFrame:",CVar4);
  return IVar2;
}


/* -[MBProgressHUD dealloc] | encoding v16@0:8 */
/* Address: 000913c0 | Name: instance_MBProgressHUD__dealloc | Body bytes: 76 */

/* Function Stack Size: 0x10 bytes */

void MBProgressHUD::instance_MBProgressHUD__dealloc(ID param_1,SEL param_2)

{
  ID local_30;
  class_t *pcStack_28;
  
  instance_MBProgressHUD__unregisterFromNotifications(param_1,"unregisterFromNotifications");
  pcStack_28 = &objc::class_t::MBProgressHUD;
  local_30 = param_1;
  UIView::dealloc((ID)&local_30,"dealloc");
  return;
}


/* -[MBProgressHUD showAnimated:] | encoding v20@0:8B16 */
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


/* -[MBProgressHUD hideAnimated:] | encoding v20@0:8B16 */
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


/* -[MBProgressHUD hideAnimated:afterDelay:] | encoding v28@0:8B16d20 */
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


/* -[MBProgressHUD handleGraceTimer:] | encoding v24@0:8@16 */
/* Address: 00091a48 | Name: instance_MBProgressHUD__handleGraceTimer_ | Body bytes: 88 */

/* Function Stack Size: 0x18 bytes */

void MBProgressHUD::instance_MBProgressHUD__handleGraceTimer_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  
  bVar1 = instance_MBProgressHUD__hasFinished(param_1,"hasFinished");
  if ((bVar1 & 1) == 0) {
    bVar1 = instance_MBProgressHUD__useAnimation(param_1,"useAnimation");
    instance_MBProgressHUD__showUsingAnimation_(param_1,"showUsingAnimation:",bVar1);
    return;
  }
  return;
}


/* -[MBProgressHUD handleMinShowTimer:] | encoding v24@0:8@16 */
/* Address: 00091aa0 | Name: instance_MBProgressHUD__handleMinShowTimer_ | Body bytes: 56 */

/* Function Stack Size: 0x18 bytes */

void MBProgressHUD::instance_MBProgressHUD__handleMinShowTimer_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  
  bVar1 = instance_MBProgressHUD__useAnimation(param_1,"useAnimation");
  instance_MBProgressHUD__hideUsingAnimation_(param_1,"hideUsingAnimation:",bVar1);
  return;
}


/* -[MBProgressHUD handleHideTimer:] | encoding v24@0:8@16 */
/* Address: 00091ad8 | Name: instance_MBProgressHUD__handleHideTimer_ | Body bytes: 92 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void MBProgressHUD::instance_MBProgressHUD__handleHideTimer_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  IVar1 = _objc_msgSend(param_3,"userInfo");
  IVar1 = _objc_msgSend(IVar1,"boolValue");
  instance_MBProgressHUD__hideAnimated_(param_1,"hideAnimated:",(bool)IVar1);
  return;
}


/* -[MBProgressHUD didMoveToSuperview] | encoding v16@0:8 */
/* Address: 00091b34 | Name: instance_MBProgressHUD__didMoveToSuperview | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

void MBProgressHUD::instance_MBProgressHUD__didMoveToSuperview(ID param_1,SEL param_2)

{
  instance_MBProgressHUD__updateForCurrentOrientationAnimated_
            (param_1,"updateForCurrentOrientationAnimated:",0);
  return;
}


/* -[MBProgressHUD showUsingAnimation:] | encoding v20@0:8B16 */
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


/* -[MBProgressHUD hideUsingAnimation:] | encoding v20@0:8B16 */
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


/* -[MBProgressHUD animateIn:withType:completion:] | encoding v36@0:8B16q20@?28 */
/* Address: 00091ef8 | Name: instance_MBProgressHUD__animateIn_withType_completion_ | Body bytes: 472 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x24 bytes */

void MBProgressHUD::instance_MBProgressHUD__animateIn_withType_completion_
               (ID param_1,SEL param_2,bool param_3,long_long param_4,ID param_5,undefined4 param_6)

{
  long_long lVar1;
  ID self;
  undefined8 *puVar2;
  undefined8 *puVar3;
  double extraout_d0;
  double extraout_d0_00;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *local_1b0;
  undefined8 local_1a8;
  code *local_1a0;
  undefined *puStack_198;
  ID local_190;
  ID local_188;
  long_long lStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined1 local_118;
  undefined8 local_110 [6];
  undefined8 auStack_e0 [6];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  lVar1 = 2;
  if (param_3 != 0) {
    lVar1 = 3;
  }
  if (param_4 != 1) {
    lVar1 = param_4;
  }
  _CGAffineTransformMakeScale(&local_80,0x3fe0000000000000,0x3fe0000000000000);
  _CGAffineTransformMakeScale(&local_b0,0x3ff8000000000000,0x3ff8000000000000);
  self = instance_MBProgressHUD__bezelView(param_1,"bezelView");
  if (param_3 != 0) {
    _objc_msgSend(self,"alpha");
    if (extraout_d0 == 0.0 && lVar1 == 3) {
      puVar3 = &local_80;
      puVar2 = auStack_e0;
    }
    else {
      _objc_msgSend(self,"alpha");
      if (extraout_d0_00 != 0.0 || lVar1 != 2) goto code_r0x00091fec;
      puVar3 = &local_b0;
      puVar2 = local_110;
    }
    uVar4 = *puVar3;
    uVar6 = puVar3[3];
    uVar5 = puVar3[2];
    puVar2[1] = puVar3[1];
    *puVar2 = uVar4;
    puVar2[3] = uVar6;
    puVar2[2] = uVar5;
    uVar4 = puVar3[4];
    puVar2[5] = puVar3[5];
    puVar2[4] = uVar4;
    _objc_msgSend(self,"setTransform:");
  }
code_r0x00091fec:
  local_1a8 = 0xc2000000;
  uStack_170 = uStack_a8;
  local_178 = local_b0;
  uStack_160 = uStack_98;
  local_168 = uStack_a0;
  uStack_150 = uStack_88;
  local_158 = local_90;
  uStack_140 = uStack_78;
  local_148 = local_80;
  local_1b0 = PTR___NSConcreteStackBlock_000e80d8;
  local_1a0 = FUN_000920d0;
  puStack_198 = &DAT_000e9168;
  local_118 = (undefined1)param_3;
  uStack_130 = uStack_68;
  local_138 = uStack_70;
  uStack_120 = uStack_58;
  local_128 = local_60;
  local_190 = self;
  local_188 = param_1;
  lStack_180 = lVar1;
  UIView::
  animateWithDuration_delay_usingSpringWithDamping_initialSpringVelocity_options_animations_completion_
            ((ID)&_OBJC_CLASS___UIView,
             "animateWithDuration:delay:usingSpringWithDamping:initialSpringVelocity:options:animations:completion:"
             ,0x3fd3333333333333,0,0x3ff0000000000000,0,4,&local_1b0,param_5);
  return;
}


/* -[MBProgressHUD done] | encoding v16@0:8 */
/* Address: 00092240 | Name: instance_MBProgressHUD__done | Body bytes: 264 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void MBProgressHUD::instance_MBProgressHUD__done(ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  
  instance_MBProgressHUD__setNSProgressDisplayLinkEnabled_
            (param_1,"setNSProgressDisplayLinkEnabled:",0);
  bVar1 = instance_MBProgressHUD__hasFinished(param_1,"hasFinished");
  if (bVar1 != 0) {
    _objc_msgSend(param_1,"setAlpha:",0);
    bVar1 = instance_MBProgressHUD__removeFromSuperViewOnHide(param_1,"removeFromSuperViewOnHide");
    if (bVar1 != 0) {
      _objc_msgSend(param_1,"removeFromSuperview");
    }
  }
  IVar2 = instance_MBProgressHUD__completionBlock(param_1,"completionBlock");
  if (IVar2 != 0) {
    (**(code **)(IVar2 + 0x10))(IVar2);
  }
  IVar2 = instance_MBProgressHUD__delegate(param_1,"delegate");
  IVar3 = _objc_msgSend(IVar2,"respondsToSelector:","hudWasHidden:");
  if ((int)IVar3 != 0) {
    _objc_msgSend(IVar2,"performSelector:withObject:","hudWasHidden:",param_1);
  }
  return;
}


/* -[MBProgressHUD setupViews] | encoding v16@0:8 */
/* Address: 00092348 | Name: instance_MBProgressHUD__setupViews | Body bytes: 2064 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

void MBProgressHUD::instance_MBProgressHUD__setupViews(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  ID self;
  long lVar7;
  double extraout_d0;
  double in_d1;
  double in_d2;
  double in_d3;
  CGRect CVar8;
  undefined8 local_160;
  long lStack_158;
  long *local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  ID local_118;
  ID IStack_110;
  ID local_108;
  undefined1 auStack_100 [128];
  long local_80;
  
  local_80 = *(long *)PTR____stack_chk_guard_000e8260;
  IVar1 = instance_MBProgressHUD__contentColor(param_1,"contentColor");
  IVar2 = _objc_alloc(&objc::class_t::MBBackgroundView);
  _objc_msgSend(param_1,"bounds");
  CVar8.field0_0x0.field1_0x8 = in_d1;
  CVar8.field0_0x0.field0_0x0 = extraout_d0;
  CVar8.field1_0x10.field1_0x8 = in_d3;
  CVar8.field1_0x10.field0_0x0 = in_d2;
  IVar2 = MBBackgroundView::instance_MBBackgroundView__initWithFrame_(IVar2,"initWithFrame:",CVar8);
  MBBackgroundView::instance_MBBackgroundView__setStyle_(IVar2,"setStyle:",0);
  IVar3 = UIColor::clearColor((ID)&_OBJC_CLASS___UIColor,"clearColor");
  _objc_msgSend(IVar2,"setBackgroundColor:",IVar3);
  _objc_msgSend(IVar2,"setAutoresizingMask:",0x12);
  _objc_msgSend(IVar2,"setAlpha:",0);
  _objc_msgSend(param_1,"addSubview:",IVar2);
  *(ID *)(param_1 + (long)_backgroundView) = IVar2;
  IVar2 = _objc_msgSend((ID)&objc::class_t::MBBackgroundView,"new");
  _objc_msgSend(IVar2,"setTranslatesAutoresizingMaskIntoConstraints:",0);
  IVar3 = _objc_msgSend(IVar2,"layer");
  _objc_msgSend(IVar3,"setCornerRadius:",0x4014000000000000);
  _objc_msgSend(IVar2,"setAlpha:",0);
  _objc_msgSend(param_1,"addSubview:",IVar2);
  *(ID *)(param_1 + (long)_bezelView) = IVar2;
  instance_MBProgressHUD__updateBezelMotionEffects(param_1,"updateBezelMotionEffects");
  IVar3 = UILabel::new((ID)&_OBJC_CLASS___UILabel,"new");
  UILabel::setAdjustsFontSizeToFitWidth_(IVar3,"setAdjustsFontSizeToFitWidth:",0);
  UILabel::setTextAlignment_(IVar3,"setTextAlignment:",1);
  UILabel::setTextColor_(IVar3,"setTextColor:",IVar1);
  IVar4 = UIFont::boldSystemFontOfSize_
                    ((ID)&_OBJC_CLASS___UIFont,"boldSystemFontOfSize:",0x4030000000000000);
  UILabel::setFont_(IVar3,"setFont:",IVar4);
  UILabel::setOpaque_(IVar3,"setOpaque:",0);
  IVar4 = UIColor::clearColor((ID)&_OBJC_CLASS___UIColor,"clearColor");
  UILabel::setBackgroundColor_(IVar3,"setBackgroundColor:",IVar4);
  *(ID *)(param_1 + (long)_label) = IVar3;
  IVar4 = UILabel::new((ID)&_OBJC_CLASS___UILabel,"new");
  UILabel::setAdjustsFontSizeToFitWidth_(IVar4,"setAdjustsFontSizeToFitWidth:",0);
  UILabel::setTextAlignment_(IVar4,"setTextAlignment:",1);
  UILabel::setTextColor_(IVar4,"setTextColor:",IVar1);
  UILabel::setNumberOfLines_(IVar4,"setNumberOfLines:",0);
  IVar5 = UIFont::boldSystemFontOfSize_
                    ((ID)&_OBJC_CLASS___UIFont,"boldSystemFontOfSize:",0x4028000000000000);
  UILabel::setFont_(IVar4,"setFont:",IVar5);
  UILabel::setOpaque_(IVar4,"setOpaque:",0);
  IVar5 = UIColor::clearColor((ID)&_OBJC_CLASS___UIColor,"clearColor");
  UILabel::setBackgroundColor_(IVar4,"setBackgroundColor:",IVar5);
  *(ID *)(param_1 + (long)_detailsLabel) = IVar4;
  IVar5 = _objc_msgSend((ID)&objc::class_t::MBProgressHUDRoundedButton,"buttonWithType:",0);
  IVar6 = _objc_msgSend(IVar5,"titleLabel");
  _objc_msgSend(IVar6,"setTextAlignment:",1);
  IVar6 = UIFont::boldSystemFontOfSize_
                    ((ID)&_OBJC_CLASS___UIFont,"boldSystemFontOfSize:",0x4028000000000000);
  self = _objc_msgSend(IVar5,"titleLabel");
  _objc_msgSend(self,"setFont:",IVar6);
  MBProgressHUDRoundedButton::instance_MBProgressHUDRoundedButton__setTitleColor_forState_
            (IVar5,"setTitleColor:forState:",IVar1,0);
  *(ID *)(param_1 + (long)_button) = IVar5;
  IVar1 = _objc_msgSend((ID)&objc::class_t::MBProgressHUDRoundedButton2,"buttonWithType:",0);
  IVar6 = _objc_msgSend(IVar5,"titleLabel");
  _objc_msgSend(IVar6,"setTextAlignment:",1);
  IVar6 = UIColor::colorWithWhite_alpha_
                    ((ID)&_OBJC_CLASS___UIColor,"colorWithWhite:alpha:",0x3ff0000000000000,
                     0x3fe6666660000000);
  MBProgressHUDRoundedButton2::instance_MBProgressHUDRoundedButton2__setTitleColor_forState_
            (IVar1,"setTitleColor:forState:",IVar6,0);
  *(ID *)(param_1 + (long)_hideButton) = IVar1;
  uStack_138 = 0;
  local_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  lStack_158 = 0;
  local_160 = 0;
  uStack_148 = 0;
  local_150 = (long *)0x0;
  local_118 = IVar3;
  IStack_110 = IVar4;
  local_108 = IVar5;
  IVar3 = NSArray::arrayWithObjects_count_
                    ((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:count:",&local_118,3);
  IVar4 = NSArray::countByEnumeratingWithState_objects_count_
                    (IVar3,"countByEnumeratingWithState:objects:count:",&local_160,auStack_100,0x10)
  ;
  if (IVar4 != 0) {
    lVar7 = *local_150;
    do {
      IVar5 = 0;
      do {
        if (*local_150 != lVar7) {
          _objc_enumerationMutation(IVar3);
        }
        IVar6 = *(ID *)(lStack_158 + IVar5 * 8);
        _objc_msgSend(IVar6,"setTranslatesAutoresizingMaskIntoConstraints:",0);
        _objc_msgSend(IVar6,"setContentCompressionResistancePriority:forAxis:",0x44798000,0);
        _objc_msgSend(IVar6,"setContentCompressionResistancePriority:forAxis:",0x44798000,1);
        _objc_msgSend(IVar2,"addSubview:",IVar6);
        IVar5 = IVar5 + 1;
      } while (IVar4 != IVar5);
      IVar4 = NSArray::countByEnumeratingWithState_objects_count_
                        (IVar3,"countByEnumeratingWithState:objects:count:",&local_160,auStack_100,
                         0x10);
    } while (IVar4 != 0);
  }
  _objc_msgSend(IVar1,"setFrame:",0x4014000000000000,0x4014000000000000,0x4039000000000000,
                0x4039000000000000);
  _objc_msgSend(IVar2,"addSubview:",IVar1);
  IVar1 = UIView::new((ID)&_OBJC_CLASS___UIView,"new");
  UIView::setTranslatesAutoresizingMaskIntoConstraints_
            (IVar1,"setTranslatesAutoresizingMaskIntoConstraints:",0);
  UIView::setHidden_(IVar1,"setHidden:",1);
  _objc_msgSend(IVar2,"addSubview:",IVar1);
  *(ID *)(param_1 + (long)_topSpacer) = IVar1;
  IVar1 = UIView::new((ID)&_OBJC_CLASS___UIView,"new");
  UIView::setTranslatesAutoresizingMaskIntoConstraints_
            (IVar1,"setTranslatesAutoresizingMaskIntoConstraints:",0);
  UIView::setHidden_(IVar1,"setHidden:",1);
  _objc_msgSend(IVar2,"addSubview:",IVar1);
  *(ID *)(param_1 + (long)_bottomSpacer) = IVar1;
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_80) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}


/* -[MBProgressHUD updateIndicators] | encoding v16@0:8 */
/* Address: 00092b58 | Name: instance_MBProgressHUD__updateIndicators | Body bytes: 960 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void MBProgressHUD::instance_MBProgressHUD__updateIndicators(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  long_long lVar4;
  
  IVar1 = instance_MBProgressHUD__indicator(param_1,"indicator");
  IVar2 = UIActivityIndicatorView::class((ID)&_OBJC_CLASS___UIActivityIndicatorView,"class");
  IVar2 = _objc_msgSend(IVar1,"isKindOfClass:",IVar2);
  IVar3 = _objc_msgSend((ID)&objc::class_t::MBRoundProgressView,"class");
  IVar3 = _objc_msgSend(IVar1,"isKindOfClass:",IVar3);
  lVar4 = instance_MBProgressHUD__mode(param_1,"mode");
  if (lVar4 == 2) {
    _objc_msgSend(IVar1,"removeFromSuperview");
    IVar1 = _objc_alloc(&objc::class_t::MBBarProgressView);
    IVar1 = MBBarProgressView::instance_MBBarProgressView__init(IVar1,"init");
  }
  else if (lVar4 == 0) {
    if ((IVar2 & 1) != 0) goto code_r0x00092cc4;
    _objc_msgSend(IVar1,"removeFromSuperview");
    IVar1 = _objc_alloc(&_OBJC_CLASS___UIActivityIndicatorView);
    IVar1 = UIActivityIndicatorView::initWithActivityIndicatorStyle_
                      (IVar1,"initWithActivityIndicatorStyle:",0);
    UIActivityIndicatorView::startAnimating(IVar1,"startAnimating");
  }
  else {
    if ((lVar4 & 0xfffffffffffffffd) == 1) {
      if ((IVar3 & 1) == 0) {
        _objc_msgSend(IVar1,"removeFromSuperview");
        IVar1 = _objc_alloc(&objc::class_t::MBRoundProgressView);
        IVar1 = MBRoundProgressView::instance_MBRoundProgressView__init(IVar1,"init");
        IVar2 = instance_MBProgressHUD__bezelView(param_1,"bezelView");
        _objc_msgSend(IVar2,"addSubview:",IVar1);
      }
      if (lVar4 == 3) {
        MBRoundProgressView::instance_MBRoundProgressView__setAnnular_(IVar1,"setAnnular:",1);
      }
      goto code_r0x00092cc4;
    }
    if (lVar4 == 5) {
      _objc_msgSend(IVar1,"removeFromSuperview");
      IVar1 = 0;
      goto code_r0x00092cc4;
    }
    if ((lVar4 != 4) ||
       (IVar2 = instance_MBProgressHUD__customView(param_1,"customView"), IVar2 == IVar1))
    goto code_r0x00092cc4;
    _objc_msgSend(IVar1,"removeFromSuperview");
    IVar1 = instance_MBProgressHUD__customView(param_1,"customView");
  }
  IVar2 = instance_MBProgressHUD__bezelView(param_1,"bezelView");
  _objc_msgSend(IVar2,"addSubview:",IVar1);
code_r0x00092cc4:
  _objc_msgSend(IVar1,"setTranslatesAutoresizingMaskIntoConstraints:",0);
  instance_MBProgressHUD__setIndicator_(param_1,"setIndicator:",IVar1);
  IVar2 = _objc_msgSend(IVar1,"respondsToSelector:","setProgress:");
  if ((int)IVar2 != 0) {
    instance_MBProgressHUD__progress(param_1,"progress");
    IVar2 = NSNumber::numberWithFloat_((ID)&_OBJC_CLASS___NSNumber,"numberWithFloat:");
    _objc_msgSend(IVar1,"setValue:forKey:",IVar2,&cf_progress);
  }
  _objc_msgSend(IVar1,"setContentCompressionResistancePriority:forAxis:",0x44798000,0);
  _objc_msgSend(IVar1,"setContentCompressionResistancePriority:forAxis:",0x44798000,1);
  IVar1 = instance_MBProgressHUD__contentColor(param_1,"contentColor");
  instance_MBProgressHUD__updateViewsForColor_(param_1,"updateViewsForColor:",IVar1);
  _objc_msgSend(param_1,"setNeedsUpdateConstraints");
  return;
}


/* -[MBProgressHUD updateViewsForColor:] | encoding v24@0:8@16 */
/* Address: 00092f18 | Name: instance_MBProgressHUD__updateViewsForColor_ | Body bytes: 1136 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void MBProgressHUD::instance_MBProgressHUD__updateViewsForColor_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  char *op;
  ID local_60;
  ID local_58;
  ID local_50;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_000e8260;
  if (param_3 == 0) goto LAB_0009330c;
  IVar1 = instance_MBProgressHUD__label(param_1,"label");
  _objc_msgSend(IVar1,"setTextColor:",param_3);
  IVar1 = instance_MBProgressHUD__detailsLabel(param_1,"detailsLabel");
  _objc_msgSend(IVar1,"setTextColor:",param_3);
  IVar1 = instance_MBProgressHUD__button(param_1,"button");
  _objc_msgSend(IVar1,"setTitleColor:forState:",param_3,0);
  IVar1 = instance_MBProgressHUD__indicator(param_1,"indicator");
  IVar2 = UIActivityIndicatorView::class((ID)&_OBJC_CLASS___UIActivityIndicatorView,"class");
  IVar2 = _objc_msgSend(IVar1,"isKindOfClass:",IVar2);
  if ((int)IVar2 == 0) {
    IVar2 = _objc_msgSend((ID)&objc::class_t::MBRoundProgressView,"class");
    IVar2 = _objc_msgSend(IVar1,"isKindOfClass:",IVar2);
    if ((int)IVar2 != 0) {
      local_58 = _objc_msgSend((ID)&objc::class_t::MBProgressHUD,"class");
      IVar2 = NSArray::arrayWithObjects_count_
                        ((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:count:",&local_58,1);
      IVar2 = _objc_msgSend((ID)&objc::class_t::MBRoundProgressView,
                            "appearanceWhenContainedInInstancesOfClasses:",IVar2);
      IVar3 = MBRoundProgressView::instance_MBRoundProgressView__progressTintColor
                        (IVar2,"progressTintColor");
      if (IVar3 == 0) {
        _objc_msgSend(IVar1,"setProgressTintColor:",param_3);
      }
      IVar2 = MBRoundProgressView::instance_MBRoundProgressView__backgroundTintColor
                        (IVar2,"backgroundTintColor");
      if (IVar2 == 0) {
        IVar2 = _objc_msgSend(param_3,"colorWithAlphaComponent:",0x3fb999999999999a);
        _objc_msgSend(IVar1,"setBackgroundTintColor:",IVar2);
      }
      goto LAB_0009330c;
    }
    IVar2 = _objc_msgSend((ID)&objc::class_t::MBBarProgressView,"class");
    IVar2 = _objc_msgSend(IVar1,"isKindOfClass:",IVar2);
    if ((int)IVar2 == 0) {
      IVar2 = _objc_msgSend(IVar1,"respondsToSelector:","setTintColor:");
      if ((int)IVar2 != 0) {
        _objc_msgSend(IVar1,"setTintColor:",param_3);
      }
      goto LAB_0009330c;
    }
    local_60 = _objc_msgSend((ID)&objc::class_t::MBProgressHUD,"class");
    IVar2 = NSArray::arrayWithObjects_count_
                      ((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:count:",&local_60,1);
    IVar2 = _objc_msgSend((ID)&objc::class_t::MBBarProgressView,
                          "appearanceWhenContainedInInstancesOfClasses:",IVar2);
    IVar3 = MBBarProgressView::instance_MBBarProgressView__progressColor(IVar2,"progressColor");
    if (IVar3 == 0) {
      _objc_msgSend(IVar1,"setProgressColor:",param_3);
    }
    IVar2 = MBBarProgressView::instance_MBBarProgressView__lineColor(IVar2,"lineColor");
    if (IVar2 != 0) goto LAB_0009330c;
    op = "setLineColor:";
  }
  else {
    local_50 = _objc_msgSend((ID)&objc::class_t::MBProgressHUD,"class");
    IVar2 = NSArray::arrayWithObjects_count_
                      ((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:count:",&local_50,1);
    IVar2 = UIActivityIndicatorView::appearanceWhenContainedInInstancesOfClasses_
                      ((ID)&_OBJC_CLASS___UIActivityIndicatorView,
                       "appearanceWhenContainedInInstancesOfClasses:",IVar2);
    IVar2 = UIActivityIndicatorView::color(IVar2,"color");
    if (IVar2 != 0) goto LAB_0009330c;
    op = "setColor:";
  }
  _objc_msgSend(IVar1,op,param_3);
LAB_0009330c:
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}


/* -[MBProgressHUD updateBezelMotionEffects] | encoding v16@0:8 */
/* Address: 00093388 | Name: instance_MBProgressHUD__updateBezelMotionEffects | Body bytes: 832 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void MBProgressHUD::instance_MBProgressHUD__updateBezelMotionEffects(ID param_1,SEL param_2)

{
  bool bVar1;
  ID self;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  long lVar5;
  undefined8 local_140;
  long lStack_138;
  long *local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [128];
  ID local_80;
  ID IStack_78;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_000e8260;
  self = instance_MBProgressHUD__bezelView(param_1,"bezelView");
  IVar2 = _objc_msgSend(self,"respondsToSelector:","addMotionEffect:");
  if ((int)IVar2 != 0) {
    bVar1 = instance_MBProgressHUD__areDefaultMotionEffectsEnabled
                      (param_1,"areDefaultMotionEffectsEnabled");
    if (bVar1 == 0) {
      IVar2 = _objc_msgSend(self,"motionEffects");
      lStack_138 = 0;
      local_140 = 0;
      uStack_128 = 0;
      local_130 = (long *)0x0;
      uStack_118 = 0;
      local_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      IVar3 = _objc_msgSend(IVar2,"countByEnumeratingWithState:objects:count:",&local_140,
                            auStack_100,0x10);
      if (IVar3 != 0) {
        lVar5 = *local_130;
        do {
          IVar4 = 0;
          do {
            if (*local_130 != lVar5) {
              _objc_enumerationMutation(IVar2);
            }
            _objc_msgSend(self,"removeMotionEffect:",*(undefined8 *)(lStack_138 + IVar4 * 8));
            IVar4 = IVar4 + 1;
          } while (IVar3 != IVar4);
          IVar3 = _objc_msgSend(IVar2,"countByEnumeratingWithState:objects:count:",&local_140,
                                auStack_100,0x10);
        } while (IVar3 != 0);
      }
    }
    else {
      IVar2 = _objc_alloc(&_OBJC_CLASS___UIInterpolatingMotionEffect);
      IVar2 = UIInterpolatingMotionEffect::initWithKeyPath_type_
                        (IVar2,"initWithKeyPath:type:",&cf_center_x,0);
      IVar3 = NSNumber::numberWithDouble_
                        ((ID)&_OBJC_CLASS___NSNumber,"numberWithDouble:",0x4024000000000000);
      UIInterpolatingMotionEffect::setMaximumRelativeValue_(IVar2,"setMaximumRelativeValue:",IVar3);
      IVar3 = NSNumber::numberWithDouble_
                        ((ID)&_OBJC_CLASS___NSNumber,"numberWithDouble:",0xc024000000000000);
      UIInterpolatingMotionEffect::setMinimumRelativeValue_(IVar2,"setMinimumRelativeValue:",IVar3);
      IVar3 = _objc_alloc(&_OBJC_CLASS___UIInterpolatingMotionEffect);
      IVar3 = UIInterpolatingMotionEffect::initWithKeyPath_type_
                        (IVar3,"initWithKeyPath:type:",&cf_center_y,1);
      IVar4 = NSNumber::numberWithDouble_
                        ((ID)&_OBJC_CLASS___NSNumber,"numberWithDouble:",0x4024000000000000);
      UIInterpolatingMotionEffect::setMaximumRelativeValue_(IVar3,"setMaximumRelativeValue:",IVar4);
      IVar4 = NSNumber::numberWithDouble_
                        ((ID)&_OBJC_CLASS___NSNumber,"numberWithDouble:",0xc024000000000000);
      UIInterpolatingMotionEffect::setMinimumRelativeValue_(IVar3,"setMinimumRelativeValue:",IVar4);
      IVar4 = _objc_alloc(&_OBJC_CLASS___UIMotionEffectGroup);
      IVar4 = UIMotionEffectGroup::init(IVar4,"init");
      local_80 = IVar2;
      IStack_78 = IVar3;
      IVar2 = NSArray::arrayWithObjects_count_
                        ((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:count:",&local_80,2);
      UIMotionEffectGroup::setMotionEffects_(IVar4,"setMotionEffects:",IVar2);
      _objc_msgSend(self,"addMotionEffect:",IVar4);
    }
  }
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}


/* -[MBProgressHUD updateConstraints] | encoding v16@0:8 */
/* Address: 000936c8 | Name: instance_MBProgressHUD__updateConstraints | Body bytes: 2668 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

void MBProgressHUD::instance_MBProgressHUD__updateConstraints(ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  ID self;
  ID self_00;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  ID IVar7;
  undefined8 uVar8;
  double dVar9;
  CGPoint CVar10;
  CGSize CVar11;
  ID local_f8;
  class_t *pcStack_f0;
  undefined *local_e8;
  undefined8 local_e0;
  code *local_d8;
  undefined *puStack_d0;
  ID local_c8;
  ID local_c0;
  ID local_b8;
  ID local_b0;
  ID local_a8;
  cfstringStruct *local_a0;
  ID local_98;
  long local_90;
  
  local_90 = *(long *)PTR____stack_chk_guard_000e8260;
  IVar2 = instance_MBProgressHUD__bezelView(param_1,"bezelView");
  IVar3 = instance_MBProgressHUD__topSpacer(param_1,"topSpacer");
  self = instance_MBProgressHUD__bottomSpacer(param_1,"bottomSpacer");
  dVar9 = instance_MBProgressHUD__margin(param_1,"margin");
  self_00 = NSMutableArray::array((ID)&_OBJC_CLASS___NSMutableArray,"array");
  local_a0 = &cf_margin;
  local_98 = NSNumber::numberWithDouble_((ID)&_OBJC_CLASS___NSNumber,"numberWithDouble:",dVar9);
  IVar4 = NSDictionary::dictionaryWithObjects_forKeys_count_
                    ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                     &local_98,&local_a0,1);
  IVar5 = instance_MBProgressHUD__topSpacer(param_1,"topSpacer");
  instance_MBProgressHUD__label(param_1,"label");
  instance_MBProgressHUD__detailsLabel(param_1,"detailsLabel");
  instance_MBProgressHUD__button(param_1,"button");
  instance_MBProgressHUD__bottomSpacer(param_1,"bottomSpacer");
  IVar5 = NSMutableArray::arrayWithObjects_
                    ((ID)&_OBJC_CLASS___NSMutableArray,"arrayWithObjects:",IVar5);
  IVar6 = instance_MBProgressHUD__indicator(param_1,"indicator");
  if (IVar6 != 0) {
    IVar6 = instance_MBProgressHUD__indicator(param_1,"indicator");
    NSMutableArray::insertObject_atIndex_(IVar5,"insertObject:atIndex:",IVar6,1);
  }
  IVar6 = _objc_msgSend(param_1,"constraints");
  _objc_msgSend(param_1,"removeConstraints:",IVar6);
  IVar6 = _objc_msgSend(IVar3,"constraints");
  _objc_msgSend(IVar3,"removeConstraints:",IVar6);
  IVar6 = _objc_msgSend(self,"constraints");
  _objc_msgSend(self,"removeConstraints:",IVar6);
  IVar6 = instance_MBProgressHUD__bezelConstraints(param_1,"bezelConstraints");
  if (IVar6 != 0) {
    IVar6 = instance_MBProgressHUD__bezelConstraints(param_1,"bezelConstraints");
    _objc_msgSend(IVar2,"removeConstraints:",IVar6);
    instance_MBProgressHUD__setBezelConstraints_(param_1,"setBezelConstraints:",0);
  }
  CVar10 = instance_MBProgressHUD__offset(param_1,"offset");
  IVar6 = NSMutableArray::array((ID)&_OBJC_CLASS___NSMutableArray,"array");
  IVar7 = NSLayoutConstraint::
          constraintWithItem_attribute_relatedBy_toItem_attribute_multiplier_constant_
                    ((ID)&_OBJC_CLASS___NSLayoutConstraint,
                     "constraintWithItem:attribute:relatedBy:toItem:attribute:multiplier:constant:",
                     0x3ff0000000000000,CVar10.field0_0x0,IVar2,9,0,param_1,9);
  NSMutableArray::addObject_(IVar6,"addObject:",IVar7);
  IVar7 = NSLayoutConstraint::
          constraintWithItem_attribute_relatedBy_toItem_attribute_multiplier_constant_
                    ((ID)&_OBJC_CLASS___NSLayoutConstraint,
                     "constraintWithItem:attribute:relatedBy:toItem:attribute:multiplier:constant:",
                     0x3ff0000000000000,CVar10.field1_0x8,IVar2,10,0,param_1,10);
  NSMutableArray::addObject_(IVar6,"addObject:",IVar7);
  instance_MBProgressHUD__applyPriority_toConstraints_
            (param_1,"applyPriority:toConstraints:",998.0,IVar6);
  _objc_msgSend(param_1,"addConstraints:",IVar6);
  IVar6 = NSMutableArray::array((ID)&_OBJC_CLASS___NSMutableArray,"array");
  uVar8 = __NSDictionaryOfVariableBindings(&cf_bezel,IVar2);
  IVar7 = NSLayoutConstraint::constraintsWithVisualFormat_options_metrics_views_
                    ((ID)&_OBJC_CLASS___NSLayoutConstraint,
                     "constraintsWithVisualFormat:options:metrics:views:",
                     &cf____>_margin___bezel___>_margin___,0,IVar4,uVar8);
  NSMutableArray::addObjectsFromArray_(IVar6,"addObjectsFromArray:",IVar7);
  uVar8 = __NSDictionaryOfVariableBindings(&cf_bezel,IVar2);
  IVar7 = NSLayoutConstraint::constraintsWithVisualFormat_options_metrics_views_
                    ((ID)&_OBJC_CLASS___NSLayoutConstraint,
                     "constraintsWithVisualFormat:options:metrics:views:",
                     &cf_V____>_margin___bezel___>_margin___,0,IVar4,uVar8);
  NSMutableArray::addObjectsFromArray_(IVar6,"addObjectsFromArray:",IVar7);
  instance_MBProgressHUD__applyPriority_toConstraints_
            (param_1,"applyPriority:toConstraints:",999.0,IVar6);
  _objc_msgSend(param_1,"addConstraints:",IVar6);
  CVar11 = instance_MBProgressHUD__minSize(param_1,"minSize");
  if ((CVar11.field0_0x0 != *(double *)PTR__CGSizeZero_000e8048) ||
     (CVar11.field1_0x8 != *(double *)(PTR__CGSizeZero_000e8048 + 8))) {
    IVar6 = NSMutableArray::array((ID)&_OBJC_CLASS___NSMutableArray,"array");
    IVar7 = NSLayoutConstraint::
            constraintWithItem_attribute_relatedBy_toItem_attribute_multiplier_constant_
                      ((ID)&_OBJC_CLASS___NSLayoutConstraint,
                       "constraintWithItem:attribute:relatedBy:toItem:attribute:multiplier:constant:"
                       ,0x3ff0000000000000,CVar11.field0_0x0,IVar2,7,1,0,0);
    NSMutableArray::addObject_(IVar6,"addObject:",IVar7);
    IVar7 = NSLayoutConstraint::
            constraintWithItem_attribute_relatedBy_toItem_attribute_multiplier_constant_
                      ((ID)&_OBJC_CLASS___NSLayoutConstraint,
                       "constraintWithItem:attribute:relatedBy:toItem:attribute:multiplier:constant:"
                       ,0x3ff0000000000000,CVar11.field1_0x8,IVar2,8,1,0,0);
    NSMutableArray::addObject_(IVar6,"addObject:",IVar7);
    instance_MBProgressHUD__applyPriority_toConstraints_
              (param_1,"applyPriority:toConstraints:",997.0,IVar6);
    NSMutableArray::addObjectsFromArray_(self_00,"addObjectsFromArray:",IVar6);
  }
  bVar1 = instance_MBProgressHUD__isSquare(param_1,"isSquare");
  if (bVar1 != 0) {
    IVar6 = NSLayoutConstraint::
            constraintWithItem_attribute_relatedBy_toItem_attribute_multiplier_constant_
                      ((ID)&_OBJC_CLASS___NSLayoutConstraint,
                       "constraintWithItem:attribute:relatedBy:toItem:attribute:multiplier:constant:"
                       ,0x3ff0000000000000,0,IVar2,8,0,IVar2,7);
    NSLayoutConstraint::setPriority_(IVar6,"setPriority:",0x44794000);
    NSMutableArray::addObject_(self_00,"addObject:",IVar6);
  }
  IVar6 = NSLayoutConstraint::
          constraintWithItem_attribute_relatedBy_toItem_attribute_multiplier_constant_
                    ((ID)&_OBJC_CLASS___NSLayoutConstraint,
                     "constraintWithItem:attribute:relatedBy:toItem:attribute:multiplier:constant:",
                     0x3ff0000000000000,dVar9,IVar3,8,1,0,0);
  _objc_msgSend(IVar3,"addConstraint:",IVar6);
  IVar6 = NSLayoutConstraint::
          constraintWithItem_attribute_relatedBy_toItem_attribute_multiplier_constant_
                    ((ID)&_OBJC_CLASS___NSLayoutConstraint,
                     "constraintWithItem:attribute:relatedBy:toItem:attribute:multiplier:constant:",
                     0x3ff0000000000000,dVar9,self,8,1,0,0);
  _objc_msgSend(self,"addConstraint:",IVar6);
  IVar3 = NSLayoutConstraint::
          constraintWithItem_attribute_relatedBy_toItem_attribute_multiplier_constant_
                    ((ID)&_OBJC_CLASS___NSLayoutConstraint,
                     "constraintWithItem:attribute:relatedBy:toItem:attribute:multiplier:constant:",
                     0x3ff0000000000000,0,IVar3,8,0,self,8);
  NSMutableArray::addObject_(self_00,"addObject:",IVar3);
  IVar3 = NSMutableArray::new((ID)&_OBJC_CLASS___NSMutableArray,"new");
  local_e8 = PTR___NSConcreteStackBlock_000e80d8;
  local_e0 = 0xc2000000;
  local_d8 = FUN_00094134;
  puStack_d0 = &DAT_000e9198;
  local_c8 = self_00;
  local_c0 = IVar2;
  local_b8 = IVar4;
  local_b0 = IVar5;
  local_a8 = IVar3;
  NSMutableArray::enumerateObjectsUsingBlock_(IVar5,"enumerateObjectsUsingBlock:",&local_e8);
  _objc_msgSend(IVar2,"addConstraints:",self_00);
  instance_MBProgressHUD__setBezelConstraints_(param_1,"setBezelConstraints:",self_00);
  IVar2 = NSMutableArray::copy(IVar3,"copy");
  instance_MBProgressHUD__setPaddingConstraints_(param_1,"setPaddingConstraints:",IVar2);
  instance_MBProgressHUD__updatePaddingConstraints(param_1,"updatePaddingConstraints");
  pcStack_f0 = &objc::class_t::MBProgressHUD;
  local_f8 = param_1;
  UIView::updateConstraints((ID)&local_f8,"updateConstraints");
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_90) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}


/* -[MBProgressHUD layoutSubviews] | encoding v16@0:8 */
/* Address: 0009441c | Name: instance_MBProgressHUD__layoutSubviews | Body bytes: 96 */

/* Function Stack Size: 0x10 bytes */

void MBProgressHUD::instance_MBProgressHUD__layoutSubviews(ID param_1,SEL param_2)

{
  ID IVar1;
  ID local_30;
  class_t *pcStack_28;
  
  IVar1 = _objc_msgSend(param_1,"needsUpdateConstraints");
  if ((IVar1 & 1) == 0) {
    instance_MBProgressHUD__updatePaddingConstraints(param_1,"updatePaddingConstraints");
  }
  pcStack_28 = &objc::class_t::MBProgressHUD;
  local_30 = param_1;
  UIView::layoutSubviews((ID)&local_30,"layoutSubviews");
  return;
}


/* -[MBProgressHUD updatePaddingConstraints] | encoding v16@0:8 */
/* Address: 0009447c | Name: instance_MBProgressHUD__updatePaddingConstraints | Body bytes: 164 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void MBProgressHUD::instance_MBProgressHUD__updatePaddingConstraints(ID param_1,SEL param_2)

{
  ID self;
  undefined *local_68;
  undefined8 local_60;
  code *local_58;
  undefined *puStack_50;
  undefined8 *local_48;
  undefined8 local_40;
  undefined8 *puStack_38;
  undefined8 local_30;
  undefined1 local_28;
  
  local_40 = 0;
  local_30 = 0x2020000000;
  local_28 = 0;
  puStack_38 = &local_40;
  self = instance_MBProgressHUD__paddingConstraints(param_1,"paddingConstraints");
  local_68 = PTR___NSConcreteStackBlock_000e80d8;
  local_60 = 0xc2000000;
  local_58 = FUN_00094538;
  puStack_50 = &DAT_000e91c8;
  local_48 = &local_40;
  _objc_msgSend(self,"enumerateObjectsUsingBlock:",&local_68);
  __Block_object_dispose(&local_40,8);
  return;
}


/* -[MBProgressHUD applyPriority:toConstraints:] | encoding v28@0:8f16@20 */
/* Address: 000946b8 | Name: instance_MBProgressHUD__applyPriority_toConstraints_ | Body bytes: 288 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x1c bytes */

void MBProgressHUD::instance_MBProgressHUD__applyPriority_toConstraints_
               (ID param_1,SEL param_2,float param_3,ID param_4)

{
  ID IVar1;
  long lVar2;
  ID IVar3;
  undefined4 in_register_00005004;
  undefined8 local_130;
  long lStack_128;
  long *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_000e8260;
  lStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (long *)0x0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  IVar1 = _objc_msgSend(param_4,"countByEnumeratingWithState:objects:count:",&local_130,auStack_e8,
                        0x10);
  if (IVar1 != 0) {
    lVar2 = *local_120;
    do {
      IVar3 = 0;
      do {
        if (*local_120 != lVar2) {
          _objc_enumerationMutation(param_4);
        }
        _objc_msgSend(*(ID *)(lStack_128 + IVar3 * 8),"setPriority:",
                      CONCAT44(in_register_00005004,param_3));
        IVar3 = IVar3 + 1;
      } while (IVar1 != IVar3);
      IVar1 = _objc_msgSend(param_4,"countByEnumeratingWithState:objects:count:",&local_130,
                            auStack_e8,0x10);
    } while (IVar1 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}


/* -[MBProgressHUD setMode:] | encoding v24@0:8q16 */
/* Address: 000947d8 | Name: instance_MBProgressHUD__setMode_ | Body bytes: 40 */

/* Function Stack Size: 0x18 bytes */

void MBProgressHUD::instance_MBProgressHUD__setMode_(ID param_1,SEL param_2,long_long param_3)

{
  if (*(long_long *)(param_1 + (long)_mode) == param_3) {
    return;
  }
  *(long_long *)(param_1 + (long)_mode) = param_3;
  instance_MBProgressHUD__updateIndicators(param_1,"updateIndicators");
  return;
}


/* -[MBProgressHUD setCustomView:] | encoding v24@0:8@16 */
/* Address: 00094800 | Name: instance_MBProgressHUD__setCustomView_ | Body bytes: 132 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void MBProgressHUD::instance_MBProgressHUD__setCustomView_(ID param_1,SEL param_2,ID param_3)

{
  long_long lVar1;
  
  if (*(ID *)(param_1 + (long)_customView) != param_3) {
    *(ID *)(param_1 + (long)_customView) = param_3;
    lVar1 = instance_MBProgressHUD__mode(param_1,"mode");
    if (lVar1 == 4) {
      instance_MBProgressHUD__updateIndicators(param_1,"updateIndicators");
    }
  }
  return;
}


/* -[MBProgressHUD setOffset:] | encoding v32@0:8{CGPoint=dd}16 */
/* Address: 00094884 | Name: instance_MBProgressHUD__setOffset_ | Body bytes: 52 */

/* Function Stack Size: 0x20 bytes */

void MBProgressHUD::instance_MBProgressHUD__setOffset_(ID param_1,SEL param_2,CGPoint param_3)

{
  double *pdVar1;
  bool bVar2;
  double dVar3;
  
  dVar3 = param_3.field1_0x8;
  pdVar1 = (double *)(param_1 + (long)_offset);
  bVar2 = false;
  if ((param_3.field0_0x0 == *pdVar1) && (bVar2 = false, !NAN(dVar3) && !NAN(pdVar1[1]))) {
    bVar2 = dVar3 == pdVar1[1];
  }
  if (bVar2) {
    return;
  }
  *pdVar1 = param_3.field0_0x0;
  pdVar1[1] = dVar3;
  _objc_msgSend(param_1,"setNeedsUpdateConstraints");
  return;
}


/* -[MBProgressHUD setMargin:] | encoding v24@0:8d16 */
/* Address: 000948b8 | Name: instance_MBProgressHUD__setMargin_ | Body bytes: 40 */

/* Function Stack Size: 0x18 bytes */

void MBProgressHUD::instance_MBProgressHUD__setMargin_(ID param_1,SEL param_2,double param_3)

{
  if (*(double *)(param_1 + (long)_margin) == param_3) {
    return;
  }
  *(double *)(param_1 + (long)_margin) = param_3;
  _objc_msgSend(param_1,"setNeedsUpdateConstraints");
  return;
}


/* -[MBProgressHUD setMinSize:] | encoding v32@0:8{CGSize=dd}16 */
/* Address: 000948e0 | Name: instance_MBProgressHUD__setMinSize_ | Body bytes: 52 */

/* Function Stack Size: 0x20 bytes */

void MBProgressHUD::instance_MBProgressHUD__setMinSize_(ID param_1,SEL param_2,CGSize param_3)

{
  double *pdVar1;
  bool bVar2;
  double dVar3;
  
  dVar3 = param_3.field1_0x8;
  pdVar1 = (double *)(param_1 + (long)_minSize);
  bVar2 = false;
  if ((param_3.field0_0x0 == *pdVar1) && (bVar2 = false, !NAN(dVar3) && !NAN(pdVar1[1]))) {
    bVar2 = dVar3 == pdVar1[1];
  }
  if (bVar2) {
    return;
  }
  *pdVar1 = param_3.field0_0x0;
  pdVar1[1] = dVar3;
  _objc_msgSend(param_1,"setNeedsUpdateConstraints");
  return;
}


/* -[MBProgressHUD setSquare:] | encoding v20@0:8B16 */
/* Address: 00094914 | Name: instance_MBProgressHUD__setSquare_ | Body bytes: 40 */

/* Function Stack Size: 0x14 bytes */

void MBProgressHUD::instance_MBProgressHUD__setSquare_(ID param_1,SEL param_2,bool param_3)

{
  if (*(byte *)(param_1 + (long)_square) == param_3) {
    return;
  }
  *(char *)(param_1 + (long)_square) = (char)param_3;
  _objc_msgSend(param_1,"setNeedsUpdateConstraints");
  return;
}


/* -[MBProgressHUD setProgressObjectDisplayLink:] | encoding v24@0:8@16 */
/* Address: 0009493c | Name: instance_MBProgressHUD__setProgressObjectDisplayLink_ | Body bytes: 220 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_loadWeakRetained replaced with injection: _objc_load_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_storeWeak replaced with injection: _objc_store_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

void MBProgressHUD::instance_MBProgressHUD__setProgressObjectDisplayLink_
               (ID param_1,SEL param_2,ID param_3)

{
  ID *pIVar1;
  ID IVar2;
  
  pIVar1 = (ID *)(param_1 + (long)_progressObjectDisplayLink);
  if (*pIVar1 != param_3) {
    _objc_msgSend(*pIVar1,"invalidate");
    *pIVar1 = param_3;
    IVar2 = NSRunLoop::mainRunLoop((ID)&_OBJC_CLASS___NSRunLoop,"mainRunLoop");
    _objc_msgSend(param_3,"addToRunLoop:forMode:",IVar2,
                  *(undefined8 *)PTR__NSDefaultRunLoopMode_000e8058);
  }
  return;
}


/* -[MBProgressHUD setProgressObject:] | encoding v24@0:8@16 */
/* Address: 00094a18 | Name: instance_MBProgressHUD__setProgressObject_ | Body bytes: 112 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void MBProgressHUD::instance_MBProgressHUD__setProgressObject_(ID param_1,SEL param_2,ID param_3)

{
  if (*(ID *)(param_1 + (long)_progressObject) != param_3) {
    *(ID *)(param_1 + (long)_progressObject) = param_3;
    instance_MBProgressHUD__setNSProgressDisplayLinkEnabled_
              (param_1,"setNSProgressDisplayLinkEnabled:",1);
  }
  return;
}


/* -[MBProgressHUD setProgress:] | encoding v20@0:8f16 */
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


/* -[MBProgressHUD setContentColor:] | encoding v24@0:8@16 */
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


/* -[MBProgressHUD setDefaultMotionEffectsEnabled:] | encoding v20@0:8B16 */
/* Address: 00094be4 | Name: instance_MBProgressHUD__setDefaultMotionEffectsEnabled_ | Body bytes: 40 */

/* Function Stack Size: 0x14 bytes */

void MBProgressHUD::instance_MBProgressHUD__setDefaultMotionEffectsEnabled_
               (ID param_1,SEL param_2,bool param_3)

{
  if (*(byte *)(param_1 + (long)_defaultMotionEffectsEnabled) == param_3) {
    return;
  }
  *(char *)(param_1 + (long)_defaultMotionEffectsEnabled) = (char)param_3;
  instance_MBProgressHUD__updateBezelMotionEffects(param_1,"updateBezelMotionEffects");
  return;
}


/* -[MBProgressHUD setNSProgressDisplayLinkEnabled:] | encoding v20@0:8B16 */
/* Address: 00094c0c | Name: instance_MBProgressHUD__setNSProgressDisplayLinkEnabled_ | Body bytes: 212 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x14 bytes */

void MBProgressHUD::instance_MBProgressHUD__setNSProgressDisplayLinkEnabled_
               (ID param_1,SEL param_2,bool param_3)

{
  ID IVar1;
  
  if ((param_3 == 0) ||
     (IVar1 = instance_MBProgressHUD__progressObject(param_1,"progressObject"), IVar1 == 0)) {
    instance_MBProgressHUD__setProgressObjectDisplayLink_(param_1,"setProgressObjectDisplayLink:",0)
    ;
    return;
  }
  IVar1 = instance_MBProgressHUD__progressObjectDisplayLink(param_1,"progressObjectDisplayLink");
  if (IVar1 == 0) {
    IVar1 = CADisplayLink::displayLinkWithTarget_selector_
                      ((ID)&_OBJC_CLASS___CADisplayLink,"displayLinkWithTarget:selector:",param_1,
                       "updateProgressFromProgressObject");
    instance_MBProgressHUD__setProgressObjectDisplayLink_
              (param_1,"setProgressObjectDisplayLink:",IVar1);
    return;
  }
  return;
}


/* -[MBProgressHUD updateProgressFromProgressObject] | encoding v16@0:8 */
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


/* -[MBProgressHUD registerForNotifications] | encoding v16@0:8 */
/* Address: 00094d38 | Name: instance_MBProgressHUD__registerForNotifications | Body bytes: 104 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void MBProgressHUD::instance_MBProgressHUD__registerForNotifications(ID param_1,SEL param_2)

{
  ID self;
  
  self = NSNotificationCenter::defaultCenter
                   ((ID)&_OBJC_CLASS___NSNotificationCenter,"defaultCenter");
  NSNotificationCenter::addObserver_selector_name_object_
            (self,"addObserver:selector:name:object:",param_1,"statusBarOrientationDidChange:",
             *(undefined8 *)PTR__UIApplicationDidChangeStatusBarOrientationNotification_000e8098,0);
  return;
}


/* -[MBProgressHUD unregisterFromNotifications] | encoding v16@0:8 */
/* Address: 00094da0 | Name: instance_MBProgressHUD__unregisterFromNotifications | Body bytes: 96 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void MBProgressHUD::instance_MBProgressHUD__unregisterFromNotifications(ID param_1,SEL param_2)

{
  ID self;
  
  self = NSNotificationCenter::defaultCenter
                   ((ID)&_OBJC_CLASS___NSNotificationCenter,"defaultCenter");
  NSNotificationCenter::removeObserver_name_object_
            (self,"removeObserver:name:object:",param_1,
             *(undefined8 *)PTR__UIApplicationDidChangeStatusBarOrientationNotification_000e8098,0);
  return;
}


/* -[MBProgressHUD statusBarOrientationDidChange:] | encoding v24@0:8@16 */
/* Address: 00094e00 | Name: instance_MBProgressHUD__statusBarOrientationDidChange_ | Body bytes: 80 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void MBProgressHUD::instance_MBProgressHUD__statusBarOrientationDidChange_
               (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  IVar1 = _objc_msgSend(param_1,"superview");
  if (IVar1 != 0) {
    instance_MBProgressHUD__updateForCurrentOrientationAnimated_
              (param_1,"updateForCurrentOrientationAnimated:",1);
  }
  return;
}


/* -[MBProgressHUD updateForCurrentOrientationAnimated:] | encoding v20@0:8B16 */
/* Address: 00094e50 | Name: instance_MBProgressHUD__updateForCurrentOrientationAnimated_ | Body bytes: 144 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x14 bytes */

void MBProgressHUD::instance_MBProgressHUD__updateForCurrentOrientationAnimated_
               (ID param_1,SEL param_2,bool param_3)

{
  ID IVar1;
  
  IVar1 = _objc_msgSend(param_1,"superview",(ulong)param_3);
  if (IVar1 == 0) {
    return;
  }
  IVar1 = _objc_msgSend(param_1,"superview");
  _objc_msgSend(IVar1,"bounds");
  _objc_msgSend(param_1,"setFrame:");
  return;
}


/* -[MBProgressHUD delegate] | encoding @16@0:8 */
/* Address: 00094ee0 | Name: instance_MBProgressHUD__delegate | Body bytes: 32 */

/* WARNING: Function: _objc_loadWeakRetained replaced with injection: _objc_load_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID MBProgressHUD::instance_MBProgressHUD__delegate(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_delegate);
}


/* -[MBProgressHUD setDelegate:] | encoding v24@0:8@16 */
/* Address: 00094f00 | Name: instance_MBProgressHUD__setDelegate_ | Body bytes: 20 */

/* WARNING: Function: _objc_storeWeak replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void MBProgressHUD::instance_MBProgressHUD__setDelegate_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_delegate) = param_3;
  return;
}


/* -[MBProgressHUD completionBlock] | encoding @?16@0:8 */
/* Address: 00094f14 | Name: instance_MBProgressHUD__completionBlock | Body bytes: 16 */

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* Function Stack Size: 0x10 bytes */

ID MBProgressHUD::instance_MBProgressHUD__completionBlock(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_completionBlock);
}


/* -[MBProgressHUD setCompletionBlock:] | encoding v24@0:8@?16 */
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


/* -[MBProgressHUD graceTime] | encoding d16@0:8 */
/* Address: 00094f30 | Name: instance_MBProgressHUD__graceTime | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

double MBProgressHUD::instance_MBProgressHUD__graceTime(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + (long)_graceTime);
}


/* -[MBProgressHUD setGraceTime:] | encoding v24@0:8d16 */
/* Address: 00094f40 | Name: instance_MBProgressHUD__setGraceTime_ | Body bytes: 16 */

/* Function Stack Size: 0x18 bytes */

void MBProgressHUD::instance_MBProgressHUD__setGraceTime_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + (long)_graceTime) = param_3;
  return;
}


/* -[MBProgressHUD minShowTime] | encoding d16@0:8 */
/* Address: 00094f50 | Name: instance_MBProgressHUD__minShowTime | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

double MBProgressHUD::instance_MBProgressHUD__minShowTime(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + (long)_minShowTime);
}


/* -[MBProgressHUD setMinShowTime:] | encoding v24@0:8d16 */
/* Address: 00094f60 | Name: instance_MBProgressHUD__setMinShowTime_ | Body bytes: 16 */

/* Function Stack Size: 0x18 bytes */

void MBProgressHUD::instance_MBProgressHUD__setMinShowTime_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + (long)_minShowTime) = param_3;
  return;
}


/* -[MBProgressHUD removeFromSuperViewOnHide] | encoding B16@0:8 */
/* Address: 00094f70 | Name: instance_MBProgressHUD__removeFromSuperViewOnHide | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

bool MBProgressHUD::instance_MBProgressHUD__removeFromSuperViewOnHide(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + (long)_removeFromSuperViewOnHide);
}


/* -[MBProgressHUD setRemoveFromSuperViewOnHide:] | encoding v20@0:8B16 */
/* Address: 00094f80 | Name: instance_MBProgressHUD__setRemoveFromSuperViewOnHide_ | Body bytes: 16 */

/* Function Stack Size: 0x14 bytes */

void MBProgressHUD::instance_MBProgressHUD__setRemoveFromSuperViewOnHide_
               (ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + (long)_removeFromSuperViewOnHide) = (char)param_3;
  return;
}


/* -[MBProgressHUD mode] | encoding q16@0:8 */
/* Address: 00094f90 | Name: instance_MBProgressHUD__mode | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

long_long MBProgressHUD::instance_MBProgressHUD__mode(ID param_1,SEL param_2)

{
  return *(long_long *)(param_1 + (long)_mode);
}


/* -[MBProgressHUD contentColor] | encoding @16@0:8 */
/* Address: 00094fa0 | Name: instance_MBProgressHUD__contentColor | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

ID MBProgressHUD::instance_MBProgressHUD__contentColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_contentColor);
}


/* -[MBProgressHUD animationType] | encoding q16@0:8 */
/* Address: 00094fb0 | Name: instance_MBProgressHUD__animationType | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

long_long MBProgressHUD::instance_MBProgressHUD__animationType(ID param_1,SEL param_2)

{
  return *(long_long *)(param_1 + (long)_animationType);
}


/* -[MBProgressHUD setAnimationType:] | encoding v24@0:8q16 */
/* Address: 00094fc0 | Name: instance_MBProgressHUD__setAnimationType_ | Body bytes: 16 */

/* Function Stack Size: 0x18 bytes */

void MBProgressHUD::instance_MBProgressHUD__setAnimationType_
               (ID param_1,SEL param_2,long_long param_3)

{
  *(long_long *)(param_1 + (long)_animationType) = param_3;
  return;
}


/* -[MBProgressHUD offset] | encoding {CGPoint=dd}16@0:8 */
/* Address: 00094fd0 | Name: instance_MBProgressHUD__offset | Body bytes: 20 */

/* Function Stack Size: 0x10 bytes */

CGPoint MBProgressHUD::instance_MBProgressHUD__offset(ID param_1,SEL param_2)

{
  return *(CGPoint *)(param_1 + (long)_offset);
}


/* -[MBProgressHUD margin] | encoding d16@0:8 */
/* Address: 00094fe4 | Name: instance_MBProgressHUD__margin | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

double MBProgressHUD::instance_MBProgressHUD__margin(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + (long)_margin);
}


/* -[MBProgressHUD minSize] | encoding {CGSize=dd}16@0:8 */
/* Address: 00094ff4 | Name: instance_MBProgressHUD__minSize | Body bytes: 20 */

/* Function Stack Size: 0x10 bytes */

CGSize MBProgressHUD::instance_MBProgressHUD__minSize(ID param_1,SEL param_2)

{
  return *(CGSize *)(param_1 + (long)_minSize);
}


/* -[MBProgressHUD isSquare] | encoding B16@0:8 */
/* Address: 00095008 | Name: instance_MBProgressHUD__isSquare | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

bool MBProgressHUD::instance_MBProgressHUD__isSquare(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + (long)_square);
}


/* -[MBProgressHUD areDefaultMotionEffectsEnabled] | encoding B16@0:8 */
/* Address: 00095018 | Name: instance_MBProgressHUD__areDefaultMotionEffectsEnabled | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

bool MBProgressHUD::instance_MBProgressHUD__areDefaultMotionEffectsEnabled(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + (long)_defaultMotionEffectsEnabled);
}


/* -[MBProgressHUD progress] | encoding f16@0:8 */
/* Address: 00095028 | Name: instance_MBProgressHUD__progress | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

float MBProgressHUD::instance_MBProgressHUD__progress(ID param_1,SEL param_2)

{
  return *(float *)(param_1 + (long)_progress);
}


/* -[MBProgressHUD progressObject] | encoding @16@0:8 */
/* Address: 00095038 | Name: instance_MBProgressHUD__progressObject | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

ID MBProgressHUD::instance_MBProgressHUD__progressObject(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_progressObject);
}


/* -[MBProgressHUD bezelView] | encoding @16@0:8 */
/* Address: 00095048 | Name: instance_MBProgressHUD__bezelView | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

ID MBProgressHUD::instance_MBProgressHUD__bezelView(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_bezelView);
}


/* -[MBProgressHUD backgroundView] | encoding @16@0:8 */
/* Address: 00095058 | Name: instance_MBProgressHUD__backgroundView | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

ID MBProgressHUD::instance_MBProgressHUD__backgroundView(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_backgroundView);
}


/* -[MBProgressHUD customView] | encoding @16@0:8 */
/* Address: 00095068 | Name: instance_MBProgressHUD__customView | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

ID MBProgressHUD::instance_MBProgressHUD__customView(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_customView);
}


/* -[MBProgressHUD label] | encoding @16@0:8 */
/* Address: 00095078 | Name: instance_MBProgressHUD__label | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

ID MBProgressHUD::instance_MBProgressHUD__label(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_label);
}


/* -[MBProgressHUD detailsLabel] | encoding @16@0:8 */
/* Address: 00095088 | Name: instance_MBProgressHUD__detailsLabel | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

ID MBProgressHUD::instance_MBProgressHUD__detailsLabel(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_detailsLabel);
}


/* -[MBProgressHUD button] | encoding @16@0:8 */
/* Address: 00095098 | Name: instance_MBProgressHUD__button | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

ID MBProgressHUD::instance_MBProgressHUD__button(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_button);
}


/* -[MBProgressHUD hideButton] | encoding @16@0:8 */
/* Address: 000950a8 | Name: instance_MBProgressHUD__hideButton | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

ID MBProgressHUD::instance_MBProgressHUD__hideButton(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_hideButton);
}


/* -[MBProgressHUD useAnimation] | encoding B16@0:8 */
/* Address: 000950b8 | Name: instance_MBProgressHUD__useAnimation | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

bool MBProgressHUD::instance_MBProgressHUD__useAnimation(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + (long)_useAnimation);
}


/* -[MBProgressHUD setUseAnimation:] | encoding v20@0:8B16 */
/* Address: 000950c8 | Name: instance_MBProgressHUD__setUseAnimation_ | Body bytes: 16 */

/* Function Stack Size: 0x14 bytes */

void MBProgressHUD::instance_MBProgressHUD__setUseAnimation_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + (long)_useAnimation) = (char)param_3;
  return;
}


/* -[MBProgressHUD hasFinished] | encoding B16@0:8 */
/* Address: 000950d8 | Name: instance_MBProgressHUD__hasFinished | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

bool MBProgressHUD::instance_MBProgressHUD__hasFinished(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + (long)_finished);
}


/* -[MBProgressHUD setFinished:] | encoding v20@0:8B16 */
/* Address: 000950e8 | Name: instance_MBProgressHUD__setFinished_ | Body bytes: 16 */

/* Function Stack Size: 0x14 bytes */

void MBProgressHUD::instance_MBProgressHUD__setFinished_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + (long)_finished) = (char)param_3;
  return;
}


/* -[MBProgressHUD indicator] | encoding @16@0:8 */
/* Address: 000950f8 | Name: instance_MBProgressHUD__indicator | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

ID MBProgressHUD::instance_MBProgressHUD__indicator(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_indicator);
}


/* -[MBProgressHUD setIndicator:] | encoding v24@0:8@16 */
/* Address: 00095108 | Name: instance_MBProgressHUD__setIndicator_ | Body bytes: 20 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void MBProgressHUD::instance_MBProgressHUD__setIndicator_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_indicator) = param_3;
  return;
}


/* -[MBProgressHUD showStarted] | encoding @16@0:8 */
/* Address: 0009511c | Name: instance_MBProgressHUD__showStarted | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

ID MBProgressHUD::instance_MBProgressHUD__showStarted(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_showStarted);
}


/* -[MBProgressHUD setShowStarted:] | encoding v24@0:8@16 */
/* Address: 0009512c | Name: instance_MBProgressHUD__setShowStarted_ | Body bytes: 20 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void MBProgressHUD::instance_MBProgressHUD__setShowStarted_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_showStarted) = param_3;
  return;
}


/* -[MBProgressHUD paddingConstraints] | encoding @16@0:8 */
/* Address: 00095140 | Name: instance_MBProgressHUD__paddingConstraints | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

ID MBProgressHUD::instance_MBProgressHUD__paddingConstraints(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_paddingConstraints);
}


/* -[MBProgressHUD setPaddingConstraints:] | encoding v24@0:8@16 */
/* Address: 00095150 | Name: instance_MBProgressHUD__setPaddingConstraints_ | Body bytes: 20 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void MBProgressHUD::instance_MBProgressHUD__setPaddingConstraints_
               (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_paddingConstraints) = param_3;
  return;
}


/* -[MBProgressHUD bezelConstraints] | encoding @16@0:8 */
/* Address: 00095164 | Name: instance_MBProgressHUD__bezelConstraints | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

ID MBProgressHUD::instance_MBProgressHUD__bezelConstraints(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_bezelConstraints);
}


/* -[MBProgressHUD setBezelConstraints:] | encoding v24@0:8@16 */
/* Address: 00095174 | Name: instance_MBProgressHUD__setBezelConstraints_ | Body bytes: 20 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void MBProgressHUD::instance_MBProgressHUD__setBezelConstraints_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_bezelConstraints) = param_3;
  return;
}


/* -[MBProgressHUD topSpacer] | encoding @16@0:8 */
/* Address: 00095188 | Name: instance_MBProgressHUD__topSpacer | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

ID MBProgressHUD::instance_MBProgressHUD__topSpacer(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_topSpacer);
}


/* -[MBProgressHUD setTopSpacer:] | encoding v24@0:8@16 */
/* Address: 00095198 | Name: instance_MBProgressHUD__setTopSpacer_ | Body bytes: 20 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void MBProgressHUD::instance_MBProgressHUD__setTopSpacer_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_topSpacer) = param_3;
  return;
}


/* -[MBProgressHUD bottomSpacer] | encoding @16@0:8 */
/* Address: 000951ac | Name: instance_MBProgressHUD__bottomSpacer | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

ID MBProgressHUD::instance_MBProgressHUD__bottomSpacer(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_bottomSpacer);
}


/* -[MBProgressHUD setBottomSpacer:] | encoding v24@0:8@16 */
/* Address: 000951bc | Name: instance_MBProgressHUD__setBottomSpacer_ | Body bytes: 20 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void MBProgressHUD::instance_MBProgressHUD__setBottomSpacer_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_bottomSpacer) = param_3;
  return;
}


/* -[MBProgressHUD graceTimer] | encoding @16@0:8 */
/* Address: 000951d0 | Name: instance_MBProgressHUD__graceTimer | Body bytes: 32 */

/* WARNING: Function: _objc_loadWeakRetained replaced with injection: _objc_load_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID MBProgressHUD::instance_MBProgressHUD__graceTimer(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_graceTimer);
}


/* -[MBProgressHUD setGraceTimer:] | encoding v24@0:8@16 */
/* Address: 000951f0 | Name: instance_MBProgressHUD__setGraceTimer_ | Body bytes: 20 */

/* WARNING: Function: _objc_storeWeak replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void MBProgressHUD::instance_MBProgressHUD__setGraceTimer_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_graceTimer) = param_3;
  return;
}


/* -[MBProgressHUD minShowTimer] | encoding @16@0:8 */
/* Address: 00095204 | Name: instance_MBProgressHUD__minShowTimer | Body bytes: 32 */

/* WARNING: Function: _objc_loadWeakRetained replaced with injection: _objc_load_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID MBProgressHUD::instance_MBProgressHUD__minShowTimer(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_minShowTimer);
}


/* -[MBProgressHUD setMinShowTimer:] | encoding v24@0:8@16 */
/* Address: 00095224 | Name: instance_MBProgressHUD__setMinShowTimer_ | Body bytes: 20 */

/* WARNING: Function: _objc_storeWeak replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void MBProgressHUD::instance_MBProgressHUD__setMinShowTimer_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_minShowTimer) = param_3;
  return;
}


/* -[MBProgressHUD hideDelayTimer] | encoding @16@0:8 */
/* Address: 00095238 | Name: instance_MBProgressHUD__hideDelayTimer | Body bytes: 32 */

/* WARNING: Function: _objc_loadWeakRetained replaced with injection: _objc_load_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID MBProgressHUD::instance_MBProgressHUD__hideDelayTimer(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_hideDelayTimer);
}


/* -[MBProgressHUD setHideDelayTimer:] | encoding v24@0:8@16 */
/* Address: 00095258 | Name: instance_MBProgressHUD__setHideDelayTimer_ | Body bytes: 20 */

/* WARNING: Function: _objc_storeWeak replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void MBProgressHUD::instance_MBProgressHUD__setHideDelayTimer_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_hideDelayTimer) = param_3;
  return;
}


/* -[MBProgressHUD progressObjectDisplayLink] | encoding @16@0:8 */
/* Address: 0009526c | Name: instance_MBProgressHUD__progressObjectDisplayLink | Body bytes: 32 */

/* WARNING: Function: _objc_loadWeakRetained replaced with injection: _objc_load_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID MBProgressHUD::instance_MBProgressHUD__progressObjectDisplayLink(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_progressObjectDisplayLink);
}


/* -[MBProgressHUD .cxx_destruct] | encoding v16@0:8 */
/* Address: 0009528c | Name: instance_MBProgressHUD___cxx_destruct | Body bytes: 424 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void MBProgressHUD::instance_MBProgressHUD___cxx_destruct(ID param_1,SEL param_2)

{
  _objc_destroyWeak(param_1 + (long)_progressObjectDisplayLink);
  _objc_destroyWeak(param_1 + (long)_hideDelayTimer);
  _objc_destroyWeak(param_1 + (long)_minShowTimer);
  _objc_destroyWeak(param_1 + (long)_graceTimer);
  *(undefined8 *)(param_1 + (long)_bottomSpacer) = 0;
  *(undefined8 *)(param_1 + (long)_topSpacer) = 0;
  *(undefined8 *)(param_1 + (long)_bezelConstraints) = 0;
  *(undefined8 *)(param_1 + (long)_paddingConstraints) = 0;
  *(undefined8 *)(param_1 + (long)_showStarted) = 0;
  *(undefined8 *)(param_1 + (long)_indicator) = 0;
  *(undefined8 *)(param_1 + (long)_hideButton) = 0;
  *(undefined8 *)(param_1 + (long)_button) = 0;
  *(undefined8 *)(param_1 + (long)_detailsLabel) = 0;
  *(undefined8 *)(param_1 + (long)_label) = 0;
  *(undefined8 *)(param_1 + (long)_customView) = 0;
  *(undefined8 *)(param_1 + (long)_backgroundView) = 0;
  *(undefined8 *)(param_1 + (long)_bezelView) = 0;
  *(undefined8 *)(param_1 + (long)_progressObject) = 0;
  *(undefined8 *)(param_1 + (long)_contentColor) = 0;
  *(undefined8 *)(param_1 + (long)_completionBlock) = 0;
  _objc_destroyWeak(param_1 + (long)_delegate);
  return;
}


/* +[MBProgressHUD showHUDAddedTo:animated:] | encoding @28@0:8@16B24 */
/* Address: 00090de4 | Name: class_MBProgressHUD__showHUDAddedTo_animated_ | Body bytes: 148 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x1c bytes */

ID MBProgressHUD::class_MBProgressHUD__showHUDAddedTo_animated_
             (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  ID IVar1;
  
  IVar1 = _objc_alloc(param_1);
  IVar1 = instance_MBProgressHUD__initWithView_(IVar1,"initWithView:",param_3);
  instance_MBProgressHUD__setRemoveFromSuperViewOnHide_(IVar1,"setRemoveFromSuperViewOnHide:",1);
  _objc_msgSend(param_3,"addSubview:",IVar1);
  instance_MBProgressHUD__showAnimated_(IVar1,"showAnimated:",param_4);
  return IVar1;
}


/* +[MBProgressHUD hideHUDForView:animated:] | encoding B28@0:8@16B24 */
/* Address: 00090e78 | Name: class_MBProgressHUD__hideHUDForView_animated_ | Body bytes: 116 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x1c bytes */

bool MBProgressHUD::class_MBProgressHUD__hideHUDForView_animated_
               (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  ID IVar1;
  
  IVar1 = class_MBProgressHUD__HUDForView_(param_1,"HUDForView:",param_3);
  if (IVar1 != 0) {
    instance_MBProgressHUD__setRemoveFromSuperViewOnHide_(IVar1,"setRemoveFromSuperViewOnHide:",1);
    instance_MBProgressHUD__hideAnimated_(IVar1,"hideAnimated:",param_4);
  }
  return (bool)(IVar1 != 0);
}


/* +[MBProgressHUD HUDForView:] | encoding @24@0:8@16 */
/* Address: 00090eec | Name: class_MBProgressHUD__HUDForView_ | Body bytes: 428 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID MBProgressHUD::class_MBProgressHUD__HUDForView_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID self;
  long lVar4;
  ID IVar5;
  undefined8 local_130;
  long lStack_128;
  long *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_000e8260;
  IVar1 = _objc_msgSend(param_3,"subviews");
  IVar1 = _objc_msgSend(IVar1,"reverseObjectEnumerator");
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (long *)0x0;
  IVar2 = _objc_msgSend(IVar1,"countByEnumeratingWithState:objects:count:",&local_130,auStack_f0,
                        0x10);
  if (IVar2 != 0) {
    lVar4 = *local_120;
    do {
      IVar5 = 0;
      do {
        if (*local_120 != lVar4) {
          _objc_enumerationMutation(IVar1);
        }
        self = *(ID *)(lStack_128 + IVar5 * 8);
        IVar3 = _objc_msgSend(self,"isKindOfClass:",param_1);
        if (((int)IVar3 != 0) && (IVar3 = _objc_msgSend(self,"hasFinished"), (int)IVar3 == 0))
        goto LAB_00091048;
        IVar5 = IVar5 + 1;
      } while (IVar2 != IVar5);
      IVar2 = _objc_msgSend(IVar1,"countByEnumeratingWithState:objects:count:",&local_130,auStack_f0
                            ,0x10);
    } while (IVar2 != 0);
  }
  self = 0;
LAB_00091048:
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return self;
}

