/* Address: 000b5620 | Name: instance_FRPreferences__tableView_willDisplayHeaderView_forSection_ | Body bytes: 528 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x28 bytes */

void FRPreferences::instance_FRPreferences__tableView_willDisplayHeaderView_forSection_
               (ID param_1,SEL param_2,ID param_3,ID param_4,long_long param_5)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  
  IVar2 = UITableViewHeaderFooterView::class((ID)&_OBJC_CLASS___UITableViewHeaderFooterView,"class")
  ;
  IVar2 = _objc_msgSend(param_4,"isKindOfClass:",IVar2);
  if ((int)IVar2 != 0) {
    IVar2 = UIFont::boldSystemFontOfSize_
                      ((ID)&_OBJC_CLASS___UIFont,"boldSystemFontOfSize:",0x402c000000000000);
    IVar3 = _objc_msgSend(param_4,"textLabel");
    _objc_msgSend(IVar3,"setFont:",IVar2);
    bVar1 = DLHelper::class_DLHelper__isDarkMode((ID)&objc::class_t::DLHelper,"isDarkMode");
    if (bVar1 == 0) {
      IVar2 = UIColor::blackColor((ID)&_OBJC_CLASS___UIColor,"blackColor");
    }
    else {
      IVar2 = UIColor::colorWithRed_green_blue_alpha_
                        ((ID)&_OBJC_CLASS___UIColor,"colorWithRed:green:blue:alpha:",
                         0x3fe4545454545454,0x3fe5555555555555,0x3fe6969696969697,0x3ff0000000000000
                        );
    }
    IVar3 = _objc_msgSend(param_4,"textLabel");
    _objc_msgSend(IVar3,"setTextColor:",IVar2);
    IVar2 = _objc_msgSend(param_4,"textLabel");
    IVar2 = _objc_msgSend(IVar2,"text");
    IVar2 = _objc_msgSend(IVar2,"capitalizedString");
    IVar3 = _objc_msgSend(param_4,"textLabel");
    _objc_msgSend(IVar3,"setText:",IVar2);
  }
  return;
}

