/* Automatic pseudocode grouped by Objective-C class. NOT original source. */

/* -[FRPListCell cellWithTitle:setting:items:value:popViewOnSelect:postNotification:changedBlock:] | encoding @68@0:8@16@24@32@40B48@52@?60 */
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


/* -[FRPListCell didSelectFromTable:] | encoding v24@0:8@16 */
/* Address: 000af5b0 | Name: instance_FRPListCell__didSelectFromTable_ | Body bytes: 904 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void FRPListCell::instance_FRPListCell__didSelectFromTable_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  ID IVar7;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  ID local_70;
  ID IStack_68;
  
  IVar2 = _objc_msgSend(param_3,"tableView");
  IVar2 = _objc_msgSend(IVar2,"indexPathForCell:",param_1);
  IVar3 = _objc_msgSend(param_3,"tableView");
  _objc_msgSend(IVar3,"deselectRowAtIndexPath:animated:",IVar2,1);
  IVar3 = _objc_msgSend(param_3,"tableView");
  IVar2 = _objc_msgSend(IVar3,"cellForRowAtIndexPath:",IVar2);
  IVar3 = _objc_alloc(&objc::class_t::FRPSelectListTable);
  IVar4 = _objc_msgSend(IVar2,"textLabel");
  IVar4 = _objc_msgSend(IVar4,"text");
  IVar5 = instance_FRPListCell__items(param_1,"items");
  IVar6 = instance_FRPListCell__values(param_1,"values");
  IVar7 = FRPCell::instance_FRPCell__setting(param_1,"setting");
  IVar7 = _objc_msgSend(IVar7,"value");
  bVar1 = instance_FRPListCell__popView(param_1,"popView");
  local_90 = PTR___NSConcreteStackBlock_000e80d8;
  local_88 = 0xc2000000;
  local_80 = FUN_000af938;
  puStack_78 = &DAT_000e9c08;
  local_70 = IVar2;
  IStack_68 = param_1;
  IVar2 = FRPSelectListTable::
          instance_FRPSelectListTable__initWithStyle_title_items_values_currentValue_popViewOnSelect_changeBlock_
                    (IVar3,
                     "initWithStyle:title:items:values:currentValue:popViewOnSelect:changeBlock:",1,
                     IVar4,IVar5,IVar6,IVar7,bVar1,(ID)&local_90,(int)IVar3);
  IVar3 = _objc_msgSend(IVar2,"tableView");
  DLHelper::class_DLHelper__switchToRTL_((ID)&objc::class_t::DLHelper,"switchToRTL:",IVar3);
  IVar3 = FRPCell::instance_FRPCell__tintUIColor(param_1,"tintUIColor");
  FRPSelectListTable::instance_FRPSelectListTable__setTintUIColor_(IVar2,"setTintUIColor:",IVar3);
  IVar3 = _objc_msgSend(param_3,"navigationController");
  IVar4 = _objc_msgSend(param_3,"navigationController");
  if (IVar3 == 0) {
    _objc_msgSend(IVar4,"presentViewController:animated:completion:",IVar2,1,0);
  }
  else {
    _objc_msgSend(IVar4,"pushViewController:animated:",IVar2,1);
  }
  return;
}


/* -[FRPListCell layoutSubviews] | encoding v16@0:8 */
/* Address: 000afb20 | Name: instance_FRPListCell__layoutSubviews | Body bytes: 52 */

/* Function Stack Size: 0x10 bytes */

void FRPListCell::instance_FRPListCell__layoutSubviews(ID param_1,SEL param_2)

{
  objc_super local_20;
  
  local_20.super_class = &objc::class_t::FRPListCell;
  local_20.receiver = param_1;
  _objc_msgSendSuper2(&local_20,"layoutSubviews");
  return;
}


/* -[FRPListCell items] | encoding @16@0:8 */
/* Address: 000afb54 | Name: instance_FRPListCell__items | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

ID FRPListCell::instance_FRPListCell__items(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_items);
}


/* -[FRPListCell setItems:] | encoding v24@0:8@16 */
/* Address: 000afb64 | Name: instance_FRPListCell__setItems_ | Body bytes: 20 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void FRPListCell::instance_FRPListCell__setItems_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_items) = param_3;
  return;
}


/* -[FRPListCell values] | encoding @16@0:8 */
/* Address: 000afb78 | Name: instance_FRPListCell__values | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

ID FRPListCell::instance_FRPListCell__values(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_values);
}


/* -[FRPListCell setValues:] | encoding v24@0:8@16 */
/* Address: 000afb88 | Name: instance_FRPListCell__setValues_ | Body bytes: 20 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void FRPListCell::instance_FRPListCell__setValues_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_values) = param_3;
  return;
}


/* -[FRPListCell popView] | encoding B16@0:8 */
/* Address: 000afb9c | Name: instance_FRPListCell__popView | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

bool FRPListCell::instance_FRPListCell__popView(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + (long)_popView);
}


/* -[FRPListCell setPopView:] | encoding v20@0:8B16 */
/* Address: 000afbac | Name: instance_FRPListCell__setPopView_ | Body bytes: 16 */

/* Function Stack Size: 0x14 bytes */

void FRPListCell::instance_FRPListCell__setPopView_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + (long)_popView) = (char)param_3;
  return;
}


/* -[FRPListCell .cxx_destruct] | encoding v16@0:8 */
/* Address: 000afbbc | Name: instance_FRPListCell___cxx_destruct | Body bytes: 64 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void FRPListCell::instance_FRPListCell___cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_values) = 0;
  *(undefined8 *)(param_1 + (long)_items) = 0;
  return;
}


/* +[FRPListCell cellWithTitle:setting:items:value:popViewOnSelect:postNotification:changedBlock:] | encoding @68@0:8@16@24@32@40B48@52@?60 */
/* Address: 000af0f8 | Name: class_FRPListCell__cellWithTitle_setting_items_value_popViewOnSelect_postNotification_changedBlock_ | Body bytes: 280 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x44 bytes */

ID FRPListCell::
   class_FRPListCell__cellWithTitle_setting_items_value_popViewOnSelect_postNotification_changedBlock_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,bool param_7,
             ID param_8,ID param_9,undefined4 param_10)

{
  ID IVar1;
  
  IVar1 = _objc_alloc(param_1);
  IVar1 = _objc_msgSend(IVar1,
                        "cellWithTitle:setting:items:value:popViewOnSelect:postNotification:changedBlock:"
                        ,param_3,param_4,param_5,param_6,(ulong)param_7,param_8,param_9);
  return IVar1;
}

