/* Address: 0008c4c0 | Name: FUN_0008c4c0 | Body bytes: 1588 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_0008c4c0(undefined4 param_1)

{
  ID IVar1;
  ID IVar2;
  cfstringStruct *pcVar3;
  
  IVar2 = DAT_001006b8;
  switch(param_1) {
  case 1:
    IVar1 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle,"mainBundle");
    IVar1 = NSBundle::pathForResource_ofType_
                      (IVar1,"pathForResource:ofType:",&cf_DLInsta,&cf_bundle);
    if (IVar1 != 0) {
      NSBundle::stringByAppendingPathComponent_
                (IVar1,"stringByAppendingPathComponent:",&cf_Langauge_bundle);
    }
    IVar1 = NSLocale::preferredLanguages((ID)&_OBJC_CLASS___NSLocale,"preferredLanguages");
    IVar1 = NSLocale::firstObject(IVar1,"firstObject");
    IVar1 = NSLocale::containsString_(IVar1,"containsString:",&cf_ar);
    pcVar3 = &cf____ar_lproj;
    if ((int)IVar1 == 0) {
      pcVar3 = &cf____en_lproj;
    }
    IVar1 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",pcVar3);
    IVar1 = NSBundle::bundleWithPath_((ID)&_OBJC_CLASS___NSBundle,"bundleWithPath:",IVar1);
    pcVar3 = &cf_SETTINGS_STATUS;
    break;
  case 2:
    IVar1 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle,"mainBundle");
    IVar1 = NSBundle::pathForResource_ofType_
                      (IVar1,"pathForResource:ofType:",&cf_DLInsta,&cf_bundle);
    if (IVar1 != 0) {
      NSBundle::stringByAppendingPathComponent_
                (IVar1,"stringByAppendingPathComponent:",&cf_Langauge_bundle);
    }
    IVar1 = NSLocale::preferredLanguages((ID)&_OBJC_CLASS___NSLocale,"preferredLanguages");
    IVar1 = NSLocale::firstObject(IVar1,"firstObject");
    IVar1 = NSLocale::containsString_(IVar1,"containsString:",&cf_ar);
    pcVar3 = &cf____ar_lproj;
    if ((int)IVar1 == 0) {
      pcVar3 = &cf____en_lproj;
    }
    IVar1 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",pcVar3);
    IVar1 = NSBundle::bundleWithPath_((ID)&_OBJC_CLASS___NSBundle,"bundleWithPath:",IVar1);
    pcVar3 = &cf_SETTINGS_UPDATE;
    break;
  case 3:
    IVar1 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle,"mainBundle");
    IVar1 = NSBundle::pathForResource_ofType_
                      (IVar1,"pathForResource:ofType:",&cf_DLInsta,&cf_bundle);
    if (IVar1 != 0) {
      NSBundle::stringByAppendingPathComponent_
                (IVar1,"stringByAppendingPathComponent:",&cf_Langauge_bundle);
    }
    IVar1 = NSLocale::preferredLanguages((ID)&_OBJC_CLASS___NSLocale,"preferredLanguages");
    IVar1 = NSLocale::firstObject(IVar1,"firstObject");
    IVar1 = NSLocale::containsString_(IVar1,"containsString:",&cf_ar);
    pcVar3 = &cf____ar_lproj;
    if ((int)IVar1 == 0) {
      pcVar3 = &cf____en_lproj;
    }
    IVar1 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",pcVar3);
    IVar1 = NSBundle::bundleWithPath_((ID)&_OBJC_CLASS___NSBundle,"bundleWithPath:",IVar1);
    pcVar3 = &cf_HUD_CONNECTION;
    break;
  case 4:
    IVar1 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle,"mainBundle");
    IVar1 = NSBundle::pathForResource_ofType_
                      (IVar1,"pathForResource:ofType:",&cf_DLInsta,&cf_bundle);
    if (IVar1 != 0) {
      NSBundle::stringByAppendingPathComponent_
                (IVar1,"stringByAppendingPathComponent:",&cf_Langauge_bundle);
    }
    IVar1 = NSLocale::preferredLanguages((ID)&_OBJC_CLASS___NSLocale,"preferredLanguages");
    IVar1 = NSLocale::firstObject(IVar1,"firstObject");
    IVar1 = NSLocale::containsString_(IVar1,"containsString:",&cf_ar);
    pcVar3 = &cf____ar_lproj;
    if ((int)IVar1 == 0) {
      pcVar3 = &cf____en_lproj;
    }
    IVar1 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",pcVar3);
    IVar1 = NSBundle::bundleWithPath_((ID)&_OBJC_CLASS___NSBundle,"bundleWithPath:",IVar1);
    pcVar3 = &cf_HUD_ERROR;
    break;
  default:
    return DAT_001006b8;
  }
  NSBundle::localizedStringForKey_value_table_
            (IVar1,"localizedStringForKey:value:table:",pcVar3,&cf___,0);
  IVar2 = _objc_msgSend(IVar2,"stringByAppendingFormat:",&cf___);
  return IVar2;
}

