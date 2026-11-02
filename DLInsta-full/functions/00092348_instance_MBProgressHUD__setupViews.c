/* Address: 00092348 | Name: instance_MBProgressHUD__setupViews | Body bytes: 2064 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

void MBProgressHUD::instance_MBProgressHUD__setupViews(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  ID self;
  long lVar7;
  double extraout_d0;
  double in_d1;
  double in_d2;
  double in_d3;
  CGRect CVar8;
  undefined8 local_160;
  long lStack_158;
  long *local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  ID local_118;
  ID IStack_110;
  ID local_108;
  undefined1 auStack_100 [128];
  long local_80;
  
  local_80 = *(long *)PTR____stack_chk_guard_000e8260;
  IVar1 = instance_MBProgressHUD__contentColor(param_1,"contentColor");
  IVar2 = _objc_alloc(&objc::class_t::MBBackgroundView);
  _objc_msgSend(param_1,"bounds");
  CVar8.field0_0x0.field1_0x8 = in_d1;
  CVar8.field0_0x0.field0_0x0 = extraout_d0;
  CVar8.field1_0x10.field1_0x8 = in_d3;
  CVar8.field1_0x10.field0_0x0 = in_d2;
  IVar2 = MBBackgroundView::instance_MBBackgroundView__initWithFrame_(IVar2,"initWithFrame:",CVar8);
  MBBackgroundView::instance_MBBackgroundView__setStyle_(IVar2,"setStyle:",0);
  IVar3 = UIColor::clearColor((ID)&_OBJC_CLASS___UIColor,"clearColor");
  _objc_msgSend(IVar2,"setBackgroundColor:",IVar3);
  _objc_msgSend(IVar2,"setAutoresizingMask:",0x12);
  _objc_msgSend(IVar2,"setAlpha:",0);
  _objc_msgSend(param_1,"addSubview:",IVar2);
  *(ID *)(param_1 + (long)_backgroundView) = IVar2;
  IVar2 = _objc_msgSend((ID)&objc::class_t::MBBackgroundView,"new");
  _objc_msgSend(IVar2,"setTranslatesAutoresizingMaskIntoConstraints:",0);
  IVar3 = _objc_msgSend(IVar2,"layer");
  _objc_msgSend(IVar3,"setCornerRadius:",0x4014000000000000);
  _objc_msgSend(IVar2,"setAlpha:",0);
  _objc_msgSend(param_1,"addSubview:",IVar2);
  *(ID *)(param_1 + (long)_bezelView) = IVar2;
  instance_MBProgressHUD__updateBezelMotionEffects(param_1,"updateBezelMotionEffects");
  IVar3 = UILabel::new((ID)&_OBJC_CLASS___UILabel,"new");
  UILabel::setAdjustsFontSizeToFitWidth_(IVar3,"setAdjustsFontSizeToFitWidth:",0);
  UILabel::setTextAlignment_(IVar3,"setTextAlignment:",1);
  UILabel::setTextColor_(IVar3,"setTextColor:",IVar1);
  IVar4 = UIFont::boldSystemFontOfSize_
                    ((ID)&_OBJC_CLASS___UIFont,"boldSystemFontOfSize:",0x4030000000000000);
  UILabel::setFont_(IVar3,"setFont:",IVar4);
  UILabel::setOpaque_(IVar3,"setOpaque:",0);
  IVar4 = UIColor::clearColor((ID)&_OBJC_CLASS___UIColor,"clearColor");
  UILabel::setBackgroundColor_(IVar3,"setBackgroundColor:",IVar4);
  *(ID *)(param_1 + (long)_label) = IVar3;
  IVar4 = UILabel::new((ID)&_OBJC_CLASS___UILabel,"new");
  UILabel::setAdjustsFontSizeToFitWidth_(IVar4,"setAdjustsFontSizeToFitWidth:",0);
  UILabel::setTextAlignment_(IVar4,"setTextAlignment:",1);
  UILabel::setTextColor_(IVar4,"setTextColor:",IVar1);
  UILabel::setNumberOfLines_(IVar4,"setNumberOfLines:",0);
  IVar5 = UIFont::boldSystemFontOfSize_
                    ((ID)&_OBJC_CLASS___UIFont,"boldSystemFontOfSize:",0x4028000000000000);
  UILabel::setFont_(IVar4,"setFont:",IVar5);
  UILabel::setOpaque_(IVar4,"setOpaque:",0);
  IVar5 = UIColor::clearColor((ID)&_OBJC_CLASS___UIColor,"clearColor");
  UILabel::setBackgroundColor_(IVar4,"setBackgroundColor:",IVar5);
  *(ID *)(param_1 + (long)_detailsLabel) = IVar4;
  IVar5 = _objc_msgSend((ID)&objc::class_t::MBProgressHUDRoundedButton,"buttonWithType:",0);
  IVar6 = _objc_msgSend(IVar5,"titleLabel");
  _objc_msgSend(IVar6,"setTextAlignment:",1);
  IVar6 = UIFont::boldSystemFontOfSize_
                    ((ID)&_OBJC_CLASS___UIFont,"boldSystemFontOfSize:",0x4028000000000000);
  self = _objc_msgSend(IVar5,"titleLabel");
  _objc_msgSend(self,"setFont:",IVar6);
  MBProgressHUDRoundedButton::instance_MBProgressHUDRoundedButton__setTitleColor_forState_
            (IVar5,"setTitleColor:forState:",IVar1,0);
  *(ID *)(param_1 + (long)_button) = IVar5;
  IVar1 = _objc_msgSend((ID)&objc::class_t::MBProgressHUDRoundedButton2,"buttonWithType:",0);
  IVar6 = _objc_msgSend(IVar5,"titleLabel");
  _objc_msgSend(IVar6,"setTextAlignment:",1);
  IVar6 = UIColor::colorWithWhite_alpha_
                    ((ID)&_OBJC_CLASS___UIColor,"colorWithWhite:alpha:",0x3ff0000000000000,
                     0x3fe6666660000000);
  MBProgressHUDRoundedButton2::instance_MBProgressHUDRoundedButton2__setTitleColor_forState_
            (IVar1,"setTitleColor:forState:",IVar6,0);
  *(ID *)(param_1 + (long)_hideButton) = IVar1;
  uStack_138 = 0;
  local_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  lStack_158 = 0;
  local_160 = 0;
  uStack_148 = 0;
  local_150 = (long *)0x0;
  local_118 = IVar3;
  IStack_110 = IVar4;
  local_108 = IVar5;
  IVar3 = NSArray::arrayWithObjects_count_
                    ((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:count:",&local_118,3);
  IVar4 = NSArray::countByEnumeratingWithState_objects_count_
                    (IVar3,"countByEnumeratingWithState:objects:count:",&local_160,auStack_100,0x10)
  ;
  if (IVar4 != 0) {
    lVar7 = *local_150;
    do {
      IVar5 = 0;
      do {
        if (*local_150 != lVar7) {
          _objc_enumerationMutation(IVar3);
        }
        IVar6 = *(ID *)(lStack_158 + IVar5 * 8);
        _objc_msgSend(IVar6,"setTranslatesAutoresizingMaskIntoConstraints:",0);
        _objc_msgSend(IVar6,"setContentCompressionResistancePriority:forAxis:",0x44798000,0);
        _objc_msgSend(IVar6,"setContentCompressionResistancePriority:forAxis:",0x44798000,1);
        _objc_msgSend(IVar2,"addSubview:",IVar6);
        IVar5 = IVar5 + 1;
      } while (IVar4 != IVar5);
      IVar4 = NSArray::countByEnumeratingWithState_objects_count_
                        (IVar3,"countByEnumeratingWithState:objects:count:",&local_160,auStack_100,
                         0x10);
    } while (IVar4 != 0);
  }
  _objc_msgSend(IVar1,"setFrame:",0x4014000000000000,0x4014000000000000,0x4039000000000000,
                0x4039000000000000);
  _objc_msgSend(IVar2,"addSubview:",IVar1);
  IVar1 = UIView::new((ID)&_OBJC_CLASS___UIView,"new");
  UIView::setTranslatesAutoresizingMaskIntoConstraints_
            (IVar1,"setTranslatesAutoresizingMaskIntoConstraints:",0);
  UIView::setHidden_(IVar1,"setHidden:",1);
  _objc_msgSend(IVar2,"addSubview:",IVar1);
  *(ID *)(param_1 + (long)_topSpacer) = IVar1;
  IVar1 = UIView::new((ID)&_OBJC_CLASS___UIView,"new");
  UIView::setTranslatesAutoresizingMaskIntoConstraints_
            (IVar1,"setTranslatesAutoresizingMaskIntoConstraints:",0);
  UIView::setHidden_(IVar1,"setHidden:",1);
  _objc_msgSend(IVar2,"addSubview:",IVar1);
  *(ID *)(param_1 + (long)_bottomSpacer) = IVar1;
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_80) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}

