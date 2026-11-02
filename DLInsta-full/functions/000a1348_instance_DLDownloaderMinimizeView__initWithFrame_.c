/* Address: 000a1348 | Name: instance_DLDownloaderMinimizeView__initWithFrame_ | Body bytes: 88 */

/* Function Stack Size: 0x30 bytes */

ID DLDownloaderMinimizeView::instance_DLDownloaderMinimizeView__initWithFrame_
             (ID param_1,SEL param_2,CGRect param_3)

{
  ID self;
  ID local_30;
  class_t *pcStack_28;
  
  pcStack_28 = &objc::class_t::DLDownloaderMinimizeView;
  local_30 = param_1;
  self = UIView::initWithFrame_
                   ((ID)&local_30,"initWithFrame:",param_3.field0_0x0.field0_0x0,
                    param_3.field0_0x0.field1_0x8,param_3.field1_0x10.field0_0x0,
                    param_3.field1_0x10.field1_0x8);
  if (self != 0) {
    UIView::setupViews(self,"setupViews");
  }
  return self;
}

