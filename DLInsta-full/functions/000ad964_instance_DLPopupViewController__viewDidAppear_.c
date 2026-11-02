/* Address: 000ad964 | Name: instance_DLPopupViewController__viewDidAppear_ | Body bytes: 76 */

/* Function Stack Size: 0x14 bytes */

void DLPopupViewController::instance_DLPopupViewController__viewDidAppear_
               (ID param_1,SEL param_2,bool param_3)

{
  objc_super local_20;
  
  local_20.super_class = &objc::class_t::DLPopupViewController;
  local_20.receiver = param_1;
  _objc_msgSendSuper2(&local_20,"viewDidAppear:",(ulong)param_3);
  UIView::setAnimationsEnabled_((ID)&_OBJC_CLASS___UIView,"setAnimationsEnabled:",1);
  return;
}

