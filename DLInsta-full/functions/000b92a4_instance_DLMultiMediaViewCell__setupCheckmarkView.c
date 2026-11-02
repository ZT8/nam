/* Address: 000b92a4 | Name: instance_DLMultiMediaViewCell__setupCheckmarkView | Body bytes: 1408 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

void DLMultiMediaViewCell::instance_DLMultiMediaViewCell__setupCheckmarkView(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = _objc_alloc(&_OBJC_CLASS___UIView);
  IVar1 = UIView::init(IVar1,"init");
  instance_DLMultiMediaViewCell__setCheckmarkView_(param_1,"setCheckmarkView:",IVar1);
  IVar1 = instance_DLMultiMediaViewCell__checkmarkView(param_1,"checkmarkView");
  _objc_msgSend(IVar1,"setTranslatesAutoresizingMaskIntoConstraints:",0);
  IVar1 = instance_DLMultiMediaViewCell__mediaImageView(param_1,"mediaImageView");
  IVar2 = instance_DLMultiMediaViewCell__checkmarkView(param_1,"checkmarkView");
  _objc_msgSend(IVar1,"addSubview:",IVar2);
  IVar1 = instance_DLMultiMediaViewCell__checkmarkView(param_1,"checkmarkView");
  IVar1 = _objc_msgSend(IVar1,"heightAnchor");
  IVar2 = instance_DLMultiMediaViewCell__mediaImageView(param_1,"mediaImageView");
  IVar2 = _objc_msgSend(IVar2,"heightAnchor");
  IVar1 = _objc_msgSend(IVar1,"constraintEqualToAnchor:",IVar2);
  _objc_msgSend(IVar1,"setActive:",1);
  IVar1 = instance_DLMultiMediaViewCell__checkmarkView(param_1,"checkmarkView");
  IVar1 = _objc_msgSend(IVar1,"widthAnchor");
  IVar2 = instance_DLMultiMediaViewCell__mediaImageView(param_1,"mediaImageView");
  IVar2 = _objc_msgSend(IVar2,"widthAnchor");
  IVar1 = _objc_msgSend(IVar1,"constraintEqualToAnchor:",IVar2);
  _objc_msgSend(IVar1,"setActive:",1);
  IVar1 = _objc_alloc(&_OBJC_CLASS___UIImageView);
  IVar1 = UIImageView::init(IVar1,"init");
  instance_DLMultiMediaViewCell__setCheckmarkImageView_(param_1,"setCheckmarkImageView:",IVar1);
  IVar1 = instance_DLMultiMediaViewCell__checkmarkImageView(param_1,"checkmarkImageView");
  _objc_msgSend(IVar1,"setTranslatesAutoresizingMaskIntoConstraints:",0);
  IVar1 = instance_DLMultiMediaViewCell__checkmarkView(param_1,"checkmarkView");
  IVar2 = instance_DLMultiMediaViewCell__checkmarkImageView(param_1,"checkmarkImageView");
  _objc_msgSend(IVar1,"addSubview:",IVar2);
  IVar1 = instance_DLMultiMediaViewCell__checkmarkImageView(param_1,"checkmarkImageView");
  IVar1 = _objc_msgSend(IVar1,"centerXAnchor");
  IVar2 = instance_DLMultiMediaViewCell__checkmarkView(param_1,"checkmarkView");
  IVar2 = _objc_msgSend(IVar2,"centerXAnchor");
  IVar1 = _objc_msgSend(IVar1,"constraintEqualToAnchor:",IVar2);
  _objc_msgSend(IVar1,"setActive:",1);
  IVar1 = instance_DLMultiMediaViewCell__checkmarkImageView(param_1,"checkmarkImageView");
  IVar1 = _objc_msgSend(IVar1,"centerYAnchor");
  IVar2 = instance_DLMultiMediaViewCell__checkmarkView(param_1,"checkmarkView");
  IVar2 = _objc_msgSend(IVar2,"centerYAnchor");
  IVar1 = _objc_msgSend(IVar1,"constraintEqualToAnchor:",IVar2);
  _objc_msgSend(IVar1,"setActive:",1);
  IVar1 = instance_DLMultiMediaViewCell__checkmarkImageView(param_1,"checkmarkImageView");
  IVar1 = _objc_msgSend(IVar1,"heightAnchor");
  IVar1 = _objc_msgSend(IVar1,"constraintEqualToConstant:",0x4038000000000000);
  _objc_msgSend(IVar1,"setActive:",1);
  IVar1 = instance_DLMultiMediaViewCell__checkmarkImageView(param_1,"checkmarkImageView");
  IVar1 = _objc_msgSend(IVar1,"widthAnchor");
  IVar1 = _objc_msgSend(IVar1,"constraintEqualToConstant:",0x4038000000000000);
  _objc_msgSend(IVar1,"setActive:",1);
  return;
}

