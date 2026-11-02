/* Address: 000af210 | Name: instance_FRPListCell__cellWithTitle_setting_items_value_popViewOnSelect_postNotification_changedBlock_ | Body bytes: 928 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x44 bytes */

ID FRPListCell::
   instance_FRPListCell__cellWithTitle_setting_items_value_popViewOnSelect_postNotification_changedBlock_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,bool param_7,
             ID param_8,ID param_9,undefined4 param_10)

{
  bool bVar1;
  ID self;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ID local_70;
  class_t *pcStack_68;
  
  pcStack_68 = &objc::class_t::FRPListCell;
  IVar2 = param_4;
  local_70 = param_1;
  self = FRPCell::instance_FRPCell__initWithTitle_setting_
                   ((ID)&local_70,"initWithTitle:setting:",param_3,param_4);
  FRPCell::instance_FRPCell__setValueChanged_(self,"setValueChanged:",param_9,(int)IVar2);
  _objc_msgSend(self,"setItems:",param_5);
  _objc_msgSend(self,"setValues:",param_6);
  instance_FRPListCell__setPopView_(param_1,"setPopView:",param_7);
  _objc_msgSend(self,"setAccessoryType:",1);
  IVar2 = _objc_msgSend(self,"detailTextLabel");
  bVar1 = DLHelper::class_DLHelper__isDarkMode((ID)&objc::class_t::DLHelper,"isDarkMode");
  if ((bVar1 & 1) == 0) {
    uVar5 = 0x3fdbdbdbdbdbdbdc;
    uVar6 = 0x3fdd9d9d9d9d9d9e;
    uVar7 = 0x3fe0101010101010;
  }
  else {
    uVar5 = 0x3fe4545454545454;
    uVar6 = 0x3fe5555555555555;
    uVar7 = 0x3fe6969696969697;
  }
  IVar3 = UIColor::colorWithRed_green_blue_alpha_
                    ((ID)&_OBJC_CLASS___UIColor,"colorWithRed:green:blue:alpha:",uVar5,uVar6,uVar7,
                     0x3ff0000000000000);
  _objc_msgSend(IVar2,"setTextColor:",IVar3);
  IVar2 = UIFont::systemFontOfSize_weight_
                    ((ID)&_OBJC_CLASS___UIFont,"systemFontOfSize:weight:",0x4028000000000000,
                     *(undefined8 *)PTR__UIFontWeightRegular_000e80c0);
  IVar3 = _objc_msgSend(self,"detailTextLabel");
  _objc_msgSend(IVar3,"setFont:",IVar2);
  IVar2 = instance_FRPListCell__values(param_1,"values");
  IVar3 = _objc_msgSend(param_4,"value");
  IVar2 = _objc_msgSend(IVar2,"containsObject:",IVar3);
  if ((int)IVar2 != 0) {
    IVar2 = instance_FRPListCell__items(param_1,"items");
    IVar3 = instance_FRPListCell__values(param_1,"values");
    IVar4 = _objc_msgSend(param_4,"value");
    IVar3 = _objc_msgSend(IVar3,"indexOfObject:",IVar4);
    IVar2 = _objc_msgSend(IVar2,"objectAtIndex:",IVar3);
    IVar3 = _objc_msgSend(self,"detailTextLabel");
    _objc_msgSend(IVar3,"setText:",IVar2);
  }
  return self;
}

