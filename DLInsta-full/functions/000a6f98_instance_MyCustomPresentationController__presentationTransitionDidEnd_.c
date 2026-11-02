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

