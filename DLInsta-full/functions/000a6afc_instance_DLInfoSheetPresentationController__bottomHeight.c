/* Address: 000a6afc | Name: instance_DLInfoSheetPresentationController__bottomHeight | Body bytes: 84 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

double DLInfoSheetPresentationController::instance_DLInfoSheetPresentationController__bottomHeight
                 (ID param_1,SEL param_2)

{
  ID self;
  double in_d2;
  
  self = _objc_msgSend(param_1,"containerView");
  _objc_msgSend(self,"safeAreaInsets");
  return in_d2;
}

