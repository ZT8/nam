/* Address: 0007452c | Name: FUN_0007452c | Body bytes: 1004 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */

void FUN_0007452c(long param_1)

{
  ID IVar1;
  ID IVar2;
  undefined8 uVar3;
  undefined4 in_w5;
  undefined *local_b0;
  undefined8 local_a8;
  code *local_a0;
  undefined *puStack_98;
  ID local_90;
  undefined8 local_88;
  undefined8 local_80;
  ID local_78;
  ID local_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_000e8260;
  IVar1 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
  NSMutableArray::init(IVar1,"init");
  IVar1 = _objc_msgSend(*(ID *)(param_1 + 0x20),"delegate");
  IVar1 = _objc_msgSend(IVar1,"valueForKey:",&cf__post);
  if (IVar1 == 0) {
    IVar1 = _objc_msgSend(*(ID *)(param_1 + 0x20),"delegate");
    IVar1 = _objc_msgSend(IVar1,"valueForKey:",&cf__pagePhotoPost);
  }
  IVar2 = _objc_msgSend(IVar1,"photo");
  if (DAT_000fffc8 == 0) {
    DAT_000fffc8 = _objc_getClass("IGPhoto");
  }
  uVar3 = _objc_retainAutorelease();
  IVar2 = _objc_msgSend(IVar2,"isMemberOfClass:",uVar3);
  if ((IVar2 & 1) != 0) {
    IVar1 = _objc_msgSend(IVar1,"photo");
    if (IVar1 == 0) {
      IVar1 = 0;
    }
    else {
      IVar1 = _objc_msgSend(IVar1,"valueForKey:",&cf__originalImageVersions);
      local_70 = NSSortDescriptor::sortDescriptorWithKey_ascending_
                           ((ID)&_OBJC_CLASS___NSSortDescriptor,"sortDescriptorWithKey:ascending:",
                            &cf_width,0);
      IVar2 = NSArray::arrayWithObjects_count_
                        ((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:count:",&local_70,1);
      IVar1 = _objc_msgSend(IVar1,"sortedArrayUsingDescriptors:",IVar2);
    }
    IVar2 = _objc_msgSend(IVar1,"count");
    if (IVar2 != 0) {
      IVar2 = FUN_0008c218(&cf_ACTION_DOWNLOAD);
      local_b0 = PTR___NSConcreteStackBlock_000e80d8;
      local_a8 = 0xc2000000;
      local_a0 = FUN_00074b4c;
      puStack_98 = &DAT_000e8808;
      local_88 = *(undefined8 *)(param_1 + 0x20);
      local_80 = *(undefined8 *)(param_1 + 0x28);
      local_90 = IVar1;
      IVar1 = ABMenuActionItem::class_ABMenuActionItem__actionItemWithTitle_style_action_
                        ((ID)&objc::class_t::ABMenuActionItem,"actionItemWithTitle:style:action:",
                         IVar2,0,(ID)&local_b0);
      IVar2 = _objc_alloc(&objc::class_t::ABMenuViewController);
      local_78 = IVar1;
      IVar1 = NSArray::arrayWithObjects_count_
                        ((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:count:",&local_78,1);
      IVar1 = ABMenuViewController::instance_ABMenuViewController__initWithActionItems_
                        (IVar2,"initWithActionItems:",IVar1);
      IVar2 = DLHelper::class_DLHelper__topMostController
                        ((ID)&objc::class_t::DLHelper,"topMostController");
      ABMenuViewController::
      instance_ABMenuViewController__presentedFromViewController_animated_completion_
                (IVar1,"presentedFromViewController:animated:completion:",IVar2,1,0,in_w5);
    }
  }
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}

