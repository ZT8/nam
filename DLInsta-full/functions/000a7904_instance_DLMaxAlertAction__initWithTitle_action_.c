/* Address: 000a7904 | Name: instance_DLMaxAlertAction__initWithTitle_action_ | Body bytes: 168 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

ID DLMaxAlertAction::instance_DLMaxAlertAction__initWithTitle_action_
             (ID param_1,SEL param_2,ID param_3,ID param_4,uint param_5)

{
  ID IVar1;
  ID local_40;
  class_t *pcStack_38;
  
  pcStack_38 = &objc::class_t::DLMaxAlertAction;
  local_40 = param_1;
  IVar1 = NSObject::init((ID)&local_40,"init",param_3,param_4,(ulong)param_5);
  if (IVar1 != 0) {
    *(ID *)(IVar1 + 8) = param_3;
    *(ID *)(IVar1 + 0x10) = param_4;
  }
  return IVar1;
}

