/* Address: 00009570 | Name: FUN_00009570 | Body bytes: 1364 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */

void FUN_00009570(undefined8 param_1,undefined8 param_2,ID param_3,undefined8 param_4,
                 undefined8 param_5,undefined4 param_6)

{
  ID IVar1;
  undefined8 uVar2;
  ID IVar3;
  ID IVar4;
  code *pcVar5;
  undefined *local_e8;
  undefined8 local_e0;
  code *local_d8;
  undefined *puStack_d0;
  ID local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined *local_b0;
  undefined8 local_a8;
  code *local_a0;
  undefined *puStack_98;
  ID local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ID local_78;
  ID local_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_000e8260;
  IVar1 = NSUserDefaults::standardUserDefaults
                    ((ID)&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
  IVar1 = NSUserDefaults::boolForKey_(IVar1,"boolForKey:",&cf_DL_EnableConfirmLike);
  if ((IVar1 & 1) != 0) {
    uVar2 = FUN_00097ef8();
    uVar2 = FUN_00097a54(uVar2);
    IVar1 = _objc_msgSend(DAT_001006a8,"length");
    IVar1 = FUN_00097c68(uVar2,IVar1);
    IVar1 = _objc_msgSend(IVar1,"isEqualToString:",DAT_001006a8);
    if ((int)IVar1 != 0) {
      if (DAT_000ffb08 == 0) {
        DAT_000ffb08 = _objc_getClass("IGUFIInteractionCountsView");
      }
      uVar2 = _objc_retainAutorelease();
      IVar1 = _objc_msgSend(param_3,"isMemberOfClass:",uVar2);
      if ((int)IVar1 != 0) {
        IVar1 = _objc_msgSend(param_3,"performSelector:","likeButton");
        IVar1 = _objc_msgSend(IVar1,"performSelector:","accessibilityLabel");
        IVar3 = UIApplication::sharedApplication
                          ((ID)&_OBJC_CLASS___UIApplication,"sharedApplication");
        IVar3 = UIApplication::delegate(IVar3,"delegate");
        IVar3 = UIApplication::window(IVar3,"window");
        IVar4 = _objc_msgSend(IVar1,"isEqualToString:",&cf_Like);
        if ((int)IVar4 != 0) {
          IVar1 = FUN_0008c218(&cf_POPUP_CONFIRM_LIKE_CELL);
          local_b0 = PTR___NSConcreteStackBlock_000e80d8;
          local_a8 = 0xc2000000;
          local_a0 = FUN_00010c10;
          puStack_98 = &DAT_000e8808;
          local_90 = param_3;
          local_88 = param_1;
          uStack_80 = param_2;
          IVar1 = ABMenuActionItem::class_ABMenuActionItem__actionItemWithTitle_style_action_
                            ((ID)&objc::class_t::ABMenuActionItem,
                             "actionItemWithTitle:style:action:",IVar1,1,(ID)&local_b0);
          IVar4 = _objc_alloc(&objc::class_t::ABMenuViewController);
          local_70 = IVar1;
          IVar1 = NSArray::arrayWithObjects_count_
                            ((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:count:",&local_70,1);
          IVar1 = ABMenuViewController::instance_ABMenuViewController__initWithActionItems_
                            (IVar4,"initWithActionItems:",IVar1);
          IVar3 = UIApplication::rootViewController(IVar3,"rootViewController");
          ABMenuViewController::
          instance_ABMenuViewController__presentedFromViewController_animated_completion_
                    (IVar1,"presentedFromViewController:animated:completion:",IVar3,1,0,param_6);
          goto LAB_00009a80;
        }
        IVar1 = _objc_msgSend(IVar1,"isEqualToString:",&cf_Liked);
        if ((int)IVar1 != 0) {
          IVar1 = FUN_0008c218(&cf_POPUP_CONFIRM_UNLIKE_CELL);
          local_e8 = PTR___NSConcreteStackBlock_000e80d8;
          local_e0 = 0xc2000000;
          local_d8 = FUN_00010c58;
          puStack_d0 = &DAT_000e8808;
          local_c8 = param_3;
          local_c0 = param_1;
          uStack_b8 = param_2;
          IVar1 = ABMenuActionItem::class_ABMenuActionItem__actionItemWithTitle_style_action_
                            ((ID)&objc::class_t::ABMenuActionItem,
                             "actionItemWithTitle:style:action:",IVar1,1,(ID)&local_e8);
          IVar4 = _objc_alloc(&objc::class_t::ABMenuViewController);
          local_78 = IVar1;
          IVar1 = NSArray::arrayWithObjects_count_
                            ((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:count:",&local_78,1);
          IVar1 = ABMenuViewController::instance_ABMenuViewController__initWithActionItems_
                            (IVar4,"initWithActionItems:",IVar1);
          IVar3 = UIApplication::rootViewController(IVar3,"rootViewController");
          ABMenuViewController::
          instance_ABMenuViewController__presentedFromViewController_animated_completion_
                    (IVar1,"presentedFromViewController:animated:completion:",IVar3,1,0,param_6);
          goto LAB_00009a80;
        }
      }
    }
  }
  pcVar5 = DAT_000ff8f0;
  if (DAT_000ff8f0 == (code *)0x0) {
    pcVar5 = (code *)_class_getMethodImplementation(DAT_000ff8e8,"UFIButtonBarDidTapOnLike:");
  }
  (*pcVar5)(param_1,param_2,param_3);
LAB_00009a80:
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}

