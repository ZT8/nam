/* Address: 000a7e14 | Name: instance_DLMaxAlertViewController__initWithTweakName_message_actions_ | Body bytes: 260 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x28 bytes */

ID DLMaxAlertViewController::instance_DLMaxAlertViewController__initWithTweakName_message_actions_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  ID self;
  ID local_40;
  class_t *pcStack_38;
  
  pcStack_38 = &objc::class_t::DLMaxAlertViewController;
  local_40 = param_1;
  self = UIViewController::initWithNibName_bundle_((ID)&local_40,"initWithNibName:bundle:",0,0);
  if (self != 0) {
    UIViewController::setModalPresentationStyle_(self,"setModalPresentationStyle:",4);
    UIViewController::setTransitioningDelegate_(self,"setTransitioningDelegate:",self);
    UIViewController::setTweakName_(self,"setTweakName:",param_3);
    UIViewController::setMessage_(self,"setMessage:",param_4);
    UIViewController::setActions_(self,"setActions:",param_5);
  }
  return self;
}

