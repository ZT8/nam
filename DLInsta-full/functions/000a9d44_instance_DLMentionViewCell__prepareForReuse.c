/* Address: 000a9d44 | Name: instance_DLMentionViewCell__prepareForReuse | Body bytes: 116 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void DLMentionViewCell::instance_DLMentionViewCell__prepareForReuse(ID param_1,SEL param_2)

{
  ID self;
  ID local_30;
  class_t *pcStack_28;
  
  pcStack_28 = &objc::class_t::DLMentionViewCell;
  local_30 = param_1;
  UITableViewCell::prepareForReuse((ID)&local_30,"prepareForReuse");
  self = instance_DLMentionViewCell__avatarImageView(param_1,"avatarImageView");
  _objc_msgSend(self,"setImage:",0);
  return;
}

