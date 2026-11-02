/* Address: 0008dbec | Name: class_DLHelper__is_iPhoneX | Body bytes: 96 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

bool DLHelper::class_DLHelper__is_iPhoneX(ID param_1,SEL param_2)

{
  ID self;
  double extraout_d0;
  
  self = class_DLHelper__topWindow((ID)&objc::class_t::DLHelper,"topWindow");
  _objc_msgSend(self,"safeAreaInsets");
  return (bool)(44.0 < extraout_d0);
}

