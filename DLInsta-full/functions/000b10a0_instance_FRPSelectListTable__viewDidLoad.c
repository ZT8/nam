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

