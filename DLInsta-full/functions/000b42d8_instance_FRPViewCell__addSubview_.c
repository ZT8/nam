/* Address: 000b42d8 | Name: instance_FRPViewCell__addSubview_ | Body bytes: 216 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void FRPViewCell::instance_FRPViewCell__addSubview_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ID self;
  double dVar2;
  double extraout_d0;
  objc_super local_50;
  
  bVar1 = instance_FRPViewCell__hideSeperators(param_1,"hideSeperators");
  if (bVar1 != 0) {
    _objc_msgSend(param_3,"frame");
    dVar2 = (double)_CGRectGetHeight();
    self = UIScreen::mainScreen((ID)&_OBJC_CLASS___UIScreen,"mainScreen");
    UIScreen::scale(self,"scale");
    if (dVar2 * extraout_d0 == 1.0) {
      return;
    }
  }
  local_50.super_class = &objc::class_t::FRPViewCell;
  local_50.receiver = param_1;
  _objc_msgSendSuper2(&local_50,"addSubview:",param_3);
  return;
}

