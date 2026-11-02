/* Address: 000acf14 | Name: instance_DLPopupViewController__hideController_ | Body bytes: 224 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void DLPopupViewController::instance_DLPopupViewController__hideController_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  undefined *local_80;
  undefined8 local_78;
  code *local_70;
  undefined *puStack_68;
  ID local_60;
  undefined *puStack_58;
  undefined8 local_50;
  code *local_48;
  undefined *puStack_40;
  ID local_38;
  
  puStack_58 = PTR___NSConcreteStackBlock_000e80d8;
  local_50 = 0xc2000000;
  local_48 = FUN_000acff4;
  puStack_40 = &DAT_000e9798;
  local_80 = PTR___NSConcreteStackBlock_000e80d8;
  local_78 = 0xc2000000;
  local_70 = FUN_000ad094;
  puStack_68 = &DAT_000e9bd8;
  local_60 = param_3;
  local_38 = param_1;
  UIView::
  animateWithDuration_delay_usingSpringWithDamping_initialSpringVelocity_options_animations_completion_
            ((ID)&_OBJC_CLASS___UIView,
             "animateWithDuration:delay:usingSpringWithDamping:initialSpringVelocity:options:animations:completion:"
             ,0x3fe19999a0000000,0x3fa99999a0000000,0x3feb333340000000,0x3f947ae147ae147b,0x30000,
             &puStack_58,&local_80);
  return;
}

