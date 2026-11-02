/* Address: 00010360 | Name: FUN_00010360 | Body bytes: 556 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID FUN_00010360(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ID IVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *local_78;
  undefined8 local_70;
  code *local_68;
  undefined *puStack_60;
  ID local_58;
  
  IVar1 = NSUserDefaults::standardUserDefaults
                    ((ID)&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
  IVar1 = NSUserDefaults::boolForKey_(IVar1,"boolForKey:",&cf_DL_EnableRemoveAds);
  if ((IVar1 & 1) != 0) {
    uVar2 = FUN_00097ef8();
    uVar2 = FUN_00097a54(uVar2);
    IVar1 = _objc_msgSend(DAT_001006a8,"length");
    IVar1 = FUN_00097c68(uVar2,IVar1);
    IVar1 = _objc_msgSend(IVar1,"isEqualToString:",DAT_001006a8);
    if ((int)IVar1 != 0) {
      pcVar3 = DAT_000ffad8;
      if (DAT_000ffad8 == (code *)0x0) {
        pcVar3 = (code *)_class_getMethodImplementation(DAT_000ffad0,"objectsForListAdapter:");
      }
      IVar1 = (*pcVar3)(param_1,param_2,param_3);
      IVar1 = _objc_msgSend(IVar1,"mutableCopy");
      local_78 = PTR___NSConcreteStackBlock_000e80d8;
      local_70 = 0xc2000000;
      local_68 = FUN_000119cc;
      puStack_60 = &DAT_000e8898;
      local_58 = IVar1;
      _objc_msgSend(IVar1,"enumerateObjectsWithOptions:usingBlock:",2,&local_78);
      IVar1 = _objc_msgSend(IVar1,"copy");
      return IVar1;
    }
  }
  pcVar3 = DAT_000ffad8;
  if (DAT_000ffad8 == (code *)0x0) {
    pcVar3 = (code *)_class_getMethodImplementation(DAT_000ffad0,"objectsForListAdapter:");
  }
  IVar1 = (*pcVar3)(param_1,param_2,param_3);
  return IVar1;
}

