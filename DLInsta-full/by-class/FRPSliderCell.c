/* Automatic pseudocode grouped by Objective-C class. NOT original source. */

/* -[FRPSliderCell cellWithTitle:setting:min:max:postNotification:changeBlock:] | encoding @56@0:8@16@24f32f36@40@?48 */
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


/* -[FRPSliderCell layoutSubviews] | encoding v16@0:8 */
/* Address: 000b2a6c | Name: instance_FRPSliderCell__layoutSubviews | Body bytes: 1208 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void FRPSliderCell::instance_FRPSliderCell__layoutSubviews(ID param_1,SEL param_2)

{
  ID IVar1;
  float fVar2;
  double dVar3;
  double in_d2;
  double in_d3;
  double dVar4;
  double dVar5;
  float fVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  objc_super local_90;
  
  local_90.super_class = &objc::class_t::FRPSliderCell;
  local_90.receiver = param_1;
  _objc_msgSendSuper2(&local_90,"layoutSubviews");
  IVar1 = _objc_msgSend(param_1,"contentView");
  _objc_msgSend(IVar1,"frame");
  fVar8 = (float)(in_d2 / 1.8);
  IVar1 = _objc_msgSend(param_1,"contentView");
  _objc_msgSend(IVar1,"frame");
  dVar3 = in_d2 * 0.5 + (double)(fVar8 * -0.5);
  fVar9 = (float)dVar3;
  IVar1 = _objc_msgSend(param_1,"contentView",dVar3);
  _objc_msgSend(IVar1,"frame");
  dVar7 = (double)fVar8;
  IVar1 = instance_FRPSliderCell__sliderCell(param_1,"sliderCell");
  dVar4 = 25.0;
  _objc_msgSend(IVar1,"setFrame:",(double)fVar9,(double)(float)(in_d3 + -25.0 + -10.0),dVar7,
                0x4039000000000000);
  IVar1 = _objc_msgSend(param_1,"contentView");
  _objc_msgSend(IVar1,"frame");
  dVar3 = dVar7;
  IVar1 = _objc_msgSend(param_1,"contentView");
  _objc_msgSend(IVar1,"frame");
  fVar6 = (float)((dVar7 - dVar3 / 1.8) * 0.5 + -10.0);
  fVar2 = fVar9 - fVar6;
  IVar1 = _objc_msgSend(param_1,"contentView",(ulong)(uint)fVar2);
  _objc_msgSend(IVar1,"frame");
  dVar7 = (double)fVar6;
  IVar1 = instance_FRPSliderCell__lLabel(param_1,"lLabel");
  dVar5 = 25.0;
  _objc_msgSend(IVar1,"setFrame:",(double)(fVar2 + -5.0),(double)(float)(dVar4 + -25.0 + -10.0),
                dVar7,0x4039000000000000);
  IVar1 = _objc_msgSend(param_1,"contentView");
  _objc_msgSend(IVar1,"frame");
  dVar3 = dVar7;
  IVar1 = _objc_msgSend(param_1,"contentView");
  _objc_msgSend(IVar1,"frame");
  IVar1 = _objc_msgSend(param_1,"contentView",(ulong)(uint)(fVar8 + fVar9));
  _objc_msgSend(IVar1,"frame");
  dVar3 = (double)(float)((dVar7 - dVar3 / 1.8) * 0.5 + -10.0);
  IVar1 = instance_FRPSliderCell__rLabel(param_1,"rLabel");
  _objc_msgSend(IVar1,"setFrame:",(double)(fVar8 + fVar9 + 5.0),
                (double)(float)(dVar5 + -25.0 + -10.0),dVar3,0x4039000000000000);
  IVar1 = _objc_msgSend(param_1,"contentView");
  _objc_msgSend(IVar1,"frame");
  dVar4 = (double)(float)(dVar3 / 1.8);
  IVar1 = instance_FRPSliderCell__cLabel(param_1,"cLabel");
  _objc_msgSend(IVar1,"setFrame:",0x4031000000000000,0x4020000000000000,dVar4,0x4039000000000000);
  IVar1 = _objc_msgSend(param_1,"contentView");
  _objc_msgSend(IVar1,"frame");
  dVar3 = dVar4;
  IVar1 = _objc_msgSend(param_1,"contentView");
  _objc_msgSend(IVar1,"frame");
  dVar7 = dVar3 / 1.8;
  IVar1 = _objc_msgSend(param_1,"contentView");
  _objc_msgSend(IVar1,"frame");
  dVar7 = (double)(float)(dVar4 - dVar7);
  IVar1 = instance_FRPSliderCell__vLabel(param_1,"vLabel");
  _objc_msgSend(IVar1,"setFrame:",(double)(float)((dVar3 - dVar7) + -25.0),0x4020000000000000,dVar7,
                0x4039000000000000);
  return;
}


/* -[FRPSliderCell sliderChanged:] | encoding v24@0:8@16 */
/* Address: 000b2f24 | Name: instance_FRPSliderCell__sliderChanged_ | Body bytes: 488 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void FRPSliderCell::instance_FRPSliderCell__sliderChanged_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  
  _objc_msgSend(param_3,"value");
  IVar1 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___2f);
  IVar2 = instance_FRPSliderCell__vLabel(param_1,"vLabel");
  _objc_msgSend(IVar2,"setText:",IVar1);
  _objc_msgSend(param_3,"value");
  IVar1 = NSNumber::numberWithFloat_((ID)&_OBJC_CLASS___NSNumber,"numberWithFloat:");
  IVar2 = FRPCell::instance_FRPCell__setting(param_1,"setting");
  _objc_msgSend(IVar2,"setValue:",IVar1);
  IVar1 = FRPCell::instance_FRPCell__valueChanged(param_1,"valueChanged");
  if (IVar1 != 0) {
    IVar1 = FRPCell::instance_FRPCell__valueChanged(param_1,"valueChanged");
    (**(code **)(IVar1 + 0x10))(IVar1,param_3);
  }
  IVar1 = NSNotificationCenter::defaultCenter
                    ((ID)&_OBJC_CLASS___NSNotificationCenter,"defaultCenter");
  IVar2 = FRPCell::instance_FRPCell__postNotification(param_1,"postNotification");
  NSNotificationCenter::postNotificationName_object_
            (IVar1,"postNotificationName:object:",IVar2,param_3);
  return;
}


/* -[FRPSliderCell sliderCell] | encoding @16@0:8 */
/* Address: 000b310c | Name: instance_FRPSliderCell__sliderCell | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

ID FRPSliderCell::instance_FRPSliderCell__sliderCell(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_sliderCell);
}


/* -[FRPSliderCell setSliderCell:] | encoding v24@0:8@16 */
/* Address: 000b311c | Name: instance_FRPSliderCell__setSliderCell_ | Body bytes: 20 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void FRPSliderCell::instance_FRPSliderCell__setSliderCell_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_sliderCell) = param_3;
  return;
}


/* -[FRPSliderCell lLabel] | encoding @16@0:8 */
/* Address: 000b3130 | Name: instance_FRPSliderCell__lLabel | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

ID FRPSliderCell::instance_FRPSliderCell__lLabel(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_lLabel);
}


/* -[FRPSliderCell setLLabel:] | encoding v24@0:8@16 */
/* Address: 000b3140 | Name: instance_FRPSliderCell__setLLabel_ | Body bytes: 20 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void FRPSliderCell::instance_FRPSliderCell__setLLabel_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_lLabel) = param_3;
  return;
}


/* -[FRPSliderCell rLabel] | encoding @16@0:8 */
/* Address: 000b3154 | Name: instance_FRPSliderCell__rLabel | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

ID FRPSliderCell::instance_FRPSliderCell__rLabel(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_rLabel);
}


/* -[FRPSliderCell setRLabel:] | encoding v24@0:8@16 */
/* Address: 000b3164 | Name: instance_FRPSliderCell__setRLabel_ | Body bytes: 20 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void FRPSliderCell::instance_FRPSliderCell__setRLabel_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_rLabel) = param_3;
  return;
}


/* -[FRPSliderCell cLabel] | encoding @16@0:8 */
/* Address: 000b3178 | Name: instance_FRPSliderCell__cLabel | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

ID FRPSliderCell::instance_FRPSliderCell__cLabel(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_cLabel);
}


/* -[FRPSliderCell setCLabel:] | encoding v24@0:8@16 */
/* Address: 000b3188 | Name: instance_FRPSliderCell__setCLabel_ | Body bytes: 20 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void FRPSliderCell::instance_FRPSliderCell__setCLabel_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_cLabel) = param_3;
  return;
}


/* -[FRPSliderCell vLabel] | encoding @16@0:8 */
/* Address: 000b319c | Name: instance_FRPSliderCell__vLabel | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

ID FRPSliderCell::instance_FRPSliderCell__vLabel(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_vLabel);
}


/* -[FRPSliderCell setVLabel:] | encoding v24@0:8@16 */
/* Address: 000b31ac | Name: instance_FRPSliderCell__setVLabel_ | Body bytes: 20 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void FRPSliderCell::instance_FRPSliderCell__setVLabel_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_vLabel) = param_3;
  return;
}


/* -[FRPSliderCell min] | encoding f16@0:8 */
/* Address: 000b31c0 | Name: instance_FRPSliderCell__min | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

float FRPSliderCell::instance_FRPSliderCell__min(ID param_1,SEL param_2)

{
  return *(float *)(param_1 + (long)_min);
}


/* -[FRPSliderCell setMin:] | encoding v20@0:8f16 */
/* Address: 000b31d0 | Name: instance_FRPSliderCell__setMin_ | Body bytes: 16 */

/* Function Stack Size: 0x14 bytes */

void FRPSliderCell::instance_FRPSliderCell__setMin_(ID param_1,SEL param_2,float param_3)

{
  *(float *)(param_1 + (long)_min) = param_3;
  return;
}


/* -[FRPSliderCell max] | encoding f16@0:8 */
/* Address: 000b31e0 | Name: instance_FRPSliderCell__max | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

float FRPSliderCell::instance_FRPSliderCell__max(ID param_1,SEL param_2)

{
  return *(float *)(param_1 + (long)_max);
}


/* -[FRPSliderCell setMax:] | encoding v20@0:8f16 */
/* Address: 000b31f0 | Name: instance_FRPSliderCell__setMax_ | Body bytes: 16 */

/* Function Stack Size: 0x14 bytes */

void FRPSliderCell::instance_FRPSliderCell__setMax_(ID param_1,SEL param_2,float param_3)

{
  *(float *)(param_1 + (long)_max) = param_3;
  return;
}


/* -[FRPSliderCell .cxx_destruct] | encoding v16@0:8 */
/* Address: 000b3200 | Name: instance_FRPSliderCell___cxx_destruct | Body bytes: 124 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void FRPSliderCell::instance_FRPSliderCell___cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_vLabel) = 0;
  *(undefined8 *)(param_1 + (long)_cLabel) = 0;
  *(undefined8 *)(param_1 + (long)_rLabel) = 0;
  *(undefined8 *)(param_1 + (long)_lLabel) = 0;
  *(undefined8 *)(param_1 + (long)_sliderCell) = 0;
  return;
}


/* +[FRPSliderCell cellWithTitle:setting:min:max:postNotification:changeBlock:] | encoding @56@0:8@16@24f32f36@40@?48 */
/* Address: 000b20c4 | Name: class_FRPSliderCell__cellWithTitle_setting_min_max_postNotification_changeBlock_ | Body bytes: 224 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x38 bytes */

ID FRPSliderCell::class_FRPSliderCell__cellWithTitle_setting_min_max_postNotification_changeBlock_
             (ID param_1,SEL param_2,ID param_3,ID param_4,float param_5,float param_6,ID param_7,
             ID param_8,undefined4 param_9)

{
  ID IVar1;
  undefined4 in_register_00005004;
  undefined4 in_register_00005024;
  
  IVar1 = _objc_alloc(param_1);
  IVar1 = _objc_msgSend(IVar1,"cellWithTitle:setting:min:max:postNotification:changeBlock:",
                        CONCAT44(in_register_00005004,param_5),
                        CONCAT44(in_register_00005024,param_6),param_3,param_4,param_7,param_8);
  return IVar1;
}

