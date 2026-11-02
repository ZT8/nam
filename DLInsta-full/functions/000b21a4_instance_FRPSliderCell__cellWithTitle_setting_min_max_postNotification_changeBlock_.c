/* Address: 000b21a4 | Name: instance_FRPSliderCell__cellWithTitle_setting_min_max_postNotification_changeBlock_ | Body bytes: 2248 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x38 bytes */

ID FRPSliderCell::
   instance_FRPSliderCell__cellWithTitle_setting_min_max_postNotification_changeBlock_
             (ID param_1,SEL param_2,ID param_3,ID param_4,float param_5,float param_6,ID param_7,
             ID param_8,undefined4 param_9)

{
  ID self;
  ID IVar1;
  ID IVar2;
  undefined4 uVar3;
  undefined4 in_register_00005004;
  undefined4 in_register_00005024;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ID local_a8;
  class_t *pcStack_a0;
  
  pcStack_a0 = &objc::class_t::FRPSliderCell;
  IVar1 = param_4;
  local_a8 = param_1;
  self = FRPCell::instance_FRPCell__initWithTitle_setting_
                   ((ID)&local_a8,"initWithTitle:setting:",0,param_4);
  uVar3 = (undefined4)IVar1;
  FRPCell::instance_FRPCell__setPostNotification_(self,"setPostNotification:",param_7);
  FRPCell::instance_FRPCell__setValueChanged_(self,"setValueChanged:",param_8,uVar3);
  IVar1 = _objc_alloc(&_OBJC_CLASS___UISlider);
  uVar4 = *(undefined8 *)PTR__CGRectZero_000e8040;
  uVar5 = *(undefined8 *)(PTR__CGRectZero_000e8040 + 8);
  uVar6 = *(undefined8 *)(PTR__CGRectZero_000e8040 + 0x10);
  uVar7 = *(undefined8 *)(PTR__CGRectZero_000e8040 + 0x18);
  IVar1 = UISlider::initWithFrame_(IVar1,"initWithFrame:",uVar4,uVar5,uVar6,uVar7);
  UISlider::setMinimumValue_(IVar1,"setMinimumValue:",CONCAT44(in_register_00005004,param_5));
  UISlider::setMaximumValue_(IVar1,"setMaximumValue:",CONCAT44(in_register_00005024,param_6));
  IVar2 = _objc_msgSend(param_4,"value");
  _objc_msgSend(IVar2,"floatValue");
  UISlider::setValue_(IVar1,"setValue:");
  UISlider::addTarget_action_forControlEvents_
            (IVar1,"addTarget:action:forControlEvents:",param_1,"sliderChanged:",0x1000);
  IVar2 = _objc_msgSend(self,"contentView");
  _objc_msgSend(IVar2,"addSubview:",IVar1);
  _objc_msgSend(self,"setSliderCell:",IVar1);
  IVar1 = _objc_alloc(&_OBJC_CLASS___UILabel);
  IVar1 = UILabel::initWithFrame_(IVar1,"initWithFrame:",uVar4,uVar5,uVar6,uVar7);
  IVar2 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___2f);
  UILabel::setText_(IVar1,"setText:",IVar2);
  UILabel::setNumberOfLines_(IVar1,"setNumberOfLines:",1);
  UILabel::setBaselineAdjustment_(IVar1,"setBaselineAdjustment:",0);
  UILabel::setAdjustsFontSizeToFitWidth_(IVar1,"setAdjustsFontSizeToFitWidth:",1);
  UILabel::setClipsToBounds_(IVar1,"setClipsToBounds:",1);
  IVar2 = UIColor::clearColor((ID)&_OBJC_CLASS___UIColor,"clearColor");
  UILabel::setBackgroundColor_(IVar1,"setBackgroundColor:",IVar2);
  IVar2 = UIColor::blackColor((ID)&_OBJC_CLASS___UIColor,"blackColor");
  UILabel::setTextColor_(IVar1,"setTextColor:",IVar2);
  UILabel::setTextAlignment_(IVar1,"setTextAlignment:",1);
  IVar2 = _objc_msgSend(self,"contentView");
  _objc_msgSend(IVar2,"addSubview:",IVar1);
  _objc_msgSend(self,"setLLabel:",IVar1);
  IVar1 = _objc_alloc(&_OBJC_CLASS___UILabel);
  IVar1 = UILabel::initWithFrame_(IVar1,"initWithFrame:",uVar4,uVar5,uVar6,uVar7);
  IVar2 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___2f);
  UILabel::setText_(IVar1,"setText:",IVar2);
  UILabel::setNumberOfLines_(IVar1,"setNumberOfLines:",1);
  UILabel::setBaselineAdjustment_(IVar1,"setBaselineAdjustment:",0);
  UILabel::setAdjustsFontSizeToFitWidth_(IVar1,"setAdjustsFontSizeToFitWidth:",1);
  UILabel::setClipsToBounds_(IVar1,"setClipsToBounds:",1);
  IVar2 = UIColor::clearColor((ID)&_OBJC_CLASS___UIColor,"clearColor");
  UILabel::setBackgroundColor_(IVar1,"setBackgroundColor:",IVar2);
  IVar2 = UIColor::blackColor((ID)&_OBJC_CLASS___UIColor,"blackColor");
  UILabel::setTextColor_(IVar1,"setTextColor:",IVar2);
  UILabel::setTextAlignment_(IVar1,"setTextAlignment:",1);
  IVar2 = _objc_msgSend(self,"contentView");
  _objc_msgSend(IVar2,"addSubview:",IVar1);
  _objc_msgSend(self,"setRLabel:",IVar1);
  IVar1 = _objc_alloc(&_OBJC_CLASS___UILabel);
  IVar1 = UILabel::initWithFrame_(IVar1,"initWithFrame:",uVar4,uVar5,uVar6,uVar7);
  UILabel::setText_(IVar1,"setText:",param_3);
  UILabel::setNumberOfLines_(IVar1,"setNumberOfLines:",1);
  UILabel::setBaselineAdjustment_(IVar1,"setBaselineAdjustment:",0);
  UILabel::setAdjustsFontSizeToFitWidth_(IVar1,"setAdjustsFontSizeToFitWidth:",1);
  UILabel::setClipsToBounds_(IVar1,"setClipsToBounds:",1);
  IVar2 = UIColor::clearColor((ID)&_OBJC_CLASS___UIColor,"clearColor");
  UILabel::setBackgroundColor_(IVar1,"setBackgroundColor:",IVar2);
  IVar2 = UIColor::blackColor((ID)&_OBJC_CLASS___UIColor,"blackColor");
  UILabel::setTextColor_(IVar1,"setTextColor:",IVar2);
  UILabel::setTextAlignment_(IVar1,"setTextAlignment:",0);
  IVar2 = _objc_msgSend(self,"contentView");
  _objc_msgSend(IVar2,"addSubview:",IVar1);
  _objc_msgSend(self,"setCLabel:",IVar1);
  IVar1 = _objc_alloc(&_OBJC_CLASS___UILabel);
  IVar1 = UILabel::initWithFrame_(IVar1,"initWithFrame:",uVar4,uVar5,uVar6,uVar7);
  IVar2 = _objc_msgSend(param_4,"value");
  _objc_msgSend(IVar2,"floatValue");
  IVar2 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___2f);
  UILabel::setText_(IVar1,"setText:",IVar2);
  UILabel::setNumberOfLines_(IVar1,"setNumberOfLines:",1);
  UILabel::setBaselineAdjustment_(IVar1,"setBaselineAdjustment:",0);
  UILabel::setAdjustsFontSizeToFitWidth_(IVar1,"setAdjustsFontSizeToFitWidth:",1);
  UILabel::setClipsToBounds_(IVar1,"setClipsToBounds:",1);
  IVar2 = UIColor::clearColor((ID)&_OBJC_CLASS___UIColor,"clearColor");
  UILabel::setBackgroundColor_(IVar1,"setBackgroundColor:",IVar2);
  IVar2 = UIColor::grayColor((ID)&_OBJC_CLASS___UIColor,"grayColor");
  UILabel::setTextColor_(IVar1,"setTextColor:",IVar2);
  UILabel::setTextAlignment_(IVar1,"setTextAlignment:",2);
  IVar2 = _objc_msgSend(self,"contentView");
  _objc_msgSend(IVar2,"addSubview:",IVar1);
  _objc_msgSend(self,"setVLabel:",IVar1);
  _objc_msgSend(self,"setSelectionStyle:",0);
  FRPCell::instance_FRPCell__setHeight_(self,"setHeight:",0x4b);
  return self;
}

