/* Address: 0009c8f0 | Name: FUN_0009c8f0 | Body bytes: 584 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_0009c8f0(long param_1)

{
  ID IVar1;
  cfstringStruct *pcVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_58;
  cfstringStruct *pcStack_50;
  undefined8 local_48;
  cfstringStruct *pcStack_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_000e8260;
  IVar1 = _objc_msgSend(*(ID *)(param_1 + 0x20),"status");
  if (IVar1 == 5) {
    if (*(long *)(param_1 + 0x28) != 0) {
      local_48 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_000e8070;
      pcStack_40 = &cf_Exportsessionwascancelled_;
      IVar1 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &pcStack_40,&local_48,1);
      pcVar2 = &cf_DLAACAudioConverterErrorDomain;
      uVar3 = 0xfffffffffffffffd;
LAB_0009cad0:
      IVar1 = NSError::errorWithDomain_code_userInfo_
                        ((ID)&_OBJC_CLASS___NSError,"errorWithDomain:code:userInfo:",pcVar2,uVar3,
                         IVar1);
      (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0,IVar1);
      IVar1 = 0;
    }
  }
  else if (IVar1 == 4) {
    lVar4 = *(long *)(param_1 + 0x28);
    if (lVar4 != 0) {
      IVar1 = _objc_msgSend(*(ID *)(param_1 + 0x20),"error");
      IVar1 = (**(code **)(lVar4 + 0x10))(lVar4,0,IVar1);
      if (*(long *)PTR____stack_chk_guard_000e8260 == local_38) {
        return 0;
      }
      goto LAB_0009cb34;
    }
  }
  else if (IVar1 == 3) {
    IVar1 = *(ID *)(param_1 + 0x28);
    if (IVar1 != 0) {
      if (*(long *)PTR____stack_chk_guard_000e8260 == local_38) {
                    /* WARNING: Could not recover jumptable at 0x0009c97c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        IVar1 = (**(code **)(IVar1 + 0x10))(IVar1,*(undefined8 *)(param_1 + 0x30),0);
        return IVar1;
      }
      goto LAB_0009cb34;
    }
  }
  else {
    IVar1 = _NSLog(&cf_Exportfailedwithunknownerror_);
    if (*(long *)(param_1 + 0x28) != 0) {
      local_58 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_000e8070;
      pcStack_50 = &cf_Unknownerroroccurred_;
      IVar1 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &pcStack_50,&local_58,1);
      pcVar2 = &cf_Export;
      uVar3 = 0;
      goto LAB_0009cad0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_000e8260 == local_38) {
    return IVar1;
  }
LAB_0009cb34:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(IVar1);
}

