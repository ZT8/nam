/* Address: 0009441c | Name: instance_MBProgressHUD__layoutSubviews | Body bytes: 96 */

/* Function Stack Size: 0x10 bytes */

void MBProgressHUD::instance_MBProgressHUD__layoutSubviews(ID param_1,SEL param_2)

{
  ID IVar1;
  ID local_30;
  class_t *pcStack_28;
  
  IVar1 = _objc_msgSend(param_1,"needsUpdateConstraints");
  if ((IVar1 & 1) == 0) {
    instance_MBProgressHUD__updatePaddingConstraints(param_1,"updatePaddingConstraints");
  }
  pcStack_28 = &objc::class_t::MBProgressHUD;
  local_30 = param_1;
  UIView::layoutSubviews((ID)&local_30,"layoutSubviews");
  return;
}

