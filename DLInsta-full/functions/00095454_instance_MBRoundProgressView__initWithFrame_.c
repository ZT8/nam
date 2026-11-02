/* Address: 00095454 | Name: instance_MBRoundProgressView__initWithFrame_ | Body bytes: 292 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x30 bytes */

ID MBRoundProgressView::instance_MBRoundProgressView__initWithFrame_
             (ID param_1,SEL param_2,CGRect param_3)

{
  ID self;
  ID IVar1;
  undefined8 uVar2;
  ID local_40;
  class_t *pcStack_38;
  
  pcStack_38 = &objc::class_t::MBRoundProgressView;
  local_40 = param_1;
  self = UIView::initWithFrame_
                   ((ID)&local_40,"initWithFrame:",param_3.field0_0x0.field0_0x0,
                    param_3.field0_0x0.field1_0x8,param_3.field1_0x10.field0_0x0,
                    param_3.field1_0x10.field1_0x8);
  if (self != 0) {
    IVar1 = UIColor::clearColor((ID)&_OBJC_CLASS___UIColor,"clearColor");
    UIView::setBackgroundColor_(self,"setBackgroundColor:",IVar1);
    UIView::setOpaque_(self,"setOpaque:",0);
    *(undefined4 *)(self + (long)_progress) = 0;
    *(undefined1 *)(self + (long)_annular) = 0;
    IVar1 = _objc_alloc(&_OBJC_CLASS___UIColor);
    IVar1 = UIColor::initWithWhite_alpha_
                      (IVar1,"initWithWhite:alpha:",0x3ff0000000000000,0x3ff0000000000000);
    uVar2 = *(undefined8 *)(self + (long)_progressTintColor);
    *(ID *)(self + (long)_progressTintColor) = IVar1;
    IVar1 = _objc_alloc(uVar2,&_OBJC_CLASS___UIColor);
    IVar1 = _objc_msgSend(IVar1,"initWithWhite:alpha:",0x3ff0000000000000,0x3fb99999a0000000);
    *(ID *)(self + (long)_backgroundTintColor) = IVar1;
  }
  return self;
}

