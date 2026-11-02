/* Address: 000b77ec | Name: instance_DLMultiMediaOptionCell__setupViews | Body bytes: 2080 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

void DLMultiMediaOptionCell::instance_DLMultiMediaOptionCell__setupViews(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = UIView::new((ID)&_OBJC_CLASS___UIView,"new");
  instance_DLMultiMediaOptionCell__setContainerView_(param_1,"setContainerView:",IVar1);
  IVar1 = instance_DLMultiMediaOptionCell__containerView(param_1,"containerView");
  _objc_msgSend(IVar1,"setTranslatesAutoresizingMaskIntoConstraints:",0);
  IVar1 = instance_DLMultiMediaOptionCell__containerView(param_1,"containerView");
  IVar1 = _objc_msgSend(IVar1,"layer");
  _objc_msgSend(IVar1,"setCornerRadius:",0x4024000000000000);
  IVar1 = instance_DLMultiMediaOptionCell__containerView(param_1,"containerView");
  IVar1 = _objc_msgSend(IVar1,"layer");
  _objc_msgSend(IVar1,"setMasksToBounds:",0);
  IVar1 = UIColor::blackColor((ID)&_OBJC_CLASS___UIColor,"blackColor");
  IVar1 = _objc_retainAutorelease(IVar1);
  IVar1 = _objc_msgSend(IVar1,"CGColor");
  IVar2 = instance_DLMultiMediaOptionCell__containerView(param_1,"containerView");
  IVar2 = _objc_msgSend(IVar2,"layer");
  _objc_msgSend(IVar2,"setShadowColor:",IVar1);
  IVar1 = instance_DLMultiMediaOptionCell__containerView(param_1,"containerView");
  IVar1 = _objc_msgSend(IVar1,"layer");
  _objc_msgSend(IVar1,"setShadowOpacity:",0x3dcccccd);
  IVar1 = instance_DLMultiMediaOptionCell__containerView(param_1,"containerView");
  IVar1 = _objc_msgSend(IVar1,"layer");
  _objc_msgSend(IVar1,"setShadowOffset:",0,0x4000000000000000);
  IVar1 = instance_DLMultiMediaOptionCell__containerView(param_1,"containerView");
  IVar1 = _objc_msgSend(IVar1,"layer");
  _objc_msgSend(IVar1,"setShadowRadius:",0x4008000000000000);
  IVar1 = instance_DLMultiMediaOptionCell__containerView(param_1,"containerView");
  _objc_msgSend(param_1,"addSubview:",IVar1);
  IVar1 = instance_DLMultiMediaOptionCell__containerView(param_1,"containerView");
  IVar1 = _objc_msgSend(IVar1,"topAnchor");
  IVar2 = _objc_msgSend(param_1,"topAnchor");
  IVar1 = _objc_msgSend(IVar1,"constraintEqualToAnchor:constant:",0x4010000000000000,IVar2);
  _objc_msgSend(IVar1,"setActive:",1);
  IVar1 = instance_DLMultiMediaOptionCell__containerView(param_1,"containerView");
  IVar1 = _objc_msgSend(IVar1,"leadingAnchor");
  IVar2 = _objc_msgSend(param_1,"leadingAnchor");
  IVar1 = _objc_msgSend(IVar1,"constraintEqualToAnchor:constant:",0x4010000000000000,IVar2);
  _objc_msgSend(IVar1,"setActive:",1);
  IVar1 = instance_DLMultiMediaOptionCell__containerView(param_1,"containerView");
  IVar1 = _objc_msgSend(IVar1,"trailingAnchor");
  IVar2 = _objc_msgSend(param_1,"trailingAnchor");
  IVar1 = _objc_msgSend(IVar1,"constraintEqualToAnchor:constant:",0xc010000000000000,IVar2);
  _objc_msgSend(IVar1,"setActive:",1);
  IVar1 = instance_DLMultiMediaOptionCell__containerView(param_1,"containerView");
  IVar1 = _objc_msgSend(IVar1,"bottomAnchor");
  IVar2 = _objc_msgSend(param_1,"bottomAnchor");
  IVar1 = _objc_msgSend(IVar1,"constraintEqualToAnchor:constant:",0xc010000000000000,IVar2);
  _objc_msgSend(IVar1,"setActive:",1);
  IVar1 = _objc_alloc(&_OBJC_CLASS___UILabel);
  IVar1 = UILabel::init(IVar1,"init");
  instance_DLMultiMediaOptionCell__setTitleLabel_(param_1,"setTitleLabel:",IVar1);
  IVar1 = instance_DLMultiMediaOptionCell__titleLabel(param_1,"titleLabel");
  _objc_msgSend(IVar1,"setTranslatesAutoresizingMaskIntoConstraints:",0);
  IVar1 = UIFont::systemFontOfSize_weight_
                    ((ID)&_OBJC_CLASS___UIFont,"systemFontOfSize:weight:",0x402c000000000000,
                     *(undefined8 *)PTR__UIFontWeightSemibold_000e80c8);
  IVar2 = instance_DLMultiMediaOptionCell__titleLabel(param_1,"titleLabel");
  _objc_msgSend(IVar2,"setFont:",IVar1);
  IVar1 = instance_DLMultiMediaOptionCell__titleLabel(param_1,"titleLabel");
  _objc_msgSend(IVar1,"setTextAlignment:",1);
  IVar1 = instance_DLMultiMediaOptionCell__containerView(param_1,"containerView");
  IVar2 = instance_DLMultiMediaOptionCell__titleLabel(param_1,"titleLabel");
  _objc_msgSend(IVar1,"addSubview:",IVar2);
  IVar1 = instance_DLMultiMediaOptionCell__titleLabel(param_1,"titleLabel");
  IVar1 = _objc_msgSend(IVar1,"centerYAnchor");
  IVar2 = instance_DLMultiMediaOptionCell__containerView(param_1,"containerView");
  IVar2 = _objc_msgSend(IVar2,"centerYAnchor");
  IVar1 = _objc_msgSend(IVar1,"constraintEqualToAnchor:",IVar2);
  _objc_msgSend(IVar1,"setActive:",1);
  IVar1 = instance_DLMultiMediaOptionCell__titleLabel(param_1,"titleLabel");
  IVar1 = _objc_msgSend(IVar1,"centerXAnchor");
  IVar2 = instance_DLMultiMediaOptionCell__containerView(param_1,"containerView");
  IVar2 = _objc_msgSend(IVar2,"centerXAnchor");
  IVar1 = _objc_msgSend(IVar1,"constraintEqualToAnchor:",IVar2);
  _objc_msgSend(IVar1,"setActive:",1);
  return;
}

