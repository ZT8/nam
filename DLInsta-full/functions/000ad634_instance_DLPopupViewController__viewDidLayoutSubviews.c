/* Address: 000ad634 | Name: instance_DLPopupViewController__viewDidLayoutSubviews | Body bytes: 624 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void DLPopupViewController::instance_DLPopupViewController__viewDidLayoutSubviews
               (ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  ID self;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  objc_super local_60;
  
  local_60.super_class = &objc::class_t::DLPopupViewController;
  local_60.receiver = param_1;
  _objc_msgSendSuper2(&local_60,"viewDidLayoutSubviews");
  bVar1 = DLHelper::class_DLHelper__isDarkMode((ID)&objc::class_t::DLHelper,"isDarkMode");
  if (bVar1 == 0) {
    uVar5 = 0x3ff0000000000000;
    IVar2 = UIColor::colorWithRed_green_blue_alpha_
                      ((ID)&_OBJC_CLASS___UIColor,"colorWithRed:green:blue:alpha:",
                       0x3ff0000000000000,0x3ff0000000000000,0x3ff0000000000000,0x3ff0000000000000);
    uVar4 = 0x3feccccccccccccd;
  }
  else {
    uVar5 = 0x3fb4141414141414;
    IVar2 = UIColor::colorWithRed_green_blue_alpha_
                      ((ID)&_OBJC_CLASS___UIColor,"colorWithRed:green:blue:alpha:",
                       0x3fa8181818181818,0x3fb0101010101010,0x3fb4141414141414,0x3ff0000000000000);
    uVar4 = 0x3fe999999999999a;
  }
  IVar2 = UIColor::colorWithAlphaComponent_(IVar2,"colorWithAlphaComponent:",uVar4);
  lVar3 = (long)blurView;
  _objc_msgSend(*(ID *)(param_1 + lVar3),"setBackgroundColor:",IVar2);
  IVar2 = _objc_msgSend(param_1,"view");
  _objc_msgSend(IVar2,"bounds");
  _objc_msgSend(*(ID *)(param_1 + (long)backgroundView),"setFrame:");
  IVar2 = instance_DLPopupViewController__blurWidthLayoutConstraint
                    (param_1,"blurWidthLayoutConstraint");
  _objc_msgSend(IVar2,"setActive:",0);
  IVar2 = _objc_msgSend(*(ID *)(param_1 + lVar3),"widthAnchor");
  self = _objc_msgSend(param_1,"view");
  _objc_msgSend(self,"bounds");
  IVar2 = _objc_msgSend(IVar2,"constraintEqualToConstant:",uVar5);
  instance_DLPopupViewController__setBlurWidthLayoutConstraint_
            (param_1,"setBlurWidthLayoutConstraint:",IVar2);
  IVar2 = instance_DLPopupViewController__blurWidthLayoutConstraint
                    (param_1,"blurWidthLayoutConstraint");
  _objc_msgSend(IVar2,"setActive:",1);
  return;
}

