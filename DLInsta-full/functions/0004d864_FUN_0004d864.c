/* Address: 0004d864 | Name: FUN_0004d864 | Body bytes: 464 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_0004d864(long param_1,undefined8 param_2)

{
  code *pcVar1;
  ID IVar2;
  undefined8 uVar3;
  long lVar4;
  ID IVar5;
  ID *pIVar6;
  
  pcVar1 = DAT_000ffe80;
  if (DAT_000ffe80 == (code *)0x0) {
    pcVar1 = (code *)_class_getMethodImplementation(DAT_000ffe78,"layoutSubviews");
  }
  (*pcVar1)(param_1,param_2);
  IVar2 = NSUserDefaults::standardUserDefaults
                    ((ID)&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
  IVar2 = NSUserDefaults::boolForKey_(IVar2,"boolForKey:",&cf_DL_UploadVoiceMessage);
  if ((int)IVar2 != 0) {
    uVar3 = FUN_00097ef8();
    uVar3 = FUN_00097a54(uVar3);
    IVar2 = _objc_msgSend(DAT_001006a8,"length");
    IVar2 = FUN_00097c68(uVar3,IVar2);
    IVar2 = _objc_msgSend(IVar2,"isEqualToString:",DAT_001006a8);
    uVar3 = 0;
    if (((int)IVar2 == 0) || (uVar3 = FUN_0008ce2c(param_1,"_galleryButton"), (int)uVar3 == 0)) {
      return uVar3;
    }
    uVar3 = _object_getClass();
    lVar4 = _class_getInstanceVariable(uVar3,"_galleryButton");
    if (lVar4 == 0) {
      pIVar6 = (ID *)0x0;
    }
    else {
      lVar4 = _ivar_getOffset();
      pIVar6 = (ID *)(param_1 + lVar4);
    }
    IVar2 = *pIVar6;
    IVar5 = _objc_alloc(&_OBJC_CLASS___UILongPressGestureRecognizer);
    IVar5 = UILongPressGestureRecognizer::initWithTarget_action_
                      (IVar5,"initWithTarget:action:",param_1,"dl_cameraLongPress:");
    _objc_msgSend(IVar2,"addGestureRecognizer:",IVar5);
  }
  return 0;
}

