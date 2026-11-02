/* Address: 0000c0b4 | Name: FUN_0000c0b4 | Body bytes: 840 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

undefined8 FUN_0000c0b4(undefined8 param_1,ID param_2,undefined8 param_3,ID param_4,int param_5)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = _objc_alloc(&_OBJC_CLASS___UILabel);
  IVar1 = UILabel::init(IVar1,"init");
  _objc_msgSend(param_2,"setFollowStatusLabel:",IVar1);
  IVar1 = _objc_msgSend(param_2,"followStatusLabel");
  _objc_msgSend(IVar1,"setTranslatesAutoresizingMaskIntoConstraints:",0);
  IVar1 = UIFont::systemFontOfSize_
                    ((ID)&_OBJC_CLASS___UIFont,"systemFontOfSize:",0x4024000000000000);
  IVar2 = _objc_msgSend(param_2,"followStatusLabel");
  _objc_msgSend(IVar2,"setFont:",IVar1);
  IVar1 = _objc_msgSend(param_2,"followStatusLabel");
  _objc_msgSend(IVar1,"setTextAlignment:",1);
  IVar1 = _objc_msgSend(param_2,"followStatusLabel");
  _objc_msgSend(param_4,"addSubview:",IVar1);
  IVar1 = _objc_msgSend(param_2,"followStatusLabel");
  IVar1 = _objc_msgSend(IVar1,"bottomAnchor");
  IVar2 = _objc_msgSend(param_4,"bottomAnchor");
  IVar1 = _objc_msgSend(IVar1,"constraintEqualToAnchor:constant:",param_1,IVar2);
  _objc_msgSend(IVar1,"setActive:",1);
  if (param_5 == 0) {
    IVar1 = _objc_msgSend(param_2,"followStatusLabel");
    IVar1 = _objc_msgSend(IVar1,"leadingAnchor");
    IVar2 = _objc_msgSend(param_4,"leadingAnchor");
    IVar1 = _objc_msgSend(IVar1,"constraintEqualToAnchor:",IVar2);
    _objc_msgSend(IVar1,"setActive:",1);
  }
  else {
    IVar1 = _objc_msgSend(param_2,"followStatusLabel");
    IVar1 = _objc_msgSend(IVar1,"centerXAnchor");
    IVar2 = _objc_msgSend(param_4,"centerXAnchor");
    IVar1 = _objc_msgSend(IVar1,"constraintEqualToAnchor:",IVar2);
    _objc_msgSend(IVar1,"setActive:",1);
  }
  return 0;
}

