/* Address: 00084f04 | Name: FUN_00084f04 | Body bytes: 1012 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_00084f04(undefined8 param_1,undefined8 param_2,ID param_3,ID param_4,undefined8 param_5,
                 undefined4 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  code *pcVar6;
  undefined *local_f8;
  undefined8 local_f0;
  code *local_e8;
  undefined *puStack_e0;
  ID local_d8;
  ID local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined *local_b8;
  undefined8 local_b0;
  code *local_a8;
  undefined *puStack_a0;
  ID local_98;
  ID local_90;
  ID IStack_88;
  long local_80;
  
  local_80 = *(long *)PTR____stack_chk_guard_000e8260;
  if (DAT_00100168 == 0) {
    DAT_00100168 = _objc_getClass("IGStorySectionController");
  }
  uVar2 = _objc_retainAutorelease();
  IVar3 = _objc_msgSend(param_3,"isMemberOfClass:",uVar2);
  if ((int)IVar3 != 0) {
    if (DAT_00100170 == 0) {
      DAT_00100170 = _objc_getClass("IGStoryTrayCell");
    }
    uVar2 = _objc_retainAutorelease();
    IVar3 = _objc_msgSend(param_4,"isMemberOfClass:",uVar2);
    if ((int)IVar3 != 0) {
      IVar3 = _objc_msgSend(param_4,"performSelector:","model");
      IVar3 = _objc_msgSend(IVar3,"performSelector:","coverImageURL");
      if (IVar3 == 0) {
        pcVar6 = DAT_00100160;
        if (DAT_00100160 == (code *)0x0) {
          pcVar6 = (code *)_class_getMethodImplementation
                                     (DAT_00100158,"traySectionController:didLongPressCell:");
        }
        (*pcVar6)(param_1,param_2,param_3,param_4);
      }
      else {
        IVar4 = FUN_0008c218(&cf_ACTION_SHOW_COVER_STORY);
        puVar1 = PTR___NSConcreteStackBlock_000e80d8;
        local_b8 = PTR___NSConcreteStackBlock_000e80d8;
        local_b0 = 0xc2000000;
        local_a8 = FUN_0008671c;
        puStack_a0 = &DAT_000e8948;
        local_98 = IVar3;
        IVar3 = ABMenuActionItem::class_ABMenuActionItem__actionItemWithTitle_style_action_
                          ((ID)&objc::class_t::ABMenuActionItem,"actionItemWithTitle:style:action:",
                           IVar4,0,(ID)&local_b8);
        IVar4 = FUN_0008c218(&cf_ACTION_DEFAULT_OPTIONS);
        local_f8 = puVar1;
        local_f0 = 0xc2000000;
        local_e8 = FUN_00086958;
        puStack_e0 = &DAT_000e87d8;
        local_d8 = param_3;
        local_d0 = param_4;
        local_c8 = param_1;
        uStack_c0 = param_2;
        IVar4 = ABMenuActionItem::class_ABMenuActionItem__actionItemWithTitle_style_action_
                          ((ID)&objc::class_t::ABMenuActionItem,"actionItemWithTitle:style:action:",
                           IVar4,0,(ID)&local_f8);
        IVar5 = _objc_alloc(&objc::class_t::ABMenuViewController);
        local_90 = IVar3;
        IStack_88 = IVar4;
        IVar3 = NSArray::arrayWithObjects_count_
                          ((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:count:",&local_90,2);
        IVar3 = ABMenuViewController::instance_ABMenuViewController__initWithActionItems_
                          (IVar5,"initWithActionItems:",IVar3);
        IVar4 = DLHelper::class_DLHelper__topMostController
                          ((ID)&objc::class_t::DLHelper,"topMostController");
        ABMenuViewController::
        instance_ABMenuViewController__presentedFromViewController_animated_completion_
                  (IVar3,"presentedFromViewController:animated:completion:",IVar4,1,0,param_6);
      }
      goto LAB_000852a8;
    }
  }
  pcVar6 = DAT_00100160;
  if (DAT_00100160 == (code *)0x0) {
    pcVar6 = (code *)_class_getMethodImplementation
                               (DAT_00100158,"traySectionController:didLongPressCell:");
  }
  (*pcVar6)(param_1,param_2,param_3,param_4);
LAB_000852a8:
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_80) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}

