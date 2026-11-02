/* Address: 0009064c | Name: class_DLHelper__isDeviceLanguageArabic | Body bytes: 132 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

bool DLHelper::class_DLHelper__isDeviceLanguageArabic(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = NSLocale::preferredLanguages((ID)&_OBJC_CLASS___NSLocale,"preferredLanguages");
  IVar1 = NSLocale::firstObject(IVar1,"firstObject");
  IVar1 = NSLocale::containsString_(IVar1,"containsString:",&cf_ar);
  return (bool)IVar1;
}

