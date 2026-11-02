/* Address: 0009bdb8 | Name: FUN_0009bdb8 | Body bytes: 692 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_0009bdb8(long param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ID IVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  cfstringStruct *pcVar6;
  undefined1 auVar7 [16];
  undefined8 local_58;
  cfstringStruct *pcStack_50;
  undefined8 local_48;
  cfstringStruct *pcStack_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_000e8260;
  IVar3 = _objc_msgSend(*(ID *)(param_1 + 0x20),"status");
  if (IVar3 == 5) {
    auVar7 = _NSLog(&cf_Exportcancelled);
    if (*(long *)(param_1 + 0x28) != 0) {
      local_48 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_000e8070;
      pcStack_40 = &cf_Exportsessionwascancelled_;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &pcStack_40,&local_48,1);
      pcVar6 = &cf_DLAACAudioConverterErrorDomain;
      uVar5 = 0xfffffffffffffffd;
LAB_0009c004:
      IVar3 = NSError::errorWithDomain_code_userInfo_
                        ((ID)&_OBJC_CLASS___NSError,"errorWithDomain:code:userInfo:",pcVar6,uVar5,
                         IVar3);
      (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0,IVar3);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = extraout_x1_01;
      auVar7 = auVar2 << 0x40;
    }
  }
  else if (IVar3 == 4) {
    IVar3 = _objc_msgSend(*(ID *)(param_1 + 0x20),"error");
    _objc_msgSend(IVar3,"localizedDescription");
    _NSLog(&cf_Exportfailed___);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = extraout_x1_00;
    auVar7 = auVar1 << 0x40;
    lVar4 = *(long *)(param_1 + 0x28);
    if (lVar4 != 0) {
      IVar3 = _objc_msgSend(*(ID *)(param_1 + 0x20),"error");
      auVar7 = (**(code **)(lVar4 + 0x10))(lVar4,0,IVar3);
      if (*(long *)PTR____stack_chk_guard_000e8260 == local_38) {
        return 0;
      }
      goto LAB_0009c068;
    }
  }
  else if (IVar3 == 3) {
    _NSLog(&cf_Exportcompleted);
    lVar4 = *(long *)(param_1 + 0x28);
    auVar7._8_8_ = extraout_x1;
    auVar7._0_8_ = lVar4;
    if (lVar4 != 0) {
      auVar7._8_8_ = *(undefined8 *)(param_1 + 0x30);
      if (*(long *)PTR____stack_chk_guard_000e8260 == local_38) {
                    /* WARNING: Could not recover jumptable at 0x0009be50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar5 = (**(code **)(lVar4 + 0x10))(lVar4,*(undefined8 *)(param_1 + 0x30),0);
        return uVar5;
      }
      goto LAB_0009c068;
    }
  }
  else {
    auVar7 = _NSLog(&cf_Exportfailedwithunknownerror_);
    if (*(long *)(param_1 + 0x28) != 0) {
      local_58 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_000e8070;
      pcStack_50 = &cf_Unknownerroroccurred_;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &pcStack_50,&local_58,1);
      pcVar6 = &cf_Export;
      uVar5 = 0;
      goto LAB_0009c004;
    }
  }
  if (*(long *)PTR____stack_chk_guard_000e8260 == local_38) {
    return auVar7._0_8_;
  }
LAB_0009c068:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(auVar7._0_8_,auVar7._8_8_);
}

