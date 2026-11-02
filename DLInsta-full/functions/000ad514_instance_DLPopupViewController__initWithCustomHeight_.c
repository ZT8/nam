/* Address: 000ad514 | Name: instance_DLPopupViewController__initWithCustomHeight_ | Body bytes: 140 */

/* Function Stack Size: 0x18 bytes */

ID DLPopupViewController::instance_DLPopupViewController__initWithCustomHeight_
             (ID param_1,SEL param_2,double param_3)

{
  ID self;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::DLPopupViewController;
  local_40.receiver = param_1;
  self = _objc_msgSendSuper2(&local_40,"init");
  if (self != 0) {
    *(double *)(self + (long)_customHeight) = param_3;
    _objc_msgSend(self,"setModalPresentationStyle:",5);
    UIView::setAnimationsEnabled_((ID)&_OBJC_CLASS___UIView,"setAnimationsEnabled:",0);
  }
  return self;
}

