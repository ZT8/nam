/* Automatic pseudocode grouped by Objective-C class. NOT original source. */

/* -[DLInfoSheetViewController initWithTitle:info:] | encoding @32@0:8@16@24 */
/* Address: 000a5418 | Name: instance_DLInfoSheetViewController__initWithTitle_info_ | Body bytes: 180 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

ID DLInfoSheetViewController::instance_DLInfoSheetViewController__initWithTitle_info_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  ID local_50;
  class_t *pcStack_48;
  
  pcStack_48 = &objc::class_t::DLInfoSheetViewController;
  local_50 = param_1;
  IVar1 = UIViewController::init((ID)&local_50,"init");
  if (IVar1 != 0) {
    *(ID *)(IVar1 + (long)_titleInfo) = param_3;
    *(ID *)(IVar1 + (long)_info) = param_4;
  }
  return IVar1;
}


/* -[DLInfoSheetViewController viewDidLoad] | encoding v16@0:8 */
/* Address: 000a54cc | Name: instance_DLInfoSheetViewController__viewDidLoad | Body bytes: 2464 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void DLInfoSheetViewController::instance_DLInfoSheetViewController__viewDidLoad
               (ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ID local_70;
  class_t *pcStack_68;
  
  pcStack_68 = &objc::class_t::DLInfoSheetViewController;
  local_70 = param_1;
  UIViewController::viewDidLoad((ID)&local_70,"viewDidLoad");
  IVar2 = _objc_alloc(&_OBJC_CLASS___UIView);
  IVar2 = UIView::init(IVar2,"init");
  UIView::setTranslatesAutoresizingMaskIntoConstraints_
            (IVar2,"setTranslatesAutoresizingMaskIntoConstraints:",0);
  IVar3 = _objc_msgSend(param_1,"view");
  _objc_msgSend(IVar3,"addSubview:",IVar2);
  IVar3 = UIView::leadingAnchor(IVar2,"leadingAnchor");
  IVar4 = _objc_msgSend(param_1,"view");
  IVar4 = _objc_msgSend(IVar4,"layoutMarginsGuide");
  IVar4 = _objc_msgSend(IVar4,"leadingAnchor");
  IVar3 = UIView::constraintEqualToAnchor_constant_
                    (IVar3,"constraintEqualToAnchor:constant:",0x4020000000000000,IVar4);
  UIView::setActive_(IVar3,"setActive:",1);
  IVar3 = UIView::trailingAnchor(IVar2,"trailingAnchor");
  IVar4 = _objc_msgSend(param_1,"view");
  IVar4 = _objc_msgSend(IVar4,"layoutMarginsGuide");
  IVar4 = _objc_msgSend(IVar4,"trailingAnchor");
  IVar3 = UIView::constraintEqualToAnchor_constant_
                    (IVar3,"constraintEqualToAnchor:constant:",0xc020000000000000,IVar4);
  UIView::setActive_(IVar3,"setActive:",1);
  IVar3 = _objc_alloc(&_OBJC_CLASS___UILabel);
  IVar3 = UILabel::init(IVar3,"init");
  lVar6 = (long)_titleLabel;
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  *(ID *)(param_1 + lVar6) = IVar3;
  _objc_msgSend(*(ID *)(param_1 + lVar6),"setTranslatesAutoresizingMaskIntoConstraints:",uVar5,0);
  _objc_msgSend(*(ID *)(param_1 + lVar6),"setNumberOfLines:",0);
  IVar3 = UIFont::systemFontOfSize_weight_
                    ((ID)&_OBJC_CLASS___UIFont,"systemFontOfSize:weight:",0x402e000000000000,
                     *(undefined8 *)PTR__UIFontWeightBold_000e80a8);
  _objc_msgSend(*(ID *)(param_1 + lVar6),"setFont:",IVar3);
  IVar3 = instance_DLInfoSheetViewController__titleInfo(param_1,"titleInfo");
  _objc_msgSend(*(ID *)(param_1 + lVar6),"setText:",IVar3);
  UIView::addSubview_(IVar2,"addSubview:",*(undefined8 *)(param_1 + lVar6));
  IVar3 = _objc_msgSend(*(ID *)(param_1 + lVar6),"topAnchor");
  IVar4 = UIView::topAnchor(IVar2,"topAnchor");
  IVar3 = _objc_msgSend(IVar3,"constraintEqualToAnchor:constant:",0x4030000000000000,IVar4);
  _objc_msgSend(IVar3,"setActive:",1);
  IVar3 = _objc_msgSend(*(ID *)(param_1 + lVar6),"centerXAnchor");
  IVar4 = UIView::centerXAnchor(IVar2,"centerXAnchor");
  IVar3 = _objc_msgSend(IVar3,"constraintEqualToAnchor:",IVar4);
  _objc_msgSend(IVar3,"setActive:",1);
  IVar3 = _objc_alloc(&_OBJC_CLASS___UIImageView);
  IVar4 = DLHelper::class_DLHelper__imageIcon_((ID)&objc::class_t::DLHelper,"imageIcon:",0xeb8e8);
  IVar4 = _objc_msgSend(IVar4,"imageWithRenderingMode:",2);
  IVar3 = UIImageView::initWithImage_(IVar3,"initWithImage:",IVar4);
  lVar7 = (long)_iconImageView;
  uVar5 = *(undefined8 *)(param_1 + lVar7);
  *(ID *)(param_1 + lVar7) = IVar3;
  _objc_msgSend(*(ID *)(param_1 + lVar7),"setTranslatesAutoresizingMaskIntoConstraints:",uVar5,0);
  UIView::addSubview_(IVar2,"addSubview:",*(undefined8 *)(param_1 + lVar7));
  IVar3 = _objc_msgSend(*(ID *)(param_1 + lVar7),"topAnchor");
  IVar4 = _objc_msgSend(*(ID *)(param_1 + lVar6),"bottomAnchor");
  IVar3 = _objc_msgSend(IVar3,"constraintEqualToAnchor:constant:",0x4028000000000000,IVar4);
  _objc_msgSend(IVar3,"setActive:",1);
  IVar3 = _objc_msgSend(*(ID *)(param_1 + lVar7),"leadingAnchor");
  IVar4 = UIView::leadingAnchor(IVar2,"leadingAnchor");
  IVar3 = _objc_msgSend(IVar3,"constraintEqualToAnchor:",IVar4);
  _objc_msgSend(IVar3,"setActive:",1);
  IVar3 = _objc_msgSend(*(ID *)(param_1 + lVar7),"widthAnchor");
  IVar3 = _objc_msgSend(IVar3,"constraintEqualToConstant:",0x4038000000000000);
  _objc_msgSend(IVar3,"setActive:",1);
  IVar3 = _objc_msgSend(*(ID *)(param_1 + lVar7),"heightAnchor");
  IVar3 = _objc_msgSend(IVar3,"constraintEqualToConstant:",0x4038000000000000);
  _objc_msgSend(IVar3,"setActive:",1);
  IVar3 = _objc_alloc(&_OBJC_CLASS___UILabel);
  IVar3 = UILabel::init(IVar3,"init");
  lVar6 = (long)_infoLabel;
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  *(ID *)(param_1 + lVar6) = IVar3;
  _objc_msgSend(*(ID *)(param_1 + lVar6),"setTranslatesAutoresizingMaskIntoConstraints:",uVar5,0);
  _objc_msgSend(*(ID *)(param_1 + lVar6),"setNumberOfLines:",0);
  IVar3 = UIFont::systemFontOfSize_weight_
                    ((ID)&_OBJC_CLASS___UIFont,"systemFontOfSize:weight:",0x402a000000000000,
                     *(undefined8 *)PTR__UIFontWeightRegular_000e80c0);
  _objc_msgSend(*(ID *)(param_1 + lVar6),"setFont:",IVar3);
  IVar3 = instance_DLInfoSheetViewController__info(param_1,"info");
  _objc_msgSend(*(ID *)(param_1 + lVar6),"setText:",IVar3);
  UIView::addSubview_(IVar2,"addSubview:",*(undefined8 *)(param_1 + lVar6));
  IVar3 = _objc_msgSend(*(ID *)(param_1 + lVar6),"leadingAnchor");
  IVar4 = _objc_msgSend(*(ID *)(param_1 + lVar7),"trailingAnchor");
  IVar3 = _objc_msgSend(IVar3,"constraintEqualToAnchor:constant:",0x4020000000000000,IVar4);
  _objc_msgSend(IVar3,"setActive:",1);
  IVar3 = _objc_msgSend(*(ID *)(param_1 + lVar6),"trailingAnchor");
  IVar4 = UIView::trailingAnchor(IVar2,"trailingAnchor");
  IVar3 = _objc_msgSend(IVar3,"constraintEqualToAnchor:",IVar4);
  _objc_msgSend(IVar3,"setActive:",1);
  IVar3 = _objc_msgSend(*(ID *)(param_1 + lVar6),"centerYAnchor");
  IVar4 = _objc_msgSend(*(ID *)(param_1 + lVar7),"centerYAnchor");
  IVar3 = _objc_msgSend(IVar3,"constraintEqualToAnchor:",IVar4);
  _objc_msgSend(IVar3,"setActive:",1);
  IVar3 = _objc_msgSend(*(ID *)(param_1 + lVar6),"bottomAnchor");
  IVar4 = UIView::bottomAnchor(IVar2,"bottomAnchor");
  IVar3 = _objc_msgSend(IVar3,"constraintEqualToAnchor:constant:",0x4028000000000000,IVar4);
  _objc_msgSend(IVar3,"setActive:",1);
  bVar1 = DLHelper::class_DLHelper__isDeviceLanguageArabic
                    ((ID)&objc::class_t::DLHelper,"isDeviceLanguageArabic");
  if (bVar1 != 0) {
    DLHelper::class_DLHelper__switchToRTL_((ID)&objc::class_t::DLHelper,"switchToRTL:",IVar2);
    DLHelper::class_DLHelper__switchToRTL_
              ((ID)&objc::class_t::DLHelper,"switchToRTL:",*(ID *)(param_1 + lVar6));
  }
  return;
}


/* -[DLInfoSheetViewController viewDidLayoutSubviews] | encoding v16@0:8 */
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


/* -[DLInfoSheetViewController titleInfo] | encoding @16@0:8 */
/* Address: 000a6204 | Name: instance_DLInfoSheetViewController__titleInfo | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

ID DLInfoSheetViewController::instance_DLInfoSheetViewController__titleInfo(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_titleInfo);
}


/* -[DLInfoSheetViewController setTitleInfo:] | encoding v24@0:8@16 */
/* Address: 000a6214 | Name: instance_DLInfoSheetViewController__setTitleInfo_ | Body bytes: 20 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void DLInfoSheetViewController::instance_DLInfoSheetViewController__setTitleInfo_
               (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_titleInfo) = param_3;
  return;
}


/* -[DLInfoSheetViewController info] | encoding @16@0:8 */
/* Address: 000a6228 | Name: instance_DLInfoSheetViewController__info | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

ID DLInfoSheetViewController::instance_DLInfoSheetViewController__info(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_info);
}


/* -[DLInfoSheetViewController setInfo:] | encoding v24@0:8@16 */
/* Address: 000a6238 | Name: instance_DLInfoSheetViewController__setInfo_ | Body bytes: 20 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void DLInfoSheetViewController::instance_DLInfoSheetViewController__setInfo_
               (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_info) = param_3;
  return;
}


/* -[DLInfoSheetViewController titleLabel] | encoding @16@0:8 */
/* Address: 000a624c | Name: instance_DLInfoSheetViewController__titleLabel | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

ID DLInfoSheetViewController::instance_DLInfoSheetViewController__titleLabel(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_titleLabel);
}


/* -[DLInfoSheetViewController setTitleLabel:] | encoding v24@0:8@16 */
/* Address: 000a625c | Name: instance_DLInfoSheetViewController__setTitleLabel_ | Body bytes: 20 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void DLInfoSheetViewController::instance_DLInfoSheetViewController__setTitleLabel_
               (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_titleLabel) = param_3;
  return;
}


/* -[DLInfoSheetViewController infoLabel] | encoding @16@0:8 */
/* Address: 000a6270 | Name: instance_DLInfoSheetViewController__infoLabel | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

ID DLInfoSheetViewController::instance_DLInfoSheetViewController__infoLabel(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_infoLabel);
}


/* -[DLInfoSheetViewController setInfoLabel:] | encoding v24@0:8@16 */
/* Address: 000a6280 | Name: instance_DLInfoSheetViewController__setInfoLabel_ | Body bytes: 20 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void DLInfoSheetViewController::instance_DLInfoSheetViewController__setInfoLabel_
               (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_infoLabel) = param_3;
  return;
}


/* -[DLInfoSheetViewController iconImageView] | encoding @16@0:8 */
/* Address: 000a6294 | Name: instance_DLInfoSheetViewController__iconImageView | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

ID DLInfoSheetViewController::instance_DLInfoSheetViewController__iconImageView
             (ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_iconImageView);
}


/* -[DLInfoSheetViewController setIconImageView:] | encoding v24@0:8@16 */
/* Address: 000a62a4 | Name: instance_DLInfoSheetViewController__setIconImageView_ | Body bytes: 20 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void DLInfoSheetViewController::instance_DLInfoSheetViewController__setIconImageView_
               (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_iconImageView) = param_3;
  return;
}


/* -[DLInfoSheetViewController .cxx_destruct] | encoding v16@0:8 */
/* Address: 000a62b8 | Name: instance_DLInfoSheetViewController___cxx_destruct | Body bytes: 124 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void DLInfoSheetViewController::instance_DLInfoSheetViewController___cxx_destruct
               (ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_iconImageView) = 0;
  *(undefined8 *)(param_1 + (long)_infoLabel) = 0;
  *(undefined8 *)(param_1 + (long)_titleLabel) = 0;
  *(undefined8 *)(param_1 + (long)_info) = 0;
  *(undefined8 *)(param_1 + (long)_titleInfo) = 0;
  return;
}

