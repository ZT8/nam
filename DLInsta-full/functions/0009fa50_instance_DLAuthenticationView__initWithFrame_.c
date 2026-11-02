/* Address: 0009fa50 | Name: instance_DLAuthenticationView__initWithFrame_ | Body bytes: 88 */

/* Function Stack Size: 0x30 bytes */

ID DLAuthenticationView::instance_DLAuthenticationView__initWithFrame_
             (ID param_1,SEL param_2,CGRect param_3)

{
  ID self;
  ID local_30;
  class_t *pcStack_28;
  
  pcStack_28 = &objc::class_t::DLAuthenticationView;
  local_30 = param_1;
  self = UIView::initWithFrame_
                   ((ID)&local_30,"initWithFrame:",param_3.field0_0x0.field0_0x0,
                    param_3.field0_0x0.field1_0x8,param_3.field1_0x10.field0_0x0,
                    param_3.field1_0x10.field1_0x8);
  if (self != 0) {
    UIView::setupBlurView(self,"setupBlurView");
  }
  return self;
}

