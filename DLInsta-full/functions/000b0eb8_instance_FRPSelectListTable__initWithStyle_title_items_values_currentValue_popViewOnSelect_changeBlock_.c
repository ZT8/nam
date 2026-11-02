/* Address: 000b0eb8 | Name: instance_FRPSelectListTable__initWithStyle_title_items_values_currentValue_popViewOnSelect_changeBlock_ | Body bytes: 468 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x44 bytes */

ID FRPSelectListTable::
   instance_FRPSelectListTable__initWithStyle_title_items_values_currentValue_popViewOnSelect_changeBlock_
             (ID param_1,SEL param_2,long_long param_3,ID param_4,ID param_5,ID param_6,ID param_7,
             bool param_8,ID param_9,undefined4 param_10)

{
  ID IVar1;
  undefined *local_88;
  undefined8 local_80;
  code *local_78;
  undefined *puStack_70;
  ID local_68;
  
  *(ID *)(param_1 + (long)listItems) = param_5;
  *(ID *)(param_1 + (long)listValues) = param_6;
  *(ID *)(param_1 + (long)currentValue) = param_7;
  *(char *)(param_1 + (long)popView) = (char)param_8;
  *(ID *)(param_1 + (long)pageTitle) = param_4;
  local_88 = PTR___NSConcreteStackBlock_000e80d8;
  local_80 = 0xc2000000;
  local_78 = FUN_000b108c;
  puStack_70 = &DAT_000e9c38;
  local_68 = param_9;
  instance_FRPSelectListTable__setItemChanged_(param_1,"setItemChanged:",(ID)&local_88,(int)param_4)
  ;
  IVar1 = _objc_msgSend(param_1,"initWithStyle:",param_3);
  return IVar1;
}

