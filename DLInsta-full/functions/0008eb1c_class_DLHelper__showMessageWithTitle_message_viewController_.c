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

