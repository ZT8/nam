/* Address: 0007d878 | Name: FUN_0007d878 | Body bytes: 2504 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_0007d878(int param_1,ID param_2)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  ID IVar7;
  undefined4 uVar8;
  
  IVar2 = _objc_msgSend(param_2,"count");
  if (IVar2 != 0) {
    IVar2 = _objc_msgSend(param_2,"mutableCopy");
    IVar3 = FUN_0008c218(&cf_DEVELOPER_SECTITLE);
    IVar3 = FRPSection::class_FRPSection__sectionWithTitle_footer_
                      ((ID)&objc::class_t::FRPSection,"sectionWithTitle:footer:",IVar3,0);
    IVar4 = DLHelper::class_DLHelper__imageIcon_((ID)&objc::class_t::DLHelper,"imageIcon:",0xec268);
    bVar1 = DLHelper::class_DLHelper__isDarkMode((ID)&objc::class_t::DLHelper,"isDarkMode");
    if ((bVar1 & 1) == 0) {
      IVar5 = UIColor::blackColor((ID)&_OBJC_CLASS___UIColor,"blackColor");
    }
    else {
      IVar5 = UIColor::colorWithRed_green_blue_alpha_
                        ((ID)&_OBJC_CLASS___UIColor,"colorWithRed:green:blue:alpha:",
                         0x3fef5c28f5c28f5c,0x3fef5c28f5c28f5c,0x3fef5c28f5c28f5c,0x3ff0000000000000
                        );
    }
    IVar4 = DLHelper::class_DLHelper__image_color_
                      ((ID)&objc::class_t::DLHelper,"image:color:",IVar4,IVar5);
    IVar5 = FUN_0008c218(&cf_DEVELOPER_NAME);
    IVar6 = _objc_msgSend(0xec2c8,"stringByAppendingString:",&cf_peaceful_0);
    bVar1 = DLHelper::class_DLHelper__isDarkMode((ID)&objc::class_t::DLHelper,"isDarkMode");
    IVar5 = DLHelper::class_DLHelper__cellWithTitle_detail_image_url_statusMode_
                      ((ID)&objc::class_t::DLHelper,"cellWithTitle:detail:image:url:statusMode:",
                       IVar5,0xec2a8,IVar4,IVar6,(ulong)bVar1);
    FRPSection::instance_FRPSection__addCell_(IVar3,"addCell:",IVar5);
    IVar5 = FUN_0008c218(&cf_DEVELOPER_SUPPORT_ACCOUNT);
    IVar6 = _objc_msgSend(0xec2c8,"stringByAppendingString:",&cf_DLTweaks_);
    bVar1 = DLHelper::class_DLHelper__isDarkMode((ID)&objc::class_t::DLHelper,"isDarkMode");
    IVar5 = DLHelper::class_DLHelper__cellWithTitle_detail_image_url_statusMode_
                      ((ID)&objc::class_t::DLHelper,"cellWithTitle:detail:image:url:statusMode:",
                       IVar5,0xec328,IVar4,IVar6,(ulong)bVar1);
    FRPSection::instance_FRPSection__addCell_(IVar3,"addCell:",IVar5);
    if (param_1 != 0) {
      IVar5 = FUN_0008c218(&cf_DONATE);
      bVar1 = DLHelper::class_DLHelper__isDarkMode((ID)&objc::class_t::DLHelper,"isDarkMode");
      IVar5 = DLHelper::class_DLHelper__cellWithTitle_detail_image_url_statusMode_
                        ((ID)&objc::class_t::DLHelper,"cellWithTitle:detail:image:url:statusMode:",
                         IVar5,0xec388,0,0xec3a8,(ulong)bVar1);
      FRPSection::instance_FRPSection__addCell_(IVar3,"addCell:",IVar5);
    }
    IVar5 = FUN_0008c218(&cf_THANKS_SECTITLE);
    IVar5 = FRPSection::class_FRPSection__sectionWithTitle_footer_
                      ((ID)&objc::class_t::FRPSection,"sectionWithTitle:footer:",IVar5,0xec3e8);
    IVar6 = FUN_0008c218(&cf_THANKS_FOUADRAHEB);
    IVar7 = _objc_msgSend(0xec2c8,"stringByAppendingString:",&cf_FouadRaheb);
    bVar1 = DLHelper::class_DLHelper__isDarkMode((ID)&objc::class_t::DLHelper,"isDarkMode");
    IVar4 = DLHelper::class_DLHelper__cellWithTitle_detail_image_url_statusMode_
                      ((ID)&objc::class_t::DLHelper,"cellWithTitle:detail:image:url:statusMode:",
                       IVar6,0xec428,IVar4,IVar7,(ulong)bVar1);
    uVar8 = (undefined4)IVar7;
    FRPSection::instance_FRPSection__addCell_(IVar5,"addCell:",IVar4);
    IVar4 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle,"mainBundle");
    IVar4 = NSBundle::infoDictionary(IVar4,"infoDictionary");
    NSBundle::objectForKey_(IVar4,"objectForKey:",&cf_CFBundleShortVersionString);
    IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_v_____);
    IVar4 = FRPSection::class_FRPSection__sectionWithTitle_footer_
                      ((ID)&objc::class_t::FRPSection,"sectionWithTitle:footer:",0xec3e8,IVar4);
    _objc_msgSend(IVar2,"addObject:",IVar3);
    _objc_msgSend(IVar2,"addObject:",IVar5);
    _objc_msgSend(IVar2,"addObject:",IVar4);
    IVar3 = UIColor::colorWithRed_green_blue_alpha_
                      ((ID)&_OBJC_CLASS___UIColor,"colorWithRed:green:blue:alpha:",0,
                       0x3fe2b020c49ba5e3,0x3feee147ae147ae1,0x3ff0000000000000);
    IVar2 = FRPreferences::class_FRPreferences__tableWithSections_title_tintColor_
                      ((ID)&objc::class_t::FRPreferences,"tableWithSections:title:tintColor:",IVar2,
                       0xec3e8,IVar3);
    IVar3 = _objc_msgSend(IVar2,"tableView");
    DLHelper::class_DLHelper__switchToRTL_((ID)&objc::class_t::DLHelper,"switchToRTL:",IVar3);
    bVar1 = DLHelper::class_DLHelper__isDarkMode((ID)&objc::class_t::DLHelper,"isDarkMode");
    if ((bVar1 & 1) == 0) {
      IVar3 = UIColor::whiteColor((ID)&_OBJC_CLASS___UIColor,"whiteColor");
    }
    else {
      IVar3 = UIColor::colorWithRed_green_blue_alpha_
                        ((ID)&_OBJC_CLASS___UIColor,"colorWithRed:green:blue:alpha:",
                         0x3fa6161616161616,0x3fae1e1e1e1e1e1e,0x3fb4141414141414,0x3ff0000000000000
                        );
    }
    IVar4 = _objc_msgSend(IVar2,"tableView");
    _objc_msgSend(IVar4,"setBackgroundColor:",IVar3);
    IVar3 = UIColor::clearColor((ID)&_OBJC_CLASS___UIColor,"clearColor");
    IVar4 = _objc_msgSend(IVar2,"tableView");
    _objc_msgSend(IVar4,"setSeparatorColor:",IVar3);
    IVar3 = DLHelper::class_DLHelper__imageIcon_((ID)&objc::class_t::DLHelper,"imageIcon:",0xec4a8);
    IVar4 = _objc_alloc(&_OBJC_CLASS___UIImageView);
    IVar3 = UIImageView::initWithImage_(IVar4,"initWithImage:",IVar3);
    UIImageView::setFrame_(IVar3,"setFrame:",0,0,0x403d000000000000,0x403d000000000000);
    UIImageView::setContentMode_(IVar3,"setContentMode:",1);
    IVar4 = _objc_msgSend(IVar2,"navigationItem");
    _objc_msgSend(IVar4,"setTitleView:",IVar3);
    IVar3 = _objc_alloc(&objc::class_t::DLBarButtonItem);
    IVar4 = FUN_0008c218(&cf_ACTION_DISMISS);
    IVar3 = DLBarButtonItem::instance_DLBarButtonItem__initWithTitle_style_action_
                      (IVar3,"initWithTitle:style:action:",IVar4,0,0xe8cf8,uVar8);
    bVar1 = DLHelper::class_DLHelper__isDarkMode((ID)&objc::class_t::DLHelper,"isDarkMode");
    if ((bVar1 & 1) == 0) {
      IVar4 = UIColor::blackColor((ID)&_OBJC_CLASS___UIColor,"blackColor");
    }
    else {
      IVar4 = UIColor::colorWithRed_green_blue_alpha_
                        ((ID)&_OBJC_CLASS___UIColor,"colorWithRed:green:blue:alpha:",
                         0x3fef5c28f5c28f5c,0x3fef5c28f5c28f5c,0x3fef5c28f5c28f5c,0x3ff0000000000000
                        );
    }
    _objc_msgSend(IVar3,"setTintColor:",IVar4);
    bVar1 = DLHelper::class_DLHelper__isDeviceLanguageArabic
                      ((ID)&objc::class_t::DLHelper,"isDeviceLanguageArabic");
    if (bVar1 == 0) {
      IVar4 = _objc_msgSend(IVar2,"navigationItem");
      _objc_msgSend(IVar4,"setLeftBarButtonItem:",IVar3);
    }
    else {
      IVar4 = _objc_msgSend(IVar2,"navigationItem");
      _objc_msgSend(IVar4,"setRightBarButtonItem:",IVar3);
    }
    IVar3 = _objc_alloc(&_OBJC_CLASS___UINavigationController);
    IVar2 = UINavigationController::initWithRootViewController_
                      (IVar3,"initWithRootViewController:",IVar2);
    UINavigationController::setModalPresentationStyle_(IVar2,"setModalPresentationStyle:",0);
    IVar3 = DLHelper::class_DLHelper__topMostController
                      ((ID)&objc::class_t::DLHelper,"topMostController");
    _objc_msgSend(IVar3,"presentViewController:animated:completion:",IVar2,1,0);
  }
  return 0;
}

