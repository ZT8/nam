/* Address: 000906d0 | Name: class_DLHelper__setBool_forKey_ | Body bytes: 172 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x1c bytes */

void DLHelper::class_DLHelper__setBool_forKey_(ID param_1,SEL param_2,bool param_3,ID param_4)

{
  ID IVar1;
  
  IVar1 = NSUserDefaults::standardUserDefaults
                    ((ID)&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
  NSUserDefaults::setBool_forKey_(IVar1,"setBool:forKey:",(ulong)param_3,param_4);
  IVar1 = NSUserDefaults::standardUserDefaults
                    ((ID)&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
  NSUserDefaults::synchronize(IVar1,"synchronize");
  return;
}

