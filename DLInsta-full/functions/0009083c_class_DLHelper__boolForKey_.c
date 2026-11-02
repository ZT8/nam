/* Address: 0009083c | Name: class_DLHelper__boolForKey_ | Body bytes: 124 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

bool DLHelper::class_DLHelper__boolForKey_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  IVar1 = NSUserDefaults::standardUserDefaults
                    ((ID)&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
  IVar1 = NSUserDefaults::boolForKey_(IVar1,"boolForKey:",param_3);
  return (bool)IVar1;
}

