/* Address: 0008cb50 | Name: FUN_0008cb50 | Body bytes: 664 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_0008cb50(undefined8 param_1,undefined8 param_2)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  cfstringStruct *local_88;
  cfstringStruct *pcStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_000e8260;
  IVar1 = DLHelper::class_DLHelper__topMostController
                    ((ID)&objc::class_t::DLHelper,"topMostController");
  IVar2 = _objc_msgSend((ID)&objc::class_t::DLCrashViewController,"class");
  IVar2 = _objc_msgSend(IVar1,"isKindOfClass:",IVar2);
  if ((IVar2 & 1) == 0) {
    IVar2 = _objc_msgSend(IVar1,"presentedViewController");
    IVar3 = _objc_msgSend((ID)&objc::class_t::DLCrashViewController,"class");
    IVar2 = _objc_msgSend(IVar2,"isKindOfClass:",IVar3);
    if ((int)IVar2 == 0) {
      IVar2 = UINavigationController::class((ID)&_OBJC_CLASS___UINavigationController,"class");
      IVar2 = _objc_msgSend(IVar1,"isKindOfClass:",IVar2);
      if ((int)IVar2 != 0) {
        IVar1 = _objc_msgSend(IVar1,"topViewController");
        IVar2 = _objc_msgSend((ID)&objc::class_t::DLCrashViewController,"class");
        IVar1 = _objc_msgSend(IVar1,"isKindOfClass:",IVar2);
        if ((IVar1 & 1) != 0) goto LAB_0008cd94;
      }
      IVar1 = _objc_alloc(&objc::class_t::DLCrashViewController);
      IVar1 = _objc_msgSend(IVar1,"init");
      local_88 = &cf_reason;
      pcStack_80 = &cf_more_info;
      local_78 = param_1;
      uStack_70 = param_2;
      IVar2 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_78,&local_88,2);
      DLCrashViewController::instance_DLCrashViewController__setInfoDict_
                (IVar1,"setInfoDict:",IVar2);
      IVar2 = _objc_alloc(&_OBJC_CLASS___UINavigationController);
      IVar1 = UINavigationController::initWithRootViewController_
                        (IVar2,"initWithRootViewController:",IVar1);
      IVar2 = DLHelper::class_DLHelper__topMostController
                        ((ID)&objc::class_t::DLHelper,"topMostController");
      _objc_msgSend(IVar2,"presentViewController:animated:completion:",IVar1,1,0);
    }
  }
LAB_0008cd94:
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}

