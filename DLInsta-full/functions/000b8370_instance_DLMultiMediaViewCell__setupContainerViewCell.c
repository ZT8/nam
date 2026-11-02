/* Address: 000b8370 | Name: instance_DLMultiMediaViewCell__setupContainerViewCell | Body bytes: 888 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

void DLMultiMediaViewCell::instance_DLMultiMediaViewCell__setupContainerViewCell
               (ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = _objc_alloc(&_OBJC_CLASS___UIView);
  IVar1 = UIView::init(IVar1,"init");
  instance_DLMultiMediaViewCell__setContainerViewCell_(param_1,"setContainerViewCell:",IVar1);
  IVar1 = instance_DLMultiMediaViewCell__containerViewCell(param_1,"containerViewCell");
  _objc_msgSend(IVar1,"setTranslatesAutoresizingMaskIntoConstraints:",0);
  IVar1 = UIColor::darkGrayColor((ID)&_OBJC_CLASS___UIColor,"darkGrayColor");
  IVar1 = UIColor::colorWithAlphaComponent_(IVar1,"colorWithAlphaComponent:",0x3fd3333333333333);
  IVar2 = instance_DLMultiMediaViewCell__containerViewCell(param_1,"containerViewCell");
  _objc_msgSend(IVar2,"setBackgroundColor:",IVar1);
  IVar1 = instance_DLMultiMediaViewCell__containerViewCell(param_1,"containerViewCell");
  IVar1 = _objc_msgSend(IVar1,"layer");
  _objc_msgSend(IVar1,"setCornerRadius:",0x4018000000000000);
  IVar1 = instance_DLMultiMediaViewCell__containerViewCell(param_1,"containerViewCell");
  IVar1 = _objc_msgSend(IVar1,"layer");
  _objc_msgSend(IVar1,"setMasksToBounds:",1);
  IVar1 = instance_DLMultiMediaViewCell__containerViewCell(param_1,"containerViewCell");
  IVar1 = _objc_msgSend(IVar1,"layer");
  _objc_msgSend(IVar1,"setBorderWidth:",0x3fe0000000000000);
  IVar1 = instance_DLMultiMediaViewCell__containerViewCell(param_1,"containerViewCell");
  _objc_msgSend(param_1,"addSubview:",IVar1);
  IVar1 = instance_DLMultiMediaViewCell__containerViewCell(param_1,"containerViewCell");
  IVar1 = _objc_msgSend(IVar1,"heightAnchor");
  IVar2 = _objc_msgSend(param_1,"heightAnchor");
  IVar1 = _objc_msgSend(IVar1,"constraintEqualToAnchor:",IVar2);
  _objc_msgSend(IVar1,"setActive:",1);
  IVar1 = instance_DLMultiMediaViewCell__containerViewCell(param_1,"containerViewCell");
  IVar1 = _objc_msgSend(IVar1,"widthAnchor");
  IVar2 = _objc_msgSend(param_1,"widthAnchor");
  IVar1 = _objc_msgSend(IVar1,"constraintEqualToAnchor:",IVar2);
  _objc_msgSend(IVar1,"setActive:",1);
  return;
}

