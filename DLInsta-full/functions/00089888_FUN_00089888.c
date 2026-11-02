/* Address: 00089888 | Name: FUN_00089888 | Body bytes: 148 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

cfstringStruct * FUN_00089888(void)

{
  cfstringStruct *pcVar1;
  ID IVar2;
  
  IVar2 = NSLocale::preferredLanguages((ID)&_OBJC_CLASS___NSLocale,"preferredLanguages");
  IVar2 = NSLocale::firstObject(IVar2,"firstObject");
  IVar2 = NSLocale::containsString_(IVar2,"containsString:",&cf_ar);
  pcVar1 = &cf_DB_;
  if ((int)IVar2 == 0) {
    pcVar1 = &cf_Thereasonforthisissuehasbeensent_theissuewillbefixedassoonaspossible_Thankyou_;
  }
  return pcVar1;
}

