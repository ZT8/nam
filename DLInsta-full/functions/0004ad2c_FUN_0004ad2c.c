/* Address: 0004ad2c | Name: FUN_0004ad2c | Body bytes: 864 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

undefined8
FUN_0004ad2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,long param_6,ulong param_7,undefined8 param_8,undefined8 param_9)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  ID IVar4;
  code *pcVar5;
  long *plVar6;
  
  iVar1 = FUN_0008ce2c(param_6,"_subtype");
  if (iVar1 != 0) {
    uVar2 = _object_getClass();
    lVar3 = _class_getInstanceVariable(uVar2,"_subtype");
    if (lVar3 == 0) {
      plVar6 = (long *)0x0;
    }
    else {
      lVar3 = _ivar_getOffset();
      plVar6 = (long *)(param_6 + lVar3);
    }
    lVar3 = *plVar6;
    IVar4 = NSUserDefaults::standardUserDefaults
                      ((ID)&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
    IVar4 = NSUserDefaults::boolForKey_(IVar4,"boolForKey:",&cf_DL_DisableReplayedLiveMediaInDM);
    if ((IVar4 & 1) != 0) {
      uVar2 = FUN_00097ef8();
      uVar2 = FUN_00097a54(uVar2);
      IVar4 = _objc_msgSend(DAT_001006a8,"length");
      IVar4 = FUN_00097c68(uVar2,IVar4);
      IVar4 = _objc_msgSend(IVar4,"isEqualToString:",DAT_001006a8);
      if (((uint)IVar4 & (uint)(lVar3 == 2)) != 0) {
        return 0;
      }
    }
    IVar4 = NSUserDefaults::standardUserDefaults
                      ((ID)&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
    IVar4 = NSUserDefaults::boolForKey_
                      (IVar4,"boolForKey:",&cf_DL_DisableScreenshotNotificationInDM);
    if ((IVar4 & 1) == 0) {
      param_7 = param_7 & 0xffffffff;
    }
    else {
      uVar2 = FUN_00097ef8();
      uVar2 = FUN_00097a54(uVar2);
      IVar4 = _objc_msgSend(DAT_001006a8,"length");
      IVar4 = FUN_00097c68(uVar2,IVar4);
      IVar4 = _objc_msgSend(IVar4,"isEqualToString:",DAT_001006a8);
      param_7 = param_7 & 0xffffffff;
      if (((int)IVar4 != 0) && (lVar3 == 3)) {
        return 0;
      }
    }
  }
  pcVar5 = DAT_000ffe10;
  if (DAT_000ffe10 == (code *)0x0) {
    pcVar5 = (code *)_class_getMethodImplementation
                               (DAT_000ffe08,
                                "initWithClientId:threadId:messageId:type:isE2ELoggingSampled:originalMessageClientContext:productType:"
                               );
  }
  uVar2 = (*pcVar5)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  return uVar2;
}

