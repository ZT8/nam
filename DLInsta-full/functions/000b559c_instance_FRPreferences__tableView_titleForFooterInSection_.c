/* Address: 000b559c | Name: instance_FRPreferences__tableView_titleForFooterInSection_ | Body bytes: 132 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID FRPreferences::instance_FRPreferences__tableView_titleForFooterInSection_
             (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  ID IVar1;
  
  IVar1 = instance_FRPreferences__sections(param_1,"sections");
  IVar1 = _objc_msgSend(IVar1,"objectAtIndexedSubscript:",param_4);
  IVar1 = _objc_msgSend(IVar1,"footerTitle");
  return IVar1;
}

