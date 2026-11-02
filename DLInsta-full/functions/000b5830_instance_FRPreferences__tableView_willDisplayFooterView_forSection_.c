/* Address: 000b5830 | Name: instance_FRPreferences__tableView_willDisplayFooterView_forSection_ | Body bytes: 212 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x28 bytes */

void FRPreferences::instance_FRPreferences__tableView_willDisplayFooterView_forSection_
               (ID param_1,SEL param_2,ID param_3,ID param_4,long_long param_5)

{
  ID IVar1;
  
  IVar1 = UITableViewHeaderFooterView::class((ID)&_OBJC_CLASS___UITableViewHeaderFooterView,"class")
  ;
  IVar1 = _objc_msgSend(param_4,"isKindOfClass:",IVar1);
  if ((int)IVar1 != 0) {
    IVar1 = instance_FRPreferences__sections(param_1,"sections");
    IVar1 = _objc_msgSend(IVar1,"count");
    if (IVar1 - 1 == param_5) {
      IVar1 = _objc_msgSend(param_4,"textLabel");
      _objc_msgSend(IVar1,"setTextAlignment:",1);
    }
  }
  return;
}

