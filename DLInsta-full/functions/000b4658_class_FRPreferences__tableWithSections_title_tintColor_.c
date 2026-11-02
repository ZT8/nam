/* Address: 000b4658 | Name: class_FRPreferences__tableWithSections_title_tintColor_ | Body bytes: 176 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x28 bytes */

ID FRPreferences::class_FRPreferences__tableWithSections_title_tintColor_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  ID IVar1;
  
  IVar1 = _objc_alloc(param_1);
  IVar1 = instance_FRPreferences__initTableWithSections_(IVar1,"initTableWithSections:",param_3);
  _objc_msgSend(IVar1,"setTitle:",param_4);
  instance_FRPreferences__setTintUIColor_(IVar1,"setTintUIColor:",param_5);
  return IVar1;
}

