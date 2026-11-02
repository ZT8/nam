/* Automatic pseudocode grouped by Objective-C class. NOT original source. */

/* -[DLMultiMediaOptionCell initWithStyle:reuseIdentifier:] | encoding @32@0:8q16@24 */
/* Address: 000b7570 | Name: instance_DLMultiMediaOptionCell__initWithStyle_reuseIdentifier_ | Body bytes: 148 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

ID DLMultiMediaOptionCell::instance_DLMultiMediaOptionCell__initWithStyle_reuseIdentifier_
             (ID param_1,SEL param_2,long_long param_3,ID param_4)

{
  ID self;
  ID IVar1;
  ID local_30;
  class_t *pcStack_28;
  
  pcStack_28 = &objc::class_t::DLMultiMediaOptionCell;
  local_30 = param_1;
  self = UITableViewCell::initWithStyle_reuseIdentifier_
                   ((ID)&local_30,"initWithStyle:reuseIdentifier:");
  if (self != 0) {
    IVar1 = UIColor::clearColor((ID)&_OBJC_CLASS___UIColor,"clearColor");
    UITableViewCell::setBackgroundColor_(self,"setBackgroundColor:",IVar1);
    UITableViewCell::setupViews(self,"setupViews");
  }
  return self;
}


/* -[DLMultiMediaOptionCell layoutSubviews] | encoding v16@0:8 */
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


/* -[DLMultiMediaOptionCell setupViews] | encoding v16@0:8 */
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


/* -[DLMultiMediaOptionCell containerView] | encoding @16@0:8 */
/* Address: 000b800c | Name: instance_DLMultiMediaOptionCell__containerView | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

ID DLMultiMediaOptionCell::instance_DLMultiMediaOptionCell__containerView(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_containerView);
}


/* -[DLMultiMediaOptionCell setContainerView:] | encoding v24@0:8@16 */
/* Address: 000b801c | Name: instance_DLMultiMediaOptionCell__setContainerView_ | Body bytes: 20 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void DLMultiMediaOptionCell::instance_DLMultiMediaOptionCell__setContainerView_
               (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_containerView) = param_3;
  return;
}


/* -[DLMultiMediaOptionCell titleLabel] | encoding @16@0:8 */
/* Address: 000b8030 | Name: instance_DLMultiMediaOptionCell__titleLabel | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

ID DLMultiMediaOptionCell::instance_DLMultiMediaOptionCell__titleLabel(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_titleLabel);
}


/* -[DLMultiMediaOptionCell setTitleLabel:] | encoding v24@0:8@16 */
/* Address: 000b8040 | Name: instance_DLMultiMediaOptionCell__setTitleLabel_ | Body bytes: 20 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void DLMultiMediaOptionCell::instance_DLMultiMediaOptionCell__setTitleLabel_
               (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_titleLabel) = param_3;
  return;
}


/* -[DLMultiMediaOptionCell .cxx_destruct] | encoding v16@0:8 */
/* Address: 000b8054 | Name: instance_DLMultiMediaOptionCell___cxx_destruct | Body bytes: 64 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void DLMultiMediaOptionCell::instance_DLMultiMediaOptionCell___cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_titleLabel) = 0;
  *(undefined8 *)(param_1 + (long)_containerView) = 0;
  return;
}

