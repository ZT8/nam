/* Address: 000b7604 | Name: instance_DLMultiMediaOptionCell__layoutSubviews | Body bytes: 488 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void DLMultiMediaOptionCell::instance_DLMultiMediaOptionCell__layoutSubviews(ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ID local_50;
  class_t *pcStack_48;
  
  pcStack_48 = &objc::class_t::DLMultiMediaOptionCell;
  local_50 = param_1;
  UITableViewCell::layoutSubviews((ID)&local_50,"layoutSubviews");
  bVar1 = DLHelper::class_DLHelper__isDarkMode((ID)&objc::class_t::DLHelper,"isDarkMode");
  if (bVar1 == 0) {
    IVar2 = UIColor::colorWithRed_green_blue_alpha_
                      ((ID)&_OBJC_CLASS___UIColor,"colorWithRed:green:blue:alpha:",
                       0x3fee7e7e7e7e7e7e,0x3feebebebebebebf,0x3fef3f3f3f3f3f3f,0x3ff0000000000000);
    IVar3 = instance_DLMultiMediaOptionCell__containerView(param_1,"containerView");
    _objc_msgSend(IVar3,"setBackgroundColor:",IVar2);
    uVar4 = 0x3fa8181818181818;
    uVar5 = 0x3fb0101010101010;
    uVar6 = 0x3fb4141414141414;
  }
  else {
    IVar2 = UIColor::colorWithRed_green_blue_alpha_
                      ((ID)&_OBJC_CLASS___UIColor,"colorWithRed:green:blue:alpha:",
                       0x3fc2929292929293,0x3fc4949494949495,0x3fc7171717171717,0x3ff0000000000000);
    IVar3 = instance_DLMultiMediaOptionCell__containerView(param_1,"containerView");
    _objc_msgSend(IVar3,"setBackgroundColor:",IVar2);
    uVar4 = 0x3fef1f1f1f1f1f1f;
    uVar5 = 0x3fef3f3f3f3f3f3f;
    uVar6 = uVar5;
  }
  IVar2 = UIColor::colorWithRed_green_blue_alpha_
                    ((ID)&_OBJC_CLASS___UIColor,"colorWithRed:green:blue:alpha:",uVar4,uVar5,uVar6,
                     0x3ff0000000000000);
  IVar3 = instance_DLMultiMediaOptionCell__titleLabel(param_1,"titleLabel");
  _objc_msgSend(IVar3,"setTextColor:",IVar2);
  return;
}

