/* Address: 000a9db8 | Name: instance_DLMentionViewCell__layoutSubviews | Body bytes: 1152 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void DLMentionViewCell::instance_DLMentionViewCell__layoutSubviews(ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ID local_80;
  class_t *pcStack_78;
  
  pcStack_78 = &objc::class_t::DLMentionViewCell;
  local_80 = param_1;
  UITableViewCell::layoutSubviews((ID)&local_80,"layoutSubviews");
  bVar1 = DLHelper::class_DLHelper__isDarkMode((ID)&objc::class_t::DLHelper,"isDarkMode");
  if (bVar1 == 0) {
    IVar2 = UIColor::colorWithRed_green_blue_alpha_
                      ((ID)&_OBJC_CLASS___UIColor,"colorWithRed:green:blue:alpha:",
                       0x3fa8181818181818,0x3fb0101010101010,0x3fb4141414141414,0x3ff0000000000000);
    IVar2 = UIColor::colorWithAlphaComponent_(IVar2,"colorWithAlphaComponent:",0x3fb999999999999a);
    IVar3 = _objc_msgSend(param_1,"selectedBackgroundView");
    _objc_msgSend(IVar3,"setBackgroundColor:",IVar2);
    IVar2 = UIColor::colorWithRed_green_blue_alpha_
                      ((ID)&_OBJC_CLASS___UIColor,"colorWithRed:green:blue:alpha:",
                       0x3fa8181818181818,0x3fb0101010101010,0x3fb4141414141414,0x3ff0000000000000);
    IVar2 = UIColor::colorWithAlphaComponent_(IVar2,"colorWithAlphaComponent:",0x3fc3333333333333);
    IVar2 = _objc_retainAutorelease(IVar2);
    IVar2 = _objc_msgSend(IVar2,"CGColor");
    IVar3 = instance_DLMentionViewCell__avatarImageView(param_1,"avatarImageView");
    IVar3 = _objc_msgSend(IVar3,"layer");
    _objc_msgSend(IVar3,"setBorderColor:",IVar2);
    IVar2 = UIColor::colorWithRed_green_blue_alpha_
                      ((ID)&_OBJC_CLASS___UIColor,"colorWithRed:green:blue:alpha:",
                       0x3fa8181818181818,0x3fb0101010101010,0x3fb4141414141414,0x3ff0000000000000);
    IVar3 = instance_DLMentionViewCell__usernameLabel(param_1,"usernameLabel");
    _objc_msgSend(IVar3,"setTextColor:",IVar2);
    uVar4 = 0x3fdbdbdbdbdbdbdc;
    uVar5 = 0x3fdd9d9d9d9d9d9e;
    uVar6 = 0x3fe0101010101010;
  }
  else {
    IVar2 = UIColor::colorWithRed_green_blue_alpha_
                      ((ID)&_OBJC_CLASS___UIColor,"colorWithRed:green:blue:alpha:",
                       0x3fc2929292929293,0x3fc4949494949495,0x3fc7171717171717,0x3ff0000000000000);
    IVar2 = UIColor::colorWithAlphaComponent_(IVar2,"colorWithAlphaComponent:",0x3fe0000000000000);
    IVar3 = _objc_msgSend(param_1,"selectedBackgroundView");
    _objc_msgSend(IVar3,"setBackgroundColor:",IVar2);
    IVar2 = UIColor::colorWithWhite_alpha_
                      ((ID)&_OBJC_CLASS___UIColor,"colorWithWhite:alpha:",0x3ff0000000000000,
                       0x3fc3333333333333);
    IVar2 = _objc_retainAutorelease(IVar2);
    IVar2 = _objc_msgSend(IVar2,"CGColor");
    IVar3 = instance_DLMentionViewCell__avatarImageView(param_1,"avatarImageView");
    IVar3 = _objc_msgSend(IVar3,"layer");
    _objc_msgSend(IVar3,"setBorderColor:",IVar2);
    IVar2 = UIColor::colorWithRed_green_blue_alpha_
                      ((ID)&_OBJC_CLASS___UIColor,"colorWithRed:green:blue:alpha:",
                       0x3fef1f1f1f1f1f1f,0x3fef3f3f3f3f3f3f,0x3fef3f3f3f3f3f3f,0x3ff0000000000000);
    IVar3 = instance_DLMentionViewCell__usernameLabel(param_1,"usernameLabel");
    _objc_msgSend(IVar3,"setTextColor:",IVar2);
    uVar4 = 0x3fe4545454545454;
    uVar5 = 0x3fe5555555555555;
    uVar6 = 0x3fe6969696969697;
  }
  IVar2 = UIColor::colorWithRed_green_blue_alpha_
                    ((ID)&_OBJC_CLASS___UIColor,"colorWithRed:green:blue:alpha:",uVar4,uVar5,uVar6,
                     0x3ff0000000000000);
  IVar3 = instance_DLMentionViewCell__fullnameLabel(param_1,"fullnameLabel");
  _objc_msgSend(IVar3,"setTextColor:",IVar2);
  return;
}

