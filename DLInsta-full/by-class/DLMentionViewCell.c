/* Automatic pseudocode grouped by Objective-C class. NOT original source. */

/* -[DLMentionViewCell initWithStyle:reuseIdentifier:] | encoding @32@0:8q16@24 */
/* Address: 000a9cb8 | Name: instance_DLMentionViewCell__initWithStyle_reuseIdentifier_ | Body bytes: 140 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

ID DLMentionViewCell::instance_DLMentionViewCell__initWithStyle_reuseIdentifier_
             (ID param_1,SEL param_2,long_long param_3,ID param_4)

{
  ID self;
  ID self_00;
  ID local_30;
  class_t *pcStack_28;
  
  pcStack_28 = &objc::class_t::DLMentionViewCell;
  local_30 = param_1;
  self = UITableViewCell::initWithStyle_reuseIdentifier_
                   ((ID)&local_30,"initWithStyle:reuseIdentifier:");
  if (self != 0) {
    self_00 = UITableViewCell::contentView(self,"contentView");
    UITableViewCell::setUserInteractionEnabled_(self_00,"setUserInteractionEnabled:",1);
    UITableViewCell::setupViews(self,"setupViews");
  }
  return self;
}


/* -[DLMentionViewCell prepareForReuse] | encoding v16@0:8 */
/* Address: 000a9d44 | Name: instance_DLMentionViewCell__prepareForReuse | Body bytes: 116 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void DLMentionViewCell::instance_DLMentionViewCell__prepareForReuse(ID param_1,SEL param_2)

{
  ID self;
  ID local_30;
  class_t *pcStack_28;
  
  pcStack_28 = &objc::class_t::DLMentionViewCell;
  local_30 = param_1;
  UITableViewCell::prepareForReuse((ID)&local_30,"prepareForReuse");
  self = instance_DLMentionViewCell__avatarImageView(param_1,"avatarImageView");
  _objc_msgSend(self,"setImage:",0);
  return;
}


/* -[DLMentionViewCell layoutSubviews] | encoding v16@0:8 */
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


/* -[DLMentionViewCell setupViews] | encoding v16@0:8 */
/* Address: 000aa238 | Name: instance_DLMentionViewCell__setupViews | Body bytes: 3912 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void DLMentionViewCell::instance_DLMentionViewCell__setupViews(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID local_f8;
  ID local_f0;
  ID local_e8;
  ID local_e0;
  ID local_d8;
  ID local_d0;
  ID local_c8;
  ID local_c0;
  ID local_b8;
  ID local_b0;
  ID local_a8;
  ID local_a0;
  ID local_98;
  ID local_90;
  ID local_88;
  long local_80;
  
  local_80 = *(long *)PTR____stack_chk_guard_000e8260;
  IVar1 = UIColor::clearColor((ID)&_OBJC_CLASS___UIColor,"clearColor");
  _objc_msgSend(param_1,"setBackgroundColor:",IVar1);
  IVar1 = _objc_alloc(&_OBJC_CLASS___UIView);
  IVar1 = UIView::init(IVar1,"init");
  UIView::setTranslatesAutoresizingMaskIntoConstraints_
            (IVar1,"setTranslatesAutoresizingMaskIntoConstraints:",0);
  _objc_msgSend(param_1,"addSubview:",IVar1);
  IVar2 = UIView::topAnchor(IVar1,"topAnchor");
  IVar3 = _objc_msgSend(param_1,"topAnchor");
  local_a0 = UIView::constraintEqualToAnchor_constant_
                       (IVar2,"constraintEqualToAnchor:constant:",0x4020000000000000,IVar3);
  IVar2 = UIView::leadingAnchor(IVar1,"leadingAnchor");
  IVar3 = _objc_msgSend(param_1,"leadingAnchor");
  local_98 = UIView::constraintEqualToAnchor_constant_
                       (IVar2,"constraintEqualToAnchor:constant:",0x4028000000000000,IVar3);
  IVar2 = UIView::trailingAnchor(IVar1,"trailingAnchor");
  IVar3 = _objc_msgSend(param_1,"trailingAnchor");
  local_90 = UIView::constraintEqualToAnchor_constant_
                       (IVar2,"constraintEqualToAnchor:constant:",0xc028000000000000,IVar3);
  IVar2 = UIView::bottomAnchor(IVar1,"bottomAnchor");
  IVar3 = _objc_msgSend(param_1,"bottomAnchor");
  local_88 = UIView::constraintEqualToAnchor_constant_
                       (IVar2,"constraintEqualToAnchor:constant:",0xc020000000000000,IVar3);
  IVar2 = NSArray::arrayWithObjects_count_
                    ((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:count:",&local_a0,4);
  NSLayoutConstraint::activateConstraints_
            ((ID)&_OBJC_CLASS___NSLayoutConstraint,"activateConstraints:",IVar2);
  IVar2 = _objc_alloc(&_OBJC_CLASS___UIImageView);
  IVar2 = UIImageView::init(IVar2,"init");
  instance_DLMentionViewCell__setAvatarImageView_(param_1,"setAvatarImageView:",IVar2);
  IVar2 = instance_DLMentionViewCell__avatarImageView(param_1,"avatarImageView");
  _objc_msgSend(IVar2,"setTranslatesAutoresizingMaskIntoConstraints:",0);
  IVar2 = UIColor::darkGrayColor((ID)&_OBJC_CLASS___UIColor,"darkGrayColor");
  IVar2 = UIColor::colorWithAlphaComponent_(IVar2,"colorWithAlphaComponent:",0x3fd3333333333333);
  IVar3 = instance_DLMentionViewCell__avatarImageView(param_1,"avatarImageView");
  _objc_msgSend(IVar3,"setBackgroundColor:",IVar2);
  IVar2 = instance_DLMentionViewCell__avatarImageView(param_1,"avatarImageView");
  _objc_msgSend(IVar2,"setContentMode:",1);
  IVar2 = instance_DLMentionViewCell__avatarImageView(param_1,"avatarImageView");
  IVar2 = _objc_msgSend(IVar2,"layer");
  _objc_msgSend(IVar2,"setCornerRadius:",0x403c000000000000);
  IVar2 = instance_DLMentionViewCell__avatarImageView(param_1,"avatarImageView");
  _objc_msgSend(IVar2,"setClipsToBounds:",1);
  IVar2 = instance_DLMentionViewCell__avatarImageView(param_1,"avatarImageView");
  IVar2 = _objc_msgSend(IVar2,"layer");
  _objc_msgSend(IVar2,"setBorderWidth:",0x3fe0000000000000);
  IVar2 = instance_DLMentionViewCell__avatarImageView(param_1,"avatarImageView");
  _objc_msgSend(IVar2,"setUserInteractionEnabled:",1);
  IVar2 = instance_DLMentionViewCell__avatarImageView(param_1,"avatarImageView");
  UIView::addSubview_(IVar1,"addSubview:",IVar2);
  IVar2 = instance_DLMentionViewCell__avatarImageView(param_1,"avatarImageView");
  IVar2 = _objc_msgSend(IVar2,"topAnchor");
  IVar3 = UIView::topAnchor(IVar1,"topAnchor");
  local_c0 = _objc_msgSend(IVar2,"constraintEqualToAnchor:",IVar3);
  IVar2 = instance_DLMentionViewCell__avatarImageView(param_1,"avatarImageView");
  IVar2 = _objc_msgSend(IVar2,"leadingAnchor");
  IVar3 = UIView::leadingAnchor(IVar1,"leadingAnchor");
  local_b8 = _objc_msgSend(IVar2,"constraintEqualToAnchor:constant:",0x4000000000000000,IVar3);
  IVar2 = instance_DLMentionViewCell__avatarImageView(param_1,"avatarImageView");
  IVar2 = _objc_msgSend(IVar2,"widthAnchor");
  local_b0 = _objc_msgSend(IVar2,"constraintEqualToConstant:",0x404c000000000000);
  IVar2 = instance_DLMentionViewCell__avatarImageView(param_1,"avatarImageView");
  IVar2 = _objc_msgSend(IVar2,"heightAnchor");
  local_a8 = _objc_msgSend(IVar2,"constraintEqualToConstant:",0x404c000000000000);
  IVar2 = NSArray::arrayWithObjects_count_
                    ((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:count:",&local_c0,4);
  NSLayoutConstraint::activateConstraints_
            ((ID)&_OBJC_CLASS___NSLayoutConstraint,"activateConstraints:",IVar2);
  IVar2 = _objc_alloc(&_OBJC_CLASS___UITapGestureRecognizer);
  IVar2 = UITapGestureRecognizer::initWithTarget_action_
                    (IVar2,"initWithTarget:action:",param_1,"avatarImageTapped:");
  IVar3 = instance_DLMentionViewCell__avatarImageView(param_1,"avatarImageView");
  _objc_msgSend(IVar3,"addGestureRecognizer:",IVar2);
  IVar2 = _objc_alloc(&_OBJC_CLASS___UILabel);
  IVar2 = UILabel::init(IVar2,"init");
  instance_DLMentionViewCell__setUsernameLabel_(param_1,"setUsernameLabel:",IVar2);
  IVar2 = instance_DLMentionViewCell__usernameLabel(param_1,"usernameLabel");
  _objc_msgSend(IVar2,"setTranslatesAutoresizingMaskIntoConstraints:",0);
  IVar2 = UIFont::systemFontOfSize_weight_
                    ((ID)&_OBJC_CLASS___UIFont,"systemFontOfSize:weight:",0x4028000000000000,
                     *(undefined8 *)PTR__UIFontWeightSemibold_000e80c8);
  IVar3 = instance_DLMentionViewCell__usernameLabel(param_1,"usernameLabel");
  _objc_msgSend(IVar3,"setFont:",IVar2);
  IVar2 = instance_DLMentionViewCell__usernameLabel(param_1,"usernameLabel");
  UIView::addSubview_(IVar1,"addSubview:",IVar2);
  IVar2 = instance_DLMentionViewCell__usernameLabel(param_1,"usernameLabel");
  IVar2 = _objc_msgSend(IVar2,"centerYAnchor");
  IVar3 = instance_DLMentionViewCell__avatarImageView(param_1,"avatarImageView");
  IVar3 = _objc_msgSend(IVar3,"centerYAnchor");
  local_d8 = _objc_msgSend(IVar2,"constraintEqualToAnchor:constant:",0xc020000000000000,IVar3);
  IVar2 = instance_DLMentionViewCell__usernameLabel(param_1,"usernameLabel");
  IVar2 = _objc_msgSend(IVar2,"leadingAnchor");
  IVar3 = instance_DLMentionViewCell__avatarImageView(param_1,"avatarImageView");
  IVar3 = _objc_msgSend(IVar3,"trailingAnchor");
  local_d0 = _objc_msgSend(IVar2,"constraintEqualToAnchor:constant:",0x4024000000000000,IVar3);
  IVar2 = instance_DLMentionViewCell__usernameLabel(param_1,"usernameLabel");
  IVar2 = _objc_msgSend(IVar2,"trailingAnchor");
  IVar3 = UIView::trailingAnchor(IVar1,"trailingAnchor");
  local_c8 = _objc_msgSend(IVar2,"constraintEqualToAnchor:constant:",0xc024000000000000,IVar3);
  IVar2 = NSArray::arrayWithObjects_count_
                    ((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:count:",&local_d8,3);
  NSLayoutConstraint::activateConstraints_
            ((ID)&_OBJC_CLASS___NSLayoutConstraint,"activateConstraints:",IVar2);
  IVar2 = _objc_alloc(&_OBJC_CLASS___UILabel);
  IVar2 = UILabel::init(IVar2,"init");
  instance_DLMentionViewCell__setFullnameLabel_(param_1,"setFullnameLabel:",IVar2);
  IVar2 = instance_DLMentionViewCell__fullnameLabel(param_1,"fullnameLabel");
  _objc_msgSend(IVar2,"setTranslatesAutoresizingMaskIntoConstraints:",0);
  IVar2 = UIFont::systemFontOfSize_weight_
                    ((ID)&_OBJC_CLASS___UIFont,"systemFontOfSize:weight:",0x4028000000000000,
                     *(undefined8 *)PTR__UIFontWeightRegular_000e80c0);
  IVar3 = instance_DLMentionViewCell__fullnameLabel(param_1,"fullnameLabel");
  _objc_msgSend(IVar3,"setFont:",IVar2);
  IVar2 = instance_DLMentionViewCell__fullnameLabel(param_1,"fullnameLabel");
  UIView::addSubview_(IVar1,"addSubview:",IVar2);
  IVar2 = instance_DLMentionViewCell__fullnameLabel(param_1,"fullnameLabel");
  IVar2 = _objc_msgSend(IVar2,"topAnchor");
  IVar3 = instance_DLMentionViewCell__usernameLabel(param_1,"usernameLabel");
  IVar3 = _objc_msgSend(IVar3,"bottomAnchor");
  local_f8 = _objc_msgSend(IVar2,"constraintEqualToAnchor:constant:",0x4000000000000000,IVar3);
  IVar2 = instance_DLMentionViewCell__fullnameLabel(param_1,"fullnameLabel");
  IVar2 = _objc_msgSend(IVar2,"leadingAnchor");
  IVar3 = instance_DLMentionViewCell__usernameLabel(param_1,"usernameLabel");
  IVar3 = _objc_msgSend(IVar3,"leadingAnchor");
  local_f0 = _objc_msgSend(IVar2,"constraintEqualToAnchor:",IVar3);
  IVar2 = instance_DLMentionViewCell__fullnameLabel(param_1,"fullnameLabel");
  IVar2 = _objc_msgSend(IVar2,"trailingAnchor");
  IVar3 = UIView::trailingAnchor(IVar1,"trailingAnchor");
  local_e8 = _objc_msgSend(IVar2,"constraintEqualToAnchor:constant:",0xc028000000000000,IVar3);
  IVar2 = instance_DLMentionViewCell__fullnameLabel(param_1,"fullnameLabel");
  IVar2 = _objc_msgSend(IVar2,"bottomAnchor");
  IVar1 = UIView::bottomAnchor(IVar1,"bottomAnchor");
  local_e0 = _objc_msgSend(IVar2,"constraintLessThanOrEqualToAnchor:constant:",0xc028000000000000,
                           IVar1);
  IVar1 = NSArray::arrayWithObjects_count_
                    ((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:count:",&local_f8,4);
  NSLayoutConstraint::activateConstraints_
            ((ID)&_OBJC_CLASS___NSLayoutConstraint,"activateConstraints:",IVar1);
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_80) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}


/* -[DLMentionViewCell avatarImageTapped:] | encoding v24@0:8@16 */
/* Address: 000ab180 | Name: instance_DLMentionViewCell__avatarImageTapped_ | Body bytes: 148 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void DLMentionViewCell::instance_DLMentionViewCell__avatarImageTapped_
               (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  IVar1 = instance_DLMentionViewCell__avatarImageTapAction(param_1,"avatarImageTapAction");
  if (IVar1 == 0) {
    return;
  }
  DLHelper::class_DLHelper__vibration_((ID)&objc::class_t::DLHelper,"vibration:",0);
  IVar1 = instance_DLMentionViewCell__avatarImageTapAction(param_1,"avatarImageTapAction");
  (**(code **)(IVar1 + 0x10))();
  return;
}


/* -[DLMentionViewCell avatarImageTapAction] | encoding @?16@0:8 */
/* Address: 000ab214 | Name: instance_DLMentionViewCell__avatarImageTapAction | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

ID DLMentionViewCell::instance_DLMentionViewCell__avatarImageTapAction(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_avatarImageTapAction);
}


/* -[DLMentionViewCell setAvatarImageTapAction:] | encoding v24@0:8@?16 */
/* Address: 000ab224 | Name: instance_DLMentionViewCell__setAvatarImageTapAction_ | Body bytes: 12 */

/* WARNING: Function: _objc_setProperty_nonatomic_copy replaced with injection:
   _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void DLMentionViewCell::instance_DLMentionViewCell__setAvatarImageTapAction_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  *(ID *)(param_1 + (long)_avatarImageTapAction) = param_3;
  return;
}


/* -[DLMentionViewCell avatarImageView] | encoding @16@0:8 */
/* Address: 000ab230 | Name: instance_DLMentionViewCell__avatarImageView | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

ID DLMentionViewCell::instance_DLMentionViewCell__avatarImageView(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_avatarImageView);
}


/* -[DLMentionViewCell setAvatarImageView:] | encoding v24@0:8@16 */
/* Address: 000ab240 | Name: instance_DLMentionViewCell__setAvatarImageView_ | Body bytes: 20 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void DLMentionViewCell::instance_DLMentionViewCell__setAvatarImageView_
               (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_avatarImageView) = param_3;
  return;
}


/* -[DLMentionViewCell usernameLabel] | encoding @16@0:8 */
/* Address: 000ab254 | Name: instance_DLMentionViewCell__usernameLabel | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

ID DLMentionViewCell::instance_DLMentionViewCell__usernameLabel(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_usernameLabel);
}


/* -[DLMentionViewCell setUsernameLabel:] | encoding v24@0:8@16 */
/* Address: 000ab264 | Name: instance_DLMentionViewCell__setUsernameLabel_ | Body bytes: 20 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void DLMentionViewCell::instance_DLMentionViewCell__setUsernameLabel_
               (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_usernameLabel) = param_3;
  return;
}


/* -[DLMentionViewCell fullnameLabel] | encoding @16@0:8 */
/* Address: 000ab278 | Name: instance_DLMentionViewCell__fullnameLabel | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

ID DLMentionViewCell::instance_DLMentionViewCell__fullnameLabel(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_fullnameLabel);
}


/* -[DLMentionViewCell setFullnameLabel:] | encoding v24@0:8@16 */
/* Address: 000ab288 | Name: instance_DLMentionViewCell__setFullnameLabel_ | Body bytes: 20 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void DLMentionViewCell::instance_DLMentionViewCell__setFullnameLabel_
               (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_fullnameLabel) = param_3;
  return;
}


/* -[DLMentionViewCell .cxx_destruct] | encoding v16@0:8 */
/* Address: 000ab29c | Name: instance_DLMentionViewCell___cxx_destruct | Body bytes: 104 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void DLMentionViewCell::instance_DLMentionViewCell___cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_fullnameLabel) = 0;
  *(undefined8 *)(param_1 + (long)_usernameLabel) = 0;
  *(undefined8 *)(param_1 + (long)_avatarImageView) = 0;
  *(undefined8 *)(param_1 + (long)_avatarImageTapAction) = 0;
  return;
}

