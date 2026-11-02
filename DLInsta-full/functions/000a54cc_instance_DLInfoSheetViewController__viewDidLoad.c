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

