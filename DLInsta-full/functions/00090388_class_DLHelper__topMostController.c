/* Address: 00090388 | Name: class_DLHelper__topMostController | Body bytes: 248 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autorelease replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID DLHelper::class_DLHelper__topMostController(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = UIApplication::sharedApplication((ID)&_OBJC_CLASS___UIApplication,"sharedApplication");
  IVar1 = UIApplication::keyWindow(IVar1,"keyWindow");
  IVar1 = UIApplication::rootViewController(IVar1,"rootViewController");
  IVar2 = UIApplication::presentedViewController(IVar1,"presentedViewController");
  if (IVar2 != 0) {
    do {
      IVar1 = _objc_msgSend(IVar1,"presentedViewController");
      IVar2 = _objc_msgSend(IVar1,"presentedViewController");
    } while (IVar2 != 0);
  }
  return IVar1;
}

