/* Address: 00083198 | Name: FUN_00083198 | Body bytes: 216 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long FUN_00083198(ID param_1,undefined8 param_2)

{
  ID IVar1;
  code *pcVar2;
  long lVar3;
  
  IVar1 = _objc_msgSend(param_1,"analyticsModule");
  IVar1 = _objc_msgSend(IVar1,"isEqualToString:",&cf_side_tray_profile);
  if ((int)IVar1 == 0) {
    pcVar2 = DAT_001000d8;
    if (DAT_001000d8 == (code *)0x0) {
      pcVar2 = (code *)_class_getMethodImplementation(DAT_001000d0,"objectCount");
    }
    lVar3 = (*pcVar2)(param_1,param_2);
  }
  else {
    pcVar2 = DAT_001000d8;
    if (DAT_001000d8 == (code *)0x0) {
      pcVar2 = (code *)_class_getMethodImplementation(DAT_001000d0,"objectCount");
    }
    lVar3 = (*pcVar2)(param_1,param_2);
    lVar3 = lVar3 + 1;
  }
  return lVar3;
}

