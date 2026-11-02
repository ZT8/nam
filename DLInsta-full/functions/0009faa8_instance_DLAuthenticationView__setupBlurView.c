/* Address: 0009faa8 | Name: instance_DLAuthenticationView__setupBlurView | Body bytes: 524 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

void DLAuthenticationView::instance_DLAuthenticationView__setupBlurView(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = _objc_alloc(&_OBJC_CLASS___UIVisualEffectView);
  IVar1 = UIVisualEffectView::init(IVar1,"init");
  instance_DLAuthenticationView__setDlBlurView_(param_1,"setDlBlurView:",IVar1);
  IVar1 = instance_DLAuthenticationView__dlBlurView(param_1,"dlBlurView");
  _objc_msgSend(IVar1,"setTranslatesAutoresizingMaskIntoConstraints:",0);
  IVar1 = instance_DLAuthenticationView__dlBlurView(param_1,"dlBlurView");
  _objc_msgSend(param_1,"addSubview:",IVar1);
  IVar1 = instance_DLAuthenticationView__dlBlurView(param_1,"dlBlurView");
  IVar1 = _objc_msgSend(IVar1,"widthAnchor");
  IVar2 = _objc_msgSend(param_1,"widthAnchor");
  IVar1 = _objc_msgSend(IVar1,"constraintEqualToAnchor:",IVar2);
  _objc_msgSend(IVar1,"setActive:",1);
  IVar1 = instance_DLAuthenticationView__dlBlurView(param_1,"dlBlurView");
  IVar1 = _objc_msgSend(IVar1,"heightAnchor");
  IVar2 = _objc_msgSend(param_1,"heightAnchor");
  IVar1 = _objc_msgSend(IVar1,"constraintEqualToAnchor:",IVar2);
  _objc_msgSend(IVar1,"setActive:",1);
  return;
}

