/* Address: 0009b598 | Name: FUN_0009b598 | Body bytes: 224 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_0009b598(double param_1)

{
  ID IVar1;
  ID IVar2;
  long lVar3;
  
  IVar1 = NSMutableArray::array((ID)&_OBJC_CLASS___NSMutableArray,"array");
  if (0 < (long)(param_1 / 0.1)) {
    lVar3 = 0;
    do {
      IVar2 = NSNumber::numberWithInteger_((ID)&_OBJC_CLASS___NSNumber,"numberWithInteger:",lVar3);
      NSMutableArray::addObject_(IVar1,"addObject:",IVar2);
      lVar3 = lVar3 + 1;
    } while ((long)(param_1 / 0.1) != lVar3);
  }
  IVar1 = NSMutableArray::count(IVar1,"count");
  return IVar1;
}

