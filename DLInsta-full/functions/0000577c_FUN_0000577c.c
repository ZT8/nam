/* Address: 0000577c | Name: FUN_0000577c | Body bytes: 324 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_0000577c(undefined8 param_1,undefined8 param_2)

{
  ID IVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  IVar1 = NSUserDefaults::standardUserDefaults
                    ((ID)&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
  IVar1 = NSUserDefaults::boolForKey_(IVar1,"boolForKey:",&cf_DL_EnableDisableLoopVideo);
  if ((IVar1 & 1) != 0) {
    uVar2 = FUN_00097ef8();
    uVar2 = FUN_00097a54(uVar2);
    IVar1 = _objc_msgSend(DAT_001006a8,"length");
    IVar1 = FUN_00097c68(uVar2,IVar1);
    IVar1 = _objc_msgSend(IVar1,"isEqualToString:",DAT_001006a8);
    if ((IVar1 & 1) != 0) {
      return 0;
    }
  }
  UNRECOVERED_JUMPTABLE = DAT_000ff820;
  if (DAT_000ff820 == (code *)0x0) {
    UNRECOVERED_JUMPTABLE = (code *)_class_getMethodImplementation(DAT_000ff818,"looping");
  }
                    /* WARNING: Could not recover jumptable at 0x000058bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
  return uVar2;
}

