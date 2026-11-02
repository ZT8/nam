/* Address: 00083964 | Name: FUN_00083964 | Body bytes: 564 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_00083964(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined4 param_6)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  undefined *local_a0;
  undefined8 local_98;
  code *local_90;
  undefined *puStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ID local_68;
  ID IStack_60;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_000e8260;
  IVar1 = FUN_0008c218(&cf_ACTION_SETTINGS_INSTAGRAM);
  local_a0 = PTR___NSConcreteStackBlock_000e80d8;
  local_98 = 0xc2000000;
  local_90 = FUN_00083dec;
  puStack_88 = &DAT_000e8808;
  local_80 = param_3;
  local_78 = param_1;
  uStack_70 = param_2;
  IVar1 = ABMenuActionItem::class_ABMenuActionItem__actionItemWithTitle_style_action_
                    ((ID)&objc::class_t::ABMenuActionItem,"actionItemWithTitle:style:action:",IVar1,
                     0,(ID)&local_a0);
  IVar2 = FUN_0008c218(&cf_ACTION_SETTINGS_DLINSTA);
  IVar2 = ABMenuActionItem::class_ABMenuActionItem__actionItemWithTitle_style_action_
                    ((ID)&objc::class_t::ABMenuActionItem,"actionItemWithTitle:style:action:",IVar2,
                     0,0xe8e98);
  IVar3 = _objc_alloc(&objc::class_t::ABMenuViewController);
  local_68 = IVar1;
  IStack_60 = IVar2;
  IVar1 = NSArray::arrayWithObjects_count_
                    ((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:count:",&local_68,2);
  IVar1 = ABMenuViewController::instance_ABMenuViewController__initWithActionItems_
                    (IVar3,"initWithActionItems:",IVar1);
  IVar2 = DLHelper::class_DLHelper__topMostController
                    ((ID)&objc::class_t::DLHelper,"topMostController");
  ABMenuViewController::
  instance_ABMenuViewController__presentedFromViewController_animated_completion_
            (IVar1,"presentedFromViewController:animated:completion:",IVar2,1,0,param_6);
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}

