/* Address: 000b8094 | Name: instance_DLMultiMediaViewCell__initWithFrame_ | Body bytes: 168 */

/* Function Stack Size: 0x30 bytes */

ID DLMultiMediaViewCell::instance_DLMultiMediaViewCell__initWithFrame_
             (ID param_1,SEL param_2,CGRect param_3)

{
  ID self;
  ID local_30;
  class_t *pcStack_28;
  
  pcStack_28 = &objc::class_t::DLMultiMediaViewCell;
  local_30 = param_1;
  self = UICollectionViewCell::initWithFrame_
                   ((ID)&local_30,"initWithFrame:",param_3.field0_0x0.field0_0x0,
                    param_3.field0_0x0.field1_0x8,param_3.field1_0x10.field0_0x0,
                    param_3.field1_0x10.field1_0x8);
  if (self != 0) {
    UICollectionViewCell::setupContainerViewCell(self,"setupContainerViewCell");
    UICollectionViewCell::setupIndicatorView(self,"setupIndicatorView");
    UICollectionViewCell::setupMediaImageView(self,"setupMediaImageView");
    UICollectionViewCell::setupErrorLabel(self,"setupErrorLabel");
    UICollectionViewCell::setupDurationLabel(self,"setupDurationLabel");
    UICollectionViewCell::setupCheckmarkView(self,"setupCheckmarkView");
  }
  return self;
}

