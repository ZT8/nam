/* Address: 0004b380 | Name: FUN_0004b380 | Body bytes: 492 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */

undefined8 FUN_0004b380(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  code *pcVar2;
  ID IVar3;
  undefined8 uVar4;
  long lVar5;
  ID *pIVar6;
  
  pcVar2 = DAT_000ffe30;
  if (DAT_000ffe30 == (code *)0x0) {
    pcVar2 = (code *)_class_getMethodImplementation
                               (DAT_000ffe28,"startRecordingWithButtonTapFromEntryPoint:");
  }
  (*pcVar2)(param_1,param_2,param_3);
  IVar3 = NSUserDefaults::standardUserDefaults
                    ((ID)&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
  IVar3 = NSUserDefaults::boolForKey_(IVar3,"boolForKey:",&cf_DL_BypassVoiceMessageLimit);
  if ((IVar3 & 1) != 0) {
    uVar4 = FUN_00097ef8();
    uVar4 = FUN_00097a54(uVar4);
    IVar3 = _objc_msgSend(DAT_001006a8,"length");
    IVar3 = FUN_00097c68(uVar4,IVar3);
    IVar3 = _objc_msgSend(IVar3,"isEqualToString:",DAT_001006a8);
    if ((int)IVar3 == 0) {
      return 0;
    }
    IVar3 = NSDate::date((ID)&_OBJC_CLASS___NSDate,"date");
    IVar3 = NSDate::dateByAddingTimeInterval_(IVar3,"dateByAddingTimeInterval:",0x406e000000000000);
    iVar1 = FUN_0008ce2c(param_1,"_startTime");
    if (iVar1 != 0) {
      uVar4 = _object_getClass();
      lVar5 = _class_getInstanceVariable(uVar4,"_startTime");
      if (lVar5 == 0) {
        pIVar6 = (ID *)0x0;
      }
      else {
        lVar5 = _ivar_getOffset();
        pIVar6 = (ID *)(param_1 + lVar5);
      }
      *pIVar6 = IVar3;
    }
  }
  return 0;
}

