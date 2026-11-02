/* Address: 000066a0 | Name: FUN_000066a0 | Body bytes: 1072 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */

void FUN_000066a0(ID param_1,undefined8 param_2)

{
  ID IVar1;
  undefined8 uVar2;
  ID IVar3;
  ID IVar4;
  code *pcVar5;
  undefined4 in_w5;
  undefined *local_c8;
  undefined8 local_c0;
  code *local_b8;
  undefined *puStack_b0;
  ID local_a8;
  undefined8 uStack_a0;
  undefined *local_98;
  undefined8 local_90;
  code *local_88;
  undefined *puStack_80;
  ID local_78;
  undefined8 uStack_70;
  ID local_68;
  ID local_60;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_000e8260;
  IVar1 = NSUserDefaults::standardUserDefaults
                    ((ID)&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
  IVar1 = NSUserDefaults::boolForKey_(IVar1,"boolForKey:",&cf_DL_EnableConfirmFollow_Unfollow);
  if ((IVar1 & 1) != 0) {
    uVar2 = FUN_00097ef8();
    uVar2 = FUN_00097a54(uVar2);
    IVar1 = _objc_msgSend(DAT_001006a8,"length");
    IVar1 = FUN_00097c68(uVar2,IVar1);
    IVar1 = _objc_msgSend(IVar1,"isEqualToString:",DAT_001006a8);
    if ((int)IVar1 != 0) {
      IVar1 = DLHelper::class_DLHelper__topMostController
                        ((ID)&objc::class_t::DLHelper,"topMostController");
      IVar3 = _objc_msgSend(param_1,"user");
      IVar3 = _objc_msgSend(IVar3,"followStatus");
      if (IVar3 == 2) {
        IVar3 = FUN_0008c218(&cf_POPUP_CONFIRM_FOLLOW_CELL);
        local_98 = PTR___NSConcreteStackBlock_000e80d8;
        local_90 = 0xc0000000;
        local_88 = FUN_000108a0;
        puStack_80 = &DAT_000e87b8;
        local_78 = param_1;
        uStack_70 = param_2;
        IVar3 = ABMenuActionItem::class_ABMenuActionItem__actionItemWithTitle_style_action_
                          ((ID)&objc::class_t::ABMenuActionItem,"actionItemWithTitle:style:action:",
                           IVar3,1,(ID)&local_98);
        IVar4 = _objc_alloc(&objc::class_t::ABMenuViewController);
        local_60 = IVar3;
        IVar3 = NSArray::arrayWithObjects_count_
                          ((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:count:",&local_60,1);
        IVar3 = ABMenuViewController::instance_ABMenuViewController__initWithActionItems_
                          (IVar4,"initWithActionItems:",IVar3);
        ABMenuViewController::
        instance_ABMenuViewController__presentedFromViewController_animated_completion_
                  (IVar3,"presentedFromViewController:animated:completion:",IVar1,1,0,in_w5);
      }
      else {
        IVar3 = _objc_msgSend(param_1,"user");
        IVar3 = _objc_msgSend(IVar3,"followStatus");
        if (IVar3 != 3) goto code_r0x00006a6c;
        IVar3 = FUN_0008c218(&cf_POPUP_CONFIRM_UNFOLLOW_CELL);
        local_c8 = PTR___NSConcreteStackBlock_000e80d8;
        local_c0 = 0xc0000000;
        local_b8 = FUN_000108e4;
        puStack_b0 = &DAT_000e87b8;
        local_a8 = param_1;
        uStack_a0 = param_2;
        IVar3 = ABMenuActionItem::class_ABMenuActionItem__actionItemWithTitle_style_action_
                          ((ID)&objc::class_t::ABMenuActionItem,"actionItemWithTitle:style:action:",
                           IVar3,1,(ID)&local_c8);
        IVar4 = _objc_alloc(&objc::class_t::ABMenuViewController);
        local_68 = IVar3;
        IVar3 = NSArray::arrayWithObjects_count_
                          ((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:count:",&local_68,1);
        IVar3 = ABMenuViewController::instance_ABMenuViewController__initWithActionItems_
                          (IVar4,"initWithActionItems:",IVar3);
        ABMenuViewController::
        instance_ABMenuViewController__presentedFromViewController_animated_completion_
                  (IVar3,"presentedFromViewController:animated:completion:",IVar1,1,0,in_w5);
      }
      uVar2 = 0;
      goto LAB_00006a98;
    }
  }
code_r0x00006a6c:
  pcVar5 = DAT_000ff880;
  if (DAT_000ff880 == (code *)0x0) {
    pcVar5 = (code *)_class_getMethodImplementation(DAT_000ff878,"_didPressFollowButton");
  }
  uVar2 = (*pcVar5)(param_1,param_2);
LAB_00006a98:
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(uVar2);
  }
  return;
}

