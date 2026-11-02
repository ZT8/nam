/* Address: 000ab388 | Name: instance_DLMentionsViewController__viewDidLayoutSubviews | Body bytes: 484 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void DLMentionsViewController::instance_DLMentionsViewController__viewDidLayoutSubviews
               (ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ID local_50;
  class_t *pcStack_48;
  
  pcStack_48 = &objc::class_t::DLMentionsViewController;
  local_50 = param_1;
  DLPopupViewController::instance_DLPopupViewController__viewDidLayoutSubviews
            ((ID)&local_50,"viewDidLayoutSubviews");
  bVar1 = DLHelper::class_DLHelper__isDarkMode((ID)&objc::class_t::DLHelper,"isDarkMode");
  if (bVar1 == 0) {
    IVar2 = UIColor::colorWithRed_green_blue_alpha_
                      ((ID)&_OBJC_CLASS___UIColor,"colorWithRed:green:blue:alpha:",
                       0x3fa8181818181818,0x3fb0101010101010,0x3fb4141414141414,0x3ff0000000000000);
    IVar3 = instance_DLMentionsViewController__titleLabel(param_1,"titleLabel");
    _objc_msgSend(IVar3,"setTextColor:",IVar2);
    uVar4 = 0x3fdbdbdbdbdbdbdc;
    uVar5 = 0x3fdd9d9d9d9d9d9e;
    uVar6 = 0x3fe0101010101010;
  }
  else {
    IVar2 = UIColor::colorWithRed_green_blue_alpha_
                      ((ID)&_OBJC_CLASS___UIColor,"colorWithRed:green:blue:alpha:",
                       0x3fef1f1f1f1f1f1f,0x3fef3f3f3f3f3f3f,0x3fef3f3f3f3f3f3f,0x3ff0000000000000);
    IVar3 = instance_DLMentionsViewController__titleLabel(param_1,"titleLabel");
    _objc_msgSend(IVar3,"setTextColor:",IVar2);
    uVar4 = 0x3fe4545454545454;
    uVar5 = 0x3fe5555555555555;
    uVar6 = 0x3fe6969696969697;
  }
  IVar2 = UIColor::colorWithRed_green_blue_alpha_
                    ((ID)&_OBJC_CLASS___UIColor,"colorWithRed:green:blue:alpha:",uVar4,uVar5,uVar6,
                     0x3ff0000000000000);
  IVar3 = instance_DLMentionsViewController__emptyLabel(param_1,"emptyLabel");
  _objc_msgSend(IVar3,"setTextColor:",IVar2);
  return;
}

