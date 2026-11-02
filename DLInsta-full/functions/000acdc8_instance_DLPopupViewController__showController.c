/* Address: 000acdc8 | Name: instance_DLPopupViewController__showController | Body bytes: 196 */

/* Function Stack Size: 0x10 bytes */

void DLPopupViewController::instance_DLPopupViewController__showController(ID param_1,SEL param_2)

{
  undefined *local_58;
  undefined8 local_50;
  code *local_48;
  undefined *puStack_40;
  ID local_38;
  
  UIView::setAnimationsEnabled_((ID)&_OBJC_CLASS___UIView,"setAnimationsEnabled:",1);
  local_58 = PTR___NSConcreteStackBlock_000e80d8;
  local_50 = 0xc2000000;
  local_48 = FUN_000ace8c;
  puStack_40 = &DAT_000e9798;
  local_38 = param_1;
  UIView::
  animateWithDuration_delay_usingSpringWithDamping_initialSpringVelocity_options_animations_completion_
            ((ID)&_OBJC_CLASS___UIView,
             "animateWithDuration:delay:usingSpringWithDamping:initialSpringVelocity:options:animations:completion:"
             ,0x3fe19999a0000000,0x3fa99999a0000000,0x3feb333340000000,0x3f847ae147ae147b,0x30000,
             &local_58,0);
  UIView::setAnimationsEnabled_((ID)&_OBJC_CLASS___UIView,"setAnimationsEnabled:",0);
  return;
}

