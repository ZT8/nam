/* Address: 000adba0 | Name: instance_DLPopupViewController__setupBlurView | Body bytes: 1068 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

void DLPopupViewController::instance_DLPopupViewController__setupBlurView(ID param_1,SEL param_2)

{
  ID IVar1;
  ID self;
  undefined8 uVar2;
  ID IVar3;
  long lVar4;
  double dVar5;
  undefined8 in_d2;
  double in_d3;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  IVar1 = _objc_alloc(&objc::class_t::DLVisualEffectView);
  IVar1 = _objc_msgSend(IVar1,"init");
  lVar4 = (long)blurView;
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  *(ID *)(param_1 + lVar4) = IVar1;
  _objc_msgSend(*(ID *)(param_1 + lVar4),"setTranslatesAutoresizingMaskIntoConstraints:",uVar2,0);
  IVar1 = _objc_msgSend(*(ID *)(param_1 + lVar4),"layer");
  _objc_msgSend(IVar1,"setCornerRadius:",0x402e000000000000);
  IVar1 = _objc_msgSend(*(ID *)(param_1 + lVar4),"layer");
  _objc_msgSend(IVar1,"setMaskedCorners:",3);
  IVar1 = _objc_msgSend(*(ID *)(param_1 + lVar4),"layer");
  _objc_msgSend(IVar1,"setMasksToBounds:",1);
  IVar3 = *(ID *)(param_1 + lVar4);
  IVar1 = _objc_alloc(&_OBJC_CLASS___UIPanGestureRecognizer);
  IVar1 = UIPanGestureRecognizer::initWithTarget_action_
                    (IVar1,"initWithTarget:action:",param_1,"panGestureRecognizerHandler:");
  _objc_msgSend(IVar3,"addGestureRecognizer:",IVar1);
  IVar1 = _objc_msgSend(param_1,"view");
  _objc_msgSend(IVar1,"addSubview:",*(undefined8 *)(param_1 + lVar4));
  IVar1 = _objc_msgSend(*(ID *)(param_1 + lVar4),"widthAnchor");
  IVar3 = _objc_msgSend(param_1,"view");
  _objc_msgSend(IVar3,"bounds");
  IVar1 = _objc_msgSend(IVar1,"constraintEqualToConstant:",in_d2);
  instance_DLPopupViewController__setBlurWidthLayoutConstraint_
            (param_1,"setBlurWidthLayoutConstraint:",IVar1);
  IVar1 = instance_DLPopupViewController__blurWidthLayoutConstraint
                    (param_1,"blurWidthLayoutConstraint");
  _objc_msgSend(IVar1,"setActive:",1);
  IVar1 = _objc_msgSend(*(ID *)(param_1 + lVar4),"heightAnchor");
  IVar3 = _objc_msgSend(param_1,"view");
  _objc_msgSend(IVar3,"bounds");
  IVar1 = _objc_msgSend(IVar1,"constraintEqualToConstant:",in_d3);
  _objc_msgSend(IVar1,"setActive:",1);
  IVar1 = _objc_msgSend(*(ID *)(param_1 + lVar4),"bottomAnchor");
  IVar3 = _objc_msgSend(param_1,"view");
  IVar3 = _objc_msgSend(IVar3,"layoutMarginsGuide");
  IVar3 = _objc_msgSend(IVar3,"bottomAnchor");
  self = _objc_msgSend(param_1,"view");
  _objc_msgSend(self,"bounds");
  dVar5 = instance_DLPopupViewController__popupViewHeight(param_1,"popupViewHeight");
  IVar1 = _objc_msgSend(IVar1,"constraintEqualToAnchor:constant:",in_d3 - dVar5,IVar3);
  _objc_msgSend(IVar1,"setActive:",1);
  dVar5 = instance_DLPopupViewController__popupViewHeight(param_1,"popupViewHeight");
  _CGAffineTransformMakeTranslation(&local_a0,0,dVar5);
  uStack_c8 = uStack_98;
  local_d0 = local_a0;
  uStack_b8 = uStack_88;
  uStack_c0 = uStack_90;
  uStack_a8 = uStack_78;
  local_b0 = local_80;
  _objc_msgSend(*(ID *)(param_1 + lVar4),"setTransform:",&local_d0);
  return;
}

