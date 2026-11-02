/* Address: 000a6e60 | Name: instance_MyCustomPresentationController__containerViewWillLayoutSubviews | Body bytes: 312 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void MyCustomPresentationController::
     instance_MyCustomPresentationController__containerViewWillLayoutSubviews
               (ID param_1,SEL param_2)

{
  ID IVar1;
  undefined8 extraout_d0;
  undefined8 extraout_d0_00;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  ID local_60;
  class_t *pcStack_58;
  
  pcStack_58 = &objc::class_t::MyCustomPresentationController;
  local_60 = param_1;
  UIPresentationController::containerViewWillLayoutSubviews
            ((ID)&local_60,"containerViewWillLayoutSubviews");
  _objc_msgSend(param_1,"frameOfPresentedViewInContainerView");
  IVar1 = _objc_msgSend(param_1,"presentedView");
  _objc_msgSend(IVar1,"setFrame:",extraout_d0,in_d1,in_d2,in_d3);
  IVar1 = _objc_msgSend(param_1,"containerView");
  _objc_msgSend(IVar1,"bounds");
  IVar1 = instance_MyCustomPresentationController__dimmingView(param_1,"dimmingView");
  _objc_msgSend(IVar1,"setFrame:",extraout_d0_00,in_d1,in_d2,in_d3);
  return;
}

