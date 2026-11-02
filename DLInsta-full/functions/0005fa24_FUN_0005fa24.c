/* Address: 0005fa24 | Name: FUN_0005fa24 | Body bytes: 2592 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_0005fa24(ID param_1,undefined8 param_2)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  undefined4 uVar6;
  undefined *local_e8;
  undefined8 local_e0;
  code *local_d8;
  undefined *puStack_d0;
  undefined8 local_c8;
  ID local_c0;
  ID local_b8;
  ID local_b0;
  ID local_a8;
  ID local_a0;
  ID local_98;
  ID local_90;
  ID local_88;
  ID local_80;
  ID local_78;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_000e8260;
  if (param_1 != 0) {
    IVar1 = _objc_msgSend(param_1,"superview");
    if (IVar1 != 0) {
      IVar1 = UIView::new((ID)&_OBJC_CLASS___UIView,"new");
      UIView::setTranslatesAutoresizingMaskIntoConstraints_
                (IVar1,"setTranslatesAutoresizingMaskIntoConstraints:",0);
      _objc_msgSend(param_1,"addSubview:",IVar1);
      IVar2 = _objc_msgSend((ID)&objc::class_t::DLButton,"buttonWithType:",0);
      _objc_msgSend(IVar2,"setTranslatesAutoresizingMaskIntoConstraints:",0);
      IVar3 = DLHelper::class_DLHelper__imageIcon_
                        ((ID)&objc::class_t::DLHelper,"imageIcon:",0xebec8);
      IVar3 = _objc_msgSend(IVar3,"imageWithRenderingMode:",2);
      uVar6 = 0;
      _objc_msgSend(IVar2,"setImage:forState:",IVar3);
      IVar3 = UIColor::whiteColor((ID)&_OBJC_CLASS___UIColor,"whiteColor");
      _objc_msgSend(IVar2,"setTintColor:",IVar3);
      IVar3 = _objc_msgSend(IVar2,"imageView");
      if (IVar3 != 0) {
        IVar3 = UIColor::blackColor((ID)&_OBJC_CLASS___UIColor,"blackColor");
        IVar3 = _objc_retainAutorelease(IVar3);
        IVar3 = _objc_msgSend(IVar3,"CGColor");
        IVar4 = _objc_msgSend(IVar2,"imageView");
        IVar4 = _objc_msgSend(IVar4,"layer");
        _objc_msgSend(IVar4,"setShadowColor:",IVar3);
      }
      IVar3 = _objc_msgSend(IVar2,"imageView");
      IVar3 = _objc_msgSend(IVar3,"layer");
      _objc_msgSend(IVar3,"setShadowOpacity:",0x3e99999a);
      IVar3 = _objc_msgSend(IVar2,"imageView");
      IVar3 = _objc_msgSend(IVar3,"layer");
      _objc_msgSend(IVar3,"setShadowOffset:",0,0);
      IVar3 = _objc_msgSend(IVar2,"imageView");
      IVar3 = _objc_msgSend(IVar3,"layer");
      _objc_msgSend(IVar3,"setShadowRadius:",0x4000000000000000);
      _objc_msgSend(IVar2,"setImageEdgeInsets:",0x4010000000000000,0x4010000000000000,
                    0x4010000000000000,0x4010000000000000);
      local_e8 = PTR___NSConcreteStackBlock_000e80d8;
      local_e0 = 0xc2000000;
      local_d8 = FUN_00060728;
      puStack_d0 = &DAT_000e8bc8;
      local_c8 = param_2;
      DLButton::instance_DLButton__actionHandler_(IVar2,"actionHandler:",(ID)&local_e8,uVar6);
      UIView::addSubview_(IVar1,"addSubview:",IVar2);
      IVar3 = UILabel::new((ID)&_OBJC_CLASS___UILabel,"new");
      UILabel::setTranslatesAutoresizingMaskIntoConstraints_
                (IVar3,"setTranslatesAutoresizingMaskIntoConstraints:",0);
      UILabel::setText_(IVar3,"setText:",&cf_DLInsta);
      IVar4 = UIFont::systemFontOfSize_weight_
                        ((ID)&_OBJC_CLASS___UIFont,"systemFontOfSize:weight:",0x4024000000000000,
                         *(undefined8 *)PTR__UIFontWeightSemibold_000e80c8);
      UILabel::setFont_(IVar3,"setFont:",IVar4);
      IVar4 = UIColor::blackColor((ID)&_OBJC_CLASS___UIColor,"blackColor");
      IVar4 = _objc_retainAutorelease(IVar4);
      IVar4 = _objc_msgSend(IVar4,"CGColor");
      IVar5 = UILabel::layer(IVar3,"layer");
      UILabel::setShadowColor_(IVar5,"setShadowColor:",IVar4);
      IVar4 = UILabel::layer(IVar3,"layer");
      UILabel::setShadowOpacity_(IVar4,"setShadowOpacity:",0x3f19999a);
      IVar4 = UILabel::layer(IVar3,"layer");
      UILabel::setShadowOffset_(IVar4,"setShadowOffset:",0,0);
      IVar4 = UILabel::layer(IVar3,"layer");
      UILabel::setShadowRadius_(IVar4,"setShadowRadius:",0x4010000000000000);
      UIView::addSubview_(IVar1,"addSubview:",IVar3);
      IVar4 = UIView::topAnchor(IVar1,"topAnchor");
      IVar5 = _objc_msgSend(param_1,"topAnchor");
      local_c0 = UIView::constraintEqualToAnchor_constant_
                           (IVar4,"constraintEqualToAnchor:constant:",0xc050c00000000000,IVar5);
      IVar4 = UIView::centerXAnchor(IVar1,"centerXAnchor");
      IVar5 = _objc_msgSend(param_1,"centerXAnchor");
      local_b8 = UIView::constraintEqualToAnchor_(IVar4,"constraintEqualToAnchor:",IVar5);
      IVar4 = UIView::widthAnchor(IVar1,"widthAnchor");
      local_b0 = UIView::constraintEqualToConstant_
                           (IVar4,"constraintEqualToConstant:",0x4046000000000000);
      IVar4 = UIView::heightAnchor(IVar1,"heightAnchor");
      local_a8 = UIView::constraintEqualToConstant_
                           (IVar4,"constraintEqualToConstant:",0x4050c00000000000);
      IVar4 = _objc_msgSend(IVar2,"topAnchor");
      UIView::topAnchor(IVar1,"topAnchor");
      local_a0 = _objc_msgSend(IVar4,"constraintEqualToAnchor:");
      IVar4 = _objc_msgSend(IVar2,"centerXAnchor");
      UIView::centerXAnchor(IVar1,"centerXAnchor");
      local_98 = _objc_msgSend(IVar4,"constraintEqualToAnchor:");
      IVar4 = _objc_msgSend(IVar2,"widthAnchor");
      local_90 = _objc_msgSend(IVar4,"constraintEqualToConstant:",0x4046000000000000);
      IVar4 = _objc_msgSend(IVar2,"heightAnchor");
      local_88 = _objc_msgSend(IVar4,"constraintEqualToConstant:",0x4046000000000000);
      IVar4 = UILabel::topAnchor(IVar3,"topAnchor");
      IVar2 = _objc_msgSend(IVar2,"bottomAnchor");
      local_80 = UILabel::constraintEqualToAnchor_(IVar4,"constraintEqualToAnchor:",IVar2);
      IVar2 = UILabel::centerXAnchor(IVar3,"centerXAnchor");
      IVar1 = UIView::centerXAnchor(IVar1,"centerXAnchor");
      local_78 = UILabel::constraintEqualToAnchor_(IVar2,"constraintEqualToAnchor:",IVar1);
      IVar1 = NSArray::arrayWithObjects_count_
                        ((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:count:",&local_c0,10);
      NSLayoutConstraint::activateConstraints_
                ((ID)&_OBJC_CLASS___NSLayoutConstraint,"activateConstraints:",IVar1);
    }
  }
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}

