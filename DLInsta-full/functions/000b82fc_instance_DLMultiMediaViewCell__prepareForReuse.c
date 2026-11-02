/* Address: 000b82fc | Name: instance_DLMultiMediaViewCell__prepareForReuse | Body bytes: 116 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void DLMultiMediaViewCell::instance_DLMultiMediaViewCell__prepareForReuse(ID param_1,SEL param_2)

{
  ID self;
  ID local_30;
  class_t *pcStack_28;
  
  pcStack_28 = &objc::class_t::DLMultiMediaViewCell;
  local_30 = param_1;
  UICollectionViewCell::prepareForReuse((ID)&local_30,"prepareForReuse");
  self = instance_DLMultiMediaViewCell__mediaImageView(param_1,"mediaImageView");
  _objc_msgSend(self,"setImage:",0);
  return;
}

