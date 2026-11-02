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

