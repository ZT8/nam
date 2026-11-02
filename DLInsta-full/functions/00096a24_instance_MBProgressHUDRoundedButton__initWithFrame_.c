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

