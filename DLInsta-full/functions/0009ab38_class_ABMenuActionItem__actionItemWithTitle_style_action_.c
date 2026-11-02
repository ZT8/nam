/* Address: 0009ab38 | Name: class_ABMenuActionItem__actionItemWithTitle_style_action_ | Body bytes: 344 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x28 bytes */

ID ABMenuActionItem::class_ABMenuActionItem__actionItemWithTitle_style_action_
             (ID param_1,SEL param_2,ID param_3,long_long param_4,ID param_5)

{
  ID IVar1;
  ID IVar2;
  
  _NSClassFromString(&cf_IGActionSheetControllerAction);
  IVar1 = _objc_alloc();
  IVar1 = _objc_msgSend(IVar1,"init");
  IVar2 = _objc_msgSend(IVar1,"respondsToSelector:",
                        "initWithTitle:subtitle:style:handler:accessibilityIdentifier:accessibilityLabel:"
                       );
  if ((int)IVar2 == 0) {
    IVar1 = _objc_msgSend(IVar1,"respondsToSelector:",
                          "initWithTitle:style:handler:accessibilityIdentifier:accessibilityLabel:")
    ;
    if ((int)IVar1 == 0) {
      IVar1 = UIAlertAction::actionWithTitle_style_handler_
                        ((ID)&_OBJC_CLASS___UIAlertAction,"actionWithTitle:style:handler:",param_3,
                         param_4,param_5);
    }
    else {
      _NSClassFromString(&cf_IGActionSheetControllerAction);
      IVar1 = _objc_alloc();
      IVar1 = _objc_msgSend(IVar1,
                            "initWithTitle:style:handler:accessibilityIdentifier:accessibilityLabel:"
                            ,param_3,param_4,param_5,&cf___,&cf___);
    }
  }
  else {
    _NSClassFromString(&cf_IGActionSheetControllerAction);
    IVar1 = _objc_alloc();
    IVar1 = _objc_msgSend(IVar1,
                          "initWithTitle:subtitle:style:handler:accessibilityIdentifier:accessibilityLabel:"
                          ,param_3,0,param_4,param_5,&cf___,&cf___);
  }
  return IVar1;
}

