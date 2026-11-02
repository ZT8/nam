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

