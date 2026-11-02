/* Address: 0000ac38 | Name: FUN_0000ac38 | Body bytes: 1160 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */

undefined8
FUN_0000ac38(ID param_1,undefined8 param_2,ID param_3,undefined8 param_4,undefined8 param_5,
            undefined4 param_6)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  undefined8 uVar4;
  ID IVar5;
  undefined *local_128;
  undefined8 local_120;
  code *local_118;
  undefined *puStack_110;
  ID local_108;
  ID IStack_100;
  undefined8 local_f8;
  undefined *local_f0;
  undefined8 local_e8;
  code *local_e0;
  undefined *puStack_d8;
  ID local_d0;
  ID local_c8;
  ID IStack_c0;
  undefined8 local_b8;
  undefined *local_b0;
  undefined8 local_a8;
  code *local_a0;
  undefined *puStack_98;
  ID local_90;
  ID IStack_88;
  undefined8 local_80;
  
  IVar1 = _objc_msgSend(param_3,"state");
  if ((IVar1 == 1) &&
     (IVar1 = _objc_msgSend(param_1,"respondsToSelector:","viewController"), (int)IVar1 != 0)) {
    IVar1 = UIPasteboard::generalPasteboard((ID)&_OBJC_CLASS___UIPasteboard,"generalPasteboard");
    IVar2 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
    IVar2 = NSMutableArray::init(IVar2,"init");
    IVar3 = _objc_msgSend(param_1,"viewController");
    if (DAT_000ffb10 == 0) {
      DAT_000ffb10 = _objc_getClass("IGProfileViewController");
    }
    uVar4 = _objc_retainAutorelease();
    IVar3 = _objc_msgSend(IVar3,"isKindOfClass:",uVar4);
    if ((int)IVar3 == 0) {
      IVar3 = FUN_0008c218(&cf_ACTION_COPY_TEXT);
      local_128 = PTR___NSConcreteStackBlock_000e80d8;
      local_120 = 0xc2000000;
      local_118 = FUN_0001126c;
      puStack_110 = &DAT_000e8808;
      local_108 = IVar1;
      IStack_100 = param_1;
      local_f8 = param_2;
      IVar1 = ABMenuActionItem::class_ABMenuActionItem__actionItemWithTitle_style_action_
                        ((ID)&objc::class_t::ABMenuActionItem,"actionItemWithTitle:style:action:",
                         IVar3,0,(ID)&local_128);
      NSMutableArray::addObject_(IVar2,"addObject:",IVar1);
    }
    else {
      IVar3 = FUN_0008c218(&cf_ACTION_COPY_TEXT);
      local_b0 = PTR___NSConcreteStackBlock_000e80d8;
      local_a8 = 0xc2000000;
      local_a0 = FUN_00010e88;
      puStack_98 = &DAT_000e8808;
      local_90 = IVar1;
      IStack_88 = param_1;
      local_80 = param_2;
      IVar3 = ABMenuActionItem::class_ABMenuActionItem__actionItemWithTitle_style_action_
                        ((ID)&objc::class_t::ABMenuActionItem,"actionItemWithTitle:style:action:",
                         IVar3,0,(ID)&local_b0);
      NSMutableArray::addObject_(IVar2,"addObject:",IVar3);
      IVar3 = _objc_msgSend(param_1,"viewController");
      IVar5 = _objc_msgSend(IVar3,"user");
      IVar5 = _objc_msgSend(IVar5,"username");
      IVar5 = _objc_msgSend(IVar5,"length");
      if (IVar5 != 0) {
        IVar5 = FUN_0008c218(&cf_ACTION_COPY_USERNAME);
        local_f0 = PTR___NSConcreteStackBlock_000e80d8;
        local_e8 = 0xc2000000;
        local_e0 = FUN_00011094;
        puStack_d8 = &DAT_000e87d8;
        local_d0 = IVar1;
        local_c8 = IVar3;
        IStack_c0 = param_1;
        local_b8 = param_2;
        IVar1 = ABMenuActionItem::class_ABMenuActionItem__actionItemWithTitle_style_action_
                          ((ID)&objc::class_t::ABMenuActionItem,"actionItemWithTitle:style:action:",
                           IVar5,0,(ID)&local_f0);
        NSMutableArray::addObject_(IVar2,"addObject:",IVar1);
      }
    }
    IVar1 = _objc_alloc(&objc::class_t::ABMenuViewController);
    IVar1 = ABMenuViewController::instance_ABMenuViewController__initWithActionItems_
                      (IVar1,"initWithActionItems:",IVar2);
    IVar2 = _objc_msgSend(param_1,"viewController");
    ABMenuViewController::
    instance_ABMenuViewController__presentedFromViewController_animated_completion_
              (IVar1,"presentedFromViewController:animated:completion:",IVar2,1,0,param_6);
  }
  return 0;
}

