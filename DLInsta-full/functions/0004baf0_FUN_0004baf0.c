/* Address: 0004baf0 | Name: FUN_0004baf0 | Body bytes: 864 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_0004baf0(undefined8 param_1,ID param_2,undefined8 param_3)

{
  int iVar1;
  ID IVar2;
  undefined8 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  long lVar4;
  long lVar5;
  ID *pIVar6;
  long *plVar7;
  undefined8 extraout_d0;
  undefined8 extraout_d0_00;
  
  IVar2 = NSUserDefaults::standardUserDefaults
                    ((ID)&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
  IVar2 = NSUserDefaults::boolForKey_(IVar2,"boolForKey:",&cf_DL_BypassVoiceMessageLimit);
  if ((IVar2 & 1) != 0) {
    uVar3 = FUN_00097ef8();
    uVar3 = FUN_00097a54(uVar3);
    IVar2 = _objc_msgSend(DAT_001006a8,"length");
    IVar2 = FUN_00097c68(uVar3,IVar2);
    IVar2 = _objc_msgSend(IVar2,"isEqualToString:",DAT_001006a8);
    if (((int)IVar2 != 0) &&
       (IVar2 = _objc_msgSend(param_2,"respondsToSelector:","delegate"), (int)IVar2 != 0)) {
      IVar2 = _objc_msgSend(param_2,"performSelector:","delegate");
      UNRECOVERED_JUMPTABLE = DAT_000ffe50;
      if (DAT_000ffe50 == (code *)0x0) {
        UNRECOVERED_JUMPTABLE = (code *)_class_getMethodImplementation(DAT_000ffe48,"setDuration:");
      }
      iVar1 = FUN_0008ce2c(IVar2,"_audioRecorder");
      if (iVar1 == 0) {
        iVar1 = FUN_0008ce2c(IVar2,"audioRecorder");
        uVar3 = 0;
        if (iVar1 != 0) {
          uVar3 = _object_getClass();
          lVar4 = _class_getInstanceVariable(uVar3,"audioRecorder");
          if (lVar4 == 0) {
            plVar7 = (long *)0x0;
          }
          else {
            lVar4 = _ivar_getOffset();
            plVar7 = (long *)(IVar2 + lVar4);
          }
          lVar4 = *plVar7;
          iVar1 = FUN_0008ce2c(lVar4,"_audioRecorder");
          uVar3 = 0;
          if (iVar1 != 0) {
            uVar3 = _object_getClass();
            lVar5 = _class_getInstanceVariable(uVar3,"_audioRecorder");
            if (lVar5 == 0) {
              pIVar6 = (ID *)0x0;
            }
            else {
              lVar5 = _ivar_getOffset();
              pIVar6 = (ID *)(lVar4 + lVar5);
            }
            _objc_msgSend(*pIVar6,"currentTime");
            uVar3 = extraout_d0_00;
          }
        }
      }
      else {
        uVar3 = _object_getClass();
        lVar4 = _class_getInstanceVariable(uVar3,"_audioRecorder");
        if (lVar4 == 0) {
          plVar7 = (long *)0x0;
        }
        else {
          lVar4 = _ivar_getOffset();
          plVar7 = (long *)(IVar2 + lVar4);
        }
        lVar4 = *plVar7;
        iVar1 = FUN_0008ce2c(lVar4,"_audioRecorder");
        uVar3 = 0;
        if (iVar1 != 0) {
          uVar3 = _object_getClass();
          lVar5 = _class_getInstanceVariable(uVar3,"_audioRecorder");
          if (lVar5 == 0) {
            pIVar6 = (ID *)0x0;
          }
          else {
            lVar5 = _ivar_getOffset();
            pIVar6 = (ID *)(lVar4 + lVar5);
          }
          _objc_msgSend(*pIVar6,"currentTime");
          uVar3 = extraout_d0;
        }
      }
      (*UNRECOVERED_JUMPTABLE)(uVar3,param_2,param_3);
      return 0;
    }
  }
  UNRECOVERED_JUMPTABLE = DAT_000ffe50;
  if (DAT_000ffe50 == (code *)0x0) {
    UNRECOVERED_JUMPTABLE = (code *)_class_getMethodImplementation(DAT_000ffe48,"setDuration:");
  }
                    /* WARNING: Could not recover jumptable at 0x0004bcdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3);
  return uVar3;
}

