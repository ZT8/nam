/* Address: 00081fc0 | Name: FUN_00081fc0 | Body bytes: 1504 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_00081fc0(undefined8 param_1,ID param_2,undefined8 param_3,undefined4 param_4)

{
  undefined *puVar1;
  bool bVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  undefined8 uVar6;
  undefined *local_c0;
  undefined8 local_b8;
  code *local_b0;
  undefined *puStack_a8;
  ID local_a0;
  undefined *local_98;
  undefined8 local_90;
  code *local_88;
  undefined *puStack_80;
  ID local_78;
  
  IVar3 = UIColor::clearColor((ID)&_OBJC_CLASS___UIColor,"clearColor");
  _objc_msgSend(param_2,"setBackgroundColor:",IVar3);
  IVar3 = _objc_alloc(&_OBJC_CLASS___UILabel);
  puVar1 = PTR__CGRectZero_000e8040;
  IVar3 = UILabel::initWithFrame_
                    (IVar3,"initWithFrame:",*(undefined8 *)PTR__CGRectZero_000e8040,
                     *(undefined8 *)(PTR__CGRectZero_000e8040 + 8),
                     *(undefined8 *)(PTR__CGRectZero_000e8040 + 0x10),
                     *(undefined8 *)(PTR__CGRectZero_000e8040 + 0x18));
  IVar4 = UIFont::fontWithName_size_
                    ((ID)&_OBJC_CLASS___UIFont,"fontWithName:size:",0x4044000000000000,
                     &cf_ArialRoundedMTBold);
  UILabel::setFont_(IVar3,"setFont:",IVar4);
  UILabel::setAlpha_(IVar3,"setAlpha:",0);
  local_98 = PTR___NSConcreteStackBlock_000e80d8;
  local_90 = 0xc2000000;
  local_88 = FUN_0008269c;
  puStack_80 = &DAT_000e8948;
  local_78 = IVar3;
  UIView::animateWithDuration_animations_
            ((ID)&_OBJC_CLASS___UIView,"animateWithDuration:animations:",0x3ff0000000000000,
             &local_98);
  UILabel::setText_(IVar3,"setText:",&cf_DLInsta);
  bVar2 = DLHelper::class_DLHelper__isDarkMode((ID)&objc::class_t::DLHelper,"isDarkMode");
  if ((bVar2 & 1) == 0) {
    IVar4 = UIColor::blackColor((ID)&_OBJC_CLASS___UIColor,"blackColor");
  }
  else {
    IVar4 = UIColor::colorWithRed_green_blue_alpha_
                      ((ID)&_OBJC_CLASS___UIColor,"colorWithRed:green:blue:alpha:",
                       0x3fef5c28f5c28f5c,0x3fef5c28f5c28f5c,0x3fef5c28f5c28f5c,0x3ff0000000000000);
  }
  UILabel::setTextColor_(IVar3,"setTextColor:",IVar4);
  UILabel::setTextAlignment_(IVar3,"setTextAlignment:",1);
  UILabel::setTag_(IVar3,"setTag:",0x6f);
  UILabel::setUserInteractionEnabled_(IVar3,"setUserInteractionEnabled:",1);
  IVar4 = _objc_alloc(&objc::class_t::DLTapGestureRecognizer);
  IVar4 = DLTapGestureRecognizer::instance_DLTapGestureRecognizer__initWithAction_
                    (IVar4,"initWithAction:",0xe8d78,param_4);
  _objc_msgSend(IVar4,"setNumberOfTapsRequired:",10);
  UILabel::addGestureRecognizer_(IVar3,"addGestureRecognizer:",IVar4);
  IVar4 = _objc_alloc(&_OBJC_CLASS___UILabel);
  IVar4 = UILabel::initWithFrame_
                    (IVar4,"initWithFrame:",*(undefined8 *)puVar1,*(undefined8 *)(puVar1 + 8),
                     *(undefined8 *)(puVar1 + 0x10),*(undefined8 *)(puVar1 + 0x18));
  UILabel::setNumberOfLines_(IVar4,"setNumberOfLines:",0);
  IVar5 = UIFont::fontWithName_size_
                    ((ID)&_OBJC_CLASS___UIFont,"fontWithName:size:",0x402a000000000000,
                     &cf_ArialRoundedMTBold);
  UILabel::setFont_(IVar4,"setFont:",IVar5);
  UILabel::setAlpha_(IVar4,"setAlpha:",0);
  local_c0 = PTR___NSConcreteStackBlock_000e80d8;
  local_b8 = 0xc2000000;
  local_b0 = FUN_000828a8;
  puStack_a8 = &DAT_000e8948;
  local_a0 = IVar4;
  UIView::animateWithDuration_animations_
            ((ID)&_OBJC_CLASS___UIView,"animateWithDuration:animations:",0x4000000000000000,
             &local_c0);
  bVar2 = DLHelper::class_DLHelper__isDarkMode((ID)&objc::class_t::DLHelper,"isDarkMode");
  if ((bVar2 & 1) == 0) {
    IVar5 = UIColor::blackColor((ID)&_OBJC_CLASS___UIColor,"blackColor");
  }
  else {
    IVar5 = UIColor::colorWithRed_green_blue_alpha_
                      ((ID)&_OBJC_CLASS___UIColor,"colorWithRed:green:blue:alpha:",
                       0x3fef5c28f5c28f5c,0x3fef5c28f5c28f5c,0x3fef5c28f5c28f5c,0x3ff0000000000000);
  }
  UILabel::setTextColor_(IVar4,"setTextColor:",IVar5);
  UILabel::setText_(IVar4,"setText:",DAT_001006b8);
  uVar6 = FUN_00097ef8();
  uVar6 = FUN_00097a54(uVar6);
  IVar5 = _objc_msgSend(DAT_001006a8,"length");
  IVar5 = FUN_00097c68(uVar6,IVar5);
  IVar5 = _objc_msgSend(IVar5,"isEqualToString:",DAT_001006a8);
  if ((IVar5 & 1) == 0) {
    uVar6 = FUN_0008c4c0(DAT_000ff2c8);
    UILabel::setText_(IVar4,"setText:",uVar6);
    IVar5 = UIColor::colorWithRed_green_blue_alpha_
                      ((ID)&_OBJC_CLASS___UIColor,"colorWithRed:green:blue:alpha:",
                       0x3ff0000000000000,0x3fc999999999999a,0x3fd4141414141414,0x3ff0000000000000);
    UILabel::setTextColor_(IVar4,"setTextColor:",IVar5);
  }
  UILabel::setTextAlignment_(IVar4,"setTextAlignment:",1);
  UILabel::setTag_(IVar4,"setTag:",0xde);
  IVar5 = _objc_msgSend(param_2,"contentView");
  _objc_msgSend(IVar5,"addSubview:",IVar3);
  IVar3 = _objc_msgSend(param_2,"contentView");
  _objc_msgSend(IVar3,"addSubview:",IVar4);
  return 0;
}

