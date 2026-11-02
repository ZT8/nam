/* Address: 0008e538 | Name: FUN_0008e538 | Body bytes: 1476 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_0008e538(long param_1,undefined8 param_2,undefined8 param_3)

{
  cfstringStruct *pcVar1;
  long lVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  ID *pIVar6;
  ID local_78;
  ID local_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_000e8260;
  lVar2 = _NSClassFromString(&cf_IGAlertAction);
  if (((lVar2 == 0) || (lVar2 = _NSClassFromString(&cf_IGAlertDialogStyle), lVar2 == 0)) ||
     (lVar2 = _NSClassFromString(&cf_DLIGAlertDialogView), lVar2 == 0)) {
    lVar2 = _NSClassFromString(&cf_IGDSAlertAction);
    if (((lVar2 == 0) || (lVar2 = _NSClassFromString(&cf_IGDSAlertDialogStyle), lVar2 == 0)) ||
       (lVar2 = _NSClassFromString(&cf_IGDSAlertDialogView), lVar2 == 0)) {
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2,param_3);
      goto LAB_0008eab0;
    }
    _NSClassFromString(&cf_IGDSAlertAction);
    IVar3 = _objc_alloc();
    IVar4 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle,"mainBundle");
    IVar4 = NSBundle::pathForResource_ofType_
                      (IVar4,"pathForResource:ofType:",&cf_DLInsta,&cf_bundle);
    if (IVar4 != 0) {
      NSBundle::stringByAppendingPathComponent_
                (IVar4,"stringByAppendingPathComponent:",&cf_Langauge_bundle);
    }
    IVar4 = NSLocale::preferredLanguages((ID)&_OBJC_CLASS___NSLocale,"preferredLanguages");
    IVar4 = NSLocale::firstObject(IVar4,"firstObject");
    IVar4 = NSLocale::containsString_(IVar4,"containsString:",&cf_ar);
    pcVar1 = &cf____ar_lproj;
    if ((int)IVar4 == 0) {
      pcVar1 = &cf____en_lproj;
    }
    IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",pcVar1);
    IVar4 = NSBundle::bundleWithPath_((ID)&_OBJC_CLASS___NSBundle,"bundleWithPath:",IVar4);
    IVar4 = NSBundle::localizedStringForKey_value_table_
                      (IVar4,"localizedStringForKey:value:table:",&cf_ALERT_OK_BUTTON,&cf___,0);
    IVar5 = _objc_msgSend(IVar3,"initWithTitle:image:style:handler:",IVar4,0,0,
                          &PTR___NSConcreteGlobalBlock_000e8fb8);
    _NSClassFromString(&cf_IGDSAlertDialogStyle);
    IVar3 = _objc_alloc();
    IVar3 = _objc_msgSend(IVar3,"init");
    _NSClassFromString(&cf_IGDSAlertDialogView);
    IVar4 = _objc_alloc();
    pIVar6 = &local_78;
    local_78 = IVar5;
  }
  else {
    _NSClassFromString(&cf_IGAlertAction);
    IVar3 = _objc_alloc();
    IVar4 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle,"mainBundle");
    IVar4 = NSBundle::pathForResource_ofType_
                      (IVar4,"pathForResource:ofType:",&cf_DLInsta,&cf_bundle);
    if (IVar4 != 0) {
      NSBundle::stringByAppendingPathComponent_
                (IVar4,"stringByAppendingPathComponent:",&cf_Langauge_bundle);
    }
    IVar4 = NSLocale::preferredLanguages((ID)&_OBJC_CLASS___NSLocale,"preferredLanguages");
    IVar4 = NSLocale::firstObject(IVar4,"firstObject");
    IVar4 = NSLocale::containsString_(IVar4,"containsString:",&cf_ar);
    pcVar1 = &cf____ar_lproj;
    if ((int)IVar4 == 0) {
      pcVar1 = &cf____en_lproj;
    }
    IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",pcVar1);
    IVar4 = NSBundle::bundleWithPath_((ID)&_OBJC_CLASS___NSBundle,"bundleWithPath:",IVar4);
    IVar4 = NSBundle::localizedStringForKey_value_table_
                      (IVar4,"localizedStringForKey:value:table:",&cf_ALERT_OK_BUTTON,&cf___,0);
    IVar5 = _objc_msgSend(IVar3,"initWithTitle:image:style:handler:",IVar4,0,0,
                          &PTR___NSConcreteGlobalBlock_000e8f98);
    _NSClassFromString(&cf_IGAlertDialogStyle);
    IVar3 = _objc_alloc();
    IVar3 = _objc_msgSend(IVar3,"init");
    _NSClassFromString(&cf_DLIGAlertDialogView);
    IVar4 = _objc_alloc();
    pIVar6 = &local_70;
    local_70 = IVar5;
  }
  IVar5 = NSArray::arrayWithObjects_count_
                    ((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:count:",pIVar6,1);
  IVar3 = _objc_msgSend(IVar4,
                        "initWithStyle:titleText:descriptionText:actions:showHorizontalButtons:",
                        IVar3,param_2,param_3,IVar5,0);
  _objc_msgSend(IVar3,"show");
LAB_0008eab0:
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}

