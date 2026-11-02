/* Address: 0000c7f8 | Name: FUN_0000c7f8 | Body bytes: 340 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID FUN_0000c7f8(undefined8 param_1,undefined8 param_2)

{
  ID IVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  IVar1 = NSUserDefaults::standardUserDefaults
                    ((ID)&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
  IVar1 = NSUserDefaults::boolForKey_(IVar1,"boolForKey:",&cf_DL_ShowLikeViewCount);
  if ((IVar1 & 1) != 0) {
    uVar2 = FUN_00097ef8();
    uVar2 = FUN_00097a54(uVar2);
    IVar1 = _objc_msgSend(DAT_001006a8,"length");
    IVar1 = FUN_00097c68(uVar2,IVar1);
    IVar1 = _objc_msgSend(IVar1,"isEqualToString:",DAT_001006a8);
    if ((int)IVar1 != 0) {
      IVar1 = NSNumber::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,"numberWithBool:",1);
      return IVar1;
    }
  }
  pcVar3 = DAT_000ff958;
  if (DAT_000ff958 == (code *)0x0) {
    pcVar3 = (code *)_class_getMethodImplementation(DAT_000ff940,"showViewCountInLikersList");
  }
  IVar1 = (*pcVar3)(param_1,param_2);
  return IVar1;
}

