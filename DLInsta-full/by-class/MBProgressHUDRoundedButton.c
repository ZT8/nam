/* Automatic pseudocode grouped by Objective-C class. NOT original source. */

/* -[MBProgressHUDRoundedButton initWithFrame:] | encoding @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16 */
/* Address: 00096a24 | Name: instance_MBProgressHUDRoundedButton__initWithFrame_ | Body bytes: 124 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x30 bytes */

ID MBProgressHUDRoundedButton::instance_MBProgressHUDRoundedButton__initWithFrame_
             (ID param_1,SEL param_2,CGRect param_3)

{
  ID self;
  ID self_00;
  ID local_30;
  class_t *pcStack_28;
  
  pcStack_28 = &objc::class_t::MBProgressHUDRoundedButton;
  local_30 = param_1;
  self = UIButton::initWithFrame_
                   ((ID)&local_30,"initWithFrame:",param_3.field0_0x0.field0_0x0,
                    param_3.field0_0x0.field1_0x8,param_3.field1_0x10.field0_0x0,
                    param_3.field1_0x10.field1_0x8);
  if (self != 0) {
    self_00 = UIButton::layer(self,"layer");
    UIButton::setBorderWidth_(self_00,"setBorderWidth:",0x3ff0000000000000);
  }
  return self;
}


/* -[MBProgressHUDRoundedButton layoutSubviews] | encoding v16@0:8 */
/* Address: 00096aa0 | Name: instance_MBProgressHUDRoundedButton__layoutSubviews | Body bytes: 156 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void MBProgressHUDRoundedButton::instance_MBProgressHUDRoundedButton__layoutSubviews
               (ID param_1,SEL param_2)

{
  ID self;
  double dVar1;
  ID local_40;
  class_t *pcStack_38;
  
  pcStack_38 = &objc::class_t::MBProgressHUDRoundedButton;
  local_40 = param_1;
  UIButton::layoutSubviews((ID)&local_40,"layoutSubviews");
  _objc_msgSend(param_1,"bounds");
  dVar1 = (double)_CGRectGetHeight();
  self = _objc_msgSend(param_1,"layer",dVar1 * 0.5);
  _objc_msgSend(self,"setCornerRadius:",(long)(dVar1 * 0.5));
  return;
}


/* -[MBProgressHUDRoundedButton intrinsicContentSize] | encoding {CGSize=dd}16@0:8 */
/* Address: 00096b3c | Name: instance_MBProgressHUDRoundedButton__intrinsicContentSize | Body bytes: 104 */

/* Function Stack Size: 0x10 bytes */

CGSize MBProgressHUDRoundedButton::instance_MBProgressHUDRoundedButton__intrinsicContentSize
                 (ID param_1,SEL param_2)

{
  ID IVar1;
  double extraout_d0;
  double dVar2;
  double in_d1;
  CGSize CVar3;
  ID local_30;
  class_t *pcStack_28;
  
  IVar1 = _objc_msgSend(param_1,"allControlEvents");
  if (IVar1 == 0) {
    dVar2 = *(double *)PTR__CGSizeZero_000e8048;
    in_d1 = *(double *)(PTR__CGSizeZero_000e8048 + 8);
  }
  else {
    pcStack_28 = &objc::class_t::MBProgressHUDRoundedButton;
    local_30 = param_1;
    UIButton::intrinsicContentSize((ID)&local_30,"intrinsicContentSize");
    dVar2 = extraout_d0 + 20.0;
  }
  CVar3.field1_0x8 = in_d1;
  CVar3.field0_0x0 = dVar2;
  return CVar3;
}


/* -[MBProgressHUDRoundedButton setTitleColor:forState:] | encoding v32@0:8@16Q24 */
/* Address: 00096ba4 | Name: instance_MBProgressHUDRoundedButton__setTitleColor_forState_ | Body bytes: 224 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

void MBProgressHUDRoundedButton::instance_MBProgressHUDRoundedButton__setTitleColor_forState_
               (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4)

{
  ID IVar1;
  ID self;
  ID local_40;
  class_t *pcStack_38;
  
  pcStack_38 = &objc::class_t::MBProgressHUDRoundedButton;
  local_40 = param_1;
  UIButton::setTitleColor_forState_((ID)&local_40,"setTitleColor:forState:",param_3,param_4);
  IVar1 = _objc_msgSend(param_1,"isHighlighted");
  instance_MBProgressHUDRoundedButton__setHighlighted_(param_1,"setHighlighted:",(bool)IVar1);
  IVar1 = _objc_retainAutorelease(param_3);
  IVar1 = _objc_msgSend(IVar1,"CGColor");
  self = _objc_msgSend(param_1,"layer");
  _objc_msgSend(self,"setBorderColor:",IVar1);
  return;
}


/* -[MBProgressHUDRoundedButton setHighlighted:] | encoding v20@0:8B16 */
/* Address: 00096c84 | Name: instance_MBProgressHUDRoundedButton__setHighlighted_ | Body bytes: 212 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x14 bytes */

void MBProgressHUDRoundedButton::instance_MBProgressHUDRoundedButton__setHighlighted_
               (ID param_1,SEL param_2,bool param_3)

{
  ID IVar1;
  ID local_40;
  class_t *pcStack_38;
  
  pcStack_38 = &objc::class_t::MBProgressHUDRoundedButton;
  local_40 = param_1;
  UIButton::setHighlighted_((ID)&local_40,"setHighlighted:");
  IVar1 = _objc_msgSend(param_1,"titleColorForState:",4);
  if ((param_3 & 1) == 0) {
    IVar1 = UIColor::clearColor((ID)&_OBJC_CLASS___UIColor,"clearColor");
  }
  else {
    IVar1 = _objc_msgSend(IVar1,"colorWithAlphaComponent:",0x3fb99999a0000000);
  }
  _objc_msgSend(param_1,"setBackgroundColor:",IVar1);
  return;
}

