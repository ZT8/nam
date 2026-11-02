/* Address: 000b5138 | Name: instance_FRPreferences__cellForIndexPath_ | Body bytes: 248 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID FRPreferences::instance_FRPreferences__cellForIndexPath_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = instance_FRPreferences__sections(param_1,"sections");
  IVar2 = _objc_msgSend(param_3,"section");
  IVar1 = _objc_msgSend(IVar1,"objectAtIndexedSubscript:",IVar2);
  IVar1 = _objc_msgSend(IVar1,"cells");
  IVar2 = _objc_msgSend(param_3,"row");
  IVar1 = _objc_msgSend(IVar1,"objectAtIndexedSubscript:",IVar2);
  return IVar1;
}

