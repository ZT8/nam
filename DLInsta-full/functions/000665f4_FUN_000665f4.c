/* Address: 000665f4 | Name: FUN_000665f4 | Body bytes: 1596 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */

void FUN_000665f4(ID param_1,undefined8 param_2,ID param_3,undefined8 param_4,undefined8 param_5,
                 undefined4 param_6)

{
  undefined *puVar1;
  ID IVar2;
  undefined8 uVar3;
  ID IVar4;
  ID IVar5;
  undefined *local_138;
  undefined8 local_130;
  code *local_128;
  undefined *puStack_120;
  ID local_118;
  undefined8 uStack_110;
  undefined *local_108;
  undefined8 local_100;
  code *local_f8;
  undefined *puStack_f0;
  ID local_e8;
  undefined8 uStack_e0;
  undefined *local_d8;
  undefined8 local_d0;
  code *local_c8;
  undefined *puStack_c0;
  ID local_b8;
  ID local_b0;
  undefined8 local_a8;
  ID local_a0;
  ID IStack_98;
  ID local_90;
  ID local_88;
  long local_80;
  
  local_80 = *(long *)PTR____stack_chk_guard_000e8260;
  IVar2 = _objc_msgSend(param_3,"state");
  if ((IVar2 == 1) &&
     (IVar2 = _objc_msgSend(param_1,"respondsToSelector:","delegate"), (IVar2 & 1) != 0)) {
    IVar2 = _objc_msgSend(param_1,"delegate");
    if (DAT_00100000 == 0) {
      DAT_00100000 = _objc_getClass("IGFeedItemPhotoCell");
    }
    uVar3 = _objc_retainAutorelease();
    IVar2 = _objc_msgSend(IVar2,"isMemberOfClass:",uVar3);
    if ((int)IVar2 == 0) {
      IVar2 = _objc_msgSend(param_1,"delegate");
      if (DAT_00100008 == 0) {
        DAT_00100008 = _objc_getClass("IGFeedItemPagePhotoCell");
      }
      uVar3 = _objc_retainAutorelease();
      IVar2 = _objc_msgSend(IVar2,"isMemberOfClass:",uVar3);
      if ((int)IVar2 != 0) {
        IVar2 = FUN_0008c218(&cf_ACTION_ITEM);
        puVar1 = PTR___NSConcreteStackBlock_000e80d8;
        local_108 = PTR___NSConcreteStackBlock_000e80d8;
        local_100 = 0xc0000000;
        local_f8 = FUN_0007452c;
        puStack_f0 = &DAT_000e87b8;
        local_e8 = param_1;
        uStack_e0 = param_2;
        IVar2 = ABMenuActionItem::class_ABMenuActionItem__actionItemWithTitle_style_action_
                          ((ID)&objc::class_t::ABMenuActionItem,"actionItemWithTitle:style:action:",
                           IVar2,0,(ID)&local_108);
        IVar4 = FUN_0008c218(&cf_VIEW_ALL_ITEMS);
        local_138 = puVar1;
        local_130 = 0xc0000000;
        local_128 = FUN_000751b4;
        puStack_120 = &DAT_000e87b8;
        local_118 = param_1;
        uStack_110 = param_2;
        IVar4 = ABMenuActionItem::class_ABMenuActionItem__actionItemWithTitle_style_action_
                          ((ID)&objc::class_t::ABMenuActionItem,"actionItemWithTitle:style:action:",
                           IVar4,0,(ID)&local_138);
        IVar5 = _objc_alloc(&objc::class_t::ABMenuViewController);
        local_a0 = IVar2;
        IStack_98 = IVar4;
        IVar2 = NSArray::arrayWithObjects_count_
                          ((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:count:",&local_a0,2);
        IVar2 = ABMenuViewController::instance_ABMenuViewController__initWithActionItems_
                          (IVar5,"initWithActionItems:",IVar2);
        IVar4 = DLHelper::class_DLHelper__topMostController
                          ((ID)&objc::class_t::DLHelper,"topMostController");
        ABMenuViewController::
        instance_ABMenuViewController__presentedFromViewController_animated_completion_
                  (IVar2,"presentedFromViewController:animated:completion:",IVar4,1,0,param_6);
      }
    }
    else {
      IVar2 = _objc_msgSend(param_1,"delegate");
      IVar2 = _objc_msgSend(IVar2,"valueForKey:",&cf__post);
      IVar4 = _objc_msgSend(IVar2,"photo");
      if (DAT_000fffc8 == 0) {
        DAT_000fffc8 = _objc_getClass("IGPhoto");
      }
      uVar3 = _objc_retainAutorelease();
      IVar4 = _objc_msgSend(IVar4,"isMemberOfClass:",uVar3);
      if ((IVar4 & 1) != 0) {
        IVar2 = _objc_msgSend(IVar2,"photo");
        if (IVar2 == 0) {
          IVar2 = 0;
        }
        else {
          IVar2 = _objc_msgSend(IVar2,"valueForKey:",&cf__originalImageVersions);
          local_88 = NSSortDescriptor::sortDescriptorWithKey_ascending_
                               ((ID)&_OBJC_CLASS___NSSortDescriptor,
                                "sortDescriptorWithKey:ascending:",&cf_width,0);
          IVar4 = NSArray::arrayWithObjects_count_
                            ((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:count:",&local_88,1);
          IVar2 = _objc_msgSend(IVar2,"sortedArrayUsingDescriptors:",IVar4);
        }
        IVar4 = _objc_msgSend(IVar2,"count");
        if (IVar4 != 0) {
          IVar4 = FUN_0008c218(&cf_ACTION_DOWNLOAD);
          local_d8 = PTR___NSConcreteStackBlock_000e80d8;
          local_d0 = 0xc2000000;
          local_c8 = FUN_00073ec4;
          puStack_c0 = &DAT_000e8808;
          local_b8 = IVar2;
          local_b0 = param_1;
          local_a8 = param_2;
          IVar2 = ABMenuActionItem::class_ABMenuActionItem__actionItemWithTitle_style_action_
                            ((ID)&objc::class_t::ABMenuActionItem,
                             "actionItemWithTitle:style:action:",IVar4,0,(ID)&local_d8);
          IVar4 = _objc_alloc(&objc::class_t::ABMenuViewController);
          local_90 = IVar2;
          IVar2 = NSArray::arrayWithObjects_count_
                            ((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:count:",&local_90,1);
          IVar2 = ABMenuViewController::instance_ABMenuViewController__initWithActionItems_
                            (IVar4,"initWithActionItems:",IVar2);
          IVar4 = DLHelper::class_DLHelper__topMostController
                            ((ID)&objc::class_t::DLHelper,"topMostController");
          ABMenuViewController::
          instance_ABMenuViewController__presentedFromViewController_animated_completion_
                    (IVar2,"presentedFromViewController:animated:completion:",IVar4,1,0,param_6);
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_80) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}

