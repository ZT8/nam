/* Address: 000b12b4 | Name: instance_FRPSelectListTable__tableView_cellForRowAtIndexPath_ | Body bytes: 724 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID FRPSelectListTable::instance_FRPSelectListTable__tableView_cellForRowAtIndexPath_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID self;
  
  IVar2 = _objc_msgSend(param_3,"dequeueReusableCellWithIdentifier:",&cf_LinkCellIdentifier);
  if (IVar2 == 0) {
    IVar2 = _objc_alloc(&_OBJC_CLASS___UITableViewCell);
    IVar2 = UITableViewCell::initWithStyle_reuseIdentifier_
                      (IVar2,"initWithStyle:reuseIdentifier:",0,&cf_LinkCellIdentifier);
  }
  IVar4 = *(ID *)(param_1 + (long)listItems);
  IVar3 = _objc_msgSend(param_4,"row");
  IVar3 = _objc_msgSend(IVar4,"objectAtIndex:",IVar3);
  IVar4 = UITableViewCell::textLabel(IVar2,"textLabel");
  UITableViewCell::setText_(IVar4,"setText:",IVar3);
  IVar3 = _objc_alloc(&objc::class_t::DLRadioSelectView);
  IVar3 = _objc_msgSend(IVar3,"initWithFrame:",0,0,0x4038000000000000,0x4038000000000000);
  self = *(ID *)(param_1 + (long)listValues);
  IVar4 = _objc_msgSend(param_4,"row");
  IVar4 = _objc_msgSend(self,"objectAtIndex:",IVar4);
  IVar4 = _objc_msgSend(IVar4,"isEqualToString:",*(undefined8 *)(param_1 + (long)currentValue));
  DLRadioSelectView::instance_DLRadioSelectView__setChecked_(IVar3,"setChecked:",(bool)IVar4);
  UITableViewCell::setAccessoryView_(IVar2,"setAccessoryView:",IVar3);
  bVar1 = DLHelper::class_DLHelper__isDeviceLanguageArabic
                    ((ID)&objc::class_t::DLHelper,"isDeviceLanguageArabic");
  if (bVar1 != 0) {
    IVar3 = UITableViewCell::textLabel(IVar2,"textLabel");
    UITableViewCell::setTextAlignment_(IVar3,"setTextAlignment:",2);
  }
  IVar3 = UIColor::clearColor((ID)&_OBJC_CLASS___UIColor,"clearColor");
  UITableViewCell::setBackgroundColor_(IVar2,"setBackgroundColor:",IVar3);
  IVar3 = _objc_alloc(&_OBJC_CLASS___UIView);
  IVar3 = UIView::init(IVar3,"init");
  IVar4 = UIColor::clearColor((ID)&_OBJC_CLASS___UIColor,"clearColor");
  UIView::setBackgroundColor_(IVar3,"setBackgroundColor:",IVar4);
  UITableViewCell::setSelectedBackgroundView_(IVar2,"setSelectedBackgroundView:",IVar3);
  return IVar2;
}

