/* Address: 000ad8a4 | Name: instance_DLPopupViewController__viewDidLoad | Body bytes: 112 */

/* Function Stack Size: 0x10 bytes */

void DLPopupViewController::instance_DLPopupViewController__viewDidLoad(ID param_1,SEL param_2)

{
  objc_super local_30;
  
  local_30.super_class = &objc::class_t::DLPopupViewController;
  local_30.receiver = param_1;
  _objc_msgSendSuper2(&local_30,"viewDidLoad");
  instance_DLPopupViewController__setupBackgroundView(param_1,"setupBackgroundView");
  instance_DLPopupViewController__setupBlurView(param_1,"setupBlurView");
  instance_DLPopupViewController__setupPopupView(param_1,"setupPopupView");
  return;
}

