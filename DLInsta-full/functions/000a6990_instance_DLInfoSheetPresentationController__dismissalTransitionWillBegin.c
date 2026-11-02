/* Address: 000a6990 | Name: instance_DLInfoSheetPresentationController__dismissalTransitionWillBegin | Body bytes: 176 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void DLInfoSheetPresentationController::
     instance_DLInfoSheetPresentationController__dismissalTransitionWillBegin
               (ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *local_58;
  undefined8 local_50;
  code *local_48;
  undefined *puStack_40;
  ID local_38;
  
  IVar1 = _objc_msgSend(param_1,"presentedViewController");
  IVar1 = _objc_msgSend(IVar1,"transitionCoordinator");
  local_58 = PTR___NSConcreteStackBlock_000e80d8;
  local_50 = 0xc2000000;
  local_48 = FUN_000a6a40;
  puStack_40 = &DAT_000e9b18;
  local_38 = param_1;
  _objc_msgSend(IVar1,"animateAlongsideTransition:completion:",&local_58,0);
  return;
}

