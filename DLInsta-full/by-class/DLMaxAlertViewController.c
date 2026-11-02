/* Automatic pseudocode grouped by Objective-C class. NOT original source. */

/* -[DLMaxAlertViewController viewWillLayoutSubviews] | encoding v16@0:8 */
/* Address: 000a7b18 | Name: instance_DLMaxAlertViewController__viewWillLayoutSubviews | Body bytes: 764 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void DLMaxAlertViewController::instance_DLMaxAlertViewController__viewWillLayoutSubviews
               (ID param_1,SEL param_2)

{
  ID IVar1;
  ID self;
  double in_d2;
  double in_d3;
  double dVar2;
  double dVar3;
  ID local_70;
  class_t *pcStack_68;
  
  pcStack_68 = &objc::class_t::DLMaxAlertViewController;
  local_70 = param_1;
  UIViewController::viewWillLayoutSubviews((ID)&local_70,"viewWillLayoutSubviews");
  IVar1 = _objc_msgSend(param_1,"view");
  _objc_msgSend(IVar1,"bounds");
  dVar3 = in_d3 + -128.0;
  IVar1 = instance_DLMaxAlertViewController__containerViewHeightConstraint
                    (param_1,"containerViewHeightConstraint");
  _objc_msgSend(IVar1,"setActive:",0);
  IVar1 = instance_DLMaxAlertViewController__containerView(param_1,"containerView");
  IVar1 = _objc_msgSend(IVar1,"heightAnchor");
  IVar1 = _objc_msgSend(IVar1,"constraintLessThanOrEqualToConstant:",dVar3);
  instance_DLMaxAlertViewController__setContainerViewHeightConstraint_
            (param_1,"setContainerViewHeightConstraint:",IVar1);
  IVar1 = instance_DLMaxAlertViewController__containerViewHeightConstraint
                    (param_1,"containerViewHeightConstraint");
  _objc_msgSend(IVar1,"setActive:",1);
  IVar1 = instance_DLMaxAlertViewController__containerViewWidthConstraint
                    (param_1,"containerViewWidthConstraint");
  _objc_msgSend(IVar1,"setActive:",0);
  IVar1 = _objc_msgSend(param_1,"view");
  _objc_msgSend(IVar1,"frame");
  dVar2 = in_d3;
  IVar1 = _objc_msgSend(param_1,"view");
  _objc_msgSend(IVar1,"frame");
  dVar3 = in_d2;
  IVar1 = instance_DLMaxAlertViewController__containerView(param_1,"containerView");
  IVar1 = _objc_msgSend(IVar1,"widthAnchor");
  self = _objc_msgSend(param_1,"view");
  _objc_msgSend(self,"frame");
  if (in_d3 <= in_d2) {
    dVar3 = dVar2;
  }
  IVar1 = _objc_msgSend(IVar1,"constraintEqualToConstant:",dVar3 + -64.0);
  instance_DLMaxAlertViewController__setContainerViewWidthConstraint_
            (param_1,"setContainerViewWidthConstraint:",IVar1);
  IVar1 = instance_DLMaxAlertViewController__containerViewWidthConstraint
                    (param_1,"containerViewWidthConstraint");
  _objc_msgSend(IVar1,"setActive:",1);
  return;
}


/* -[DLMaxAlertViewController initWithTweakName:message:actions:] | encoding @40@0:8@16@24@32 */
/* Address: 000a7e14 | Name: instance_DLMaxAlertViewController__initWithTweakName_message_actions_ | Body bytes: 260 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x28 bytes */

ID DLMaxAlertViewController::instance_DLMaxAlertViewController__initWithTweakName_message_actions_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  ID self;
  ID local_40;
  class_t *pcStack_38;
  
  pcStack_38 = &objc::class_t::DLMaxAlertViewController;
  local_40 = param_1;
  self = UIViewController::initWithNibName_bundle_((ID)&local_40,"initWithNibName:bundle:",0,0);
  if (self != 0) {
    UIViewController::setModalPresentationStyle_(self,"setModalPresentationStyle:",4);
    UIViewController::setTransitioningDelegate_(self,"setTransitioningDelegate:",self);
    UIViewController::setTweakName_(self,"setTweakName:",param_3);
    UIViewController::setMessage_(self,"setMessage:",param_4);
    UIViewController::setActions_(self,"setActions:",param_5);
  }
  return self;
}


/* -[DLMaxAlertViewController viewDidLoad] | encoding v16@0:8 */
/* Address: 000a7f18 | Name: instance_DLMaxAlertViewController__viewDidLoad | Body bytes: 4860 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

void DLMaxAlertViewController::instance_DLMaxAlertViewController__viewDidLoad
               (ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  ID self;
  ID IVar4;
  ID IVar5;
  dispatch_time_t dVar6;
  undefined4 uVar7;
  long lVar8;
  ID self_00;
  ID IVar9;
  double dVar10;
  undefined8 uVar11;
  ID local_1b8;
  undefined *local_1b0;
  undefined8 local_1a8;
  code *local_1a0;
  undefined *puStack_198;
  ID local_190;
  ID IStack_188;
  undefined8 local_180;
  long lStack_178;
  long *local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *local_138;
  undefined8 local_130;
  code *local_128;
  undefined *puStack_120;
  ID local_118;
  ID local_110;
  class_t *pcStack_108;
  undefined1 auStack_100 [128];
  long local_80;
  
  local_80 = *(long *)PTR____stack_chk_guard_000e8260;
  pcStack_108 = &objc::class_t::DLMaxAlertViewController;
  local_110 = param_1;
  UIViewController::viewDidLoad((ID)&local_110,"viewDidLoad");
  IVar2 = _objc_alloc(&_OBJC_CLASS___UIView);
  IVar2 = UIView::init(IVar2,"init");
  instance_DLMaxAlertViewController__setContainerView_(param_1,"setContainerView:",IVar2);
  IVar2 = instance_DLMaxAlertViewController__containerView(param_1,"containerView");
  _objc_msgSend(IVar2,"setTranslatesAutoresizingMaskIntoConstraints:",0);
  dVar10 = instance_DLMaxAlertViewController__cornerRadius(param_1,"cornerRadius");
  IVar2 = instance_DLMaxAlertViewController__containerView(param_1,"containerView");
  IVar2 = _objc_msgSend(IVar2,"layer");
  instance_DLMaxAlertViewController__setCornerRadius_(IVar2,"setCornerRadius:",dVar10);
  IVar2 = _objc_msgSend(param_1,"view");
  IVar3 = instance_DLMaxAlertViewController__containerView(param_1,"containerView");
  _objc_msgSend(IVar2,"addSubview:",IVar3);
  IVar2 = instance_DLMaxAlertViewController__containerView(param_1,"containerView");
  IVar2 = _objc_msgSend(IVar2,"centerYAnchor");
  IVar3 = _objc_msgSend(param_1,"view");
  IVar3 = _objc_msgSend(IVar3,"safeAreaLayoutGuide");
  IVar3 = _objc_msgSend(IVar3,"centerYAnchor");
  IVar2 = _objc_msgSend(IVar2,"constraintEqualToAnchor:",IVar3);
  _objc_msgSend(IVar2,"setActive:",1);
  IVar2 = instance_DLMaxAlertViewController__containerView(param_1,"containerView");
  IVar2 = _objc_msgSend(IVar2,"centerXAnchor");
  IVar3 = _objc_msgSend(param_1,"view");
  IVar3 = _objc_msgSend(IVar3,"safeAreaLayoutGuide");
  IVar3 = _objc_msgSend(IVar3,"centerXAnchor");
  IVar2 = _objc_msgSend(IVar2,"constraintEqualToAnchor:",IVar3);
  _objc_msgSend(IVar2,"setActive:",1);
  IVar2 = _objc_alloc(&_OBJC_CLASS___UILabel);
  IVar2 = UILabel::init(IVar2,"init");
  instance_DLMaxAlertViewController__setTitleLabel_(param_1,"setTitleLabel:",IVar2);
  IVar2 = instance_DLMaxAlertViewController__tweakName(param_1,"tweakName");
  IVar3 = instance_DLMaxAlertViewController__titleLabel(param_1,"titleLabel");
  _objc_msgSend(IVar3,"setText:",IVar2);
  IVar2 = instance_DLMaxAlertViewController__titleLabel(param_1,"titleLabel");
  _objc_msgSend(IVar2,"setTranslatesAutoresizingMaskIntoConstraints:",0);
  IVar2 = instance_DLMaxAlertViewController__titleLabel(param_1,"titleLabel");
  _objc_msgSend(IVar2,"setTextAlignment:",1);
  IVar2 = UIFont::systemFontOfSize_weight_
                    ((ID)&_OBJC_CLASS___UIFont,"systemFontOfSize:weight:",0x402c000000000000,
                     *(undefined8 *)PTR__UIFontWeightBold_000e80a8);
  IVar3 = instance_DLMaxAlertViewController__titleLabel(param_1,"titleLabel");
  _objc_msgSend(IVar3,"setFont:",IVar2);
  IVar2 = instance_DLMaxAlertViewController__containerView(param_1,"containerView");
  IVar3 = instance_DLMaxAlertViewController__titleLabel(param_1,"titleLabel");
  _objc_msgSend(IVar2,"addSubview:",IVar3);
  IVar2 = instance_DLMaxAlertViewController__titleLabel(param_1,"titleLabel");
  IVar2 = _objc_msgSend(IVar2,"topAnchor");
  IVar3 = instance_DLMaxAlertViewController__containerView(param_1,"containerView");
  IVar3 = _objc_msgSend(IVar3,"topAnchor");
  IVar2 = _objc_msgSend(IVar2,"constraintEqualToAnchor:",IVar3);
  _objc_msgSend(IVar2,"setActive:",1);
  IVar2 = instance_DLMaxAlertViewController__titleLabel(param_1,"titleLabel");
  IVar2 = _objc_msgSend(IVar2,"leadingAnchor");
  IVar3 = instance_DLMaxAlertViewController__containerView(param_1,"containerView");
  IVar3 = _objc_msgSend(IVar3,"leadingAnchor");
  IVar2 = _objc_msgSend(IVar2,"constraintEqualToAnchor:",IVar3);
  _objc_msgSend(IVar2,"setActive:",1);
  IVar2 = instance_DLMaxAlertViewController__titleLabel(param_1,"titleLabel");
  IVar2 = _objc_msgSend(IVar2,"trailingAnchor");
  IVar3 = instance_DLMaxAlertViewController__containerView(param_1,"containerView");
  IVar3 = _objc_msgSend(IVar3,"trailingAnchor");
  IVar2 = _objc_msgSend(IVar2,"constraintEqualToAnchor:",IVar3);
  _objc_msgSend(IVar2,"setActive:",1);
  IVar2 = instance_DLMaxAlertViewController__titleLabel(param_1,"titleLabel");
  IVar2 = _objc_msgSend(IVar2,"heightAnchor");
  IVar2 = _objc_msgSend(IVar2,"constraintEqualToConstant:",0x4046000000000000);
  _objc_msgSend(IVar2,"setActive:",1);
  IVar2 = _objc_alloc(&objc::class_t::DLMaxAlertTextView);
  IVar2 = _objc_msgSend(IVar2,"init");
  instance_DLMaxAlertViewController__setBodyText_(param_1,"setBodyText:",IVar2);
  IVar2 = instance_DLMaxAlertViewController__bodyText(param_1,"bodyText");
  _objc_msgSend(IVar2,"setTranslatesAutoresizingMaskIntoConstraints:",0);
  IVar2 = instance_DLMaxAlertViewController__bodyText(param_1,"bodyText");
  _objc_msgSend(IVar2,"setScrollEnabled:",1);
  IVar2 = instance_DLMaxAlertViewController__bodyText(param_1,"bodyText");
  _objc_msgSend(IVar2,"setEditable:",0);
  IVar2 = instance_DLMaxAlertViewController__bodyText(param_1,"bodyText");
  _objc_msgSend(IVar2,"setSelectable:",0);
  IVar2 = UIColor::clearColor((ID)&_OBJC_CLASS___UIColor,"clearColor");
  IVar3 = instance_DLMaxAlertViewController__bodyText(param_1,"bodyText");
  _objc_msgSend(IVar3,"setBackgroundColor:",IVar2);
  IVar2 = instance_DLMaxAlertViewController__bodyText(param_1,"bodyText");
  _objc_msgSend(IVar2,"setTextContainerInset:",0x4020000000000000,0x4020000000000000,
                0x4020000000000000,0x4020000000000000);
  IVar2 = instance_DLMaxAlertViewController__bodyText(param_1,"bodyText");
  uVar11 = *(undefined8 *)PTR__UIFontWeightRegular_000e80c0;
  IVar3 = UIFont::systemFontOfSize_weight_
                    ((ID)&_OBJC_CLASS___UIFont,"systemFontOfSize:weight:",0x402a000000000000,uVar11)
  ;
  _objc_msgSend(IVar2,"setFont:",IVar3);
  IVar2 = instance_DLMaxAlertViewController__bodyText(param_1,"bodyText");
  IVar3 = instance_DLMaxAlertViewController__message(param_1,"message");
  _objc_msgSend(IVar2,"setText:",IVar3);
  instance_DLMaxAlertViewController__applyCustomFontForBodyText
            (param_1,"applyCustomFontForBodyText");
  IVar2 = instance_DLMaxAlertViewController__containerView(param_1,"containerView");
  IVar3 = instance_DLMaxAlertViewController__bodyText(param_1,"bodyText");
  _objc_msgSend(IVar2,"addSubview:",IVar3);
  IVar2 = instance_DLMaxAlertViewController__bodyText(param_1,"bodyText");
  IVar2 = _objc_msgSend(IVar2,"topAnchor");
  IVar3 = instance_DLMaxAlertViewController__titleLabel(param_1,"titleLabel");
  IVar3 = _objc_msgSend(IVar3,"bottomAnchor");
  IVar2 = _objc_msgSend(IVar2,"constraintEqualToAnchor:",IVar3);
  _objc_msgSend(IVar2,"setActive:",1);
  IVar2 = instance_DLMaxAlertViewController__bodyText(param_1,"bodyText");
  IVar2 = _objc_msgSend(IVar2,"leadingAnchor");
  IVar3 = instance_DLMaxAlertViewController__containerView(param_1,"containerView");
  IVar3 = _objc_msgSend(IVar3,"leadingAnchor");
  IVar2 = _objc_msgSend(IVar2,"constraintEqualToAnchor:",IVar3);
  _objc_msgSend(IVar2,"setActive:",1);
  IVar2 = instance_DLMaxAlertViewController__bodyText(param_1,"bodyText");
  IVar2 = _objc_msgSend(IVar2,"trailingAnchor");
  IVar3 = instance_DLMaxAlertViewController__containerView(param_1,"containerView");
  IVar3 = _objc_msgSend(IVar3,"trailingAnchor");
  IVar2 = _objc_msgSend(IVar2,"constraintEqualToAnchor:",IVar3);
  _objc_msgSend(IVar2,"setActive:",1);
  IVar2 = instance_DLMaxAlertViewController__actions(param_1,"actions");
  IVar2 = _objc_msgSend(IVar2,"count");
  if (IVar2 == 0) {
    IVar2 = instance_DLMaxAlertViewController__bodyText(param_1,"bodyText");
    IVar2 = _objc_msgSend(IVar2,"bottomAnchor");
    IVar3 = instance_DLMaxAlertViewController__containerView(param_1,"containerView");
    IVar3 = _objc_msgSend(IVar3,"bottomAnchor");
    IVar2 = _objc_msgSend(IVar2,"constraintEqualToAnchor:constant:",0xc024000000000000,IVar3);
    _objc_msgSend(IVar2,"setActive:",1);
    dVar6 = _dispatch_time(0,5000000000);
    puVar1 = PTR___dispatch_main_q_000e8268;
    _objc_retainAutorelease(PTR___dispatch_main_q_000e8268);
    local_138 = PTR___NSConcreteStackBlock_000e80d8;
    local_130 = 0xc2000000;
    local_128 = FUN_000a9214;
    puStack_120 = &DAT_000e9798;
    local_118 = param_1;
    uVar11 = _dispatch_after(dVar6,puVar1,&local_138);
  }
  else {
    IVar2 = _objc_alloc(&_OBJC_CLASS___UIStackView);
    IVar2 = UIStackView::init(IVar2,"init");
    UIStackView::setTranslatesAutoresizingMaskIntoConstraints_
              (IVar2,"setTranslatesAutoresizingMaskIntoConstraints:",0);
    UIStackView::setAxis_(IVar2,"setAxis:",1);
    uStack_158 = 0;
    local_160 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    lStack_178 = 0;
    local_180 = 0;
    uStack_168 = 0;
    local_170 = (long *)0x0;
    IVar3 = instance_DLMaxAlertViewController__actions(param_1,"actions");
    local_1b8 = _objc_msgSend(IVar3,"countByEnumeratingWithState:objects:count:",&local_180,
                              auStack_100,0x10);
    if (local_1b8 != 0) {
      lVar8 = *local_170;
      do {
        IVar9 = 0;
        do {
          if (*local_170 != lVar8) {
            _objc_enumerationMutation(IVar3);
          }
          self_00 = *(ID *)(lStack_178 + IVar9 * 8);
          self = _objc_msgSend((ID)&objc::class_t::DLMaxAlertButton,"buttonWithType:",0);
          IVar4 = _objc_msgSend(self_00,"title");
          uVar7 = 0;
          _objc_msgSend(self,"setTitle:forState:",IVar4);
          IVar4 = _objc_msgSend(self,"titleLabel");
          IVar5 = UIFont::systemFontOfSize_weight_
                            ((ID)&_OBJC_CLASS___UIFont,"systemFontOfSize:weight:",0x402c000000000000
                             ,uVar11);
          _objc_msgSend(IVar4,"setFont:",IVar5);
          local_1b0 = PTR___NSConcreteStackBlock_000e80d8;
          local_1a8 = 0xc2000000;
          local_1a0 = FUN_000a9224;
          puStack_198 = &DAT_000e9b48;
          local_190 = self_00;
          IStack_188 = param_1;
          DLMaxAlertButton::instance_DLMaxAlertButton__actionHandler_
                    (self,"actionHandler:",(ID)&local_1b0,uVar7);
          IVar4 = _objc_msgSend(self,"heightAnchor");
          IVar4 = _objc_msgSend(IVar4,"constraintEqualToConstant:",0x4046000000000000);
          _objc_msgSend(IVar4,"setActive:",1);
          UIStackView::addArrangedSubview_(IVar2,"addArrangedSubview:",self);
          IVar9 = IVar9 + 1;
        } while (local_1b8 != IVar9);
        local_1b8 = _objc_msgSend(IVar3,"countByEnumeratingWithState:objects:count:",&local_180,
                                  auStack_100,0x10);
      } while (local_1b8 != 0);
    }
    IVar3 = instance_DLMaxAlertViewController__containerView(param_1,"containerView");
    _objc_msgSend(IVar3,"addSubview:",IVar2);
    IVar3 = UIStackView::topAnchor(IVar2,"topAnchor");
    IVar9 = instance_DLMaxAlertViewController__bodyText(param_1,"bodyText");
    IVar9 = _objc_msgSend(IVar9,"bottomAnchor");
    IVar3 = UIStackView::constraintEqualToAnchor_(IVar3,"constraintEqualToAnchor:",IVar9);
    UIStackView::setActive_(IVar3,"setActive:",1);
    IVar3 = UIStackView::leadingAnchor(IVar2,"leadingAnchor");
    IVar9 = instance_DLMaxAlertViewController__containerView(param_1,"containerView");
    IVar9 = _objc_msgSend(IVar9,"leadingAnchor");
    IVar3 = UIStackView::constraintEqualToAnchor_(IVar3,"constraintEqualToAnchor:",IVar9);
    UIStackView::setActive_(IVar3,"setActive:",1);
    IVar3 = UIStackView::trailingAnchor(IVar2,"trailingAnchor");
    IVar9 = instance_DLMaxAlertViewController__containerView(param_1,"containerView");
    IVar9 = _objc_msgSend(IVar9,"trailingAnchor");
    IVar3 = UIStackView::constraintEqualToAnchor_(IVar3,"constraintEqualToAnchor:",IVar9);
    UIStackView::setActive_(IVar3,"setActive:",1);
    IVar2 = UIStackView::bottomAnchor(IVar2,"bottomAnchor");
    IVar3 = instance_DLMaxAlertViewController__containerView(param_1,"containerView");
    IVar3 = _objc_msgSend(IVar3,"bottomAnchor");
    IVar2 = UIStackView::constraintEqualToAnchor_(IVar2,"constraintEqualToAnchor:",IVar3);
    UIStackView::setActive_(IVar2,"setActive:",1);
    uVar11 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_80) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(uVar11);
  }
  return;
}


/* -[DLMaxAlertViewController presentationControllerForPresentedViewController:presentingViewController:sourceViewController:] | encoding @40@0:8@16@24@32 */
/* Address: 000a92a4 | Name: instance_DLMaxAlertViewController__presentationControllerForPresentedViewController_presentingViewController_sourceViewController_ | Body bytes: 120 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x28 bytes */

ID DLMaxAlertViewController::
   instance_DLMaxAlertViewController__presentationControllerForPresentedViewController_presentingViewController_sourceViewController_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  ID IVar1;
  
  IVar1 = _objc_alloc(&objc::class_t::MyCustomPresentationController);
  IVar1 = _objc_msgSend(IVar1,"initWithPresentedViewController:presentingViewController:",param_3,
                        param_4);
  return IVar1;
}


/* -[DLMaxAlertViewController dismissAlertController] | encoding v16@0:8 */
/* Address: 000a931c | Name: instance_DLMaxAlertViewController__dismissAlertController | Body bytes: 20 */

/* Function Stack Size: 0x10 bytes */

void DLMaxAlertViewController::instance_DLMaxAlertViewController__dismissAlertController
               (ID param_1,SEL param_2)

{
  _objc_msgSend(param_1,"dismissViewControllerAnimated:completion:",1,0);
  return;
}


/* -[DLMaxAlertViewController traitCollectionDidChange:] | encoding v24@0:8@16 */
/* Address: 000a9330 | Name: instance_DLMaxAlertViewController__traitCollectionDidChange_ | Body bytes: 644 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void DLMaxAlertViewController::instance_DLMaxAlertViewController__traitCollectionDidChange_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined **ppuVar1;
  int iVar2;
  bool bVar3;
  ID IVar4;
  ID IVar5;
  undefined8 uVar6;
  ID local_70;
  class_t *pcStack_68;
  
  pcStack_68 = &objc::class_t::DLMaxAlertViewController;
  local_70 = param_1;
  UIViewController::traitCollectionDidChange_((ID)&local_70,"traitCollectionDidChange:",param_3);
  iVar2 = FUN_000bd0fc(2,0xd,0,0);
  if (iVar2 != 0) {
    IVar4 = _objc_msgSend(param_1,"traitCollection");
    IVar4 = _objc_msgSend(IVar4,"performSelector:withObject:",
                          "hasDifferentColorAppearanceComparedToTraitCollection:",param_3);
    if (IVar4 != 0) {
      bVar3 = DLHelper::class_DLHelper__isDarkMode((ID)&objc::class_t::DLHelper,"isDarkMode");
      if (bVar3 == 0) {
        uVar6 = 0x3ff0000000000000;
      }
      else {
        uVar6 = 0x3fc3131313131313;
      }
      IVar4 = UIColor::colorWithRed_green_blue_alpha_
                        ((ID)&_OBJC_CLASS___UIColor,"colorWithRed:green:blue:alpha:",uVar6,uVar6,
                         uVar6,0x3ff0000000000000);
      IVar5 = instance_DLMaxAlertViewController__containerView(param_1,"containerView");
      _objc_msgSend(IVar5,"setBackgroundColor:",IVar4);
      bVar3 = DLHelper::class_DLHelper__isDarkMode((ID)&objc::class_t::DLHelper,"isDarkMode");
      ppuVar1 = &PTR_s_whiteColor_000fb648;
      if (bVar3 == 0) {
        ppuVar1 = &PTR_s_blackColor_000fbc88;
      }
      IVar4 = UIColor::blackColor((ID)&_OBJC_CLASS___UIColor,*ppuVar1);
      IVar5 = instance_DLMaxAlertViewController__titleLabel(param_1,"titleLabel");
      _objc_msgSend(IVar5,"setTextColor:",IVar4);
      bVar3 = DLHelper::class_DLHelper__isDarkMode((ID)&objc::class_t::DLHelper,"isDarkMode");
      if (bVar3 == 0) {
        uVar6 = 0x3fdcdd2f1a9fbe77;
      }
      else {
        uVar6 = 0x3fe516872b020c4a;
      }
      IVar4 = UIColor::colorWithRed_green_blue_alpha_
                        ((ID)&_OBJC_CLASS___UIColor,"colorWithRed:green:blue:alpha:",uVar6,uVar6,
                         uVar6,0x3ff0000000000000);
      IVar5 = instance_DLMaxAlertViewController__bodyText(param_1,"bodyText");
      _objc_msgSend(IVar5,"setTextColor:",IVar4);
    }
  }
  return;
}


/* -[DLMaxAlertViewController applyCustomFontForBodyText] | encoding v16@0:8 */
/* Address: 000a95b4 | Name: instance_DLMaxAlertViewController__applyCustomFontForBodyText | Body bytes: 1348 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void DLMaxAlertViewController::instance_DLMaxAlertViewController__applyCustomFontForBodyText
               (ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  ID IVar7;
  long extraout_x1;
  long extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 uVar8;
  ID self;
  long lVar9;
  undefined8 uVar10;
  undefined8 local_140;
  long lStack_138;
  long *local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [128];
  long local_80;
  
  local_80 = *(long *)PTR____stack_chk_guard_000e8260;
  IVar1 = instance_DLMaxAlertViewController__bodyText(param_1,"bodyText");
  IVar1 = _objc_msgSend(IVar1,"text");
  IVar2 = _objc_alloc(&_OBJC_CLASS___NSMutableAttributedString);
  IVar2 = NSMutableAttributedString::initWithString_(IVar2,"initWithString:",IVar1);
  uVar10 = *(undefined8 *)PTR__UIFontWeightBold_000e80a8;
  IVar3 = UIFont::systemFontOfSize_weight_
                    ((ID)&_OBJC_CLASS___UIFont,"systemFontOfSize:weight:",0x402a000000000000,uVar10)
  ;
  IVar4 = UIFont::systemFontOfSize_weight_
                    ((ID)&_OBJC_CLASS___UIFont,"systemFontOfSize:weight:",0x4030000000000000,uVar10)
  ;
  IVar5 = UIFont::systemFontOfSize_weight_
                    ((ID)&_OBJC_CLASS___UIFont,"systemFontOfSize:weight:",0x402a000000000000,
                     *(undefined8 *)PTR__UIFontWeightRegular_000e80c0);
  IVar6 = _objc_msgSend(IVar1,"length");
  uVar10 = *(undefined8 *)PTR__NSFontAttributeName_000e8060;
  NSMutableAttributedString::addAttribute_value_range_
            (IVar2,"addAttribute:value:range:",uVar10,IVar5,0,IVar6);
  IVar5 = _objc_msgSend(IVar1,"rangeOfString:",&cf__);
  if (IVar5 != 0x7fffffffffffffff) {
    lVar9 = extraout_x1;
    do {
      NSMutableAttributedString::addAttribute_value_range_
                (IVar2,"addAttribute:value:range:",uVar10,IVar4,IVar5,lVar9);
      IVar6 = _objc_msgSend(IVar1,"length");
      IVar5 = _objc_msgSend(IVar1,"rangeOfString:options:range:",&cf__,0,IVar5 + lVar9,
                            IVar6 - (IVar5 + lVar9));
      lVar9 = extraout_x1_00;
    } while (IVar5 != 0x7fffffffffffffff);
  }
  IVar4 = _objc_msgSend(IVar1,"componentsSeparatedByString:",&cf_newline_s_);
  lStack_138 = 0;
  local_140 = 0;
  uStack_128 = 0;
  local_130 = (long *)0x0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  IVar5 = _objc_msgSend(IVar4,"countByEnumeratingWithState:objects:count:",&local_140,auStack_100,
                        0x10);
  if (IVar5 != 0) {
    lVar9 = *local_130;
    do {
      IVar6 = 0;
      do {
        if (*local_130 != lVar9) {
          _objc_enumerationMutation(IVar4);
        }
        self = *(ID *)(lStack_138 + IVar6 * 8);
        IVar7 = _objc_msgSend(self,"rangeOfString:",&cf__);
        if (IVar7 != 0x7fffffffffffffff) {
          IVar7 = _objc_msgSend(IVar1,"rangeOfString:",self);
          NSMutableAttributedString::addAttribute_value_range_
                    (IVar2,"addAttribute:value:range:",uVar10,IVar3,IVar7,extraout_x1_01);
        }
        IVar6 = IVar6 + 1;
      } while (IVar5 != IVar6);
      IVar5 = _objc_msgSend(IVar4,"countByEnumeratingWithState:objects:count:",&local_140,
                            auStack_100,0x10);
    } while (IVar5 != 0);
  }
  IVar4 = instance_DLMaxAlertViewController__bodyText(param_1,"bodyText");
  IVar4 = _objc_msgSend(IVar4,"text");
  IVar5 = NSRegularExpression::regularExpressionWithPattern_options_error_
                    ((ID)&_OBJC_CLASS___NSRegularExpression,
                     "regularExpressionWithPattern:options:error:",&cf___p_Arabic___,1,0);
  IVar6 = _objc_msgSend(IVar4,"length");
  IVar4 = NSRegularExpression::rangeOfFirstMatchInString_options_range_
                    (IVar5,"rangeOfFirstMatchInString:options:range:",IVar4,0,0,IVar6);
  if (IVar4 != 0x7fffffffffffffff) {
    IVar4 = _objc_alloc(&_OBJC_CLASS___NSMutableParagraphStyle);
    IVar4 = NSMutableParagraphStyle::init(IVar4,"init");
    NSMutableParagraphStyle::setAlignment_(IVar4,"setAlignment:",2);
    uVar8 = *(undefined8 *)PTR__NSParagraphStyleAttributeName_000e8080;
    IVar5 = _objc_msgSend(IVar1,"length");
    NSMutableAttributedString::addAttribute_value_range_
              (IVar2,"addAttribute:value:range:",uVar8,IVar4,0,IVar5);
  }
  IVar4 = _objc_alloc(&_OBJC_CLASS___NSMutableParagraphStyle);
  IVar4 = NSMutableParagraphStyle::init(IVar4,"init");
  NSMutableParagraphStyle::setAlignment_(IVar4,"setAlignment:",1);
  IVar1 = _objc_msgSend(IVar1,"rangeOfString:",&cf_newline_s_);
  if (IVar1 != 0x7fffffffffffffff) {
    NSMutableAttributedString::addAttribute_value_range_
              (IVar2,"addAttribute:value:range:",uVar10,IVar3,0,IVar1);
  }
  IVar1 = instance_DLMaxAlertViewController__bodyText(param_1,"bodyText");
  _objc_msgSend(IVar1,"setAttributedText:",IVar2);
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_80) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}


/* -[DLMaxAlertViewController cornerRadius] | encoding d16@0:8 */
/* Address: 000a9af8 | Name: instance_DLMaxAlertViewController__cornerRadius | Body bytes: 20 */

/* Function Stack Size: 0x10 bytes */

double DLMaxAlertViewController::instance_DLMaxAlertViewController__cornerRadius
                 (ID param_1,SEL param_2)

{
  return *(double *)(param_1 + (long)_cornerRadius);
}


/* -[DLMaxAlertViewController setCornerRadius:] | encoding v24@0:8d16 */
/* Address: 000a9b0c | Name: instance_DLMaxAlertViewController__setCornerRadius_ | Body bytes: 20 */

/* Function Stack Size: 0x18 bytes */

void DLMaxAlertViewController::instance_DLMaxAlertViewController__setCornerRadius_
               (ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + (long)_cornerRadius) = param_3;
  return;
}


/* -[DLMaxAlertViewController containerView] | encoding @16@0:8 */
/* Address: 000a9b20 | Name: instance_DLMaxAlertViewController__containerView | Body bytes: 16 */

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* Function Stack Size: 0x10 bytes */

ID DLMaxAlertViewController::instance_DLMaxAlertViewController__containerView
             (ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_containerView);
}


/* -[DLMaxAlertViewController setContainerView:] | encoding v24@0:8@16 */
/* Address: 000a9b30 | Name: instance_DLMaxAlertViewController__setContainerView_ | Body bytes: 12 */

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void DLMaxAlertViewController::instance_DLMaxAlertViewController__setContainerView_
               (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_containerView) = param_3;
  return;
}


/* -[DLMaxAlertViewController titleLabel] | encoding @16@0:8 */
/* Address: 000a9b3c | Name: instance_DLMaxAlertViewController__titleLabel | Body bytes: 16 */

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* Function Stack Size: 0x10 bytes */

ID DLMaxAlertViewController::instance_DLMaxAlertViewController__titleLabel(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_titleLabel);
}


/* -[DLMaxAlertViewController setTitleLabel:] | encoding v24@0:8@16 */
/* Address: 000a9b4c | Name: instance_DLMaxAlertViewController__setTitleLabel_ | Body bytes: 12 */

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void DLMaxAlertViewController::instance_DLMaxAlertViewController__setTitleLabel_
               (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_titleLabel) = param_3;
  return;
}


/* -[DLMaxAlertViewController tweakName] | encoding @16@0:8 */
/* Address: 000a9b58 | Name: instance_DLMaxAlertViewController__tweakName | Body bytes: 16 */

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* Function Stack Size: 0x10 bytes */

ID DLMaxAlertViewController::instance_DLMaxAlertViewController__tweakName(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_tweakName);
}


/* -[DLMaxAlertViewController setTweakName:] | encoding v24@0:8@16 */
/* Address: 000a9b68 | Name: instance_DLMaxAlertViewController__setTweakName_ | Body bytes: 12 */

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void DLMaxAlertViewController::instance_DLMaxAlertViewController__setTweakName_
               (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_tweakName) = param_3;
  return;
}


/* -[DLMaxAlertViewController message] | encoding @16@0:8 */
/* Address: 000a9b74 | Name: instance_DLMaxAlertViewController__message | Body bytes: 16 */

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* Function Stack Size: 0x10 bytes */

ID DLMaxAlertViewController::instance_DLMaxAlertViewController__message(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_message);
}


/* -[DLMaxAlertViewController setMessage:] | encoding v24@0:8@16 */
/* Address: 000a9b84 | Name: instance_DLMaxAlertViewController__setMessage_ | Body bytes: 12 */

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void DLMaxAlertViewController::instance_DLMaxAlertViewController__setMessage_
               (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_message) = param_3;
  return;
}


/* -[DLMaxAlertViewController bodyText] | encoding @16@0:8 */
/* Address: 000a9b90 | Name: instance_DLMaxAlertViewController__bodyText | Body bytes: 16 */

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* Function Stack Size: 0x10 bytes */

ID DLMaxAlertViewController::instance_DLMaxAlertViewController__bodyText(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_bodyText);
}


/* -[DLMaxAlertViewController setBodyText:] | encoding v24@0:8@16 */
/* Address: 000a9ba0 | Name: instance_DLMaxAlertViewController__setBodyText_ | Body bytes: 12 */

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void DLMaxAlertViewController::instance_DLMaxAlertViewController__setBodyText_
               (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_bodyText) = param_3;
  return;
}


/* -[DLMaxAlertViewController actions] | encoding @16@0:8 */
/* Address: 000a9bac | Name: instance_DLMaxAlertViewController__actions | Body bytes: 16 */

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* Function Stack Size: 0x10 bytes */

ID DLMaxAlertViewController::instance_DLMaxAlertViewController__actions(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_actions);
}


/* -[DLMaxAlertViewController setActions:] | encoding v24@0:8@16 */
/* Address: 000a9bbc | Name: instance_DLMaxAlertViewController__setActions_ | Body bytes: 12 */

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void DLMaxAlertViewController::instance_DLMaxAlertViewController__setActions_
               (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_actions) = param_3;
  return;
}


/* -[DLMaxAlertViewController containerViewHeightConstraint] | encoding @16@0:8 */
/* Address: 000a9bc8 | Name: instance_DLMaxAlertViewController__containerViewHeightConstraint | Body bytes: 16 */

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* Function Stack Size: 0x10 bytes */

ID DLMaxAlertViewController::instance_DLMaxAlertViewController__containerViewHeightConstraint
             (ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_containerViewHeightConstraint);
}


/* -[DLMaxAlertViewController setContainerViewHeightConstraint:] | encoding v24@0:8@16 */
/* Address: 000a9bd8 | Name: instance_DLMaxAlertViewController__setContainerViewHeightConstraint_ | Body bytes: 12 */

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void DLMaxAlertViewController::instance_DLMaxAlertViewController__setContainerViewHeightConstraint_
               (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_containerViewHeightConstraint) = param_3;
  return;
}


/* -[DLMaxAlertViewController containerViewWidthConstraint] | encoding @16@0:8 */
/* Address: 000a9be4 | Name: instance_DLMaxAlertViewController__containerViewWidthConstraint | Body bytes: 16 */

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* Function Stack Size: 0x10 bytes */

ID DLMaxAlertViewController::instance_DLMaxAlertViewController__containerViewWidthConstraint
             (ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_containerViewWidthConstraint);
}


/* -[DLMaxAlertViewController setContainerViewWidthConstraint:] | encoding v24@0:8@16 */
/* Address: 000a9bf4 | Name: instance_DLMaxAlertViewController__setContainerViewWidthConstraint_ | Body bytes: 12 */

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void DLMaxAlertViewController::instance_DLMaxAlertViewController__setContainerViewWidthConstraint_
               (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_containerViewWidthConstraint) = param_3;
  return;
}


/* -[DLMaxAlertViewController .cxx_destruct] | encoding v16@0:8 */
/* Address: 000a9c00 | Name: instance_DLMaxAlertViewController___cxx_destruct | Body bytes: 184 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void DLMaxAlertViewController::instance_DLMaxAlertViewController___cxx_destruct
               (ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_containerViewWidthConstraint) = 0;
  *(undefined8 *)(param_1 + (long)_containerViewHeightConstraint) = 0;
  *(undefined8 *)(param_1 + (long)_actions) = 0;
  *(undefined8 *)(param_1 + (long)_bodyText) = 0;
  *(undefined8 *)(param_1 + (long)_message) = 0;
  *(undefined8 *)(param_1 + (long)_tweakName) = 0;
  *(undefined8 *)(param_1 + (long)_titleLabel) = 0;
  *(undefined8 *)(param_1 + (long)_containerView) = 0;
  return;
}

