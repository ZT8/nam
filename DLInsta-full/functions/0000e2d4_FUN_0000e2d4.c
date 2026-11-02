/* Address: 0000e2d4 | Name: FUN_0000e2d4 | Body bytes: 432 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

undefined8 FUN_0000e2d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ID IVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  IVar1 = NSUserDefaults::standardUserDefaults
                    ((ID)&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
  IVar1 = NSUserDefaults::boolForKey_(IVar1,"boolForKey:",&cf_DL_EnableRemoveAds);
  if ((IVar1 & 1) != 0) {
    uVar2 = FUN_00097ef8();
    uVar2 = FUN_00097a54(uVar2);
    IVar1 = _objc_msgSend(DAT_001006a8,"length");
    IVar1 = FUN_00097c68(uVar2,IVar1);
    IVar1 = _objc_msgSend(IVar1,"isEqualToString:",DAT_001006a8);
    if ((int)IVar1 != 0) {
      pcVar3 = DAT_000ff9f0;
      if (DAT_000ff9f0 == (code *)0x0) {
        pcVar3 = (code *)_class_getMethodImplementation(DAT_000ff9e8,"objectsForListAdapter:");
      }
      uVar2 = (*pcVar3)(param_1,param_2,param_3);
      uVar2 = FUN_000117e4(uVar2);
      return uVar2;
    }
  }
  pcVar3 = DAT_000ff9f0;
  if (DAT_000ff9f0 == (code *)0x0) {
    pcVar3 = (code *)_class_getMethodImplementation(DAT_000ff9e8,"objectsForListAdapter:");
  }
  uVar2 = (*pcVar3)(param_1,param_2,param_3);
  return uVar2;
}

