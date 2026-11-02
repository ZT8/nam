/* Address: 0008c218 | Name: FUN_0008c218 | Body bytes: 472 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID FUN_0008c218(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  ID IVar2;
  
  IVar2 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle,"mainBundle");
  IVar2 = NSBundle::pathForResource_ofType_(IVar2,"pathForResource:ofType:",&cf_DLInsta,&cf_bundle);
  if (IVar2 != 0) {
    NSBundle::stringByAppendingPathComponent_
              (IVar2,"stringByAppendingPathComponent:",&cf_Langauge_bundle);
  }
  IVar2 = NSLocale::preferredLanguages((ID)&_OBJC_CLASS___NSLocale,"preferredLanguages");
  IVar2 = NSLocale::firstObject(IVar2,"firstObject");
  IVar2 = NSLocale::containsString_(IVar2,"containsString:",&cf_ar);
  pcVar1 = &cf____ar_lproj;
  if ((int)IVar2 == 0) {
    pcVar1 = &cf____en_lproj;
  }
  IVar2 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",pcVar1);
  IVar2 = NSBundle::bundleWithPath_((ID)&_OBJC_CLASS___NSBundle,"bundleWithPath:",IVar2);
  IVar2 = NSBundle::localizedStringForKey_value_table_
                    (IVar2,"localizedStringForKey:value:table:",param_1,&cf___,0);
  return IVar2;
}

