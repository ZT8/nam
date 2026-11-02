/* Address: 00095c78 | Name: instance_MBBarProgressView__initWithFrame_ | Body bytes: 316 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x30 bytes */

ID MBBarProgressView::instance_MBBarProgressView__initWithFrame_
             (ID param_1,SEL param_2,CGRect param_3)

{
  ID self;
  ID IVar1;
  undefined8 uVar2;
  ID local_40;
  class_t *pcStack_38;
  
  pcStack_38 = &objc::class_t::MBBarProgressView;
  local_40 = param_1;
  self = UIView::initWithFrame_
                   ((ID)&local_40,"initWithFrame:",param_3.field0_0x0.field0_0x0,
                    param_3.field0_0x0.field1_0x8,param_3.field1_0x10.field0_0x0,
                    param_3.field1_0x10.field1_0x8);
  if (self != 0) {
    *(undefined4 *)(self + (long)_progress) = 0;
    IVar1 = UIColor::whiteColor((ID)&_OBJC_CLASS___UIColor,"whiteColor");
    uVar2 = *(undefined8 *)(self + (long)_lineColor);
    *(ID *)(self + (long)_lineColor) = IVar1;
    IVar1 = UIColor::whiteColor((ID)&_OBJC_CLASS___UIColor,"whiteColor",uVar2);
    uVar2 = *(undefined8 *)(self + (long)_progressColor);
    *(ID *)(self + (long)_progressColor) = IVar1;
    IVar1 = UIColor::clearColor((ID)&_OBJC_CLASS___UIColor,"clearColor",uVar2);
    uVar2 = *(undefined8 *)(self + (long)_progressRemainingColor);
    *(ID *)(self + (long)_progressRemainingColor) = IVar1;
    IVar1 = UIColor::clearColor((ID)&_OBJC_CLASS___UIColor,"clearColor",uVar2);
    UIView::setBackgroundColor_(self,"setBackgroundColor:",IVar1);
    UIView::setOpaque_(self,"setOpaque:",0);
  }
  return self;
}

