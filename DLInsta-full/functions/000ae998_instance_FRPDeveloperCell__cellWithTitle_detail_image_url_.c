/* Address: 000ae998 | Name: instance_FRPDeveloperCell__cellWithTitle_detail_image_url_ | Body bytes: 676 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x30 bytes */

ID FRPDeveloperCell::instance_FRPDeveloperCell__cellWithTitle_detail_image_url_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6)

{
  bool bVar1;
  ID self;
  ID IVar2;
  ID IVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ID local_70;
  class_t *pcStack_68;
  
  pcStack_68 = &objc::class_t::FRPDeveloperCell;
  local_70 = param_1;
  self = FRPCell::instance_FRPCell__initWithTitle_setting_
                   ((ID)&local_70,"initWithTitle:setting:",param_3,0);
  _objc_msgSend(self,"setUrl:",param_6);
  _objc_msgSend(self,"setImage:",param_5);
  IVar2 = _objc_msgSend(self,"detailTextLabel");
  _objc_msgSend(IVar2,"setText:",param_4);
  IVar2 = _objc_msgSend(self,"detailTextLabel");
  bVar1 = DLHelper::class_DLHelper__isDarkMode((ID)&objc::class_t::DLHelper,"isDarkMode");
  if ((bVar1 & 1) == 0) {
    uVar4 = 0x3fdbdbdbdbdbdbdc;
    uVar5 = 0x3fdd9d9d9d9d9d9e;
    uVar6 = 0x3fe0101010101010;
  }
  else {
    uVar4 = 0x3fe4545454545454;
    uVar5 = 0x3fe5555555555555;
    uVar6 = 0x3fe6969696969697;
  }
  IVar3 = UIColor::colorWithRed_green_blue_alpha_
                    ((ID)&_OBJC_CLASS___UIColor,"colorWithRed:green:blue:alpha:",uVar4,uVar5,uVar6,
                     0x3ff0000000000000);
  _objc_msgSend(IVar2,"setTextColor:",IVar3);
  IVar2 = UIFont::systemFontOfSize_weight_
                    ((ID)&_OBJC_CLASS___UIFont,"systemFontOfSize:weight:",0x4028000000000000,
                     *(undefined8 *)PTR__UIFontWeightRegular_000e80c0);
  IVar3 = _objc_msgSend(self,"detailTextLabel");
  _objc_msgSend(IVar3,"setFont:",IVar2);
  _objc_msgSend(self,"setAccessoryType:",1);
  IVar2 = instance_FRPDeveloperCell__image(param_1,"image");
  IVar3 = _objc_msgSend(self,"imageView");
  _objc_msgSend(IVar3,"setImage:",IVar2);
  return self;
}

