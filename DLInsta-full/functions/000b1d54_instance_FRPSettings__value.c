/* Address: 000b1d54 | Name: instance_FRPSettings__value | Body bytes: 148 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID FRPSettings::instance_FRPSettings__value(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = NSUserDefaults::standardUserDefaults
                    ((ID)&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
  IVar2 = instance_FRPSettings__key(param_1,"key");
  IVar1 = NSUserDefaults::objectForKey_(IVar1,"objectForKey:",IVar2);
  return IVar1;
}

