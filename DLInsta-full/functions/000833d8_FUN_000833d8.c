/* Address: 000833d8 | Name: FUN_000833d8 | Body bytes: 304 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID FUN_000833d8(ID param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  ID IVar2;
  ID IVar3;
  
  pcVar1 = DAT_001000e0;
  if (DAT_001000e0 == (code *)0x0) {
    pcVar1 = (code *)_class_getMethodImplementation(DAT_001000d0,"objectsForListAdapter:");
  }
  IVar2 = (*pcVar1)(param_1,param_2,param_3);
  IVar2 = _objc_msgSend(IVar2,"mutableCopy");
  IVar3 = _objc_msgSend(param_1,"analyticsModule");
  IVar3 = _objc_msgSend(IVar3,"isEqualToString:",&cf_side_tray_profile);
  if ((int)IVar3 != 0) {
    IVar3 = _objc_msgSend(IVar2,"firstObject");
    _objc_msgSend(IVar2,"insertObject:atIndex:",IVar3,0);
  }
  IVar2 = _objc_msgSend(IVar2,"copy");
  return IVar2;
}

