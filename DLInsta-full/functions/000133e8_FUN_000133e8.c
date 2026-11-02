/* Address: 000133e8 | Name: FUN_000133e8 | Body bytes: 140 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID FUN_000133e8(undefined8 param_1,undefined8 param_2)

{
  ID IVar1;
  
  _NSStringFromSelector(param_2);
  IVar1 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
  return IVar1;
}

