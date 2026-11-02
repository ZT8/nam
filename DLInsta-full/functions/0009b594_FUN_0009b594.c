/* Address: 0009b594 | Name: FUN_0009b594 | Body bytes: 4 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_0009b594(_Unwind_Exception *param_1)

{
  ID IVar1;
  ID IVar2;
  long lVar3;
  double extraout_d0;
  
  __Unwind_Resume(param_1);
  IVar1 = NSMutableArray::array((ID)&_OBJC_CLASS___NSMutableArray,"array");
  if (0 < (long)(extraout_d0 / 0.1)) {
    lVar3 = 0;
    do {
      IVar2 = NSNumber::numberWithInteger_((ID)&_OBJC_CLASS___NSNumber,"numberWithInteger:",lVar3);
      NSMutableArray::addObject_(IVar1,"addObject:",IVar2);
      lVar3 = lVar3 + 1;
    } while ((long)(extraout_d0 / 0.1) != lVar3);
  }
  IVar1 = NSMutableArray::count(IVar1,"count");
  return IVar1;
}

