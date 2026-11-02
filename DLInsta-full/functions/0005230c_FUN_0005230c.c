/* Address: 0005230c | Name: FUN_0005230c | Body bytes: 168 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID FUN_0005230c(ID param_1)

{
  ID IVar1;
  
  IVar1 = _objc_msgSend(param_1,"respondsToSelector:","currentViewModel");
  if ((int)IVar1 == 0) {
    IVar1 = 0;
  }
  else {
    IVar1 = _objc_msgSend(param_1,"currentViewModel");
    IVar1 = _objc_msgSend(IVar1,"items");
    IVar1 = _objc_msgSend(IVar1,"mutableCopy");
  }
  return IVar1;
}

