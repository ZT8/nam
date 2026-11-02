/* Address: 0008e194 | Name: FUN_0008e194 | Body bytes: 928 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
FUN_0008e194(undefined1 param_1 [16],undefined1 param_2 [16],double param_3,double param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  cfstringStruct *pcVar1;
  ID self;
  ID IVar2;
  ID IVar3;
  ID self_00;
  
  self = _objc_msgSend((ID)&objc::class_t::DLSystemAlertController,
                       "alertControllerWithTitle:message:preferredStyle:",param_6,param_7,1);
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
                     &PTR___NSConcreteGlobalBlock_000e8f78);
  _objc_msgSend(self,"addAction:",IVar2);
  IVar2 = DLHelper::class_DLHelper__topMostController
                    ((ID)&objc::class_t::DLHelper,"topMostController");
  IVar3 = _objc_msgSend(IVar2,"view");
  _objc_msgSend(IVar3,"frame");
  IVar3 = _objc_msgSend(IVar2,"view",0x3fe0000000000000);
  _objc_msgSend(IVar3,"frame");
  IVar3 = _objc_msgSend(IVar2,"view");
  self_00 = _objc_msgSend(self,"popoverPresentationController");
  _objc_msgSend(self_00,"setSourceView:",IVar3);
  IVar3 = _objc_msgSend(self,"popoverPresentationController");
  _objc_msgSend(IVar3,"setSourceRect:",param_3 * 0.5,param_4 + -50.0,0,0);
  _objc_msgSend(IVar2,"presentViewController:animated:completion:",self,1,0);
  return 0;
}

