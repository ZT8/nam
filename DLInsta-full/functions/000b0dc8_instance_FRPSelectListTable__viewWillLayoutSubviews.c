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

