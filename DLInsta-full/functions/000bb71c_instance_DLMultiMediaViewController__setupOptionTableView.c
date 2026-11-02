/* Address: 000bb71c | Name: instance_DLMultiMediaViewController__setupOptionTableView | Body bytes: 1612 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

void DLMultiMediaViewController::instance_DLMultiMediaViewController__setupOptionTableView
               (ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = _objc_alloc(&_OBJC_CLASS___UITableView);
  IVar1 = UITableView::initWithFrame_style_
                    (IVar1,"initWithFrame:style:",*(undefined8 *)PTR__CGRectZero_000e8040,
                     *(undefined8 *)(PTR__CGRectZero_000e8040 + 8),
                     *(undefined8 *)(PTR__CGRectZero_000e8040 + 0x10),
                     *(undefined8 *)(PTR__CGRectZero_000e8040 + 0x18),0);
  instance_DLMultiMediaViewController__setOptionTableView_(param_1,"setOptionTableView:",IVar1);
  IVar1 = instance_DLMultiMediaViewController__optionTableView(param_1,"optionTableView");
  _objc_msgSend(IVar1,"setTranslatesAutoresizingMaskIntoConstraints:",0);
  IVar1 = instance_DLMultiMediaViewController__optionTableView(param_1,"optionTableView");
  _objc_msgSend(IVar1,"setDataSource:",param_1);
  IVar1 = instance_DLMultiMediaViewController__optionTableView(param_1,"optionTableView");
  _objc_msgSend(IVar1,"setDelegate:",param_1);
  IVar1 = UIColor::clearColor((ID)&_OBJC_CLASS___UIColor,"clearColor");
  IVar2 = instance_DLMultiMediaViewController__optionTableView(param_1,"optionTableView");
  _objc_msgSend(IVar2,"setBackgroundColor:",IVar1);
  IVar1 = instance_DLMultiMediaViewController__optionTableView(param_1,"optionTableView");
  IVar2 = _objc_msgSend((ID)&objc::class_t::DLMultiMediaOptionCell,"class");
  _objc_msgSend(IVar1,"registerClass:forCellReuseIdentifier:",IVar2,&cf_optionMediaCell);
  IVar1 = DLPopupViewController::instance_DLPopupViewController__popupView(param_1,"popupView");
  IVar2 = instance_DLMultiMediaViewController__optionTableView(param_1,"optionTableView");
  _objc_msgSend(IVar1,"addSubview:",IVar2);
  IVar1 = instance_DLMultiMediaViewController__optionTableView(param_1,"optionTableView");
  IVar1 = _objc_msgSend(IVar1,"topAnchor");
  IVar2 = instance_DLMultiMediaViewController__containerMediaCollectionView
                    (param_1,"containerMediaCollectionView");
  IVar2 = _objc_msgSend(IVar2,"bottomAnchor");
  IVar1 = _objc_msgSend(IVar1,"constraintEqualToAnchor:constant:",0x4024000000000000,IVar2);
  _objc_msgSend(IVar1,"setActive:",1);
  IVar1 = instance_DLMultiMediaViewController__optionTableView(param_1,"optionTableView");
  IVar1 = _objc_msgSend(IVar1,"leadingAnchor");
  IVar2 = DLPopupViewController::instance_DLPopupViewController__popupView(param_1,"popupView");
  IVar2 = _objc_msgSend(IVar2,"safeAreaLayoutGuide");
  IVar2 = _objc_msgSend(IVar2,"leadingAnchor");
  IVar1 = _objc_msgSend(IVar1,"constraintEqualToAnchor:constant:",0x4040000000000000,IVar2);
  _objc_msgSend(IVar1,"setActive:",1);
  IVar1 = instance_DLMultiMediaViewController__optionTableView(param_1,"optionTableView");
  IVar1 = _objc_msgSend(IVar1,"trailingAnchor");
  IVar2 = DLPopupViewController::instance_DLPopupViewController__popupView(param_1,"popupView");
  IVar2 = _objc_msgSend(IVar2,"safeAreaLayoutGuide");
  IVar2 = _objc_msgSend(IVar2,"trailingAnchor");
  IVar1 = _objc_msgSend(IVar1,"constraintEqualToAnchor:constant:",0xc040000000000000,IVar2);
  _objc_msgSend(IVar1,"setActive:",1);
  IVar1 = instance_DLMultiMediaViewController__optionTableView(param_1,"optionTableView");
  IVar1 = _objc_msgSend(IVar1,"bottomAnchor");
  IVar2 = DLPopupViewController::instance_DLPopupViewController__popupView(param_1,"popupView");
  IVar2 = _objc_msgSend(IVar2,"safeAreaLayoutGuide");
  IVar2 = _objc_msgSend(IVar2,"bottomAnchor");
  IVar1 = _objc_msgSend(IVar1,"constraintEqualToAnchor:",IVar2);
  _objc_msgSend(IVar1,"setActive:",1);
  IVar1 = instance_DLMultiMediaViewController__optionTableView(param_1,"optionTableView");
  _objc_msgSend(IVar1,"setScrollEnabled:",0);
  IVar1 = instance_DLMultiMediaViewController__optionTableView(param_1,"optionTableView");
  _objc_msgSend(IVar1,"setSeparatorStyle:",0);
  IVar1 = instance_DLMultiMediaViewController__optionTableView(param_1,"optionTableView");
  DLHelper::class_DLHelper__switchToRTL_((ID)&objc::class_t::DLHelper,"switchToRTL:",IVar1);
  IVar1 = instance_DLMultiMediaViewController__optionTableView(param_1,"optionTableView");
  _objc_msgSend(IVar1,"reloadData");
  return;
}

