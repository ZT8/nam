/* Address: 0008be8c | Name: FUN_0008be8c | Body bytes: 712 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long FUN_0008be8c(undefined1 param_1 [16],undefined1 param_2 [16],double param_3,double param_4,
                 long param_5)

{
  cfstringStruct *pcVar1;
  ID IVar2;
  undefined8 uVar3;
  ID IVar4;
  ID IVar5;
  ID self;
  
  if (*(long *)(param_5 + 0x20) != 2) {
    return param_5;
  }
  IVar2 = NSLocale::preferredLanguages((ID)&_OBJC_CLASS___NSLocale,"preferredLanguages");
  IVar2 = NSLocale::firstObject(IVar2,"firstObject");
  IVar2 = NSLocale::containsString_(IVar2,"containsString:",&cf_ar);
  pcVar1 = &cf_DB_;
  if ((int)IVar2 == 0) {
    pcVar1 = &cf_Thereasonforthisissuehasbeensent_theissuewillbefixedassoonaspossible_Thankyou_;
  }
  IVar2 = _objc_msgSend((ID)&objc::class_t::DLSystemAlertController,
                        "alertControllerWithTitle:message:preferredStyle:",&cf_DLCrash,pcVar1,1);
  uVar3 = FUN_0008c218(&cf_ALERT_OK_BUTTON);
  IVar4 = UIAlertAction::actionWithTitle_style_handler_
                    ((ID)&_OBJC_CLASS___UIAlertAction,"actionWithTitle:style:handler:",uVar3,1,
                     &PTR___NSConcreteGlobalBlock_000e8f18);
  _objc_msgSend(IVar2,"addAction:",IVar4);
  IVar4 = DLHelper::class_DLHelper__topMostController
                    ((ID)&objc::class_t::DLHelper,"topMostController");
  IVar5 = _objc_msgSend(IVar4,"view");
  _objc_msgSend(IVar5,"frame");
  IVar5 = _objc_msgSend(IVar4,"view",0x3fe0000000000000);
  _objc_msgSend(IVar5,"frame");
  IVar5 = _objc_msgSend(IVar4,"view");
  self = _objc_msgSend(IVar2,"popoverPresentationController");
  _objc_msgSend(self,"setSourceView:",IVar5);
  IVar5 = _objc_msgSend(IVar2,"popoverPresentationController");
  _objc_msgSend(IVar5,"setSourceRect:",param_3 * 0.5,param_4 + -50.0,0,0);
  _objc_msgSend(IVar4,"presentViewController:animated:completion:",IVar2,1,0);
  return 0;
}

