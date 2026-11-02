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

