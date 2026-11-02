/* Address: 000b86e8 | Name: instance_DLMultiMediaViewCell__setupIndicatorView | Body bytes: 632 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

void DLMultiMediaViewCell::instance_DLMultiMediaViewCell__setupIndicatorView(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = _objc_alloc(&_OBJC_CLASS___UIActivityIndicatorView);
  IVar1 = UIActivityIndicatorView::initWithActivityIndicatorStyle_
                    (IVar1,"initWithActivityIndicatorStyle:",1);
  instance_DLMultiMediaViewCell__setIndicatorView_(param_1,"setIndicatorView:",IVar1);
  IVar1 = instance_DLMultiMediaViewCell__indicatorView(param_1,"indicatorView");
  _objc_msgSend(IVar1,"setTranslatesAutoresizingMaskIntoConstraints:",0);
  IVar1 = instance_DLMultiMediaViewCell__containerViewCell(param_1,"containerViewCell");
  IVar2 = instance_DLMultiMediaViewCell__indicatorView(param_1,"indicatorView");
  _objc_msgSend(IVar1,"addSubview:",IVar2);
  IVar1 = instance_DLMultiMediaViewCell__indicatorView(param_1,"indicatorView");
  IVar1 = _objc_msgSend(IVar1,"centerYAnchor");
  IVar2 = instance_DLMultiMediaViewCell__containerViewCell(param_1,"containerViewCell");
  IVar2 = _objc_msgSend(IVar2,"centerYAnchor");
  IVar1 = _objc_msgSend(IVar1,"constraintEqualToAnchor:",IVar2);
  _objc_msgSend(IVar1,"setActive:",1);
  IVar1 = instance_DLMultiMediaViewCell__indicatorView(param_1,"indicatorView");
  IVar1 = _objc_msgSend(IVar1,"centerXAnchor");
  IVar2 = instance_DLMultiMediaViewCell__containerViewCell(param_1,"containerViewCell");
  IVar2 = _objc_msgSend(IVar2,"centerXAnchor");
  IVar1 = _objc_msgSend(IVar1,"constraintEqualToAnchor:",IVar2);
  _objc_msgSend(IVar1,"setActive:",1);
  return;
}

