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

