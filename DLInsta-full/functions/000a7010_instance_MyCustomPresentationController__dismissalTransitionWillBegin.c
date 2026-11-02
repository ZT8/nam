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

