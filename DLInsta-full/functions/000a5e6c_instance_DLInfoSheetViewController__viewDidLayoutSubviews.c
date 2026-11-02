/* Address: 000a5e6c | Name: instance_DLInfoSheetViewController__viewDidLayoutSubviews | Body bytes: 920 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void DLInfoSheetViewController::instance_DLInfoSheetViewController__viewDidLayoutSubviews
               (ID param_1,SEL param_2)

{
  undefined **ppuVar1;
  bool bVar2;
  ID IVar3;
  ID IVar4;
  ID self;
  undefined8 uVar5;
  ID local_70;
  class_t *pcStack_68;
  
  pcStack_68 = &objc::class_t::DLInfoSheetViewController;
  local_70 = param_1;
  UIViewController::viewDidLayoutSubviews((ID)&local_70,"viewDidLayoutSubviews");
  bVar2 = DLHelper::class_DLHelper__isDarkMode((ID)&objc::class_t::DLHelper,"isDarkMode");
  if (bVar2 == 0) {
    uVar5 = 0x3fedfdfdfdfdfdfe;
  }
  else {
    uVar5 = 0x3fc3131313131313;
  }
  IVar3 = UIColor::colorWithRed_green_blue_alpha_
                    ((ID)&_OBJC_CLASS___UIColor,"colorWithRed:green:blue:alpha:",uVar5,uVar5,uVar5,
                     0x3ff0000000000000);
  IVar4 = _objc_msgSend(param_1,"view");
  _objc_msgSend(IVar4,"setBackgroundColor:",IVar3);
  IVar3 = _objc_msgSend(param_1,"view");
  _objc_msgSend(IVar3,"bounds");
  IVar3 = UIBezierPath::bezierPathWithRoundedRect_byRoundingCorners_cornerRadii_
                    ((ID)&_OBJC_CLASS___UIBezierPath,
                     "bezierPathWithRoundedRect:byRoundingCorners:cornerRadii:",3);
  IVar4 = _objc_alloc(&_OBJC_CLASS___CAShapeLayer);
  IVar4 = CAShapeLayer::init(IVar4,"init");
  self = _objc_msgSend(param_1,"view");
  _objc_msgSend(self,"bounds");
  CAShapeLayer::setFrame_(IVar4,"setFrame:");
  IVar3 = _objc_retainAutorelease(IVar3);
  IVar3 = _objc_msgSend(IVar3,"CGPath");
  CAShapeLayer::setPath_(IVar4,"setPath:",IVar3);
  IVar3 = _objc_msgSend(param_1,"view");
  IVar3 = _objc_msgSend(IVar3,"layer");
  _objc_msgSend(IVar3,"setMask:",IVar4);
  bVar2 = DLHelper::class_DLHelper__isDarkMode((ID)&objc::class_t::DLHelper,"isDarkMode");
  ppuVar1 = &PTR_s_whiteColor_000fb648;
  if (bVar2 == 0) {
    ppuVar1 = &PTR_s_blackColor_000fbc88;
  }
  IVar3 = UIColor::blackColor((ID)&_OBJC_CLASS___UIColor,*ppuVar1);
  IVar4 = instance_DLInfoSheetViewController__titleLabel(param_1,"titleLabel");
  _objc_msgSend(IVar4,"setTextColor:",IVar3);
  bVar2 = DLHelper::class_DLHelper__isDarkMode((ID)&objc::class_t::DLHelper,"isDarkMode");
  ppuVar1 = &PTR_s_whiteColor_000fb648;
  if (bVar2 == 0) {
    ppuVar1 = &PTR_s_blackColor_000fbc88;
  }
  IVar3 = UIColor::blackColor((ID)&_OBJC_CLASS___UIColor,*ppuVar1);
  IVar4 = instance_DLInfoSheetViewController__infoLabel(param_1,"infoLabel");
  _objc_msgSend(IVar4,"setTextColor:",IVar3);
  bVar2 = DLHelper::class_DLHelper__isDarkMode((ID)&objc::class_t::DLHelper,"isDarkMode");
  ppuVar1 = &PTR_s_whiteColor_000fb648;
  if (bVar2 == 0) {
    ppuVar1 = &PTR_s_blackColor_000fbc88;
  }
  IVar3 = UIColor::blackColor((ID)&_OBJC_CLASS___UIColor,*ppuVar1);
  IVar4 = instance_DLInfoSheetViewController__iconImageView(param_1,"iconImageView");
  _objc_msgSend(IVar4,"setTintColor:",IVar3);
  return;
}

