/* Address: 0000b850 | Name: FUN_0000b850 | Body bytes: 1564 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_0000b850(ID param_1,undefined8 param_2)

{
  int iVar1;
  code *pcVar2;
  ID IVar3;
  undefined8 uVar4;
  ID IVar5;
  ID IVar6;
  
  pcVar2 = DAT_000ff938;
  if (DAT_000ff938 == (code *)0x0) {
    pcVar2 = (code *)_class_getMethodImplementation(DAT_000ff930,"layoutSubviews");
  }
  (*pcVar2)(param_1,param_2);
  IVar3 = NSUserDefaults::standardUserDefaults
                    ((ID)&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
  IVar3 = NSUserDefaults::boolForKey_(IVar3,"boolForKey:",&cf_DL_FollowStatus);
  if ((IVar3 & 1) != 0) {
    uVar4 = FUN_00097ef8();
    uVar4 = FUN_00097a54(uVar4);
    IVar3 = _objc_msgSend(DAT_001006a8,"length");
    IVar3 = FUN_00097c68(uVar4,IVar3);
    IVar3 = _objc_msgSend(IVar3,"isEqualToString:",DAT_001006a8);
    if ((int)IVar3 == 0) {
      return 0;
    }
    IVar3 = DLHelper::class_DLHelper__findViewController_
                      ((ID)&objc::class_t::DLHelper,"findViewController:",param_1);
    if (DAT_000ffb10 == 0) {
      DAT_000ffb10 = _objc_getClass("IGProfileViewController");
    }
    uVar4 = _objc_retainAutorelease();
    IVar5 = _objc_msgSend(IVar3,"isMemberOfClass:",uVar4);
    if ((int)IVar5 != 0) {
      IVar5 = _objc_msgSend(IVar3,"user");
      IVar3 = _objc_msgSend(IVar3,"analyticsModule");
      IVar3 = _objc_msgSend(IVar3,"isEqualToString:",&cf_profile);
      if ((int)IVar3 != 0) {
        iVar1 = FUN_0008ce2c(param_1,"_followersButton");
        if (iVar1 == 0) {
          iVar1 = FUN_0008ce2c(param_1,"_identityCell");
          if ((iVar1 != 0) &&
             (IVar3 = _objc_msgSend(param_1,"valueForKey:",&cf__identityCell), IVar3 != 0)) {
            IVar6 = _objc_msgSend(param_1,"followStatusLabel");
            IVar6 = _objc_msgSend(IVar6,"superview");
            if (IVar6 == 0) {
              _objc_msgSend(param_1,"setupFollowStatusLabelInView:bottomConstant:center:",
                            0xc010000000000000,IVar3,0);
            }
          }
        }
        else {
          IVar3 = _objc_msgSend(param_1,"valueForKey:",&cf__followersButton);
          IVar6 = _objc_msgSend(param_1,"followStatusLabel");
          IVar6 = _objc_msgSend(IVar6,"superview");
          if (IVar6 == 0) {
            _objc_msgSend(param_1,"setupFollowStatusLabelInView:bottomConstant:center:",
                          0xc020000000000000,IVar3,1);
          }
        }
      }
      IVar3 = _objc_msgSend(IVar5,"followsCurrentUser");
      if ((IVar3 & 1) == 0) {
        IVar3 = _objc_msgSend(IVar5,"followStatus");
        if (IVar3 == 2) {
          uVar4 = FUN_0008c218(&cf_YOU_DONT_FOLLOW_EACH_OTHER);
          IVar3 = _objc_msgSend(param_1,"followStatusLabel");
          _objc_msgSend(IVar3,"setText:",uVar4);
        }
        else {
          IVar3 = _objc_msgSend(IVar5,"followStatus");
          if (IVar3 == 3) {
            uVar4 = FUN_0008c218(&cf_IS_NOT_FOLLOWING_YOU);
            IVar3 = _objc_msgSend(param_1,"followStatusLabel");
            _objc_msgSend(IVar3,"setText:",uVar4);
          }
        }
        IVar3 = UIColor::colorWithRed_green_blue_alpha_
                          ((ID)&_OBJC_CLASS___UIColor,"colorWithRed:green:blue:alpha:",
                           0x3ff0000000000000,0x3fc1111111111111,0x3fd4545454545454,
                           0x3ff0000000000000);
      }
      else {
        IVar3 = _objc_msgSend(IVar5,"followStatus");
        if (IVar3 == 3) {
          uVar4 = FUN_0008c218(&cf_YOU_FOLLOW_EACH_OTHER);
          IVar3 = _objc_msgSend(param_1,"followStatusLabel");
          _objc_msgSend(IVar3,"setText:",uVar4);
        }
        else {
          IVar3 = _objc_msgSend(IVar5,"followStatus");
          if (IVar3 == 2) {
            uVar4 = FUN_0008c218(&cf_IS_FOLLOWING_YOU);
            IVar3 = _objc_msgSend(param_1,"followStatusLabel");
            _objc_msgSend(IVar3,"setText:",uVar4);
          }
        }
        IVar3 = _objc_msgSend(IVar5,"followStatus");
        if (IVar3 == 2) {
          IVar3 = UIColor::colorWithRed_green_blue_alpha_
                            ((ID)&_OBJC_CLASS___UIColor,"colorWithRed:green:blue:alpha:",
                             0x3fd2d2d2d2d2d2d3,0x3fe999999999999a,0x3fbd1d1d1d1d1d1d,
                             0x3ff0000000000000);
          IVar5 = _objc_msgSend(param_1,"followStatusLabel");
          _objc_msgSend(IVar5,"setTextColor:",IVar3);
          return 0;
        }
        IVar3 = UIColor::grayColor((ID)&_OBJC_CLASS___UIColor,"grayColor");
      }
      IVar5 = _objc_msgSend(param_1,"followStatusLabel");
      _objc_msgSend(IVar5,"setTextColor:",IVar3);
    }
  }
  return 0;
}

