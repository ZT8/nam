/* Automatic pseudocode grouped by Objective-C class. NOT original source. */

/* -[DLMentionsViewController initWithUsers:] | encoding @24@0:8@16 */
/* Address: 000ab304 | Name: instance_DLMentionsViewController__initWithUsers_ | Body bytes: 132 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID DLMentionsViewController::instance_DLMentionsViewController__initWithUsers_
             (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID local_40;
  class_t *pcStack_38;
  
  pcStack_38 = &objc::class_t::DLMentionsViewController;
  local_40 = param_1;
  IVar1 = DLPopupViewController::instance_DLPopupViewController__initWithCustomHeight_
                    ((ID)&local_40,"initWithCustomHeight:",0.0);
  if (IVar1 != 0) {
    *(ID *)(IVar1 + (long)_users) = param_3;
  }
  return IVar1;
}


/* -[DLMentionsViewController viewDidLayoutSubviews] | encoding v16@0:8 */
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


/* -[DLMentionsViewController viewDidLoad] | encoding v16@0:8 */
/* Address: 000ab56c | Name: instance_DLMentionsViewController__viewDidLoad | Body bytes: 3116 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

void DLMentionsViewController::instance_DLMentionsViewController__viewDidLoad
               (ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  undefined8 uVar3;
  ID local_70;
  class_t *pcStack_68;
  
  pcStack_68 = &objc::class_t::DLMentionsViewController;
  local_70 = param_1;
  DLPopupViewController::instance_DLPopupViewController__viewDidLoad((ID)&local_70,"viewDidLoad");
  IVar1 = _objc_alloc(&_OBJC_CLASS___UILabel);
  IVar1 = UILabel::init(IVar1,"init");
  instance_DLMentionsViewController__setTitleLabel_(param_1,"setTitleLabel:",IVar1);
  IVar1 = instance_DLMentionsViewController__titleLabel(param_1,"titleLabel");
  _objc_msgSend(IVar1,"setTranslatesAutoresizingMaskIntoConstraints:",0);
  IVar1 = _objc_msgSend(param_1,"title");
  IVar2 = instance_DLMentionsViewController__titleLabel(param_1,"titleLabel");
  _objc_msgSend(IVar2,"setText:",IVar1);
  IVar1 = instance_DLMentionsViewController__titleLabel(param_1,"titleLabel");
  _objc_msgSend(IVar1,"setTextAlignment:",1);
  IVar1 = UIFont::systemFontOfSize_weight_
                    ((ID)&_OBJC_CLASS___UIFont,"systemFontOfSize:weight:",0x402c000000000000,
                     *(undefined8 *)PTR__UIFontWeightBold_000e80a8);
  IVar2 = instance_DLMentionsViewController__titleLabel(param_1,"titleLabel");
  _objc_msgSend(IVar2,"setFont:",IVar1);
  IVar1 = DLPopupViewController::instance_DLPopupViewController__popupView(param_1,"popupView");
  IVar2 = instance_DLMentionsViewController__titleLabel(param_1,"titleLabel");
  _objc_msgSend(IVar1,"addSubview:",IVar2);
  IVar1 = instance_DLMentionsViewController__titleLabel(param_1,"titleLabel");
  IVar1 = _objc_msgSend(IVar1,"topAnchor");
  IVar2 = DLPopupViewController::instance_DLPopupViewController__popupView(param_1,"popupView");
  IVar2 = _objc_msgSend(IVar2,"topAnchor");
  IVar1 = _objc_msgSend(IVar1,"constraintEqualToAnchor:",IVar2);
  _objc_msgSend(IVar1,"setActive:",1);
  IVar1 = instance_DLMentionsViewController__titleLabel(param_1,"titleLabel");
  IVar1 = _objc_msgSend(IVar1,"widthAnchor");
  IVar2 = DLPopupViewController::instance_DLPopupViewController__popupView(param_1,"popupView");
  IVar2 = _objc_msgSend(IVar2,"widthAnchor");
  IVar1 = _objc_msgSend(IVar1,"constraintEqualToAnchor:",IVar2);
  _objc_msgSend(IVar1,"setActive:",1);
  IVar1 = instance_DLMentionsViewController__titleLabel(param_1,"titleLabel");
  IVar1 = _objc_msgSend(IVar1,"heightAnchor");
  IVar1 = _objc_msgSend(IVar1,"constraintEqualToConstant:",0x4048000000000000);
  _objc_msgSend(IVar1,"setActive:",1);
  IVar1 = _objc_alloc(&_OBJC_CLASS___UITableView);
  IVar1 = UITableView::init(IVar1,"init");
  instance_DLMentionsViewController__setTableView_(param_1,"setTableView:",IVar1);
  IVar1 = instance_DLMentionsViewController__tableView(param_1,"tableView");
  _objc_msgSend(IVar1,"setTranslatesAutoresizingMaskIntoConstraints:",0);
  IVar1 = instance_DLMentionsViewController__tableView(param_1,"tableView");
  _objc_msgSend(IVar1,"setDelegate:",param_1);
  IVar1 = instance_DLMentionsViewController__tableView(param_1,"tableView");
  _objc_msgSend(IVar1,"setDataSource:",param_1);
  IVar1 = UIColor::clearColor((ID)&_OBJC_CLASS___UIColor,"clearColor");
  IVar2 = instance_DLMentionsViewController__tableView(param_1,"tableView");
  _objc_msgSend(IVar2,"setBackgroundColor:",IVar1);
  IVar1 = instance_DLMentionsViewController__tableView(param_1,"tableView");
  IVar2 = _objc_msgSend((ID)&objc::class_t::DLMentionViewCell,"class");
  _objc_msgSend(IVar1,"registerClass:forCellReuseIdentifier:",IVar2,&cf_DLMentionViewCell);
  IVar1 = instance_DLMentionsViewController__tableView(param_1,"tableView");
  _objc_msgSend(IVar1,"setSeparatorStyle:",0);
  IVar1 = DLPopupViewController::instance_DLPopupViewController__popupView(param_1,"popupView");
  IVar2 = instance_DLMentionsViewController__tableView(param_1,"tableView");
  _objc_msgSend(IVar1,"addSubview:",IVar2);
  IVar1 = instance_DLMentionsViewController__tableView(param_1,"tableView");
  IVar1 = _objc_msgSend(IVar1,"topAnchor");
  IVar2 = instance_DLMentionsViewController__titleLabel(param_1,"titleLabel");
  IVar2 = _objc_msgSend(IVar2,"bottomAnchor");
  IVar1 = _objc_msgSend(IVar1,"constraintEqualToAnchor:",IVar2);
  _objc_msgSend(IVar1,"setActive:",1);
  IVar1 = instance_DLMentionsViewController__tableView(param_1,"tableView");
  IVar1 = _objc_msgSend(IVar1,"leadingAnchor");
  IVar2 = DLPopupViewController::instance_DLPopupViewController__popupView(param_1,"popupView");
  IVar2 = _objc_msgSend(IVar2,"safeAreaLayoutGuide");
  IVar2 = _objc_msgSend(IVar2,"leadingAnchor");
  IVar1 = _objc_msgSend(IVar1,"constraintEqualToAnchor:",IVar2);
  _objc_msgSend(IVar1,"setActive:",1);
  IVar1 = instance_DLMentionsViewController__tableView(param_1,"tableView");
  IVar1 = _objc_msgSend(IVar1,"trailingAnchor");
  IVar2 = DLPopupViewController::instance_DLPopupViewController__popupView(param_1,"popupView");
  IVar2 = _objc_msgSend(IVar2,"safeAreaLayoutGuide");
  IVar2 = _objc_msgSend(IVar2,"trailingAnchor");
  IVar1 = _objc_msgSend(IVar1,"constraintEqualToAnchor:",IVar2);
  _objc_msgSend(IVar1,"setActive:",1);
  IVar1 = instance_DLMentionsViewController__tableView(param_1,"tableView");
  IVar1 = _objc_msgSend(IVar1,"bottomAnchor");
  IVar2 = DLPopupViewController::instance_DLPopupViewController__popupView(param_1,"popupView");
  IVar2 = _objc_msgSend(IVar2,"bottomAnchor");
  IVar1 = _objc_msgSend(IVar1,"constraintEqualToAnchor:",IVar2);
  _objc_msgSend(IVar1,"setActive:",1);
  IVar1 = instance_DLMentionsViewController__users(param_1,"users");
  IVar1 = _objc_msgSend(IVar1,"count");
  if (IVar1 == 0) {
    IVar1 = UILabel::new((ID)&_OBJC_CLASS___UILabel,"new");
    instance_DLMentionsViewController__setEmptyLabel_(param_1,"setEmptyLabel:",IVar1);
    IVar1 = instance_DLMentionsViewController__emptyLabel(param_1,"emptyLabel");
    _objc_msgSend(IVar1,"setTranslatesAutoresizingMaskIntoConstraints:",0);
    uVar3 = FUN_0008c218(&cf_STORIES_NO_MENTIONS);
    IVar1 = instance_DLMentionsViewController__emptyLabel(param_1,"emptyLabel");
    _objc_msgSend(IVar1,"setText:",uVar3);
    IVar1 = UIFont::systemFontOfSize_weight_
                      ((ID)&_OBJC_CLASS___UIFont,"systemFontOfSize:weight:",0x402c000000000000,
                       *(undefined8 *)PTR__UIFontWeightSemibold_000e80c8);
    IVar2 = instance_DLMentionsViewController__emptyLabel(param_1,"emptyLabel");
    _objc_msgSend(IVar2,"setFont:",IVar1);
    IVar1 = instance_DLMentionsViewController__tableView(param_1,"tableView");
    IVar2 = instance_DLMentionsViewController__emptyLabel(param_1,"emptyLabel");
    _objc_msgSend(IVar1,"addSubview:",IVar2);
    IVar1 = instance_DLMentionsViewController__emptyLabel(param_1,"emptyLabel");
    IVar1 = _objc_msgSend(IVar1,"centerYAnchor");
    IVar2 = instance_DLMentionsViewController__tableView(param_1,"tableView");
    IVar2 = _objc_msgSend(IVar2,"centerYAnchor");
    IVar1 = _objc_msgSend(IVar1,"constraintEqualToAnchor:",IVar2);
    _objc_msgSend(IVar1,"setActive:",1);
    IVar1 = instance_DLMentionsViewController__emptyLabel(param_1,"emptyLabel");
    IVar1 = _objc_msgSend(IVar1,"centerXAnchor");
    IVar2 = instance_DLMentionsViewController__tableView(param_1,"tableView");
    IVar2 = _objc_msgSend(IVar2,"centerXAnchor");
    IVar1 = _objc_msgSend(IVar1,"constraintEqualToAnchor:",IVar2);
    _objc_msgSend(IVar1,"setActive:",1);
  }
  return;
}


/* -[DLMentionsViewController tableView:didSelectRowAtIndexPath:] | encoding v32@0:8@16@24 */
/* Address: 000ac198 | Name: instance_DLMentionsViewController__tableView_didSelectRowAtIndexPath_ | Body bytes: 300 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void DLMentionsViewController::instance_DLMentionsViewController__tableView_didSelectRowAtIndexPath_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  ID IVar2;
  
  _objc_msgSend(param_3,"deselectRowAtIndexPath:animated:",param_4,1);
  IVar1 = instance_DLMentionsViewController__users(param_1,"users");
  IVar2 = _objc_msgSend(param_4,"row");
  IVar1 = _objc_msgSend(IVar1,"objectAtIndexedSubscript:",IVar2);
  IVar2 = _objc_msgSend(IVar1,"username");
  if (IVar2 == 0) {
    DLPopupViewController::instance_DLPopupViewController__dismissPopup(param_1,"dismissPopup");
  }
  else {
    IVar1 = _objc_msgSend(IVar1,"username");
    DLInsta::class_DLInsta__openUsernameInApp_
              ((ID)&objc::class_t::DLInsta,"openUsernameInApp:",IVar1);
  }
  return;
}


/* -[DLMentionsViewController tableView:heightForRowAtIndexPath:] | encoding d32@0:8@16@24 */
/* Address: 000ac2c4 | Name: instance_DLMentionsViewController__tableView_heightForRowAtIndexPath_ | Body bytes: 12 */

/* Function Stack Size: 0x20 bytes */

double DLMentionsViewController::
       instance_DLMentionsViewController__tableView_heightForRowAtIndexPath_
                 (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  return 72.0;
}


/* -[DLMentionsViewController numberOfSectionsInTableView:] | encoding q24@0:8@16 */
/* Address: 000ac2d0 | Name: instance_DLMentionsViewController__numberOfSectionsInTableView_ | Body bytes: 8 */

/* Function Stack Size: 0x18 bytes */

long_long DLMentionsViewController::instance_DLMentionsViewController__numberOfSectionsInTableView_
                    (ID param_1,SEL param_2,ID param_3)

{
  return 1;
}


/* -[DLMentionsViewController tableView:numberOfRowsInSection:] | encoding q32@0:8@16q24 */
/* Address: 000ac2d8 | Name: instance_DLMentionsViewController__tableView_numberOfRowsInSection_ | Body bytes: 76 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

long_long DLMentionsViewController::
          instance_DLMentionsViewController__tableView_numberOfRowsInSection_
                    (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  ID IVar1;
  
  IVar1 = instance_DLMentionsViewController__users(param_1,"users");
  IVar1 = _objc_msgSend(IVar1,"count");
  return IVar1;
}


/* -[DLMentionsViewController tableView:cellForRowAtIndexPath:] | encoding @32@0:8@16@24 */
/* Address: 000ac324 | Name: instance_DLMentionsViewController__tableView_cellForRowAtIndexPath_ | Body bytes: 824 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleaseReturnValue replaced with injection: _objc_retain_fixup
    */
/* Function Stack Size: 0x20 bytes */

ID DLMentionsViewController::instance_DLMentionsViewController__tableView_cellForRowAtIndexPath_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  ID self;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  undefined *local_c8;
  undefined8 local_c0;
  code *local_b8;
  undefined *puStack_b0;
  ID local_a8;
  ID IStack_a0;
  undefined *local_98;
  undefined8 local_90;
  code *local_88;
  undefined *puStack_80;
  ID local_78;
  ID local_70;
  ID local_68;
  
  self = _objc_msgSend(param_3,"dequeueReusableCellWithIdentifier:",&cf_DLMentionViewCell);
  IVar2 = _objc_msgSend(param_4,"row");
  _objc_msgSend(self,"setTag:",IVar2);
  IVar2 = instance_DLMentionsViewController__users(param_1,"users");
  IVar3 = _objc_msgSend(param_4,"row");
  IVar2 = _objc_msgSend(IVar2,"objectAtIndexedSubscript:",IVar3);
  IVar3 = _objc_msgSend(IVar2,"avatarImage");
  puVar1 = PTR___NSConcreteStackBlock_000e80d8;
  if (IVar3 == 0) {
    IVar3 = _objc_msgSend(IVar2,"avatarURL");
    local_98 = puVar1;
    local_90 = 0xc2000000;
    local_88 = FUN_000ac65c;
    puStack_80 = &DAT_000e9b78;
    local_78 = self;
    local_70 = param_4;
    local_68 = IVar2;
    _objc_msgSend(IVar2,"downloadAvatarFromUrl:completion:",IVar3,&local_98);
  }
  else {
    IVar3 = _objc_msgSend(self,"avatarImageView");
    IVar4 = _objc_msgSend(IVar2,"avatarImage");
    _objc_msgSend(IVar3,"setImage:",IVar4);
  }
  IVar3 = _objc_msgSend(IVar2,"username");
  IVar4 = _objc_msgSend(self,"usernameLabel");
  _objc_msgSend(IVar4,"setText:",IVar3);
  IVar3 = _objc_msgSend(IVar2,"fullname");
  IVar4 = _objc_msgSend(self,"fullnameLabel");
  _objc_msgSend(IVar4,"setText:",IVar3);
  local_c8 = puVar1;
  local_c0 = 0xc2000000;
  local_b8 = FUN_000ac70c;
  puStack_b0 = &DAT_000e9b48;
  local_a8 = IVar2;
  IStack_a0 = param_1;
  _objc_msgSend(self,"setAvatarImageTapAction:",&local_c8);
  return self;
}


/* -[DLMentionsViewController tableView] | encoding @16@0:8 */
/* Address: 000ac908 | Name: instance_DLMentionsViewController__tableView | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

ID DLMentionsViewController::instance_DLMentionsViewController__tableView(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_tableView);
}


/* -[DLMentionsViewController setTableView:] | encoding v24@0:8@16 */
/* Address: 000ac918 | Name: instance_DLMentionsViewController__setTableView_ | Body bytes: 20 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void DLMentionsViewController::instance_DLMentionsViewController__setTableView_
               (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_tableView) = param_3;
  return;
}


/* -[DLMentionsViewController users] | encoding @16@0:8 */
/* Address: 000ac92c | Name: instance_DLMentionsViewController__users | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

ID DLMentionsViewController::instance_DLMentionsViewController__users(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_users);
}


/* -[DLMentionsViewController setUsers:] | encoding v24@0:8@16 */
/* Address: 000ac93c | Name: instance_DLMentionsViewController__setUsers_ | Body bytes: 20 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void DLMentionsViewController::instance_DLMentionsViewController__setUsers_
               (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_users) = param_3;
  return;
}


/* -[DLMentionsViewController titleLabel] | encoding @16@0:8 */
/* Address: 000ac950 | Name: instance_DLMentionsViewController__titleLabel | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

ID DLMentionsViewController::instance_DLMentionsViewController__titleLabel(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_titleLabel);
}


/* -[DLMentionsViewController setTitleLabel:] | encoding v24@0:8@16 */
/* Address: 000ac960 | Name: instance_DLMentionsViewController__setTitleLabel_ | Body bytes: 20 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void DLMentionsViewController::instance_DLMentionsViewController__setTitleLabel_
               (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_titleLabel) = param_3;
  return;
}


/* -[DLMentionsViewController emptyLabel] | encoding @16@0:8 */
/* Address: 000ac974 | Name: instance_DLMentionsViewController__emptyLabel | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

ID DLMentionsViewController::instance_DLMentionsViewController__emptyLabel(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_emptyLabel);
}


/* -[DLMentionsViewController setEmptyLabel:] | encoding v24@0:8@16 */
/* Address: 000ac984 | Name: instance_DLMentionsViewController__setEmptyLabel_ | Body bytes: 20 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void DLMentionsViewController::instance_DLMentionsViewController__setEmptyLabel_
               (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_emptyLabel) = param_3;
  return;
}


/* -[DLMentionsViewController .cxx_destruct] | encoding v16@0:8 */
/* Address: 000ac998 | Name: instance_DLMentionsViewController___cxx_destruct | Body bytes: 104 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void DLMentionsViewController::instance_DLMentionsViewController___cxx_destruct
               (ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_emptyLabel) = 0;
  *(undefined8 *)(param_1 + (long)_titleLabel) = 0;
  *(undefined8 *)(param_1 + (long)_users) = 0;
  *(undefined8 *)(param_1 + (long)_tableView) = 0;
  return;
}

