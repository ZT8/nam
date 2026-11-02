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

