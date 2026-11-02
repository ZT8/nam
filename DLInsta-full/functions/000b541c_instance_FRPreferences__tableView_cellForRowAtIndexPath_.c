/* Address: 000b541c | Name: instance_FRPreferences__tableView_cellForRowAtIndexPath_ | Body bytes: 272 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID FRPreferences::instance_FRPreferences__tableView_cellForRowAtIndexPath_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  ID self;
  ID IVar2;
  ID IVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  self = instance_FRPreferences__cellForIndexPath_(param_1,"cellForIndexPath:",param_4);
  IVar2 = _objc_alloc(&_OBJC_CLASS___UIView);
  IVar2 = UIView::init(IVar2,"init");
  bVar1 = DLHelper::class_DLHelper__isDarkMode((ID)&objc::class_t::DLHelper,"isDarkMode");
  if ((bVar1 & 1) == 0) {
    uVar4 = 0x3fee7e7e7e7e7e7e;
    uVar5 = 0x3feebebebebebebf;
    uVar6 = 0x3feefefefefefeff;
  }
  else {
    uVar4 = 0x3fc2121212121212;
    uVar5 = 0x3fc4949494949495;
    uVar6 = 0x3fc6969696969697;
  }
  IVar3 = UIColor::colorWithRed_green_blue_alpha_
                    ((ID)&_OBJC_CLASS___UIColor,"colorWithRed:green:blue:alpha:",uVar4,uVar5,uVar6,
                     0x3ff0000000000000);
  UIView::setBackgroundColor_(IVar2,"setBackgroundColor:",IVar3);
  _objc_msgSend(self,"setSelectedBackgroundView:",IVar2);
  return self;
}

