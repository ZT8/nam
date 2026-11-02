/* Address: 00096c84 | Name: instance_MBProgressHUDRoundedButton__setHighlighted_ | Body bytes: 212 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x14 bytes */

void MBProgressHUDRoundedButton::instance_MBProgressHUDRoundedButton__setHighlighted_
               (ID param_1,SEL param_2,bool param_3)

{
  ID IVar1;
  ID local_40;
  class_t *pcStack_38;
  
  pcStack_38 = &objc::class_t::MBProgressHUDRoundedButton;
  local_40 = param_1;
  UIButton::setHighlighted_((ID)&local_40,"setHighlighted:");
  IVar1 = _objc_msgSend(param_1,"titleColorForState:",4);
  if ((param_3 & 1) == 0) {
    IVar1 = UIColor::clearColor((ID)&_OBJC_CLASS___UIColor,"clearColor");
  }
  else {
    IVar1 = _objc_msgSend(IVar1,"colorWithAlphaComponent:",0x3fb99999a0000000);
  }
  _objc_msgSend(param_1,"setBackgroundColor:",IVar1);
  return;
}

