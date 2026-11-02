/* Address: 0007c41c | Name: FUN_0007c41c | Body bytes: 196 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_0007c41c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  ID self;
  
  pcVar1 = DAT_00100060;
  if (DAT_00100060 == (code *)0x0) {
    pcVar1 = (code *)_class_getMethodImplementation(DAT_00100048,"applicationWillResignActive:");
  }
  (*pcVar1)(param_1,param_2,param_3);
  self = NSUserDefaults::standardUserDefaults
                   ((ID)&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
  NSUserDefaults::boolForKey_(self,"boolForKey:",&cf_DL_EnableAppLock);
  return 0;
}

