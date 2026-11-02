/* Address: 000b3704 | Name: instance_FRPSwitchCell__layoutSubviews | Body bytes: 448 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void FRPSwitchCell::instance_FRPSwitchCell__layoutSubviews(ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  objc_super local_70;
  
  local_70.super_class = &objc::class_t::FRPSwitchCell;
  local_70.receiver = param_1;
  _objc_msgSendSuper2(&local_70,"layoutSubviews");
  bVar1 = DLHelper::class_DLHelper__isDarkMode((ID)&objc::class_t::DLHelper,"isDarkMode");
  if (bVar1 == 0) {
    uVar4 = 0x3fa8181818181818;
    uVar6 = 0x3fb0101010101010;
    uVar5 = 0x3fb4141414141414;
  }
  else {
    uVar4 = 0x3fef1f1f1f1f1f1f;
    uVar6 = 0x3fef3f3f3f3f3f3f;
    uVar5 = uVar6;
  }
  IVar2 = UIColor::colorWithRed_green_blue_alpha_
                    ((ID)&_OBJC_CLASS___UIColor,"colorWithRed:green:blue:alpha:",uVar4,uVar6,uVar5,
                     0x3ff0000000000000);
  IVar3 = instance_FRPSwitchCell__switchView(param_1,"switchView");
  _objc_msgSend(IVar3,"setOnTintColor:",IVar2);
  bVar1 = DLHelper::class_DLHelper__isDarkMode((ID)&objc::class_t::DLHelper,"isDarkMode");
  if (bVar1 == 0) {
    uVar5 = 0x3ff0000000000000;
    uVar4 = 0x3ff0000000000000;
    uVar6 = 0x3ff0000000000000;
  }
  else {
    uVar5 = 0x3fa8181818181818;
    uVar4 = 0x3fb0101010101010;
    uVar6 = 0x3fb4141414141414;
  }
  IVar2 = UIColor::colorWithRed_green_blue_alpha_
                    ((ID)&_OBJC_CLASS___UIColor,"colorWithRed:green:blue:alpha:",uVar5,uVar4,uVar6,
                     0x3ff0000000000000);
  IVar3 = instance_FRPSwitchCell__switchView(param_1,"switchView");
  _objc_msgSend(IVar3,"setThumbTintColor:",IVar2);
  return;
}

