/* Address: 0004a9c4 | Name: FUN_0004a9c4 | Body bytes: 724 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

undefined8
FUN_0004a9c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ID IVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  IVar1 = NSUserDefaults::standardUserDefaults
                    ((ID)&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
  IVar1 = NSUserDefaults::boolForKey_(IVar1,"boolForKey:",&cf_DL_DisableReplayedLiveMediaInDM);
  if ((int)IVar1 != 0) {
    uVar2 = FUN_00097ef8();
    uVar2 = FUN_00097a54(uVar2);
    IVar1 = _objc_msgSend(DAT_001006a8,"length");
    IVar1 = FUN_00097c68(uVar2,IVar1);
    IVar1 = _objc_msgSend(IVar1,"isEqualToString:",DAT_001006a8);
    if ((IVar1 & 1) != 0) {
      param_6 = 0;
    }
  }
  IVar1 = NSUserDefaults::standardUserDefaults
                    ((ID)&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
  IVar1 = NSUserDefaults::boolForKey_(IVar1,"boolForKey:",&cf_DL_DisableScreenshotNotificationInDM);
  if ((int)IVar1 != 0) {
    uVar2 = FUN_00097ef8();
    uVar2 = FUN_00097a54(uVar2);
    IVar1 = _objc_msgSend(DAT_001006a8,"length");
    IVar1 = FUN_00097c68(uVar2,IVar1);
    IVar1 = _objc_msgSend(IVar1,"isEqualToString:",DAT_001006a8);
    if ((IVar1 & 1) != 0) {
      param_7 = 0;
    }
  }
  pcVar3 = DAT_000ffe00;
  if (DAT_000ffe00 == (code *)0x0) {
    pcVar3 = (code *)_class_getMethodImplementation
                               (DAT_000ffdf8,
                                "match:threadItemSeen:visualItemSeen:visualItemReplayed:visualItemScreenshotted:threadItemWatched:"
                               );
  }
  uVar2 = (*pcVar3)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar2;
}

