/* Address: 000844d8 | Name: FUN_000844d8 | Body bytes: 596 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */

void FUN_000844d8(ID param_1,undefined8 param_2,ID param_3,undefined8 param_4,undefined8 param_5,
                 undefined4 param_6)

{
  code *pcVar1;
  ID IVar2;
  ID IVar3;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  ID local_70;
  undefined8 uStack_68;
  ID local_60;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_000e8260;
  pcVar1 = DAT_00100130;
  if (DAT_00100130 == (code *)0x0) {
    pcVar1 = (code *)_class_getMethodImplementation(DAT_00100128,"_profilePictureLongPressed:");
  }
  (*pcVar1)(param_1,param_2,param_3);
  IVar2 = _objc_msgSend(param_1,"profilePic");
  IVar2 = _objc_msgSend(IVar2,"user");
  if ((IVar2 != 0) && (IVar2 = _objc_msgSend(param_3,"state"), IVar2 == 1)) {
    IVar2 = FUN_0008c218(&cf_ACTION_SHOW_PHOTO);
    local_90 = PTR___NSConcreteStackBlock_000e80d8;
    local_88 = 0xc0000000;
    local_80 = FUN_00085508;
    puStack_78 = &DAT_000e87b8;
    local_70 = param_1;
    uStack_68 = param_2;
    IVar2 = ABMenuActionItem::class_ABMenuActionItem__actionItemWithTitle_style_action_
                      ((ID)&objc::class_t::ABMenuActionItem,"actionItemWithTitle:style:action:",
                       IVar2,0,(ID)&local_90);
    IVar3 = _objc_alloc(&objc::class_t::ABMenuViewController);
    local_60 = IVar2;
    IVar2 = NSArray::arrayWithObjects_count_
                      ((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:count:",&local_60,1);
    IVar2 = ABMenuViewController::instance_ABMenuViewController__initWithActionItems_
                      (IVar3,"initWithActionItems:",IVar2);
    IVar3 = DLHelper::class_DLHelper__topMostController
                      ((ID)&objc::class_t::DLHelper,"topMostController");
    ABMenuViewController::
    instance_ABMenuViewController__presentedFromViewController_animated_completion_
              (IVar2,"presentedFromViewController:animated:completion:",IVar3,1,0,param_6);
  }
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}

