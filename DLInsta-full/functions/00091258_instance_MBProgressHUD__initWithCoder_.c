/* Address: 00091258 | Name: instance_MBProgressHUD__initWithCoder_ | Body bytes: 88 */

/* Function Stack Size: 0x18 bytes */

ID MBProgressHUD::instance_MBProgressHUD__initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  ID self;
  ID local_30;
  class_t *pcStack_28;
  
  pcStack_28 = &objc::class_t::MBProgressHUD;
  local_30 = param_1;
  self = UIView::initWithCoder_((ID)&local_30,"initWithCoder:");
  if (self != 0) {
    UIView::commonInit(self,"commonInit");
  }
  return self;
}

