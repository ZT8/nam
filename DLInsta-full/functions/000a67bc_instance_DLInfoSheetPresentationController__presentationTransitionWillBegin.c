/* Address: 000a67bc | Name: instance_DLInfoSheetPresentationController__presentationTransitionWillBegin | Body bytes: 396 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void DLInfoSheetPresentationController::
     instance_DLInfoSheetPresentationController__presentationTransitionWillBegin
               (ID param_1,SEL param_2)

{
  ID IVar1;
  ID self;
  ID IVar2;
  undefined8 extraout_d0;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  undefined *local_88;
  undefined8 local_80;
  code *local_78;
  undefined *puStack_70;
  ID local_68;
  
  IVar1 = _objc_msgSend(param_1,"containerView");
  self = _objc_msgSend(param_1,"presentedViewController");
  _objc_msgSend(IVar1,"bounds");
  IVar2 = instance_DLInfoSheetPresentationController__dimmingView(param_1,"dimmingView");
  _objc_msgSend(IVar2,"setFrame:",extraout_d0,in_d1,in_d2,in_d3);
  IVar2 = instance_DLInfoSheetPresentationController__dimmingView(param_1,"dimmingView");
  _objc_msgSend(IVar1,"insertSubview:atIndex:",IVar2,0);
  IVar1 = _objc_msgSend(self,"transitionCoordinator");
  local_88 = PTR___NSConcreteStackBlock_000e80d8;
  local_80 = 0xc2000000;
  local_78 = FUN_000a6948;
  puStack_70 = &DAT_000e9b18;
  local_68 = param_1;
  _objc_msgSend(IVar1,"animateAlongsideTransition:completion:",&local_88,0);
  return;
}

