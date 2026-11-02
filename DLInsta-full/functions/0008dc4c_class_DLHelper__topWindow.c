/* Address: 0008dc4c | Name: class_DLHelper__topWindow | Body bytes: 132 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID DLHelper::class_DLHelper__topWindow(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = UIApplication::sharedApplication((ID)&_OBJC_CLASS___UIApplication,"sharedApplication");
  IVar1 = UIApplication::windows(IVar1,"windows");
  IVar1 = UIApplication::firstObject(IVar1,"firstObject");
  return IVar1;
}

