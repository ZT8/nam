/* Address: 00073104 | Name: FUN_00073104 | Body bytes: 2808 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_00073104(ID param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  ID IVar7;
  ID IVar8;
  undefined4 uVar9;
  undefined *local_118;
  undefined8 local_110;
  code *local_108;
  undefined *puStack_100;
  ID local_f8;
  undefined8 uStack_f0;
  undefined *local_e8;
  undefined8 local_e0;
  code *local_d8;
  undefined *puStack_d0;
  undefined **local_c8;
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
  pcVar2 = DAT_000fff90;
  if (DAT_000fff90 == (code *)0x0) {
    pcVar2 = (code *)_class_getMethodImplementation(DAT_000fff88,"didMoveToWindow");
  }
  (*pcVar2)(param_1,param_2);
  lVar3 = _objc_getAssociatedObject(param_1,DAT_000ff200);
  if (lVar3 == 0) {
    local_118 = PTR___NSConcreteStackBlock_000e80d8;
    local_110 = 0xc0000000;
    local_108 = FUN_0007944c;
    puStack_100 = &DAT_000e87b8;
    local_f8 = param_1;
    uStack_f0 = param_2;
    if (param_1 != 0) {
      IVar4 = _objc_msgSend(param_1,"superview");
      if (IVar4 != 0) {
        IVar4 = UIView::new((ID)&_OBJC_CLASS___UIView,"new");
        UIView::setTranslatesAutoresizingMaskIntoConstraints_
                  (IVar4,"setTranslatesAutoresizingMaskIntoConstraints:",0);
        _objc_msgSend(param_1,"addSubview:",IVar4);
        IVar5 = _objc_msgSend((ID)&objc::class_t::DLButton,"buttonWithType:",0);
        _objc_msgSend(IVar5,"setTranslatesAutoresizingMaskIntoConstraints:",0);
        IVar6 = DLHelper::class_DLHelper__imageIcon_
                          ((ID)&objc::class_t::DLHelper,"imageIcon:",0xebec8);
        IVar6 = _objc_msgSend(IVar6,"imageWithRenderingMode:",2);
        uVar9 = 0;
        _objc_msgSend(IVar5,"setImage:forState:",IVar6);
        IVar6 = UIColor::whiteColor((ID)&_OBJC_CLASS___UIColor,"whiteColor");
        _objc_msgSend(IVar5,"setTintColor:",IVar6);
        IVar6 = _objc_msgSend(IVar5,"imageView");
        if (IVar6 != 0) {
          IVar6 = UIColor::blackColor((ID)&_OBJC_CLASS___UIColor,"blackColor");
          IVar6 = _objc_retainAutorelease(IVar6);
          IVar6 = _objc_msgSend(IVar6,"CGColor");
          IVar7 = _objc_msgSend(IVar5,"imageView");
          IVar7 = _objc_msgSend(IVar7,"layer");
          _objc_msgSend(IVar7,"setShadowColor:",IVar6);
        }
        IVar6 = _objc_msgSend(IVar5,"imageView");
        IVar6 = _objc_msgSend(IVar6,"layer");
        _objc_msgSend(IVar6,"setShadowOpacity:",0x3e99999a);
        IVar6 = _objc_msgSend(IVar5,"imageView");
        IVar6 = _objc_msgSend(IVar6,"layer");
        _objc_msgSend(IVar6,"setShadowOffset:",0,0);
        IVar6 = _objc_msgSend(IVar5,"imageView");
        IVar6 = _objc_msgSend(IVar6,"layer");
        _objc_msgSend(IVar6,"setShadowRadius:",0x4000000000000000);
        _objc_msgSend(IVar5,"setImageEdgeInsets:",0x4010000000000000,0x4010000000000000,
                      0x4010000000000000,0x4010000000000000);
        local_e8 = PTR___NSConcreteStackBlock_000e80d8;
        local_e0 = 0xc2000000;
        local_d8 = FUN_00060728;
        puStack_d0 = &DAT_000e8bc8;
        local_c8 = &local_118;
        DLButton::instance_DLButton__actionHandler_(IVar5,"actionHandler:",(ID)&local_e8,uVar9);
        UIView::addSubview_(IVar4,"addSubview:",IVar5);
        IVar6 = UILabel::new((ID)&_OBJC_CLASS___UILabel,"new");
        UILabel::setTranslatesAutoresizingMaskIntoConstraints_
                  (IVar6,"setTranslatesAutoresizingMaskIntoConstraints:",0);
        UILabel::setText_(IVar6,"setText:",&cf_DLInsta);
        IVar7 = UIFont::systemFontOfSize_weight_
                          ((ID)&_OBJC_CLASS___UIFont,"systemFontOfSize:weight:",0x4024000000000000,
                           *(undefined8 *)PTR__UIFontWeightSemibold_000e80c8);
        UILabel::setFont_(IVar6,"setFont:",IVar7);
        IVar7 = UIColor::blackColor((ID)&_OBJC_CLASS___UIColor,"blackColor");
        IVar7 = _objc_retainAutorelease(IVar7);
        IVar7 = _objc_msgSend(IVar7,"CGColor");
        IVar8 = UILabel::layer(IVar6,"layer");
        UILabel::setShadowColor_(IVar8,"setShadowColor:",IVar7);
        IVar7 = UILabel::layer(IVar6,"layer");
        UILabel::setShadowOpacity_(IVar7,"setShadowOpacity:",0x3f19999a);
        IVar7 = UILabel::layer(IVar6,"layer");
        UILabel::setShadowOffset_(IVar7,"setShadowOffset:",0,0);
        IVar7 = UILabel::layer(IVar6,"layer");
        UILabel::setShadowRadius_(IVar7,"setShadowRadius:",0x4010000000000000);
        UIView::addSubview_(IVar4,"addSubview:",IVar6);
        IVar7 = UIView::topAnchor(IVar4,"topAnchor");
        IVar8 = _objc_msgSend(param_1,"topAnchor");
        local_c0 = UIView::constraintEqualToAnchor_constant_
                             (IVar7,"constraintEqualToAnchor:constant:",0xc050c00000000000,IVar8);
        IVar7 = UIView::centerXAnchor(IVar4,"centerXAnchor");
        IVar8 = _objc_msgSend(param_1,"centerXAnchor");
        local_b8 = UIView::constraintEqualToAnchor_(IVar7,"constraintEqualToAnchor:",IVar8);
        IVar7 = UIView::widthAnchor(IVar4,"widthAnchor");
        local_b0 = UIView::constraintEqualToConstant_
                             (IVar7,"constraintEqualToConstant:",0x4046000000000000);
        IVar7 = UIView::heightAnchor(IVar4,"heightAnchor");
        local_a8 = UIView::constraintEqualToConstant_
                             (IVar7,"constraintEqualToConstant:",0x4050c00000000000);
        IVar7 = _objc_msgSend(IVar5,"topAnchor");
        UIView::topAnchor(IVar4,"topAnchor");
        local_a0 = _objc_msgSend(IVar7,"constraintEqualToAnchor:");
        IVar7 = _objc_msgSend(IVar5,"centerXAnchor");
        UIView::centerXAnchor(IVar4,"centerXAnchor");
        local_98 = _objc_msgSend(IVar7,"constraintEqualToAnchor:");
        IVar7 = _objc_msgSend(IVar5,"widthAnchor");
        local_90 = _objc_msgSend(IVar7,"constraintEqualToConstant:",0x4046000000000000);
        IVar7 = _objc_msgSend(IVar5,"heightAnchor");
        local_88 = _objc_msgSend(IVar7,"constraintEqualToConstant:",0x4046000000000000);
        IVar7 = UILabel::topAnchor(IVar6,"topAnchor");
        IVar5 = _objc_msgSend(IVar5,"bottomAnchor");
        local_80 = UILabel::constraintEqualToAnchor_(IVar7,"constraintEqualToAnchor:",IVar5);
        IVar5 = UILabel::centerXAnchor(IVar6,"centerXAnchor");
        IVar4 = UIView::centerXAnchor(IVar4,"centerXAnchor");
        local_78 = UILabel::constraintEqualToAnchor_(IVar5,"constraintEqualToAnchor:",IVar4);
        IVar4 = NSArray::arrayWithObjects_count_
                          ((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:count:",&local_c0,10);
        NSLayoutConstraint::activateConstraints_
                  ((ID)&_OBJC_CLASS___NSLayoutConstraint,"activateConstraints:",IVar4);
      }
    }
    uVar1 = DAT_000ff200;
    IVar4 = NSNumber::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,"numberWithBool:",1);
    _objc_setAssociatedObject(param_1,uVar1,IVar4,1);
  }
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}

