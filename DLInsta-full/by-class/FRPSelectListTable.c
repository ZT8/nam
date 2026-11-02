/* Automatic pseudocode grouped by Objective-C class. NOT original source. */

/* -[FRPSelectListTable viewWillLayoutSubviews] | encoding v16@0:8 */
/* Address: 000b0dc8 | Name: instance_FRPSelectListTable__viewWillLayoutSubviews | Body bytes: 240 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void FRPSelectListTable::instance_FRPSelectListTable__viewWillLayoutSubviews(ID param_1,SEL param_2)

{
  undefined **ppuVar1;
  bool bVar2;
  ID IVar3;
  ID IVar4;
  ID local_40;
  class_t *pcStack_38;
  
  pcStack_38 = &objc::class_t::FRPSelectListTable;
  local_40 = param_1;
  UITableViewController::viewWillLayoutSubviews((ID)&local_40,"viewWillLayoutSubviews");
  bVar2 = DLHelper::class_DLHelper__isDarkMode((ID)&objc::class_t::DLHelper,"isDarkMode");
  ppuVar1 = &PTR_s_whiteColor_000fb648;
  if (bVar2 == 0) {
    ppuVar1 = &PTR_s_blackColor_000fbc88;
  }
  IVar3 = UIColor::blackColor((ID)&_OBJC_CLASS___UIColor,*ppuVar1);
  IVar4 = _objc_msgSend(param_1,"navigationController");
  IVar4 = _objc_msgSend(IVar4,"navigationBar");
  _objc_msgSend(IVar4,"setTintColor:",IVar3);
  return;
}


/* -[FRPSelectListTable initWithStyle:title:items:values:currentValue:popViewOnSelect:changeBlock:] | encoding @68@0:8q16@24@32@40@48B56@?60 */
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


/* -[FRPSelectListTable viewDidLoad] | encoding v16@0:8 */
/* Address: 000b10a0 | Name: instance_FRPSelectListTable__viewDidLoad | Body bytes: 500 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void FRPSelectListTable::instance_FRPSelectListTable__viewDidLoad(ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  ID local_50;
  class_t *pcStack_48;
  
  pcStack_48 = &objc::class_t::FRPSelectListTable;
  local_50 = param_1;
  UITableViewController::viewDidLoad((ID)&local_50,"viewDidLoad");
  _objc_msgSend(param_1,"setTitle:",*(undefined8 *)(param_1 + (long)pageTitle));
  IVar2 = instance_FRPSelectListTable__tintUIColor(param_1,"tintUIColor");
  IVar3 = _objc_msgSend(param_1,"view");
  _objc_msgSend(IVar3,"setTintColor:",IVar2);
  IVar2 = instance_FRPSelectListTable__tintUIColor(param_1,"tintUIColor");
  IVar3 = _objc_msgSend(param_1,"tableView");
  _objc_msgSend(IVar3,"setTintColor:",IVar2);
  IVar2 = _objc_msgSend(param_1,"tableView");
  _objc_msgSend(IVar2,"setSeparatorStyle:",0);
  bVar1 = DLHelper::class_DLHelper__isDarkMode((ID)&objc::class_t::DLHelper,"isDarkMode");
  if (bVar1 == 0) {
    IVar2 = UIColor::whiteColor((ID)&_OBJC_CLASS___UIColor,"whiteColor");
  }
  else {
    IVar2 = UIColor::colorWithRed_green_blue_alpha_
                      ((ID)&_OBJC_CLASS___UIColor,"colorWithRed:green:blue:alpha:",
                       0x3fa6161616161616,0x3fae1e1e1e1e1e1e,0x3fb4141414141414,0x3ff0000000000000);
  }
  IVar3 = _objc_msgSend(param_1,"tableView");
  _objc_msgSend(IVar3,"setBackgroundColor:",IVar2);
  return;
}


/* -[FRPSelectListTable numberOfSectionsInTableView:] | encoding q24@0:8@16 */
/* Address: 000b1294 | Name: instance_FRPSelectListTable__numberOfSectionsInTableView_ | Body bytes: 8 */

/* Function Stack Size: 0x18 bytes */

long_long FRPSelectListTable::instance_FRPSelectListTable__numberOfSectionsInTableView_
                    (ID param_1,SEL param_2,ID param_3)

{
  return 1;
}


/* -[FRPSelectListTable tableView:numberOfRowsInSection:] | encoding q32@0:8@16q24 */
/* Address: 000b129c | Name: instance_FRPSelectListTable__tableView_numberOfRowsInSection_ | Body bytes: 24 */

/* Function Stack Size: 0x20 bytes */

long_long FRPSelectListTable::instance_FRPSelectListTable__tableView_numberOfRowsInSection_
                    (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  ID IVar1;
  
  IVar1 = _objc_msgSend(*(ID *)(param_1 + (long)listItems),"count");
  return IVar1;
}


/* -[FRPSelectListTable tableView:cellForRowAtIndexPath:] | encoding @32@0:8@16@24 */
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


/* -[FRPSelectListTable tableView:heightForRowAtIndexPath:] | encoding d32@0:8@16@24 */
/* Address: 000b1588 | Name: instance_FRPSelectListTable__tableView_heightForRowAtIndexPath_ | Body bytes: 12 */

/* Function Stack Size: 0x20 bytes */

double FRPSelectListTable::instance_FRPSelectListTable__tableView_heightForRowAtIndexPath_
                 (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  return 60.0;
}


/* -[FRPSelectListTable tableView:viewForFooterInSection:] | encoding @32@0:8@16q24 */
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


/* -[FRPSelectListTable tableView:didSelectRowAtIndexPath:] | encoding v32@0:8@16@24 */
/* Address: 000b1790 | Name: instance_FRPSelectListTable__tableView_didSelectRowAtIndexPath_ | Body bytes: 632 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_unsafeClaimAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

void FRPSelectListTable::instance_FRPSelectListTable__tableView_didSelectRowAtIndexPath_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  long lVar4;
  undefined8 local_130;
  long lStack_128;
  long *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_000e8260;
  IVar1 = instance_FRPSelectListTable__itemChanged(param_1,"itemChanged");
  IVar3 = *(ID *)(param_1 + (long)listItems);
  IVar2 = _objc_msgSend(param_4,"row");
  IVar2 = _objc_msgSend(IVar3,"objectAtIndex:",IVar2);
  (**(code **)(IVar1 + 0x10))(IVar1,IVar2);
  _objc_msgSend(param_3,"deselectRowAtIndexPath:animated:",param_4,1);
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (long *)0x0;
  IVar1 = _objc_msgSend(param_3,"visibleCells");
  IVar2 = _objc_msgSend(IVar1,"countByEnumeratingWithState:objects:count:",&local_130,auStack_f0,
                        0x10);
  if (IVar2 != 0) {
    lVar4 = *local_120;
    do {
      IVar3 = 0;
      do {
        if (*local_120 != lVar4) {
          _objc_enumerationMutation(IVar1);
        }
        _objc_msgSend(*(ID *)(lStack_128 + IVar3 * 8),"setAccessoryType:",0);
        IVar3 = IVar3 + 1;
      } while (IVar2 != IVar3);
      IVar2 = _objc_msgSend(IVar1,"countByEnumeratingWithState:objects:count:",&local_130,auStack_f0
                            ,0x10);
    } while (IVar2 != 0);
  }
  IVar1 = _objc_msgSend(param_3,"cellForRowAtIndexPath:",param_4);
  _objc_msgSend(IVar1,"setAccessoryType:",3);
  if (*(char *)(param_1 + (long)popView) != '\0') {
    IVar1 = _objc_msgSend(param_1,"navigationController");
    _objc_msgSend(IVar1,"popViewControllerAnimated:",1);
  }
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}


/* -[FRPSelectListTable didReceiveMemoryWarning] | encoding v16@0:8 */
/* Address: 000b1a08 | Name: instance_FRPSelectListTable__didReceiveMemoryWarning | Body bytes: 52 */

/* Function Stack Size: 0x10 bytes */

void FRPSelectListTable::instance_FRPSelectListTable__didReceiveMemoryWarning
               (ID param_1,SEL param_2)

{
  ID local_20;
  class_t *pcStack_18;
  
  pcStack_18 = &objc::class_t::FRPSelectListTable;
  local_20 = param_1;
  UITableViewController::didReceiveMemoryWarning((ID)&local_20,"didReceiveMemoryWarning");
  return;
}


/* -[FRPSelectListTable itemChanged] | encoding @?16@0:8 */
/* Address: 000b1a3c | Name: instance_FRPSelectListTable__itemChanged | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

ID FRPSelectListTable::instance_FRPSelectListTable__itemChanged(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_itemChanged);
}


/* -[FRPSelectListTable setItemChanged:] | encoding v24@0:8@?16 */
/* Address: 000b1a4c | Name: instance_FRPSelectListTable__setItemChanged_ | Body bytes: 12 */

/* WARNING: Function: _objc_setProperty_nonatomic_copy replaced with injection:
   _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void FRPSelectListTable::instance_FRPSelectListTable__setItemChanged_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  *(ID *)(param_1 + (long)_itemChanged) = param_3;
  return;
}


/* -[FRPSelectListTable tintUIColor] | encoding @16@0:8 */
/* Address: 000b1a58 | Name: instance_FRPSelectListTable__tintUIColor | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

ID FRPSelectListTable::instance_FRPSelectListTable__tintUIColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_tintUIColor);
}


/* -[FRPSelectListTable setTintUIColor:] | encoding v24@0:8@16 */
/* Address: 000b1a68 | Name: instance_FRPSelectListTable__setTintUIColor_ | Body bytes: 12 */

/* WARNING: Function: _objc_setProperty_nonatomic_copy replaced with injection:
   _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void FRPSelectListTable::instance_FRPSelectListTable__setTintUIColor_
               (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_tintUIColor) = param_3;
  return;
}


/* -[FRPSelectListTable .cxx_destruct] | encoding v16@0:8 */
/* Address: 000b1a74 | Name: instance_FRPSelectListTable___cxx_destruct | Body bytes: 144 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void FRPSelectListTable::instance_FRPSelectListTable___cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_tintUIColor) = 0;
  *(undefined8 *)(param_1 + (long)_itemChanged) = 0;
  *(undefined8 *)(param_1 + (long)pageTitle) = 0;
  *(undefined8 *)(param_1 + (long)currentValue) = 0;
  *(undefined8 *)(param_1 + (long)listValues) = 0;
  *(undefined8 *)(param_1 + (long)listItems) = 0;
  return;
}

