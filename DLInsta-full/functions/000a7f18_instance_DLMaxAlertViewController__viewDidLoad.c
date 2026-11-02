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

