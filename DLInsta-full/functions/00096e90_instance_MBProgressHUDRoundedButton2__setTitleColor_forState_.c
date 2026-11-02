/* Address: 00096e90 | Name: instance_MBProgressHUDRoundedButton2__setTitleColor_forState_ | Body bytes: 224 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

void MBProgressHUDRoundedButton2::instance_MBProgressHUDRoundedButton2__setTitleColor_forState_
               (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4)

{
  ID IVar1;
  ID self;
  ID local_40;
  class_t *pcStack_38;
  
  pcStack_38 = &objc::class_t::MBProgressHUDRoundedButton2;
  local_40 = param_1;
  UIButton::setTitleColor_forState_((ID)&local_40,"setTitleColor:forState:",param_3,param_4);
  IVar1 = _objc_msgSend(param_1,"isHighlighted");
  instance_MBProgressHUDRoundedButton2__setHighlighted_(param_1,"setHighlighted:",(bool)IVar1);
  IVar1 = _objc_retainAutorelease(param_3);
  IVar1 = _objc_msgSend(IVar1,"CGColor");
  self = _objc_msgSend(param_1,"layer");
  _objc_msgSend(self,"setBorderColor:",IVar1);
  return;
}

