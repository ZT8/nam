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

