/* Address: 000ad914 | Name: instance_DLPopupViewController__viewWillAppear_ | Body bytes: 80 */

/* Function Stack Size: 0x14 bytes */

void DLPopupViewController::instance_DLPopupViewController__viewWillAppear_
               (ID param_1,SEL param_2,bool param_3)

{
  objc_super local_30;
  
  local_30.super_class = &objc::class_t::DLPopupViewController;
  local_30.receiver = param_1;
  _objc_msgSendSuper2(&local_30,"viewWillAppear:",(ulong)param_3);
  instance_DLPopupViewController__showController(param_1,"showController");
  return;
}

