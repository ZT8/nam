/* Address: 000b1594 | Name: instance_FRPSelectListTable__tableView_viewForFooterInSection_ | Body bytes: 508 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID FRPSelectListTable::instance_FRPSelectListTable__tableView_viewForFooterInSection_
             (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 in_d2;
  undefined8 uVar7;
  
  IVar2 = _objc_msgSend(param_3,"footerViewForSection:",param_4);
  IVar3 = _objc_alloc(&_OBJC_CLASS___UIView);
  _objc_msgSend(param_3,"frame");
  _objc_msgSend(IVar2,"frame");
  IVar2 = UIView::initWithFrame_(IVar3,"initWithFrame:",0,0,in_d2);
  IVar3 = UIColor::clearColor((ID)&_OBJC_CLASS___UIColor,"clearColor");
  UIView::setBackgroundColor_(IVar2,"setBackgroundColor:",IVar3);
  IVar3 = _objc_alloc(&_OBJC_CLASS___UIView);
  _objc_msgSend(param_3,"frame");
  IVar3 = UIView::initWithFrame_(IVar3,"initWithFrame:",0,0,in_d2,0x3fd51eb851eb851f);
  bVar1 = DLHelper::class_DLHelper__isDarkMode((ID)&objc::class_t::DLHelper,"isDarkMode");
  if ((bVar1 & 1) == 0) {
    uVar5 = 0x3feb7ced916872b0;
    uVar6 = uVar5;
    uVar7 = uVar5;
  }
  else {
    uVar5 = 0x3fc0101010101010;
    uVar6 = 0x3fc1111111111111;
    uVar7 = 0x3fc4141414141414;
  }
  IVar4 = UIColor::colorWithRed_green_blue_alpha_
                    ((ID)&_OBJC_CLASS___UIColor,"colorWithRed:green:blue:alpha:",uVar5,uVar6,uVar7,
                     0x3ff0000000000000);
  UIView::setBackgroundColor_(IVar3,"setBackgroundColor:",IVar4);
  UIView::addSubview_(IVar2,"addSubview:",IVar3);
  return IVar2;
}

