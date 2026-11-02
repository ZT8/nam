/* Address: 000b5230 | Name: instance_FRPreferences__numberOfSectionsInTableView_ | Body bytes: 76 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

long_long FRPreferences::instance_FRPreferences__numberOfSectionsInTableView_
                    (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  IVar1 = instance_FRPreferences__sections(param_1,"sections");
  IVar1 = _objc_msgSend(IVar1,"count");
  return IVar1;
}

