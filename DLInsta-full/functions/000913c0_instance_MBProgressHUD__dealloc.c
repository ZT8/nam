/* Address: 000913c0 | Name: instance_MBProgressHUD__dealloc | Body bytes: 76 */

/* Function Stack Size: 0x10 bytes */

void MBProgressHUD::instance_MBProgressHUD__dealloc(ID param_1,SEL param_2)

{
  ID local_30;
  class_t *pcStack_28;
  
  instance_MBProgressHUD__unregisterFromNotifications(param_1,"unregisterFromNotifications");
  pcStack_28 = &objc::class_t::MBProgressHUD;
  local_30 = param_1;
  UIView::dealloc((ID)&local_30,"dealloc");
  return;
}

