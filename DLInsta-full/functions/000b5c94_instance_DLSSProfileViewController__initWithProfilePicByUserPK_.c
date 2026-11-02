/* Address: 000b5c94 | Name: instance_DLSSProfileViewController__initWithProfilePicByUserPK_ | Body bytes: 116 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID DLSSProfileViewController::instance_DLSSProfileViewController__initWithProfilePicByUserPK_
             (ID param_1,SEL param_2,ID param_3)

{
  ID self;
  ID local_30;
  class_t *pcStack_28;
  
  pcStack_28 = &objc::class_t::DLSSProfileViewController;
  local_30 = param_1;
  self = UIViewController::init((ID)&local_30,"init");
  if (self != 0) {
    UIViewController::setUserPK_(self,"setUserPK:",param_3);
  }
  return self;
}

