/* Address: 0003f524 | Name: FUN_0003f524 | Body bytes: 440 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_0003f524(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ID *pIVar5;
  long *plVar6;
  
  iVar1 = FUN_0008ce2c(param_1,"_audioRecorder");
  if (iVar1 == 0) {
    iVar1 = FUN_0008ce2c(param_1,"audioRecorder");
    if (iVar1 != 0) {
      uVar2 = _object_getClass();
      lVar3 = _class_getInstanceVariable(uVar2,"audioRecorder");
      if (lVar3 == 0) {
        plVar6 = (long *)0x0;
      }
      else {
        lVar3 = _ivar_getOffset();
        plVar6 = (long *)(param_1 + lVar3);
      }
      lVar3 = *plVar6;
      iVar1 = FUN_0008ce2c(lVar3,"_audioRecorder");
      if (iVar1 != 0) {
        uVar2 = _object_getClass();
        lVar4 = _class_getInstanceVariable(uVar2,"_audioRecorder");
        if (lVar4 == 0) {
          pIVar5 = (ID *)0x0;
        }
        else {
          lVar4 = _ivar_getOffset();
          pIVar5 = (ID *)(lVar3 + lVar4);
        }
        _objc_msgSend(*pIVar5,"currentTime");
      }
    }
  }
  else {
    uVar2 = _object_getClass();
    lVar3 = _class_getInstanceVariable(uVar2,"_audioRecorder");
    if (lVar3 == 0) {
      plVar6 = (long *)0x0;
    }
    else {
      lVar3 = _ivar_getOffset();
      plVar6 = (long *)(param_1 + lVar3);
    }
    lVar3 = *plVar6;
    iVar1 = FUN_0008ce2c(lVar3,"_audioRecorder");
    if (iVar1 != 0) {
      uVar2 = _object_getClass();
      lVar4 = _class_getInstanceVariable(uVar2,"_audioRecorder");
      if (lVar4 == 0) {
        pIVar5 = (ID *)0x0;
      }
      else {
        lVar4 = _ivar_getOffset();
        pIVar5 = (ID *)(lVar3 + lVar4);
      }
      _objc_msgSend(*pIVar5,"currentTime");
    }
  }
  return 0;
}

