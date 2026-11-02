/* Address: 000b3e80 | Name: instance_FRPTextFieldCell__layoutSubviews | Body bytes: 152 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void FRPTextFieldCell::instance_FRPTextFieldCell__layoutSubviews(ID param_1,SEL param_2)

{
  ID IVar1;
  ID self;
  objc_super local_30;
  
  local_30.super_class = &objc::class_t::FRPTextFieldCell;
  local_30.receiver = param_1;
  _objc_msgSendSuper2(&local_30,"layoutSubviews");
  IVar1 = FRPCell::instance_FRPCell__tintUIColor(param_1,"tintUIColor");
  self = instance_FRPTextFieldCell__textField(param_1,"textField");
  _objc_msgSend(self,"setTintColor:",IVar1);
  return;
}

