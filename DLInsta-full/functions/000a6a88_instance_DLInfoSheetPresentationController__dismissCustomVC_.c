/* Address: 000a6a88 | Name: instance_DLInfoSheetPresentationController__dismissCustomVC_ | Body bytes: 116 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void DLInfoSheetPresentationController::instance_DLInfoSheetPresentationController__dismissCustomVC_
               (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  IVar1 = _objc_msgSend(param_3,"state");
  if (IVar1 == 3) {
    IVar1 = _objc_msgSend(param_1,"presentingViewController");
    _objc_msgSend(IVar1,"dismissViewControllerAnimated:completion:",1,0);
    return;
  }
  return;
}

