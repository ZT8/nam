/* Automatic pseudocode grouped by Objective-C class. NOT original source. */

/* +[DLHelper HUDWithState:] | encoding v24@0:8Q16 */
/* Address: 0008d0ec | Name: class_DLHelper__HUDWithState_ | Body bytes: 2012 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void DLHelper::class_DLHelper__HUDWithState_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  cfstringStruct *pcVar4;
  double dVar5;
  
  IVar1 = UIApplication::sharedApplication((ID)&_OBJC_CLASS___UIApplication,"sharedApplication");
  IVar1 = UIApplication::delegate(IVar1,"delegate");
  IVar1 = UIApplication::window(IVar1,"window");
  IVar1 = MBProgressHUD::class_MBProgressHUD__showHUDAddedTo_animated_
                    ((ID)&objc::class_t::MBProgressHUD,"showHUDAddedTo:animated:",IVar1,1);
  MBProgressHUD::instance_MBProgressHUD__setMode_(IVar1,"setMode:",4);
  pcVar4 = &cf_jg_hud_success_png;
  if (1 < param_3 - 1) {
    pcVar4 = &cf_jg_hud_error_png;
  }
  IVar2 = class_DLHelper__imageIcon_((ID)&objc::class_t::DLHelper,"imageIcon:",(ID)pcVar4);
  IVar3 = _objc_alloc(&_OBJC_CLASS___UIImageView);
  IVar2 = UIImageView::initWithImage_(IVar3,"initWithImage:",IVar2);
  MBProgressHUD::instance_MBProgressHUD__setCustomView_(IVar1,"setCustomView:",IVar2);
  MBProgressHUD::instance_MBProgressHUD__setSquare_(IVar1,"setSquare:",1);
  if (param_3 == 3) {
    IVar2 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle,"mainBundle");
    IVar2 = NSBundle::pathForResource_ofType_
                      (IVar2,"pathForResource:ofType:",&cf_DLInsta,&cf_bundle);
    if (IVar2 != 0) {
      NSBundle::stringByAppendingPathComponent_
                (IVar2,"stringByAppendingPathComponent:",&cf_Langauge_bundle);
    }
    IVar2 = NSLocale::preferredLanguages((ID)&_OBJC_CLASS___NSLocale,"preferredLanguages");
    IVar2 = NSLocale::firstObject(IVar2,"firstObject");
    IVar2 = NSLocale::containsString_(IVar2,"containsString:",&cf_ar);
    pcVar4 = &cf____ar_lproj;
    if ((int)IVar2 == 0) {
      pcVar4 = &cf____en_lproj;
    }
    IVar2 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",pcVar4);
    IVar2 = NSBundle::bundleWithPath_((ID)&_OBJC_CLASS___NSBundle,"bundleWithPath:",IVar2);
    pcVar4 = &cf_HUD_CONNECTION;
  }
  else {
    if (param_3 == 2) {
      IVar2 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle,"mainBundle");
      IVar2 = NSBundle::pathForResource_ofType_
                        (IVar2,"pathForResource:ofType:",&cf_DLInsta,&cf_bundle);
      if (IVar2 != 0) {
        NSBundle::stringByAppendingPathComponent_
                  (IVar2,"stringByAppendingPathComponent:",&cf_Langauge_bundle);
      }
      IVar2 = NSLocale::preferredLanguages((ID)&_OBJC_CLASS___NSLocale,"preferredLanguages");
      IVar2 = NSLocale::firstObject(IVar2,"firstObject");
      IVar2 = NSLocale::containsString_(IVar2,"containsString:",&cf_ar);
      pcVar4 = &cf____ar_lproj;
      if ((int)IVar2 == 0) {
        pcVar4 = &cf____en_lproj;
      }
      IVar2 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",pcVar4);
      IVar2 = NSBundle::bundleWithPath_((ID)&_OBJC_CLASS___NSBundle,"bundleWithPath:",IVar2);
      IVar2 = NSBundle::localizedStringForKey_value_table_
                        (IVar2,"localizedStringForKey:value:table:",&cf_HUD_COPIED,&cf___,0);
      IVar3 = MBProgressHUD::instance_MBProgressHUD__label(IVar1,"label");
      _objc_msgSend(IVar3,"setText:",IVar2);
      dVar5 = 1.5;
      goto LAB_0008d868;
    }
    if (param_3 == 1) {
      IVar2 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle,"mainBundle");
      IVar2 = NSBundle::pathForResource_ofType_
                        (IVar2,"pathForResource:ofType:",&cf_DLInsta,&cf_bundle);
      if (IVar2 != 0) {
        NSBundle::stringByAppendingPathComponent_
                  (IVar2,"stringByAppendingPathComponent:",&cf_Langauge_bundle);
      }
      IVar2 = NSLocale::preferredLanguages((ID)&_OBJC_CLASS___NSLocale,"preferredLanguages");
      IVar2 = NSLocale::firstObject(IVar2,"firstObject");
      IVar2 = NSLocale::containsString_(IVar2,"containsString:",&cf_ar);
      pcVar4 = &cf____ar_lproj;
      if ((int)IVar2 == 0) {
        pcVar4 = &cf____en_lproj;
      }
      IVar2 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",pcVar4);
      IVar2 = NSBundle::bundleWithPath_((ID)&_OBJC_CLASS___NSBundle,"bundleWithPath:",IVar2);
      pcVar4 = &cf_HUD_SUCCESS;
    }
    else {
      IVar2 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle,"mainBundle");
      IVar2 = NSBundle::pathForResource_ofType_
                        (IVar2,"pathForResource:ofType:",&cf_DLInsta,&cf_bundle);
      if (IVar2 != 0) {
        NSBundle::stringByAppendingPathComponent_
                  (IVar2,"stringByAppendingPathComponent:",&cf_Langauge_bundle);
      }
      IVar2 = NSLocale::preferredLanguages((ID)&_OBJC_CLASS___NSLocale,"preferredLanguages");
      IVar2 = NSLocale::firstObject(IVar2,"firstObject");
      IVar2 = NSLocale::containsString_(IVar2,"containsString:",&cf_ar);
      pcVar4 = &cf____ar_lproj;
      if ((int)IVar2 == 0) {
        pcVar4 = &cf____en_lproj;
      }
      IVar2 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",pcVar4);
      IVar2 = NSBundle::bundleWithPath_((ID)&_OBJC_CLASS___NSBundle,"bundleWithPath:",IVar2);
      pcVar4 = &cf_HUD_ERROR;
    }
  }
  IVar2 = NSBundle::localizedStringForKey_value_table_
                    (IVar2,"localizedStringForKey:value:table:",pcVar4,&cf___,0);
  IVar3 = MBProgressHUD::instance_MBProgressHUD__label(IVar1,"label");
  _objc_msgSend(IVar3,"setText:",IVar2);
  dVar5 = 1.0;
LAB_0008d868:
  MBProgressHUD::instance_MBProgressHUD__hideAnimated_afterDelay_
            (IVar1,"hideAnimated:afterDelay:",1,dVar5);
  return;
}


/* +[DLHelper getFile:] | encoding @24@0:8@16 */
/* Address: 0008d8c8 | Name: class_DLHelper__getFile_ | Body bytes: 188 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID DLHelper::class_DLHelper__getFile_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  IVar1 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle,"mainBundle");
  IVar1 = NSBundle::pathForResource_ofType_(IVar1,"pathForResource:ofType:",&cf_DLInsta,&cf_bundle);
  if (IVar1 == 0) {
    IVar1 = 0;
  }
  else {
    IVar1 = NSBundle::stringByAppendingPathComponent_
                      (IVar1,"stringByAppendingPathComponent:",param_3);
  }
  return IVar1;
}


/* +[DLHelper addLine:atPosition:withColor:lineHeight:] | encoding v48@0:8@16Q24@32d40 */
/* Address: 0008d984 | Name: class_DLHelper__addLine_atPosition_withColor_lineHeight_ | Body bytes: 616 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x30 bytes */

void DLHelper::class_DLHelper__addLine_atPosition_withColor_lineHeight_
               (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4,ID param_5,
               double param_6)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_98;
  ID IStack_90;
  cfstringStruct *local_88;
  ID local_80;
  long local_78;
  
  local_78 = *(long *)PTR____stack_chk_guard_000e8260;
  IVar1 = _objc_alloc(&_OBJC_CLASS___UIView);
  IVar1 = UIView::init(IVar1,"init");
  UIView::setBackgroundColor_(IVar1,"setBackgroundColor:",param_5);
  UIView::setTranslatesAutoresizingMaskIntoConstraints_
            (IVar1,"setTranslatesAutoresizingMaskIntoConstraints:",0);
  _objc_msgSend(param_3,"addSubview:",IVar1);
  local_88 = &cf_width;
  local_80 = NSNumber::numberWithFloat_
                       ((ID)&_OBJC_CLASS___NSNumber,"numberWithFloat:",(float)param_6);
  IVar2 = NSDictionary::dictionaryWithObjects_forKeys_count_
                    ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                     &local_80,&local_88,1);
  local_98 = &cf_lineView;
  IStack_90 = IVar1;
  IVar1 = NSDictionary::dictionaryWithObjects_forKeys_count_
                    ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                     &IStack_90,&local_98,1);
  IVar3 = NSLayoutConstraint::constraintsWithVisualFormat_options_metrics_views_
                    ((ID)&_OBJC_CLASS___NSLayoutConstraint,
                     "constraintsWithVisualFormat:options:metrics:views:",&cf_H___lineView__,0,IVar2
                     ,IVar1);
  _objc_msgSend(param_3,"addConstraints:",IVar3);
  if (param_4 == 0) {
    pcVar4 = &cf_V___0__lineView_width__;
  }
  else {
    if (param_4 != 1) goto LAB_0008db8c;
    pcVar4 = &cf_V__lineView_width___;
  }
  IVar1 = NSLayoutConstraint::constraintsWithVisualFormat_options_metrics_views_
                    ((ID)&_OBJC_CLASS___NSLayoutConstraint,
                     "constraintsWithVisualFormat:options:metrics:views:",pcVar4,0,IVar2,IVar1);
  _objc_msgSend(param_3,"addConstraints:",IVar1);
LAB_0008db8c:
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_78) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}


/* +[DLHelper is_iPhoneX] | encoding B16@0:8 */
/* Address: 0008dbec | Name: class_DLHelper__is_iPhoneX | Body bytes: 96 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

bool DLHelper::class_DLHelper__is_iPhoneX(ID param_1,SEL param_2)

{
  ID self;
  double extraout_d0;
  
  self = class_DLHelper__topWindow((ID)&objc::class_t::DLHelper,"topWindow");
  _objc_msgSend(self,"safeAreaInsets");
  return (bool)(44.0 < extraout_d0);
}


/* +[DLHelper topWindow] | encoding @16@0:8 */
/* Address: 0008dc4c | Name: class_DLHelper__topWindow | Body bytes: 132 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID DLHelper::class_DLHelper__topWindow(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = UIApplication::sharedApplication((ID)&_OBJC_CLASS___UIApplication,"sharedApplication");
  IVar1 = UIApplication::windows(IVar1,"windows");
  IVar1 = UIApplication::firstObject(IVar1,"firstObject");
  return IVar1;
}


/* +[DLHelper imageIcon:] | encoding @24@0:8@16 */
/* Address: 0008dcd0 | Name: class_DLHelper__imageIcon_ | Body bytes: 256 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID DLHelper::class_DLHelper__imageIcon_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  IVar1 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle,"mainBundle");
  IVar1 = NSBundle::pathForResource_ofType_(IVar1,"pathForResource:ofType:",&cf_DLInsta,&cf_bundle);
  IVar1 = NSBundle::bundleWithPath_((ID)&_OBJC_CLASS___NSBundle,"bundleWithPath:",IVar1);
  IVar1 = UIImage::imageNamed_inBundle_
                    ((ID)&_OBJC_CLASS___UIImage,"imageNamed:inBundle:",param_3,IVar1);
  return IVar1;
}


/* +[DLHelper image:color:] | encoding @32@0:8@16@24 */
/* Address: 0008ddd0 | Name: class_DLHelper__image_color_ | Body bytes: 288 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID DLHelper::class_DLHelper__image_color_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  undefined8 extraout_d0;
  undefined8 extraout_d0_00;
  undefined8 extraout_d0_01;
  undefined8 in_d1;
  
  IVar1 = _objc_msgSend(param_3,"imageWithRenderingMode:",2);
  _objc_msgSend(param_3,"size");
  _objc_msgSend(IVar1,"scale");
  _UIGraphicsBeginImageContextWithOptions(extraout_d0,in_d1,extraout_d0_00,0);
  _objc_msgSend(param_4,"set");
  _objc_msgSend(param_3,"size");
  _objc_msgSend(IVar1,"size");
  _objc_msgSend(IVar1,"drawInRect:",0,0,extraout_d0_01,in_d1);
  IVar1 = _UIGraphicsGetImageFromCurrentImageContext();
  _UIGraphicsEndImageContext(0);
  return IVar1;
}


/* +[DLHelper resizeImageView:size:] | encoding @40@0:8@16{CGSize=dd}24 */
/* Address: 0008def0 | Name: class_DLHelper__resizeImageView_size_ | Body bytes: 400 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x28 bytes */

ID __thiscall
DLHelper::class_DLHelper__resizeImageView_size_
          (DLHelper *this,ID param_1,SEL param_2,ID param_3,CGSize param_4)

{
  ID IVar1;
  undefined8 uVar2;
  undefined8 extraout_d0;
  
  IVar1 = UIScreen::mainScreen((ID)&_OBJC_CLASS___UIScreen,"mainScreen");
  UIScreen::scale(IVar1,"scale");
  _UIGraphicsBeginImageContextWithOptions(param_4.field0_0x0,param_4.field1_0x8,extraout_d0,0);
  IVar1 = _objc_msgSend((ID)param_2,"image");
  _objc_msgSend(IVar1,"drawInRect:",0,0,param_4.field0_0x0,param_4.field1_0x8);
  uVar2 = _UIGraphicsGetImageFromCurrentImageContext(0);
  _objc_msgSend((ID)param_2,"setImage:",uVar2);
  IVar1 = _objc_msgSend((ID)param_2,"image");
  IVar1 = _objc_msgSend(IVar1,"imageWithRenderingMode:",2);
  _objc_msgSend((ID)param_2,"setImage:",IVar1);
  IVar1 = UIColor::whiteColor((ID)&_OBJC_CLASS___UIColor,"whiteColor");
  _objc_msgSend((ID)param_2,"setTintColor:",IVar1);
  _UIGraphicsEndImageContext(0);
  return (ID)param_2;
}


/* +[DLHelper showMessageWithTitle:message:] | encoding v32@0:8@16@24 */
/* Address: 0008e080 | Name: class_DLHelper__showMessageWithTitle_message_ | Body bytes: 192 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void DLHelper::class_DLHelper__showMessageWithTitle_message_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *local_58;
  undefined8 local_50;
  code *local_48;
  undefined *puStack_40;
  undefined **local_38;
  
  if (param_3 != 0 || param_4 != 0) {
    local_58 = PTR___NSConcreteStackBlock_000e80d8;
    local_50 = 0xc2000000;
    local_48 = FUN_0008e538;
    puStack_40 = &DAT_000e8fd8;
    local_38 = &PTR___NSConcreteGlobalBlock_000e8f58;
    FUN_0008e538(&local_58,param_3,param_4);
  }
  return;
}


/* +[DLHelper showMessageWithTitle:message:viewController:] | encoding v40@0:8@16@24@32 */
/* Address: 0008eb1c | Name: class_DLHelper__showMessageWithTitle_message_viewController_ | Body bytes: 936 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x28 bytes */

void DLHelper::class_DLHelper__showMessageWithTitle_message_viewController_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  cfstringStruct *pcVar1;
  ID self;
  ID IVar2;
  ID self_00;
  double in_d2;
  double in_d3;
  
  self = _objc_msgSend((ID)&objc::class_t::DLSystemAlertController,
                       "alertControllerWithTitle:message:preferredStyle:",param_3,param_4,1);
  IVar2 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle,"mainBundle");
  IVar2 = NSBundle::pathForResource_ofType_(IVar2,"pathForResource:ofType:",&cf_DLInsta,&cf_bundle);
  if (IVar2 != 0) {
    NSBundle::stringByAppendingPathComponent_
              (IVar2,"stringByAppendingPathComponent:",&cf_Langauge_bundle);
  }
  IVar2 = NSLocale::preferredLanguages((ID)&_OBJC_CLASS___NSLocale,"preferredLanguages");
  IVar2 = NSLocale::firstObject(IVar2,"firstObject");
  IVar2 = NSLocale::containsString_(IVar2,"containsString:",&cf_ar);
  pcVar1 = &cf____ar_lproj;
  if ((int)IVar2 == 0) {
    pcVar1 = &cf____en_lproj;
  }
  IVar2 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",pcVar1);
  IVar2 = NSBundle::bundleWithPath_((ID)&_OBJC_CLASS___NSBundle,"bundleWithPath:",IVar2);
  IVar2 = NSBundle::localizedStringForKey_value_table_
                    (IVar2,"localizedStringForKey:value:table:",&cf_ALERT_OK_BUTTON,&cf___,0);
  IVar2 = UIAlertAction::actionWithTitle_style_handler_
                    ((ID)&_OBJC_CLASS___UIAlertAction,"actionWithTitle:style:handler:",IVar2,0,
                     &PTR___NSConcreteGlobalBlock_000e9008);
  _objc_msgSend(self,"addAction:",IVar2);
  IVar2 = _objc_msgSend(param_5,"view");
  _objc_msgSend(IVar2,"frame");
  IVar2 = _objc_msgSend(param_5,"view",0x3fe0000000000000);
  _objc_msgSend(IVar2,"frame");
  IVar2 = _objc_msgSend(param_5,"view");
  self_00 = _objc_msgSend(self,"popoverPresentationController");
  _objc_msgSend(self_00,"setSourceView:",IVar2);
  IVar2 = _objc_msgSend(self,"popoverPresentationController");
  _objc_msgSend(IVar2,"setSourceRect:",in_d2 * 0.5,in_d3 + -50.0,0,0);
  _objc_msgSend(param_5,"presentViewController:animated:completion:",self,1,0);
  return;
}


/* +[DLHelper showConfirmMessageSave:share:] | encoding v32@0:8@?16@?24 */
/* Address: 0008eec8 | Name: class_DLHelper__showConfirmMessageSave_share_ | Body bytes: 1996 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void DLHelper::class_DLHelper__showConfirmMessageSave_share_
               (ID param_1,SEL param_2,ID param_3,uint param_4,ID param_5,undefined4 param_6)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID self;
  cfstringStruct *pcVar4;
  double in_d2;
  double in_d3;
  undefined *local_c8;
  undefined8 local_c0;
  code *local_b8;
  undefined *puStack_b0;
  ulong local_a8;
  undefined *local_a0;
  undefined8 local_98;
  code *local_90;
  undefined *puStack_88;
  ID local_80;
  
  IVar1 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle,"mainBundle");
  IVar1 = NSBundle::pathForResource_ofType_(IVar1,"pathForResource:ofType:",&cf_DLInsta,&cf_bundle);
  if (IVar1 != 0) {
    NSBundle::stringByAppendingPathComponent_
              (IVar1,"stringByAppendingPathComponent:",&cf_Langauge_bundle);
  }
  IVar1 = NSLocale::preferredLanguages((ID)&_OBJC_CLASS___NSLocale,"preferredLanguages");
  IVar1 = NSLocale::firstObject(IVar1,"firstObject");
  IVar1 = NSLocale::containsString_(IVar1,"containsString:",&cf_ar);
  if ((int)IVar1 == 0) {
    pcVar4 = &cf____en_lproj;
  }
  else {
    pcVar4 = &cf____ar_lproj;
  }
  IVar1 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",pcVar4);
  IVar1 = NSBundle::bundleWithPath_((ID)&_OBJC_CLASS___NSBundle,"bundleWithPath:",IVar1);
  IVar1 = NSBundle::localizedStringForKey_value_table_
                    (IVar1,"localizedStringForKey:value:table:",&cf_ACTION_MESSAGE_SAVE_SHARE,&cf___
                     ,0);
  IVar1 = _objc_msgSend((ID)&objc::class_t::DLSystemAlertController,
                        "alertControllerWithTitle:message:preferredStyle:",&cf_DLInsta,IVar1,1);
  IVar2 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle,"mainBundle");
  IVar2 = NSBundle::pathForResource_ofType_(IVar2,"pathForResource:ofType:",&cf_DLInsta,&cf_bundle);
  if (IVar2 != 0) {
    NSBundle::stringByAppendingPathComponent_
              (IVar2,"stringByAppendingPathComponent:",&cf_Langauge_bundle);
  }
  IVar2 = NSLocale::preferredLanguages((ID)&_OBJC_CLASS___NSLocale,"preferredLanguages");
  IVar2 = NSLocale::firstObject(IVar2,"firstObject");
  IVar2 = NSLocale::containsString_(IVar2,"containsString:",&cf_ar);
  pcVar4 = &cf____ar_lproj;
  if ((int)IVar2 == 0) {
    pcVar4 = &cf____en_lproj;
  }
  IVar2 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",pcVar4);
  IVar2 = NSBundle::bundleWithPath_((ID)&_OBJC_CLASS___NSBundle,"bundleWithPath:",IVar2);
  IVar2 = NSBundle::localizedStringForKey_value_table_
                    (IVar2,"localizedStringForKey:value:table:",&cf_ACTION_SAVE,&cf___,0);
  local_a0 = PTR___NSConcreteStackBlock_000e80d8;
  local_98 = 0xc2000000;
  local_90 = FUN_0008f694;
  puStack_88 = &DAT_000e9028;
  local_80 = param_3;
  IVar2 = UIAlertAction::actionWithTitle_style_handler_
                    ((ID)&_OBJC_CLASS___UIAlertAction,"actionWithTitle:style:handler:",IVar2,0,
                     &local_a0);
  IVar3 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle,"mainBundle");
  IVar3 = NSBundle::pathForResource_ofType_(IVar3,"pathForResource:ofType:",&cf_DLInsta,&cf_bundle);
  if (IVar3 != 0) {
    NSBundle::stringByAppendingPathComponent_
              (IVar3,"stringByAppendingPathComponent:",&cf_Langauge_bundle);
  }
  IVar3 = NSLocale::preferredLanguages((ID)&_OBJC_CLASS___NSLocale,"preferredLanguages");
  IVar3 = NSLocale::firstObject(IVar3,"firstObject");
  IVar3 = NSLocale::containsString_(IVar3,"containsString:",&cf_ar);
  pcVar4 = &cf____ar_lproj;
  if ((int)IVar3 == 0) {
    pcVar4 = &cf____en_lproj;
  }
  IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",pcVar4);
  IVar3 = NSBundle::bundleWithPath_((ID)&_OBJC_CLASS___NSBundle,"bundleWithPath:",IVar3);
  IVar3 = NSBundle::localizedStringForKey_value_table_
                    (IVar3,"localizedStringForKey:value:table:",&cf_ACTION_SHARE,&cf___,0);
  local_c8 = PTR___NSConcreteStackBlock_000e80d8;
  local_c0 = 0xc2000000;
  local_b8 = FUN_0008f6a0;
  puStack_b0 = &DAT_000e9028;
  local_a8 = (ulong)param_4;
  IVar3 = UIAlertAction::actionWithTitle_style_handler_
                    ((ID)&_OBJC_CLASS___UIAlertAction,"actionWithTitle:style:handler:",IVar3,0,
                     &local_c8);
  _objc_msgSend(IVar1,"addAction:",IVar2);
  _objc_msgSend(IVar1,"addAction:",IVar3);
  IVar2 = class_DLHelper__topMostController((ID)&objc::class_t::DLHelper,"topMostController");
  IVar3 = _objc_msgSend(IVar2,"view");
  _objc_msgSend(IVar3,"frame");
  IVar3 = _objc_msgSend(IVar2,"view",0x3fe0000000000000);
  _objc_msgSend(IVar3,"frame");
  IVar3 = _objc_msgSend(IVar2,"view");
  self = _objc_msgSend(IVar1,"popoverPresentationController");
  _objc_msgSend(self,"setSourceView:",IVar3);
  IVar3 = _objc_msgSend(IVar1,"popoverPresentationController");
  _objc_msgSend(IVar3,"setSourceRect:",in_d2 * 0.5,in_d3 + -50.0,0,0);
  _objc_msgSend(IVar2,"presentViewController:animated:completion:",IVar1,1,0);
  return;
}


/* +[DLHelper sendSynchronousRequest:returningResponse:error:] | encoding @40@0:8@16^@24^@32 */
/* Address: 0008f6ac | Name: class_DLHelper__sendSynchronousRequest_returningResponse_error_ | Body bytes: 536 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x28 bytes */

ID DLHelper::class_DLHelper__sendSynchronousRequest_returningResponse_error_
             (ID param_1,SEL param_2,ID param_3,ID *param_4,ID *param_5)

{
  ID IVar1;
  undefined *local_160;
  undefined8 local_158;
  code *local_150;
  undefined *puStack_148;
  undefined8 *local_140;
  undefined8 *puStack_138;
  undefined8 *local_130;
  undefined8 *puStack_128;
  undefined8 local_120;
  undefined8 *local_118;
  undefined8 local_110;
  code *local_108;
  code *pcStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 *local_e8;
  undefined8 local_e0;
  undefined1 local_d8;
  undefined8 local_d0;
  undefined8 *local_c8;
  undefined8 local_c0;
  code *local_b8;
  code *pcStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  code *local_88;
  code *pcStack_80;
  undefined8 local_78;
  
  local_a0 = 0;
  local_90 = 0x3032000000;
  local_88 = FUN_0008f904;
  pcStack_80 = FUN_0008f914;
  local_78 = 0;
  local_d0 = 0;
  local_c0 = 0x3032000000;
  local_b8 = FUN_0008f904;
  pcStack_b0 = FUN_0008f914;
  local_a8 = 0;
  local_f0 = 0;
  local_e0 = 0x2020000000;
  local_d8 = 0;
  local_120 = 0;
  local_110 = 0x3032000000;
  local_108 = FUN_0008f904;
  pcStack_100 = FUN_0008f914;
  local_f8 = 0;
  local_118 = &local_120;
  local_e8 = &local_f0;
  local_c8 = &local_d0;
  local_98 = &local_a0;
  IVar1 = NSURLSession::sharedSession((ID)&_OBJC_CLASS___NSURLSession,"sharedSession");
  local_160 = PTR___NSConcreteStackBlock_000e80d8;
  local_158 = 0xc2000000;
  local_150 = FUN_0008f91c;
  puStack_148 = &DAT_000e9058;
  local_140 = &local_120;
  puStack_138 = &local_a0;
  local_130 = &local_d0;
  puStack_128 = &local_f0;
  IVar1 = NSURLSession::dataTaskWithRequest_completionHandler_
                    (IVar1,"dataTaskWithRequest:completionHandler:",param_3,&local_160);
  NSURLSession::resume(IVar1,"resume");
  while (*(char *)(local_e8 + 3) == '\0') {
    NSThread::sleepForTimeInterval_
              ((ID)&_OBJC_CLASS___NSThread,"sleepForTimeInterval:",0x3f947ae147ae147b);
  }
  if (param_4 != (ID *)0x0) {
    IVar1 = _objc_retainAutorelease(local_118[5]);
    *param_4 = IVar1;
  }
  if (param_5 != (ID *)0x0) {
    IVar1 = _objc_retainAutorelease(local_98[5]);
    *param_5 = IVar1;
  }
  IVar1 = local_c8[5];
  __Block_object_dispose(&local_120,8);
  __Block_object_dispose(&local_f0,8);
  __Block_object_dispose(&local_d0,8);
  __Block_object_dispose(&local_a0,8);
  return IVar1;
}


/* +[DLHelper DLMediaSize:] | encoding q24@0:8@16 */
/* Address: 0008faa8 | Name: class_DLHelper__DLMediaSize_ | Body bytes: 228 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_unsafeClaimAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

long_long DLHelper::class_DLHelper__DLMediaSize_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID local_38;
  
  IVar1 = NSURL::URLWithString_((ID)&_OBJC_CLASS___NSURL,"URLWithString:");
  IVar1 = NSMutableURLRequest::requestWithURL_
                    ((ID)&_OBJC_CLASS___NSMutableURLRequest,"requestWithURL:",IVar1);
  NSMutableURLRequest::setHTTPMethod_(IVar1,"setHTTPMethod:",&cf_HEAD);
  local_38 = 0;
  class_DLHelper__sendSynchronousRequest_returningResponse_error_
            (param_1,"sendSynchronousRequest:returningResponse:error:",IVar1,&local_38,(ID *)0x0);
  IVar1 = _objc_msgSend(local_38,"expectedContentLength");
  return IVar1;
}


/* +[DLHelper getStatusCodeFromURL:] | encoding q24@0:8@16 */
/* Address: 0008fb8c | Name: class_DLHelper__getStatusCodeFromURL_ | Body bytes: 216 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_unsafeClaimAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

long_long DLHelper::class_DLHelper__getStatusCodeFromURL_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID local_40;
  ID local_38;
  
  IVar1 = NSMutableURLRequest::requestWithURL_cachePolicy_timeoutInterval_
                    ((ID)&_OBJC_CLASS___NSMutableURLRequest,
                     "requestWithURL:cachePolicy:timeoutInterval:",0x4014000000000000,param_3,0);
  NSMutableURLRequest::setHTTPMethod_(IVar1,"setHTTPMethod:",&cf_HEAD);
  local_40 = 0;
  local_38 = 0;
  class_DLHelper__sendSynchronousRequest_returningResponse_error_
            (param_1,"sendSynchronousRequest:returningResponse:error:",IVar1,&local_38,&local_40);
  IVar1 = _objc_msgSend(local_38,"statusCode");
  return IVar1;
}


/* +[DLHelper switchToRTL:] | encoding v24@0:8@16 */
/* Address: 0008fc64 | Name: class_DLHelper__switchToRTL_ | Body bytes: 84 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void DLHelper::class_DLHelper__switchToRTL_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  
  bVar1 = class_DLHelper__isDeviceLanguageArabic
                    ((ID)&objc::class_t::DLHelper,"isDeviceLanguageArabic");
  if (bVar1 != 0) {
    _objc_msgSend(param_3,"setSemanticContentAttribute:",4);
  }
  return;
}


/* +[DLHelper isDarkMode] | encoding B16@0:8 */
/* Address: 0008fcb8 | Name: class_DLHelper__isDarkMode | Body bytes: 160 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

bool DLHelper::class_DLHelper__isDarkMode(ID param_1,SEL param_2)

{
  int iVar1;
  ID IVar2;
  bool bVar3;
  
  iVar1 = FUN_000bd0fc(2,0xd,0,0);
  if (iVar1 == 0) {
    bVar3 = 0;
  }
  else {
    IVar2 = UIScreen::mainScreen((ID)&_OBJC_CLASS___UIScreen,"mainScreen");
    IVar2 = UIScreen::traitCollection(IVar2,"traitCollection");
    IVar2 = UIScreen::userInterfaceStyle(IVar2,"userInterfaceStyle");
    bVar3 = (bool)(IVar2 == 2);
  }
  return bVar3;
}


/* +[DLHelper cellWithTitle:key:defaultValue:statusMode:] | encoding @48@0:8@16@24@32q40 */
/* Address: 0008fd58 | Name: class_DLHelper__cellWithTitle_key_defaultValue_statusMode_ | Body bytes: 408 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x30 bytes */

ID DLHelper::class_DLHelper__cellWithTitle_key_defaultValue_statusMode_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,long_long param_6)

{
  ID IVar1;
  ID IVar2;
  ID self;
  undefined **ppuVar3;
  
  IVar1 = FRPSettings::class_FRPSettings__settingsWithKey_defaultValue_
                    ((ID)&objc::class_t::FRPSettings,"settingsWithKey:defaultValue:",param_4,param_5
                    );
  IVar1 = _objc_msgSend((ID)&objc::class_t::FRPSwitchCell,
                        "cellWithTitle:setting:postNotification:changeBlock:",param_3,IVar1,0,
                        &PTR___NSConcreteGlobalBlock_000e9088);
  if (param_6 == 0) {
    IVar2 = UIColor::whiteColor((ID)&_OBJC_CLASS___UIColor,"whiteColor");
    ppuVar3 = &PTR_s_blackColor_000fbc88;
  }
  else {
    IVar2 = UIColor::colorWithRed_green_blue_alpha_
                      ((ID)&_OBJC_CLASS___UIColor,"colorWithRed:green:blue:alpha:",
                       0x3fa6161616161616,0x3fae1e1e1e1e1e1e,0x3fb4141414141414,0x3ff0000000000000);
    ppuVar3 = &PTR_s_whiteColor_000fb648;
  }
  _objc_msgSend(IVar1,"setBackgroundColor:",IVar2);
  IVar2 = UIColor::blackColor((ID)&_OBJC_CLASS___UIColor,*ppuVar3);
  self = _objc_msgSend(IVar1,"textLabel");
  _objc_msgSend(self,"setTextColor:",IVar2);
  return IVar1;
}


/* +[DLHelper cellWithTitle:detail:image:url:statusMode:] | encoding @56@0:8@16@24@32@40q48 */
/* Address: 0008fef4 | Name: class_DLHelper__cellWithTitle_detail_image_url_statusMode_ | Body bytes: 284 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x38 bytes */

ID DLHelper::class_DLHelper__cellWithTitle_detail_image_url_statusMode_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,long_long param_7)

{
  ID self;
  ID IVar1;
  ID self_00;
  undefined **ppuVar2;
  
  self = _objc_msgSend((ID)&objc::class_t::FRPDeveloperCell,"cellWithTitle:detail:image:url:");
  if (param_7 == 0) {
    IVar1 = UIColor::whiteColor((ID)&_OBJC_CLASS___UIColor,"whiteColor");
    ppuVar2 = &PTR_s_blackColor_000fbc88;
  }
  else {
    IVar1 = UIColor::colorWithRed_green_blue_alpha_
                      ((ID)&_OBJC_CLASS___UIColor,"colorWithRed:green:blue:alpha:",
                       0x3fa6161616161616,0x3fae1e1e1e1e1e1e,0x3fb4141414141414,0x3ff0000000000000);
    ppuVar2 = &PTR_s_whiteColor_000fb648;
  }
  _objc_msgSend(self,"setBackgroundColor:",IVar1);
  IVar1 = UIColor::blackColor((ID)&_OBJC_CLASS___UIColor,*ppuVar2);
  self_00 = _objc_msgSend(self,"textLabel");
  _objc_msgSend(self_00,"setTextColor:",IVar1);
  return self;
}


/* +[DLHelper saveMediaIdForStory:] | encoding v24@0:8@16 */
/* Address: 00090010 | Name: class_DLHelper__saveMediaIdForStory_ | Body bytes: 672 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void DLHelper::class_DLHelper__saveMediaIdForStory_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  
  IVar1 = _NSSearchPathForDirectoriesInDomains(9,1,1);
  IVar1 = _objc_msgSend(IVar1,"objectAtIndex:",0);
  IVar2 = _objc_msgSend(IVar1,"stringByAppendingPathComponent:",&cf_story_seen_media_id_plist);
  IVar3 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
  IVar4 = NSFileManager::fileExistsAtPath_(IVar3,"fileExistsAtPath:",IVar2);
  if ((IVar4 & 1) == 0) {
    IVar2 = NSString::stringWithFormat_
                      ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_story_seen_media_id_plist
                      );
    IVar2 = _objc_msgSend(IVar1,"stringByAppendingPathComponent:",IVar2);
  }
  IVar1 = NSFileManager::fileExistsAtPath_(IVar3,"fileExistsAtPath:",IVar2);
  IVar3 = _objc_alloc(&_OBJC_CLASS___NSMutableDictionary);
  if ((int)IVar1 == 0) {
    IVar1 = NSMutableDictionary::init(IVar3,"init");
  }
  else {
    IVar1 = NSMutableDictionary::initWithContentsOfFile_(IVar3,"initWithContentsOfFile:",IVar2);
  }
  IVar3 = NSMutableDictionary::objectForKey_(IVar1,"objectForKey:",&cf_media_ids);
  if (IVar3 == 0) {
    IVar3 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
    IVar3 = NSMutableArray::init(IVar3,"init");
    NSMutableArray::addObject_(IVar3,"addObject:",param_3);
    NSMutableDictionary::setObject_forKey_(IVar1,"setObject:forKey:",IVar3,&cf_media_ids);
  }
  else {
    IVar3 = NSMutableDictionary::objectForKey_(IVar1,"objectForKey:",&cf_media_ids);
    IVar3 = NSMutableDictionary::mutableCopy(IVar3,"mutableCopy");
    NSMutableDictionary::addObject_(IVar3,"addObject:",param_3);
    NSMutableDictionary::setObject_forKey_(IVar1,"setObject:forKey:",IVar3,&cf_media_ids);
  }
  NSMutableDictionary::writeToFile_atomically_(IVar1,"writeToFile:atomically:",IVar2,1);
  return;
}


/* +[DLHelper findViewController:] | encoding @24@0:8@16 */
/* Address: 000902b0 | Name: class_DLHelper__findViewController_ | Body bytes: 216 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID DLHelper::class_DLHelper__findViewController_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  if (param_3 != 0) {
    do {
      IVar1 = UIViewController::class((ID)&_OBJC_CLASS___UIViewController,"class");
      IVar1 = _objc_msgSend(param_3,"isKindOfClass:",IVar1);
      if ((int)IVar1 != 0) {
        return param_3;
      }
      param_3 = _objc_msgSend(param_3,"nextResponder");
    } while (param_3 != 0);
  }
  return 0;
}


/* +[DLHelper topMostController] | encoding @16@0:8 */
/* Address: 00090388 | Name: class_DLHelper__topMostController | Body bytes: 248 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autorelease replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID DLHelper::class_DLHelper__topMostController(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = UIApplication::sharedApplication((ID)&_OBJC_CLASS___UIApplication,"sharedApplication");
  IVar1 = UIApplication::keyWindow(IVar1,"keyWindow");
  IVar1 = UIApplication::rootViewController(IVar1,"rootViewController");
  IVar2 = UIApplication::presentedViewController(IVar1,"presentedViewController");
  if (IVar2 != 0) {
    do {
      IVar1 = _objc_msgSend(IVar1,"presentedViewController");
      IVar2 = _objc_msgSend(IVar1,"presentedViewController");
    } while (IVar2 != 0);
  }
  return IVar1;
}


/* +[DLHelper keyWindow] | encoding @16@0:8 */
/* Address: 00090480 | Name: class_DLHelper__keyWindow | Body bytes: 384 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID DLHelper::class_DLHelper__keyWindow(ID param_1,SEL param_2)

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
  undefined1 auStack_e8 [128];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_000e8260;
  IVar1 = UIApplication::sharedApplication((ID)&_OBJC_CLASS___UIApplication,"sharedApplication");
  IVar1 = UIApplication::windows(IVar1,"windows");
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (long *)0x0;
  IVar2 = UIApplication::countByEnumeratingWithState_objects_count_
                    (IVar1,"countByEnumeratingWithState:objects:count:",&local_130,auStack_e8,0x10);
  if (IVar2 != 0) {
    lVar4 = *local_120;
    do {
      IVar5 = 0;
      do {
        if (*local_120 != lVar4) {
          _objc_enumerationMutation(IVar1);
        }
        self = *(ID *)(lStack_128 + IVar5 * 8);
        IVar3 = _objc_msgSend(self,"isKeyWindow");
        if ((int)IVar3 != 0) goto LAB_000905b0;
        IVar5 = IVar5 + 1;
      } while (IVar2 != IVar5);
      IVar2 = UIApplication::countByEnumeratingWithState_objects_count_
                        (IVar1,"countByEnumeratingWithState:objects:count:",&local_130,auStack_e8,
                         0x10);
    } while (IVar2 != 0);
  }
  self = 0;
LAB_000905b0:
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return self;
}


/* +[DLHelper vibration:] | encoding v20@0:8i16 */
/* Address: 00090600 | Name: class_DLHelper__vibration_ | Body bytes: 76 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x14 bytes */

void DLHelper::class_DLHelper__vibration_(ID param_1,SEL param_2,int param_3)

{
  ID IVar1;
  
  IVar1 = _objc_alloc(&_OBJC_CLASS___UIImpactFeedbackGenerator);
  IVar1 = UIImpactFeedbackGenerator::initWithStyle_(IVar1,"initWithStyle:",(long)(int)param_3);
  UIImpactFeedbackGenerator::impactOccurred(IVar1,"impactOccurred");
  return;
}


/* +[DLHelper isDeviceLanguageArabic] | encoding B16@0:8 */
/* Address: 0009064c | Name: class_DLHelper__isDeviceLanguageArabic | Body bytes: 132 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

bool DLHelper::class_DLHelper__isDeviceLanguageArabic(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = NSLocale::preferredLanguages((ID)&_OBJC_CLASS___NSLocale,"preferredLanguages");
  IVar1 = NSLocale::firstObject(IVar1,"firstObject");
  IVar1 = NSLocale::containsString_(IVar1,"containsString:",&cf_ar);
  return (bool)IVar1;
}


/* +[DLHelper setBool:forKey:] | encoding v28@0:8B16@20 */
/* Address: 000906d0 | Name: class_DLHelper__setBool_forKey_ | Body bytes: 172 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x1c bytes */

void DLHelper::class_DLHelper__setBool_forKey_(ID param_1,SEL param_2,bool param_3,ID param_4)

{
  ID IVar1;
  
  IVar1 = NSUserDefaults::standardUserDefaults
                    ((ID)&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
  NSUserDefaults::setBool_forKey_(IVar1,"setBool:forKey:",(ulong)param_3,param_4);
  IVar1 = NSUserDefaults::standardUserDefaults
                    ((ID)&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
  NSUserDefaults::synchronize(IVar1,"synchronize");
  return;
}


/* +[DLHelper setObject:forKey:] | encoding v32@0:8@16@24 */
/* Address: 0009077c | Name: class_DLHelper__setObject_forKey_ | Body bytes: 192 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void DLHelper::class_DLHelper__setObject_forKey_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  
  IVar1 = NSUserDefaults::standardUserDefaults
                    ((ID)&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
  NSUserDefaults::setObject_forKey_(IVar1,"setObject:forKey:",param_3,param_4);
  IVar1 = NSUserDefaults::standardUserDefaults
                    ((ID)&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
  NSUserDefaults::synchronize(IVar1,"synchronize");
  return;
}


/* +[DLHelper boolForKey:] | encoding B24@0:8@16 */
/* Address: 0009083c | Name: class_DLHelper__boolForKey_ | Body bytes: 124 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

bool DLHelper::class_DLHelper__boolForKey_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  IVar1 = NSUserDefaults::standardUserDefaults
                    ((ID)&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
  IVar1 = NSUserDefaults::boolForKey_(IVar1,"boolForKey:",param_3);
  return (bool)IVar1;
}

