/* Address: 000a6cb4 | Name: instance_MyCustomPresentationController__presentationTransitionWillBegin | Body bytes: 428 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void MyCustomPresentationController::
     instance_MyCustomPresentationController__presentationTransitionWillBegin
               (ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID local_50;
  class_t *pcStack_48;
  
  pcStack_48 = &objc::class_t::MyCustomPresentationController;
  local_50 = param_1;
  UIPresentationController::presentationTransitionWillBegin
            ((ID)&local_50,"presentationTransitionWillBegin");
  IVar1 = _objc_alloc(&_OBJC_CLASS___UIView);
  IVar2 = _objc_msgSend(param_1,"containerView");
  _objc_msgSend(IVar2,"bounds");
  IVar1 = UIView::initWithFrame_(IVar1,"initWithFrame:");
  instance_MyCustomPresentationController__setDimmingView_(param_1,"setDimmingView:",IVar1);
  IVar1 = UIColor::blackColor((ID)&_OBJC_CLASS___UIColor,"blackColor");
  IVar2 = instance_MyCustomPresentationController__dimmingView(param_1,"dimmingView");
  _objc_msgSend(IVar2,"setBackgroundColor:",IVar1);
  IVar1 = instance_MyCustomPresentationController__dimmingView(param_1,"dimmingView");
  _objc_msgSend(IVar1,"setAlpha:",0x3fe3333333333333);
  IVar1 = _objc_msgSend(param_1,"containerView");
  IVar2 = instance_MyCustomPresentationController__dimmingView(param_1,"dimmingView");
  _objc_msgSend(IVar1,"addSubview:",IVar2);
  return;
}

