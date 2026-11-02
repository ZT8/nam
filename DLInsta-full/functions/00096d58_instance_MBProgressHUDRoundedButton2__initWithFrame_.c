/* Address: 00096d58 | Name: instance_MBProgressHUDRoundedButton2__initWithFrame_ | Body bytes: 52 */

/* Function Stack Size: 0x30 bytes */

ID MBProgressHUDRoundedButton2::instance_MBProgressHUDRoundedButton2__initWithFrame_
             (ID param_1,SEL param_2,CGRect param_3)

{
  ID IVar1;
  ID local_20;
  class_t *pcStack_18;
  
  pcStack_18 = &objc::class_t::MBProgressHUDRoundedButton2;
  local_20 = param_1;
  IVar1 = UIButton::initWithFrame_
                    ((ID)&local_20,"initWithFrame:",param_3.field0_0x0.field0_0x0,
                     param_3.field0_0x0.field1_0x8,param_3.field1_0x10.field0_0x0,
                     param_3.field1_0x10.field1_0x8);
  return IVar1;
}

