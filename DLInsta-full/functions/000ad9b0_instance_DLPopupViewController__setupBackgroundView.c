/* Address: 000ad9b0 | Name: instance_DLPopupViewController__setupBackgroundView | Body bytes: 496 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

void DLPopupViewController::instance_DLPopupViewController__setupBackgroundView
               (ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  undefined8 uVar3;
  long lVar4;
  
  IVar1 = _objc_alloc(&_OBJC_CLASS___UIView);
  IVar1 = UIView::init(IVar1,"init");
  lVar4 = (long)backgroundView;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(ID *)(param_1 + lVar4) = IVar1;
  IVar1 = UIColor::clearColor((ID)&_OBJC_CLASS___UIColor,"clearColor",uVar3);
  IVar2 = _objc_msgSend(param_1,"view");
  _objc_msgSend(IVar2,"setBackgroundColor:",IVar1);
  IVar1 = UIColor::blackColor((ID)&_OBJC_CLASS___UIColor,"blackColor");
  _objc_msgSend(*(ID *)(param_1 + lVar4),"setBackgroundColor:",IVar1);
  _objc_msgSend(*(ID *)(param_1 + lVar4),"setAlpha:",0);
  IVar1 = _objc_msgSend(param_1,"view");
  _objc_msgSend(IVar1,"bounds");
  _objc_msgSend(*(ID *)(param_1 + lVar4),"setFrame:");
  IVar2 = *(ID *)(param_1 + lVar4);
  IVar1 = _objc_alloc(&_OBJC_CLASS___UITapGestureRecognizer);
  IVar1 = UITapGestureRecognizer::initWithTarget_action_
                    (IVar1,"initWithTarget:action:",param_1,"dismissPopup");
  _objc_msgSend(IVar2,"addGestureRecognizer:",IVar1);
  IVar1 = _objc_msgSend(param_1,"view");
  _objc_msgSend(IVar1,"addSubview:",*(undefined8 *)(param_1 + lVar4));
  IVar1 = _objc_msgSend(param_1,"view");
  _objc_msgSend(IVar1,"sendSubviewToBack:",*(undefined8 *)(param_1 + lVar4));
  return;
}

