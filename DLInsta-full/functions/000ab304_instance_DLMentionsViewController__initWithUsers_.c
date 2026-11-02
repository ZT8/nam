/* Address: 000ab304 | Name: instance_DLMentionsViewController__initWithUsers_ | Body bytes: 132 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID DLMentionsViewController::instance_DLMentionsViewController__initWithUsers_
             (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID local_40;
  class_t *pcStack_38;
  
  pcStack_38 = &objc::class_t::DLMentionsViewController;
  local_40 = param_1;
  IVar1 = DLPopupViewController::instance_DLPopupViewController__initWithCustomHeight_
                    ((ID)&local_40,"initWithCustomHeight:",0.0);
  if (IVar1 != 0) {
    *(ID *)(IVar1 + (long)_users) = param_3;
  }
  return IVar1;
}

