/* Address: 0004a638 | Name: FUN_0004a638 | Body bytes: 424 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
FUN_0004a638(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6)

{
  ID IVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  IVar1 = NSUserDefaults::standardUserDefaults
                    ((ID)&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
  IVar1 = NSUserDefaults::boolForKey_(IVar1,"boolForKey:",&cf_DL_DisableTypingIndicatorInDM);
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
  pcVar3 = DAT_000ffde0;
  if (DAT_000ffde0 == (code *)0x0) {
    pcVar3 = (code *)_class_getMethodImplementation
                               (DAT_000ffdc0,
                                "updateOutgoingStatusIsActive:threadKey:threadMetadata:typingStatusType:"
                               );
  }
  (*pcVar3)(param_1,param_2,param_3,param_4,param_5,param_6);
  return 0;
}

