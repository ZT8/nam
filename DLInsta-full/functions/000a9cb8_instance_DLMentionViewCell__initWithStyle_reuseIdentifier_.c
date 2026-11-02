/* Address: 000a9cb8 | Name: instance_DLMentionViewCell__initWithStyle_reuseIdentifier_ | Body bytes: 140 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

ID DLMentionViewCell::instance_DLMentionViewCell__initWithStyle_reuseIdentifier_
             (ID param_1,SEL param_2,long_long param_3,ID param_4)

{
  ID self;
  ID self_00;
  ID local_30;
  class_t *pcStack_28;
  
  pcStack_28 = &objc::class_t::DLMentionViewCell;
  local_30 = param_1;
  self = UITableViewCell::initWithStyle_reuseIdentifier_
                   ((ID)&local_30,"initWithStyle:reuseIdentifier:");
  if (self != 0) {
    self_00 = UITableViewCell::contentView(self,"contentView");
    UITableViewCell::setUserInteractionEnabled_(self_00,"setUserInteractionEnabled:",1);
    UITableViewCell::setupViews(self,"setupViews");
  }
  return self;
}

