/* Address: 0009f620 | Name: instance_DLButton__initWithFrame_ | Body bytes: 104 */

/* Function Stack Size: 0x30 bytes */

ID DLButton::instance_DLButton__initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  ID self;
  ID local_30;
  class_t *pcStack_28;
  
  pcStack_28 = &objc::class_t::DLButton;
  local_30 = param_1;
  self = UIButton::initWithFrame_
                   ((ID)&local_30,"initWithFrame:",param_3.field0_0x0.field0_0x0,
                    param_3.field0_0x0.field1_0x8,param_3.field1_0x10.field0_0x0,
                    param_3.field1_0x10.field1_0x8);
  if (self != 0) {
    UIButton::addTarget_action_forControlEvents_
              (self,"addTarget:action:forControlEvents:",self,"didPressButton:",0x40);
  }
  return self;
}

