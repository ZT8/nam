/* Address: 000a63fc | Name: instance_DLInfoSheetPresentationController__initWithPresentedViewController_presentingViewController_ | Body bytes: 316 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID DLInfoSheetPresentationController::
   instance_DLInfoSheetPresentationController__initWithPresentedViewController_presentingViewController_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  ID IVar2;
  undefined8 uVar3;
  long lVar4;
  ID local_40;
  class_t *pcStack_38;
  
  pcStack_38 = &objc::class_t::DLInfoSheetPresentationController;
  local_40 = param_1;
  IVar1 = UIPresentationController::initWithPresentedViewController_presentingViewController_
                    ((ID)&local_40,"initWithPresentedViewController:presentingViewController:");
  if (IVar1 != 0) {
    IVar2 = _objc_alloc(&_OBJC_CLASS___UIView);
    IVar2 = UIView::init(IVar2,"init");
    lVar4 = (long)_dimmingView;
    uVar3 = *(undefined8 *)(IVar1 + lVar4);
    *(ID *)(IVar1 + lVar4) = IVar2;
    IVar2 = UIColor::blackColor((ID)&_OBJC_CLASS___UIColor,"blackColor",uVar3);
    IVar2 = UIColor::colorWithAlphaComponent_(IVar2,"colorWithAlphaComponent:",0x3feccccccccccccd);
    _objc_msgSend(*(ID *)(IVar1 + lVar4),"setBackgroundColor:",IVar2);
    _objc_msgSend(*(ID *)(IVar1 + lVar4),"setAlpha:",0);
    IVar2 = _objc_alloc(&_OBJC_CLASS___UITapGestureRecognizer);
    IVar2 = UITapGestureRecognizer::initWithTarget_action_
                      (IVar2,"initWithTarget:action:",IVar1,"dismissCustomVC:");
    _objc_msgSend(*(ID *)(IVar1 + lVar4),"addGestureRecognizer:",IVar2);
  }
  return IVar1;
}

