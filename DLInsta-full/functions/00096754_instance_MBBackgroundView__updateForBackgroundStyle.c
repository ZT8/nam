/* Address: 00096754 | Name: instance_MBBackgroundView__updateForBackgroundStyle | Body bytes: 488 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void MBBackgroundView::instance_MBBackgroundView__updateForBackgroundStyle(ID param_1,SEL param_2)

{
  ID IVar1;
  long_long lVar2;
  ID IVar3;
  
  IVar1 = instance_MBBackgroundView__effectView(param_1,"effectView");
  _objc_msgSend(IVar1,"removeFromSuperview");
  instance_MBBackgroundView__setEffectView_(param_1,"setEffectView:",0);
  lVar2 = instance_MBBackgroundView__style(param_1,"style");
  if (lVar2 == 1) {
    lVar2 = instance_MBBackgroundView__blurEffectStyle(param_1,"blurEffectStyle");
    IVar1 = UIBlurEffect::effectWithStyle_((ID)&_OBJC_CLASS___UIBlurEffect,"effectWithStyle:",lVar2)
    ;
    IVar3 = _objc_alloc(&_OBJC_CLASS___UIVisualEffectView);
    IVar1 = UIVisualEffectView::initWithEffect_(IVar3,"initWithEffect:",IVar1);
    _objc_msgSend(param_1,"insertSubview:atIndex:",IVar1,0);
    _objc_msgSend(param_1,"bounds");
    UIVisualEffectView::setFrame_(IVar1,"setFrame:");
    UIVisualEffectView::setAutoresizingMask_(IVar1,"setAutoresizingMask:",0x12);
    IVar3 = instance_MBBackgroundView__color(param_1,"color");
    _objc_msgSend(param_1,"setBackgroundColor:",IVar3);
    IVar3 = _objc_msgSend(param_1,"layer");
    _objc_msgSend(IVar3,"setAllowsGroupOpacity:",0);
    instance_MBBackgroundView__setEffectView_(param_1,"setEffectView:",IVar1);
  }
  else {
    IVar1 = instance_MBBackgroundView__color(param_1,"color");
    _objc_msgSend(param_1,"setBackgroundColor:",IVar1);
  }
  return;
}

