/* Address: 0004396c | Name: FUN_0004396c | Body bytes: 336 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_0004396c(ID param_1,undefined8 param_2)

{
  ID IVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  IVar1 = NSUserDefaults::standardUserDefaults
                    ((ID)&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
  IVar1 = NSUserDefaults::boolForKey_(IVar1,"boolForKey:",&cf_DL_SeeDMWithoutOtherPartyKnowing);
  if ((IVar1 & 1) != 0) {
    uVar2 = FUN_00097ef8();
    uVar2 = FUN_00097a54(uVar2);
    IVar1 = _objc_msgSend(DAT_001006a8,"length");
    IVar1 = FUN_00097c68(uVar2,IVar1);
    IVar1 = _objc_msgSend(IVar1,"isEqualToString:",DAT_001006a8);
    if ((int)IVar1 != 0) {
      _objc_msgSend(param_1,"userHaveSeenMessage");
      return;
    }
  }
  UNRECOVERED_JUMPTABLE = DAT_000ffce0;
  if (DAT_000ffce0 == (code *)0x0) {
    UNRECOVERED_JUMPTABLE =
         (code *)_class_getMethodImplementation(DAT_000ffca8,"shouldUpdateLastSeenMessage");
  }
                    /* WARNING: Could not recover jumptable at 0x00043ab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
  return;
}

