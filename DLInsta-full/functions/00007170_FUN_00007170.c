/* Address: 00007170 | Name: FUN_00007170 | Body bytes: 1472 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */

void FUN_00007170(ID param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined4 param_6)

{
  ID IVar1;
  undefined8 uVar2;
  ID IVar3;
  ID IVar4;
  code *pcVar5;
  undefined *local_f0;
  undefined8 local_e8;
  code *local_e0;
  undefined *puStack_d8;
  undefined8 local_d0;
  ID local_c8;
  undefined8 uStack_c0;
  undefined *local_b8;
  undefined8 local_b0;
  code *local_a8;
  undefined *puStack_a0;
  undefined8 local_98;
  ID local_90;
  undefined8 uStack_88;
  ID local_80;
  ID local_78;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_000e8260;
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
      IVar1 = UIApplication::sharedApplication((ID)&_OBJC_CLASS___UIApplication,"sharedApplication")
      ;
      IVar1 = UIApplication::delegate(IVar1,"delegate");
      IVar1 = UIApplication::window(IVar1,"window");
      IVar3 = _objc_msgSend(param_1,"valueForKey:",&cf__tagsProvider);
      if (DAT_000ffaf8 == 0) {
        DAT_000ffaf8 = _objc_getClass("IGMedia");
      }
      uVar2 = _objc_retainAutorelease();
      IVar4 = _objc_msgSend(IVar3,"isMemberOfClass:",uVar2);
      if ((int)IVar4 == 0) {
        IVar3 = _objc_msgSend(param_1,"valueForKey:",&cf__delegate);
        IVar3 = _objc_msgSend(IVar3,"valueForKey:",&cf__delegate);
        IVar3 = _objc_msgSend(IVar3,"valueForKey:",&cf__media);
        IVar3 = _objc_msgSend(IVar3,"hasLiked");
        if ((IVar3 & 1) == 0) {
          IVar3 = FUN_0008c218(&cf_POPUP_CONFIRM_LIKE_CELL);
          local_f0 = PTR___NSConcreteStackBlock_000e80d8;
          local_e8 = 0xc2000000;
          local_e0 = FUN_00010a18;
          puStack_d8 = &DAT_000e8808;
          local_d0 = param_3;
          local_c8 = param_1;
          uStack_c0 = param_2;
          IVar3 = ABMenuActionItem::class_ABMenuActionItem__actionItemWithTitle_style_action_
                            ((ID)&objc::class_t::ABMenuActionItem,
                             "actionItemWithTitle:style:action:",IVar3,1,(ID)&local_f0);
          IVar4 = _objc_alloc(&objc::class_t::ABMenuViewController);
          local_80 = IVar3;
          IVar3 = NSArray::arrayWithObjects_count_
                            ((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:count:",&local_80,1);
          IVar3 = ABMenuViewController::instance_ABMenuViewController__initWithActionItems_
                            (IVar4,"initWithActionItems:",IVar3);
          IVar1 = UIApplication::rootViewController(IVar1,"rootViewController");
          ABMenuViewController::
          instance_ABMenuViewController__presentedFromViewController_animated_completion_
                    (IVar3,"presentedFromViewController:animated:completion:",IVar1,1,0,param_6);
          goto LAB_000074d4;
        }
      }
      else {
        IVar3 = _objc_msgSend(IVar3,"hasLiked");
        if ((IVar3 & 1) == 0) {
          IVar3 = FUN_0008c218(&cf_POPUP_CONFIRM_LIKE_CELL);
          local_b8 = PTR___NSConcreteStackBlock_000e80d8;
          local_b0 = 0xc2000000;
          local_a8 = FUN_000109c0;
          puStack_a0 = &DAT_000e8808;
          local_98 = param_3;
          local_90 = param_1;
          uStack_88 = param_2;
          IVar3 = ABMenuActionItem::class_ABMenuActionItem__actionItemWithTitle_style_action_
                            ((ID)&objc::class_t::ABMenuActionItem,
                             "actionItemWithTitle:style:action:",IVar3,1,(ID)&local_b8);
          IVar4 = _objc_alloc(&objc::class_t::ABMenuViewController);
          local_78 = IVar3;
          IVar3 = NSArray::arrayWithObjects_count_
                            ((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:count:",&local_78,1);
          IVar3 = ABMenuViewController::instance_ABMenuViewController__initWithActionItems_
                            (IVar4,"initWithActionItems:",IVar3);
          IVar1 = UIApplication::rootViewController(IVar1,"rootViewController");
          ABMenuViewController::
          instance_ABMenuViewController__presentedFromViewController_animated_completion_
                    (IVar3,"presentedFromViewController:animated:completion:",IVar1,1,0,param_6);
          goto LAB_000074d4;
        }
      }
    }
  }
  pcVar5 = DAT_000ff8a0;
  if (DAT_000ff8a0 == (code *)0x0) {
    pcVar5 = (code *)_class_getMethodImplementation(DAT_000ff898,"_onDoubleTap:");
  }
  (*pcVar5)(param_1,param_2,param_3);
LAB_000074d4:
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}

