/* Address: 000ab180 | Name: instance_DLMentionViewCell__avatarImageTapped_ | Body bytes: 148 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void DLMentionViewCell::instance_DLMentionViewCell__avatarImageTapped_
               (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  IVar1 = instance_DLMentionViewCell__avatarImageTapAction(param_1,"avatarImageTapAction");
  if (IVar1 == 0) {
    return;
  }
  DLHelper::class_DLHelper__vibration_((ID)&objc::class_t::DLHelper,"vibration:",0);
  IVar1 = instance_DLMentionViewCell__avatarImageTapAction(param_1,"avatarImageTapAction");
  (**(code **)(IVar1 + 0x10))();
  return;
}

