/* Address: 000ad5a0 | Name: instance_DLPopupViewController__popupViewHeight | Body bytes: 148 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

double DLPopupViewController::instance_DLPopupViewController__popupViewHeight
                 (ID param_1,SEL param_2)

{
  ID self;
  double dVar1;
  double in_d3;
  
  dVar1 = instance_DLPopupViewController__customHeight(param_1,"customHeight");
  if (dVar1 == 0.0) {
    self = UIScreen::mainScreen((ID)&_OBJC_CLASS___UIScreen,"mainScreen");
    UIScreen::bounds(self,"bounds");
    return in_d3 * 0.5;
  }
  dVar1 = instance_DLPopupViewController__customHeight(param_1,"customHeight");
  return dVar1;
}

