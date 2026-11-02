/* Address: 0008fd58 | Name: class_DLHelper__cellWithTitle_key_defaultValue_statusMode_ | Body bytes: 408 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x30 bytes */

ID DLHelper::class_DLHelper__cellWithTitle_key_defaultValue_statusMode_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,long_long param_6)

{
  ID IVar1;
  ID IVar2;
  ID self;
  undefined **ppuVar3;
  
  IVar1 = FRPSettings::class_FRPSettings__settingsWithKey_defaultValue_
                    ((ID)&objc::class_t::FRPSettings,"settingsWithKey:defaultValue:",param_4,param_5
                    );
  IVar1 = _objc_msgSend((ID)&objc::class_t::FRPSwitchCell,
                        "cellWithTitle:setting:postNotification:changeBlock:",param_3,IVar1,0,
                        &PTR___NSConcreteGlobalBlock_000e9088);
  if (param_6 == 0) {
    IVar2 = UIColor::whiteColor((ID)&_OBJC_CLASS___UIColor,"whiteColor");
    ppuVar3 = &PTR_s_blackColor_000fbc88;
  }
  else {
    IVar2 = UIColor::colorWithRed_green_blue_alpha_
                      ((ID)&_OBJC_CLASS___UIColor,"colorWithRed:green:blue:alpha:",
                       0x3fa6161616161616,0x3fae1e1e1e1e1e1e,0x3fb4141414141414,0x3ff0000000000000);
    ppuVar3 = &PTR_s_whiteColor_000fb648;
  }
  _objc_msgSend(IVar1,"setBackgroundColor:",IVar2);
  IVar2 = UIColor::blackColor((ID)&_OBJC_CLASS___UIColor,*ppuVar3);
  self = _objc_msgSend(IVar1,"textLabel");
  _objc_msgSend(self,"setTextColor:",IVar2);
  return IVar1;
}

