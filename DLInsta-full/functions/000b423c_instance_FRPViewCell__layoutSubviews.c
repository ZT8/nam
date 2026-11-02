/* Address: 000b423c | Name: instance_FRPViewCell__layoutSubviews | Body bytes: 156 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void FRPViewCell::instance_FRPViewCell__layoutSubviews(ID param_1,SEL param_2)

{
  ID IVar1;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::FRPViewCell;
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,"layoutSubviews");
  IVar1 = instance_FRPViewCell__layoutBlock(param_1,"layoutBlock");
  if (IVar1 != 0) {
    IVar1 = instance_FRPViewCell__layoutBlock(param_1,"layoutBlock");
    (**(code **)(IVar1 + 0x10))(IVar1,param_1);
  }
  return;
}

