/* Address: 0008fef4 | Name: class_DLHelper__cellWithTitle_detail_image_url_statusMode_ | Body bytes: 284 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x38 bytes */

ID DLHelper::class_DLHelper__cellWithTitle_detail_image_url_statusMode_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,long_long param_7)

{
  ID self;
  ID IVar1;
  ID self_00;
  undefined **ppuVar2;
  
  self = _objc_msgSend((ID)&objc::class_t::FRPDeveloperCell,"cellWithTitle:detail:image:url:");
  if (param_7 == 0) {
    IVar1 = UIColor::whiteColor((ID)&_OBJC_CLASS___UIColor,"whiteColor");
    ppuVar2 = &PTR_s_blackColor_000fbc88;
  }
  else {
    IVar1 = UIColor::colorWithRed_green_blue_alpha_
                      ((ID)&_OBJC_CLASS___UIColor,"colorWithRed:green:blue:alpha:",
                       0x3fa6161616161616,0x3fae1e1e1e1e1e1e,0x3fb4141414141414,0x3ff0000000000000);
    ppuVar2 = &PTR_s_whiteColor_000fb648;
  }
  _objc_msgSend(self,"setBackgroundColor:",IVar1);
  IVar1 = UIColor::blackColor((ID)&_OBJC_CLASS___UIColor,*ppuVar2);
  self_00 = _objc_msgSend(self,"textLabel");
  _objc_msgSend(self_00,"setTextColor:",IVar1);
  return self;
}

