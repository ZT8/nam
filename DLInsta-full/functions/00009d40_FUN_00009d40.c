/* Address: 00009d40 | Name: FUN_00009d40 | Body bytes: 1224 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */

void FUN_00009d40(ID param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5,
                 undefined4 param_6)

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
  long local_c8;
  ID local_c0;
  undefined8 uStack_b8;
  undefined *local_b0;
  undefined8 local_a8;
  code *local_a0;
  undefined *puStack_98;
  long local_90;
  ID local_88;
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
    if (((uint)IVar1 & (uint)(param_3 != 0)) == 1) {
      IVar1 = UIApplication::sharedApplication((ID)&_OBJC_CLASS___UIApplication,"sharedApplication")
      ;
      IVar1 = UIApplication::delegate(IVar1,"delegate");
      IVar1 = UIApplication::window(IVar1,"window");
      IVar3 = _objc_msgSend(param_1,"valueForKey:",&cf__video);
      IVar3 = _objc_msgSend(IVar3,"hasLiked");
      if ((IVar3 & 1) == 0) {
        IVar3 = FUN_0008c218(&cf_POPUP_CONFIRM_LIKE_CELL);
        local_b0 = PTR___NSConcreteStackBlock_000e80d8;
        local_a8 = 0xc2000000;
        local_a0 = FUN_00010ca0;
        puStack_98 = &DAT_000e8808;
        local_90 = param_3;
        local_88 = param_1;
        uStack_80 = param_2;
        IVar3 = ABMenuActionItem::class_ABMenuActionItem__actionItemWithTitle_style_action_
                          ((ID)&objc::class_t::ABMenuActionItem,"actionItemWithTitle:style:action:",
                           IVar3,1,(ID)&local_b0);
        IVar4 = _objc_alloc(&objc::class_t::ABMenuViewController);
        local_70 = IVar3;
        IVar3 = NSArray::arrayWithObjects_count_
                          ((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:count:",&local_70,1);
        IVar3 = ABMenuViewController::instance_ABMenuViewController__initWithActionItems_
                          (IVar4,"initWithActionItems:",IVar3);
        IVar1 = UIApplication::rootViewController(IVar1,"rootViewController");
        ABMenuViewController::
        instance_ABMenuViewController__presentedFromViewController_animated_completion_
                  (IVar3,"presentedFromViewController:animated:completion:",IVar1,1,0,param_6);
      }
      else {
        IVar3 = FUN_0008c218(&cf_POPUP_CONFIRM_UNLIKE_CELL);
        local_e8 = PTR___NSConcreteStackBlock_000e80d8;
        local_e0 = 0xc2000000;
        local_d8 = FUN_00010ce8;
        puStack_d0 = &DAT_000e8808;
        local_c8 = param_3;
        local_c0 = param_1;
        uStack_b8 = param_2;
        IVar3 = ABMenuActionItem::class_ABMenuActionItem__actionItemWithTitle_style_action_
                          ((ID)&objc::class_t::ABMenuActionItem,"actionItemWithTitle:style:action:",
                           IVar3,1,(ID)&local_e8);
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
      }
      goto LAB_0000a1c4;
    }
  }
  pcVar5 = DAT_000ff900;
  if (DAT_000ff900 == (code *)0x0) {
    pcVar5 = (code *)_class_getMethodImplementation
                               (DAT_000ff8f8,"controlsOverlayControllerDidTapLikeButton:");
  }
  (*pcVar5)(param_1,param_2,param_3);
LAB_0000a1c4:
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}

