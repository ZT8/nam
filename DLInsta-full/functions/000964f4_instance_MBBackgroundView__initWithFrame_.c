/* Address: 000964f4 | Name: instance_MBBackgroundView__initWithFrame_ | Body bytes: 204 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x30 bytes */

ID MBBackgroundView::instance_MBBackgroundView__initWithFrame_
             (ID param_1,SEL param_2,CGRect param_3)

{
  ID self;
  ID IVar1;
  undefined8 uVar2;
  ID local_30;
  class_t *pcStack_28;
  
  pcStack_28 = &objc::class_t::MBBackgroundView;
  local_30 = param_1;
  self = UIView::initWithFrame_
                   ((ID)&local_30,"initWithFrame:",param_3.field0_0x0.field0_0x0,
                    param_3.field0_0x0.field1_0x8,param_3.field1_0x10.field0_0x0,
                    param_3.field1_0x10.field1_0x8);
  if (self != 0) {
    *(undefined8 *)(self + (long)_style) = 1;
    *(undefined8 *)(self + (long)_blurEffectStyle) = 2;
    IVar1 = UIColor::colorWithWhite_alpha_
                      ((ID)&_OBJC_CLASS___UIColor,"colorWithWhite:alpha:",0,0x3fe99999a0000000);
    uVar2 = *(undefined8 *)(self + (long)_color);
    *(ID *)(self + (long)_color) = IVar1;
    UIView::setClipsToBounds_(self,"setClipsToBounds:",uVar2,1);
    UIView::updateForBackgroundStyle(self,"updateForBackgroundStyle");
  }
  return self;
}

