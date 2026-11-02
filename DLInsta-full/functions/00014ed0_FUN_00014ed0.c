/* Address: 00014ed0 | Name: FUN_00014ed0 | Body bytes: 1764 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID FUN_00014ed0(ID param_1,undefined8 param_2,undefined8 param_3,ID param_4)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  undefined8 extraout_x1;
  undefined8 local_a8;
  undefined8 local_a0;
  ID local_98;
  ID local_90;
  long local_88;
  
  local_88 = *(long *)PTR____stack_chk_guard_000e8260;
  IVar1 = _objc_alloc(&_OBJC_CLASS___UITableViewCell);
  IVar1 = UITableViewCell::initWithStyle_reuseIdentifier_
                    (IVar1,"initWithStyle:reuseIdentifier:",3,&cf_myDebug);
  IVar2 = _objc_msgSend(param_1,"classDict");
  IVar2 = _objc_msgSend(IVar2,"allValues");
  IVar3 = _objc_msgSend(param_4,"section");
  IVar2 = _objc_msgSend(IVar2,"objectAtIndexedSubscript:",IVar3);
  IVar2 = _objc_msgSend(IVar2,"objectForKeyedSubscript:",&cf_property);
  IVar3 = _objc_msgSend(param_4,"row");
  IVar2 = _objc_msgSend(IVar2,"objectAtIndexedSubscript:",IVar3);
  IVar3 = UITableViewCell::textLabel(IVar1,"textLabel");
  UITableViewCell::setText_(IVar3,"setText:",IVar2);
  IVar2 = UIColor::colorWithRed_green_blue_alpha_
                    ((ID)&_OBJC_CLASS___UIColor,"colorWithRed:green:blue:alpha:",0x3fd3535353535353,
                     0x3fc0909090909091,0x3fc6161616161616,0x3ff0000000000000);
  IVar2 = UIColor::colorWithAlphaComponent_(IVar2,"colorWithAlphaComponent:",0x3fd3333333333333);
  UITableViewCell::setBackgroundColor_(IVar1,"setBackgroundColor:",IVar2);
  IVar2 = _objc_alloc(&_OBJC_CLASS___UILabel);
  IVar2 = UILabel::initWithFrame_(IVar2,"initWithFrame:",0,0,0x4038000000000000,0x4038000000000000);
  UILabel::setText_(IVar2,"setText:",&cf_X);
  UILabel::setTextAlignment_(IVar2,"setTextAlignment:",1);
  IVar3 = UIColor::colorWithRed_green_blue_alpha_
                    ((ID)&_OBJC_CLASS___UIColor,"colorWithRed:green:blue:alpha:",0x3fea3a3a3a3a3a3a,
                     0,0,0x3ff0000000000000);
  IVar3 = UIColor::colorWithAlphaComponent_(IVar3,"colorWithAlphaComponent:",0x3fe0000000000000);
  UILabel::setBackgroundColor_(IVar2,"setBackgroundColor:",IVar3);
  UITableViewCell::setAccessoryView_(IVar1,"setAccessoryView:",IVar2);
  UITableViewCell::setAccessoryType_(IVar1,"setAccessoryType:",0);
  UITableViewCell::setSelectionStyle_(IVar1,"setSelectionStyle:",0);
  IVar2 = UITableViewCell::textLabel(IVar1,"textLabel");
  IVar2 = UITableViewCell::text(IVar2,"text");
  IVar2 = UITableViewCell::rangeOfString_(IVar2,"rangeOfString:",&cf_M_);
  IVar3 = _objc_alloc(&_OBJC_CLASS___NSMutableAttributedString);
  IVar4 = UITableViewCell::textLabel(IVar1,"textLabel");
  IVar4 = UITableViewCell::text(IVar4,"text");
  IVar3 = NSMutableAttributedString::initWithString_(IVar3,"initWithString:",IVar4);
  local_a8 = *(undefined8 *)PTR__NSForegroundColorAttributeName_000e8068;
  local_98 = UIColor::whiteColor((ID)&_OBJC_CLASS___UIColor,"whiteColor");
  local_a0 = *(undefined8 *)PTR__NSBackgroundColorAttributeName_000e8050;
  local_90 = UIColor::colorWithRed_green_blue_alpha_
                       ((ID)&_OBJC_CLASS___UIColor,"colorWithRed:green:blue:alpha:",
                        0x3fd3535353535353,0x3fc0909090909091,0x3fc6161616161616,0x3ff0000000000000)
  ;
  IVar4 = NSDictionary::dictionaryWithObjects_forKeys_count_
                    ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                     &local_98,&local_a8,2);
  NSMutableAttributedString::addAttributes_range_
            (IVar3,"addAttributes:range:",IVar4,IVar2,extraout_x1);
  IVar2 = UITableViewCell::textLabel(IVar1,"textLabel");
  UITableViewCell::setAttributedText_(IVar2,"setAttributedText:",IVar3);
  IVar2 = UITableViewCell::textLabel(IVar1,"textLabel");
  UITableViewCell::setNumberOfLines_(IVar2,"setNumberOfLines:",0);
  IVar2 = UITableViewCell::textLabel(IVar1,"textLabel");
  UITableViewCell::setTextAlignment_(IVar2,"setTextAlignment:",0);
  IVar2 = _objc_msgSend(param_1,"classDict");
  IVar2 = _objc_msgSend(IVar2,"allValues");
  IVar3 = _objc_msgSend(param_4,"section");
  IVar2 = _objc_msgSend(IVar2,"objectAtIndexedSubscript:",IVar3);
  IVar2 = _objc_msgSend(IVar2,"objectForKeyedSubscript:",&cf_info);
  IVar3 = UITableViewCell::detailTextLabel(IVar1,"detailTextLabel");
  UITableViewCell::setText_(IVar3,"setText:",IVar2);
  IVar2 = UITableViewCell::detailTextLabel(IVar1,"detailTextLabel");
  UITableViewCell::setNumberOfLines_(IVar2,"setNumberOfLines:",0);
  IVar2 = UITableViewCell::detailTextLabel(IVar1,"detailTextLabel");
  UITableViewCell::setTextAlignment_(IVar2,"setTextAlignment:",0);
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_88) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return IVar1;
}

