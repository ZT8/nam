/* Address: 00096aa0 | Name: instance_MBProgressHUDRoundedButton__layoutSubviews | Body bytes: 156 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void MBProgressHUDRoundedButton::instance_MBProgressHUDRoundedButton__layoutSubviews
               (ID param_1,SEL param_2)

{
  ID self;
  double dVar1;
  ID local_40;
  class_t *pcStack_38;
  
  pcStack_38 = &objc::class_t::MBProgressHUDRoundedButton;
  local_40 = param_1;
  UIButton::layoutSubviews((ID)&local_40,"layoutSubviews");
  _objc_msgSend(param_1,"bounds");
  dVar1 = (double)_CGRectGetHeight();
  self = _objc_msgSend(param_1,"layer",dVar1 * 0.5);
  _objc_msgSend(self,"setCornerRadius:",(long)(dVar1 * 0.5));
  return;
}

