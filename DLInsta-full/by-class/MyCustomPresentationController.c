/* Automatic pseudocode grouped by Objective-C class. NOT original source. */

/* -[MyCustomPresentationController presentationTransitionWillBegin] | encoding v16@0:8 */
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


/* -[MyCustomPresentationController containerViewWillLayoutSubviews] | encoding v16@0:8 */
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


/* -[MyCustomPresentationController presentationTransitionDidEnd:] | encoding v20@0:8B16 */
/* Address: 000a6f98 | Name: instance_MyCustomPresentationController__presentationTransitionDidEnd_ | Body bytes: 120 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x14 bytes */

void MyCustomPresentationController::
     instance_MyCustomPresentationController__presentationTransitionDidEnd_
               (ID param_1,SEL param_2,bool param_3)

{
  ID self;
  ID local_30;
  class_t *pcStack_28;
  
  pcStack_28 = &objc::class_t::MyCustomPresentationController;
  local_30 = param_1;
  UIPresentationController::presentationTransitionDidEnd_
            ((ID)&local_30,"presentationTransitionDidEnd:");
  if ((param_3 & 1) == 0) {
    self = instance_MyCustomPresentationController__dimmingView(param_1,"dimmingView");
    _objc_msgSend(self,"removeFromSuperview");
  }
  return;
}


/* -[MyCustomPresentationController dismissalTransitionWillBegin] | encoding v16@0:8 */
/* Address: 000a7010 | Name: instance_MyCustomPresentationController__dismissalTransitionWillBegin | Body bytes: 212 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void MyCustomPresentationController::
     instance_MyCustomPresentationController__dismissalTransitionWillBegin(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *local_68;
  undefined8 local_60;
  code *local_58;
  undefined *puStack_50;
  ID local_48;
  ID local_40;
  class_t *pcStack_38;
  
  pcStack_38 = &objc::class_t::MyCustomPresentationController;
  local_40 = param_1;
  UIPresentationController::dismissalTransitionWillBegin
            ((ID)&local_40,"dismissalTransitionWillBegin");
  IVar1 = _objc_msgSend(param_1,"presentingViewController");
  IVar1 = _objc_msgSend(IVar1,"transitionCoordinator");
  local_68 = PTR___NSConcreteStackBlock_000e80d8;
  local_60 = 0xc2000000;
  local_58 = FUN_000a70e4;
  puStack_50 = &DAT_000e9b18;
  local_48 = param_1;
  _objc_msgSend(IVar1,"animateAlongsideTransition:completion:",&local_68,0);
  return;
}


/* -[MyCustomPresentationController dismissalTransitionDidEnd:] | encoding v20@0:8B16 */
/* Address: 000a71a8 | Name: instance_MyCustomPresentationController__dismissalTransitionDidEnd_ | Body bytes: 120 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x14 bytes */

void MyCustomPresentationController::
     instance_MyCustomPresentationController__dismissalTransitionDidEnd_
               (ID param_1,SEL param_2,bool param_3)

{
  ID self;
  ID local_30;
  class_t *pcStack_28;
  
  pcStack_28 = &objc::class_t::MyCustomPresentationController;
  local_30 = param_1;
  UIPresentationController::dismissalTransitionDidEnd_((ID)&local_30,"dismissalTransitionDidEnd:");
  if (param_3 != 0) {
    self = instance_MyCustomPresentationController__dimmingView(param_1,"dimmingView");
    _objc_msgSend(self,"removeFromSuperview");
  }
  return;
}


/* -[MyCustomPresentationController dimmingView] | encoding @16@0:8 */
/* Address: 000a7220 | Name: instance_MyCustomPresentationController__dimmingView | Body bytes: 16 */

/* WARNING: Function: _objc_getProperty replaced with injection: _objc_getProperty_fixup */
/* Function Stack Size: 0x10 bytes */

ID MyCustomPresentationController::instance_MyCustomPresentationController__dimmingView
             (ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_dimmingView);
}


/* -[MyCustomPresentationController setDimmingView:] | encoding v24@0:8@16 */
/* Address: 000a7230 | Name: instance_MyCustomPresentationController__setDimmingView_ | Body bytes: 12 */

/* WARNING: Function: _objc_setProperty_atomic replaced with injection: _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void MyCustomPresentationController::instance_MyCustomPresentationController__setDimmingView_
               (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_dimmingView) = param_3;
  return;
}


/* -[MyCustomPresentationController .cxx_destruct] | encoding v16@0:8 */
/* Address: 000a723c | Name: instance_MyCustomPresentationController___cxx_destruct | Body bytes: 20 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void MyCustomPresentationController::instance_MyCustomPresentationController___cxx_destruct
               (ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_dimmingView) = 0;
  return;
}

