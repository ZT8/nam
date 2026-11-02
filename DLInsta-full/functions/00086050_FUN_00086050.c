/* Address: 00086050 | Name: FUN_00086050 | Body bytes: 436 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_00086050(long param_1)

{
  ID IVar1;
  ID IVar2;
  undefined4 in_w5;
  undefined *local_78;
  undefined8 local_70;
  code *local_68;
  undefined *puStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ID local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_000e8260;
  IVar1 = FUN_0008c218(&cf_ACTION_SHOW_PHOTO);
  local_78 = PTR___NSConcreteStackBlock_000e80d8;
  local_70 = 0xc2000000;
  local_68 = FUN_00086274;
  puStack_60 = &DAT_000e8808;
  local_58 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = *(undefined8 *)(param_1 + 0x28);
  local_48 = *(undefined8 *)(param_1 + 0x30);
  IVar1 = ABMenuActionItem::class_ABMenuActionItem__actionItemWithTitle_style_action_
                    ((ID)&objc::class_t::ABMenuActionItem,"actionItemWithTitle:style:action:",IVar1,
                     0,(ID)&local_78);
  IVar2 = _objc_alloc(&objc::class_t::ABMenuViewController);
  local_40 = IVar1;
  IVar1 = NSArray::arrayWithObjects_count_
                    ((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:count:",&local_40,1);
  IVar1 = ABMenuViewController::instance_ABMenuViewController__initWithActionItems_
                    (IVar2,"initWithActionItems:",IVar1);
  IVar2 = DLHelper::class_DLHelper__topMostController
                    ((ID)&objc::class_t::DLHelper,"topMostController");
  ABMenuViewController::
  instance_ABMenuViewController__presentedFromViewController_animated_completion_
            (IVar1,"presentedFromViewController:animated:completion:",IVar2,1,0,in_w5);
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}

