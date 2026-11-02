/* Address: 00083c28 | Name: FUN_00083c28 | Body bytes: 368 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_00083c28(undefined8 param_1,undefined8 param_2,ID param_3,undefined8 param_4,
                 undefined8 param_5,undefined4 param_6)

{
  ID IVar1;
  ID IVar2;
  ID local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_000e8260;
  IVar1 = _objc_msgSend(param_3,"state");
  if (IVar1 == 1) {
    IVar1 = FUN_0008c218(&cf_ACTION_SETTINGS_DLINSTA);
    IVar1 = ABMenuActionItem::class_ABMenuActionItem__actionItemWithTitle_style_action_
                      ((ID)&objc::class_t::ABMenuActionItem,"actionItemWithTitle:style:action:",
                       IVar1,0,0xe8eb8);
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
              (IVar1,"presentedFromViewController:animated:completion:",IVar2,1,0,param_6);
    IVar1 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(IVar1);
  }
  return;
}

