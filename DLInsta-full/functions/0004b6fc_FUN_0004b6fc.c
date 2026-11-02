/* Address: 0004b6fc | Name: FUN_0004b6fc | Body bytes: 612 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */

undefined8 FUN_0004b6fc(undefined8 param_1,undefined8 param_2,ID param_3,undefined8 param_4)

{
  int iVar1;
  ID IVar2;
  undefined8 uVar3;
  ID IVar4;
  long lVar5;
  code *pcVar6;
  ID *pIVar7;
  
  IVar2 = NSUserDefaults::standardUserDefaults
                    ((ID)&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
  IVar2 = NSUserDefaults::boolForKey_(IVar2,"boolForKey:",&cf_DL_BypassVoiceMessageLimit);
  if ((IVar2 & 1) != 0) {
    uVar3 = FUN_00097ef8();
    uVar3 = FUN_00097a54(uVar3);
    IVar2 = _objc_msgSend(DAT_001006a8,"length");
    IVar2 = FUN_00097c68(uVar3,IVar2);
    IVar2 = _objc_msgSend(IVar2,"isEqualToString:",DAT_001006a8);
    if ((((int)IVar2 != 0) &&
        (IVar2 = _objc_msgSend(param_3,"respondsToSelector:","isRecording"), (int)IVar2 != 0)) &&
       (IVar2 = _objc_msgSend(param_3,"performSelector:","isRecording"), IVar2 != 0)) {
      IVar2 = NSDate::date((ID)&_OBJC_CLASS___NSDate,"date");
      IVar2 = NSDate::dateByAddingTimeInterval_
                        (IVar2,"dateByAddingTimeInterval:",0x406e000000000000);
      if (DAT_000ffef0 == 0) {
        DAT_000ffef0 = _objc_getClass("IGDirectVoiceRecordViewController");
      }
      uVar3 = _objc_retainAutorelease();
      IVar4 = _objc_msgSend(param_3,"isMemberOfClass:",uVar3);
      if (((int)IVar4 != 0) && (iVar1 = FUN_0008ce2c(param_3,"_startTime"), iVar1 != 0)) {
        uVar3 = _object_getClass();
        lVar5 = _class_getInstanceVariable(uVar3,"_startTime");
        if (lVar5 == 0) {
          pIVar7 = (ID *)0x0;
        }
        else {
          lVar5 = _ivar_getOffset();
          pIVar7 = (ID *)(param_3 + lVar5);
        }
        *pIVar7 = IVar2;
      }
    }
  }
  pcVar6 = DAT_000ffe40;
  if (DAT_000ffe40 == (code *)0x0) {
    pcVar6 = (code *)_class_getMethodImplementation
                               (DAT_000ffe38,"voiceRecordViewController:didUpdateState:");
  }
  (*pcVar6)(param_1,param_2,param_3,param_4);
  return 0;
}

