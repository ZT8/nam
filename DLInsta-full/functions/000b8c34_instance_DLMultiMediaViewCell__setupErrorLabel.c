/* Address: 000b8c34 | Name: instance_DLMultiMediaViewCell__setupErrorLabel | Body bytes: 820 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

void DLMultiMediaViewCell::instance_DLMultiMediaViewCell__setupErrorLabel(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = _objc_alloc(&_OBJC_CLASS___UILabel);
  IVar1 = UILabel::init(IVar1,"init");
  instance_DLMultiMediaViewCell__setErrorLabel_(param_1,"setErrorLabel:",IVar1);
  IVar1 = instance_DLMultiMediaViewCell__errorLabel(param_1,"errorLabel");
  _objc_msgSend(IVar1,"setTranslatesAutoresizingMaskIntoConstraints:",0);
  IVar1 = UIFont::systemFontOfSize_weight_
                    ((ID)&_OBJC_CLASS___UIFont,"systemFontOfSize:weight:",0x4028000000000000,
                     *(undefined8 *)PTR__UIFontWeightSemibold_000e80c8);
  IVar2 = instance_DLMultiMediaViewCell__errorLabel(param_1,"errorLabel");
  _objc_msgSend(IVar2,"setFont:",IVar1);
  IVar1 = UIColor::whiteColor((ID)&_OBJC_CLASS___UIColor,"whiteColor");
  IVar2 = instance_DLMultiMediaViewCell__errorLabel(param_1,"errorLabel");
  _objc_msgSend(IVar2,"setTextColor:",IVar1);
  IVar1 = instance_DLMultiMediaViewCell__mediaImageView(param_1,"mediaImageView");
  IVar2 = instance_DLMultiMediaViewCell__errorLabel(param_1,"errorLabel");
  _objc_msgSend(IVar1,"addSubview:",IVar2);
  IVar1 = instance_DLMultiMediaViewCell__errorLabel(param_1,"errorLabel");
  IVar1 = _objc_msgSend(IVar1,"centerYAnchor");
  IVar2 = instance_DLMultiMediaViewCell__mediaImageView(param_1,"mediaImageView");
  IVar2 = _objc_msgSend(IVar2,"centerYAnchor");
  IVar1 = _objc_msgSend(IVar1,"constraintEqualToAnchor:",IVar2);
  _objc_msgSend(IVar1,"setActive:",1);
  IVar1 = instance_DLMultiMediaViewCell__errorLabel(param_1,"errorLabel");
  IVar1 = _objc_msgSend(IVar1,"centerXAnchor");
  IVar2 = instance_DLMultiMediaViewCell__mediaImageView(param_1,"mediaImageView");
  IVar2 = _objc_msgSend(IVar2,"centerXAnchor");
  IVar1 = _objc_msgSend(IVar1,"constraintEqualToAnchor:",IVar2);
  _objc_msgSend(IVar1,"setActive:",1);
  return;
}

