/* Address: 000b813c | Name: instance_DLMultiMediaViewCell__layoutSubviews | Body bytes: 448 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void DLMultiMediaViewCell::instance_DLMultiMediaViewCell__layoutSubviews(ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  ID local_50;
  class_t *pcStack_48;
  
  pcStack_48 = &objc::class_t::DLMultiMediaViewCell;
  local_50 = param_1;
  UICollectionViewCell::layoutSubviews((ID)&local_50,"layoutSubviews");
  bVar1 = DLHelper::class_DLHelper__isDarkMode((ID)&objc::class_t::DLHelper,"isDarkMode");
  if (bVar1 == 0) {
    IVar2 = UIColor::colorWithRed_green_blue_alpha_
                      ((ID)&_OBJC_CLASS___UIColor,"colorWithRed:green:blue:alpha:",
                       0x3fa8181818181818,0x3fb0101010101010,0x3fb4141414141414,0x3ff0000000000000);
    IVar2 = UIColor::colorWithAlphaComponent_(IVar2,"colorWithAlphaComponent:",0x3fc3333333333333);
    IVar2 = _objc_retainAutorelease(IVar2);
    IVar2 = _objc_msgSend(IVar2,"CGColor");
    IVar3 = instance_DLMultiMediaViewCell__containerViewCell(param_1,"containerViewCell");
    IVar3 = _objc_msgSend(IVar3,"layer");
    _objc_msgSend(IVar3,"setBorderColor:",IVar2);
  }
  else {
    IVar2 = UIColor::colorWithWhite_alpha_
                      ((ID)&_OBJC_CLASS___UIColor,"colorWithWhite:alpha:",0x3ff0000000000000,
                       0x3fc3333333333333);
    IVar2 = _objc_retainAutorelease(IVar2);
    IVar2 = _objc_msgSend(IVar2,"CGColor");
    IVar3 = instance_DLMultiMediaViewCell__containerViewCell(param_1,"containerViewCell");
    IVar3 = _objc_msgSend(IVar3,"layer");
    _objc_msgSend(IVar3,"setBorderColor:",IVar2);
  }
  return;
}

