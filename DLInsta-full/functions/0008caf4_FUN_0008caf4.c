/* Address: 0008caf4 | Name: FUN_0008caf4 | Body bytes: 92 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

bool FUN_0008caf4(void)

{
  ID IVar1;
  
  IVar1 = UIApplication::sharedApplication((ID)&_OBJC_CLASS___UIApplication,"sharedApplication");
  IVar1 = UIApplication::applicationState(IVar1,"applicationState");
  return IVar1 - 1 < 2;
}

