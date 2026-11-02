/* Address: 000adfcc | Name: instance_DLPopupViewController__setupPopupView | Body bytes: 1116 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

void DLPopupViewController::instance_DLPopupViewController__setupPopupView(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  long lVar3;
  
  IVar1 = _objc_alloc(&_OBJC_CLASS___UIView);
  IVar1 = UIView::init(IVar1,"init");
  instance_DLPopupViewController__setPopupView_(param_1,"setPopupView:",IVar1);
  IVar1 = instance_DLPopupViewController__popupView(param_1,"popupView");
  _objc_msgSend(IVar1,"setTranslatesAutoresizingMaskIntoConstraints:",0);
  lVar3 = (long)blurView;
  IVar1 = _objc_msgSend(*(ID *)(param_1 + lVar3),"contentView");
  IVar2 = instance_DLPopupViewController__popupView(param_1,"popupView");
  _objc_msgSend(IVar1,"addSubview:",IVar2);
  IVar1 = instance_DLPopupViewController__popupView(param_1,"popupView");
  IVar1 = _objc_msgSend(IVar1,"topAnchor");
  IVar2 = _objc_msgSend(*(ID *)(param_1 + lVar3),"contentView");
  IVar2 = _objc_msgSend(IVar2,"topAnchor");
  IVar1 = _objc_msgSend(IVar1,"constraintEqualToAnchor:",IVar2);
  _objc_msgSend(IVar1,"setActive:",1);
  IVar1 = instance_DLPopupViewController__popupView(param_1,"popupView");
  IVar1 = _objc_msgSend(IVar1,"leadingAnchor");
  IVar2 = _objc_msgSend(*(ID *)(param_1 + lVar3),"contentView");
  IVar2 = _objc_msgSend(IVar2,"safeAreaLayoutGuide");
  IVar2 = _objc_msgSend(IVar2,"leadingAnchor");
  IVar1 = _objc_msgSend(IVar1,"constraintEqualToAnchor:",IVar2);
  _objc_msgSend(IVar1,"setActive:",1);
  IVar1 = instance_DLPopupViewController__popupView(param_1,"popupView");
  IVar1 = _objc_msgSend(IVar1,"trailingAnchor");
  IVar2 = _objc_msgSend(*(ID *)(param_1 + lVar3),"contentView");
  IVar2 = _objc_msgSend(IVar2,"safeAreaLayoutGuide");
  IVar2 = _objc_msgSend(IVar2,"trailingAnchor");
  IVar1 = _objc_msgSend(IVar1,"constraintEqualToAnchor:",IVar2);
  _objc_msgSend(IVar1,"setActive:",1);
  IVar1 = instance_DLPopupViewController__popupView(param_1,"popupView");
  IVar1 = _objc_msgSend(IVar1,"bottomAnchor");
  IVar2 = _objc_msgSend(param_1,"view");
  IVar2 = _objc_msgSend(IVar2,"safeAreaLayoutGuide");
  IVar2 = _objc_msgSend(IVar2,"bottomAnchor");
  IVar1 = _objc_msgSend(IVar1,"constraintEqualToAnchor:",IVar2);
  _objc_msgSend(IVar1,"setActive:",1);
  return;
}

