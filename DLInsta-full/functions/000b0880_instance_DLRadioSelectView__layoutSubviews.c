/* Address: 000b0880 | Name: instance_DLRadioSelectView__layoutSubviews | Body bytes: 1264 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void DLRadioSelectView::instance_DLRadioSelectView__layoutSubviews(ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double in_d2;
  undefined8 uVar7;
  double dVar8;
  ID local_80;
  class_t *pcStack_78;
  
  pcStack_78 = &objc::class_t::DLRadioSelectView;
  local_80 = param_1;
  UIView::layoutSubviews((ID)&local_80,"layoutSubviews");
  _objc_msgSend(param_1,"frame");
  IVar2 = _objc_msgSend(param_1,"layer",0x3fe0000000000000);
  _objc_msgSend(IVar2,"setCornerRadius:",in_d2 * 0.5);
  bVar1 = instance_DLRadioSelectView__checked(param_1,"checked");
  if (bVar1 == 0) {
    IVar2 = instance_DLRadioSelectView__checkedDotLayer(param_1,"checkedDotLayer");
    _objc_msgSend(IVar2,"removeFromSuperlayer");
    IVar2 = _objc_msgSend(param_1,"layer");
    _objc_msgSend(IVar2,"setBorderWidth:",0x3ff8000000000000);
    bVar1 = DLHelper::class_DLHelper__isDarkMode((ID)&objc::class_t::DLHelper,"isDarkMode");
    if (bVar1 == 0) {
      uVar5 = 0x3fdbdbdbdbdbdbdc;
      uVar6 = 0x3fdd9d9d9d9d9d9e;
      uVar7 = 0x3fe0101010101010;
    }
    else {
      uVar5 = 0x3fe4545454545454;
      uVar6 = 0x3fe5555555555555;
      uVar7 = 0x3fe6969696969697;
    }
    IVar2 = UIColor::colorWithRed_green_blue_alpha_
                      ((ID)&_OBJC_CLASS___UIColor,"colorWithRed:green:blue:alpha:",uVar5,uVar6,uVar7
                       ,0x3ff0000000000000);
    IVar2 = _objc_retainAutorelease(IVar2);
    IVar2 = _objc_msgSend(IVar2,"CGColor");
    IVar3 = _objc_msgSend(param_1,"layer");
    pcVar4 = "setBorderColor:";
  }
  else {
    bVar1 = DLHelper::class_DLHelper__isDarkMode((ID)&objc::class_t::DLHelper,"isDarkMode");
    if (bVar1 == 0) {
      pcVar4 = "blackColor";
    }
    else {
      pcVar4 = "whiteColor";
    }
    IVar2 = UIColor::blackColor((ID)&_OBJC_CLASS___UIColor,pcVar4);
    IVar2 = _objc_retainAutorelease(IVar2);
    IVar2 = _objc_msgSend(IVar2,"CGColor");
    IVar3 = _objc_msgSend(param_1,"layer");
    _objc_msgSend(IVar3,"setBackgroundColor:",IVar2);
    IVar2 = _objc_msgSend(param_1,"layer");
    _objc_msgSend(IVar2,"setBorderWidth:",0);
    IVar2 = UIColor::blackColor((ID)&_OBJC_CLASS___UIColor,"blackColor");
    IVar2 = _objc_retainAutorelease(IVar2);
    IVar2 = _objc_msgSend(IVar2,"CGColor");
    IVar3 = _objc_msgSend(param_1,"layer");
    _objc_msgSend(IVar3,"setBorderColor:",IVar2);
    IVar2 = CALayer::layer((ID)&_OBJC_CLASS___CALayer,"layer");
    instance_DLRadioSelectView__setCheckedDotLayer_(param_1,"setCheckedDotLayer:",IVar2);
    IVar2 = instance_DLRadioSelectView__checkedDotLayer(param_1,"checkedDotLayer");
    dVar8 = 8.0;
    _objc_msgSend(IVar2,"setFrame:",0x4020000000000000,0x4020000000000000,0x4020000000000000,
                  0x4020000000000000);
    bVar1 = DLHelper::class_DLHelper__isDarkMode((ID)&objc::class_t::DLHelper,"isDarkMode");
    if (bVar1 == 0) {
      IVar2 = UIColor::whiteColor((ID)&_OBJC_CLASS___UIColor,"whiteColor");
    }
    else {
      dVar8 = 0.0784313725490196;
      IVar2 = UIColor::colorWithRed_green_blue_alpha_
                        ((ID)&_OBJC_CLASS___UIColor,"colorWithRed:green:blue:alpha:",
                         0x3fa6161616161616,0x3fae1e1e1e1e1e1e,0x3fb4141414141414,0x3ff0000000000000
                        );
    }
    IVar2 = _objc_retainAutorelease(IVar2);
    IVar2 = _objc_msgSend(IVar2,"CGColor");
    IVar3 = instance_DLRadioSelectView__checkedDotLayer(param_1,"checkedDotLayer");
    _objc_msgSend(IVar3,"setBackgroundColor:",IVar2);
    IVar2 = instance_DLRadioSelectView__checkedDotLayer(param_1,"checkedDotLayer");
    _objc_msgSend(IVar2,"frame");
    IVar2 = instance_DLRadioSelectView__checkedDotLayer(param_1,"checkedDotLayer");
    _objc_msgSend(IVar2,"setCornerRadius:",dVar8 * 0.5);
    IVar3 = _objc_msgSend(param_1,"layer");
    IVar2 = instance_DLRadioSelectView__checkedDotLayer(param_1,"checkedDotLayer");
    pcVar4 = "addSublayer:";
  }
  _objc_msgSend(IVar3,pcVar4,IVar2);
  return;
}

