/* Address: 000aec3c | Name: instance_FRPDeveloperCell__layoutSubviews | Body bytes: 116 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void FRPDeveloperCell::instance_FRPDeveloperCell__layoutSubviews(ID param_1,SEL param_2)

{
  ID self;
  objc_super local_30;
  
  local_30.super_class = &objc::class_t::FRPDeveloperCell;
  local_30.receiver = param_1;
  _objc_msgSendSuper2(&local_30,"layoutSubviews");
  self = _objc_msgSend(param_1,"imageView");
  _objc_msgSend(self,"setClipsToBounds:",1);
  return;
}

