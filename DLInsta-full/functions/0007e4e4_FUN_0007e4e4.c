/* Address: 0007e4e4 | Name: FUN_0007e4e4 | Body bytes: 12180 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_0007e4e4(void)

{
  bool bVar1;
  ID IVar2;
  undefined8 uVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  ID IVar7;
  ID IVar8;
  ID IVar9;
  ID IVar10;
  ID IVar11;
  ID IVar12;
  ID IVar13;
  ID IVar14;
  ID IVar15;
  ID IVar16;
  undefined4 uVar17;
  ID in_x5;
  undefined4 in_w6;
  undefined *local_178;
  undefined8 local_170;
  code *local_168;
  undefined *puStack_160;
  ID local_158;
  ID local_150;
  undefined8 *local_148;
  undefined8 local_140;
  undefined8 *local_138;
  undefined8 local_130;
  code *local_128;
  code *pcStack_120;
  undefined8 local_118;
  ID local_110;
  ID local_108;
  ID IStack_100;
  ID local_f8;
  ID IStack_f0;
  ID local_e8;
  ID IStack_e0;
  ID local_d8;
  ID IStack_d0;
  ID local_c8;
  ID IStack_c0;
  ID local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *pcStack_a8;
  cfstringStruct *local_a0;
  cfstringStruct *pcStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_000e8260;
  IVar2 = FRPViewSection::class_FRPViewSection__sectionWithHeight_initBlock_layoutBlock_
                    ((ID)&objc::class_t::FRPViewSection,"sectionWithHeight:initBlock:layoutBlock:",
                     0x50,0xe8d58,0xe8d98,in_x5,in_w6);
  uVar3 = FUN_00097ef8();
  uVar3 = FUN_00097a54(uVar3);
  IVar4 = _objc_msgSend(DAT_001006a8,"length");
  IVar4 = FUN_00097c68(uVar3,IVar4);
  IVar4 = _objc_msgSend(IVar4,"isEqualToString:",DAT_001006a8);
  if ((int)IVar4 == 0) {
    local_110 = IVar2;
    IVar2 = NSArray::arrayWithObjects_count_
                      ((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:count:",&local_110,1);
    IVar4 = NSArray::count(IVar2,"count");
    if (IVar4 != 0) {
      IVar2 = NSArray::mutableCopy(IVar2,"mutableCopy");
      IVar4 = FUN_0008c218(&cf_DEVELOPER_SECTITLE);
      IVar4 = FRPSection::class_FRPSection__sectionWithTitle_footer_
                        ((ID)&objc::class_t::FRPSection,"sectionWithTitle:footer:",IVar4,0);
      IVar5 = DLHelper::class_DLHelper__imageIcon_
                        ((ID)&objc::class_t::DLHelper,"imageIcon:",0xec268);
      bVar1 = DLHelper::class_DLHelper__isDarkMode((ID)&objc::class_t::DLHelper,"isDarkMode");
      if ((bVar1 & 1) == 0) {
        IVar6 = UIColor::blackColor((ID)&_OBJC_CLASS___UIColor,"blackColor");
      }
      else {
        IVar6 = UIColor::colorWithRed_green_blue_alpha_
                          ((ID)&_OBJC_CLASS___UIColor,"colorWithRed:green:blue:alpha:",
                           0x3fef5c28f5c28f5c,0x3fef5c28f5c28f5c,0x3fef5c28f5c28f5c,
                           0x3ff0000000000000);
      }
      IVar5 = DLHelper::class_DLHelper__image_color_
                        ((ID)&objc::class_t::DLHelper,"image:color:",IVar5,IVar6);
      IVar6 = FUN_0008c218(&cf_DEVELOPER_NAME);
      IVar7 = _objc_msgSend(0xec2c8,"stringByAppendingString:",&cf_peaceful_0);
      bVar1 = DLHelper::class_DLHelper__isDarkMode((ID)&objc::class_t::DLHelper,"isDarkMode");
      IVar6 = DLHelper::class_DLHelper__cellWithTitle_detail_image_url_statusMode_
                        ((ID)&objc::class_t::DLHelper,"cellWithTitle:detail:image:url:statusMode:",
                         IVar6,0xec2a8,IVar5,IVar7,(ulong)bVar1);
      FRPSection::instance_FRPSection__addCell_(IVar4,"addCell:",IVar6);
      IVar6 = FUN_0008c218(&cf_DEVELOPER_SUPPORT_ACCOUNT);
      IVar7 = _objc_msgSend(0xec2c8,"stringByAppendingString:",&cf_DLTweaks_);
      bVar1 = DLHelper::class_DLHelper__isDarkMode((ID)&objc::class_t::DLHelper,"isDarkMode");
      IVar6 = DLHelper::class_DLHelper__cellWithTitle_detail_image_url_statusMode_
                        ((ID)&objc::class_t::DLHelper,"cellWithTitle:detail:image:url:statusMode:",
                         IVar6,0xec328,IVar5,IVar7,(ulong)bVar1);
      FRPSection::instance_FRPSection__addCell_(IVar4,"addCell:",IVar6);
      IVar6 = FUN_0008c218(&cf_THANKS_SECTITLE);
      IVar6 = FRPSection::class_FRPSection__sectionWithTitle_footer_
                        ((ID)&objc::class_t::FRPSection,"sectionWithTitle:footer:",IVar6,0xec3e8);
      IVar7 = FUN_0008c218(&cf_THANKS_FOUADRAHEB);
      IVar8 = _objc_msgSend(0xec2c8,"stringByAppendingString:",&cf_FouadRaheb);
      bVar1 = DLHelper::class_DLHelper__isDarkMode((ID)&objc::class_t::DLHelper,"isDarkMode");
      IVar5 = DLHelper::class_DLHelper__cellWithTitle_detail_image_url_statusMode_
                        ((ID)&objc::class_t::DLHelper,"cellWithTitle:detail:image:url:statusMode:",
                         IVar7,0xec428,IVar5,IVar8,(ulong)bVar1);
      uVar17 = (undefined4)IVar8;
      FRPSection::instance_FRPSection__addCell_(IVar6,"addCell:",IVar5);
      IVar5 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle,"mainBundle");
      IVar5 = NSBundle::infoDictionary(IVar5,"infoDictionary");
      NSBundle::objectForKey_(IVar5,"objectForKey:",&cf_CFBundleShortVersionString);
      IVar5 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_v_____);
      IVar5 = FRPSection::class_FRPSection__sectionWithTitle_footer_
                        ((ID)&objc::class_t::FRPSection,"sectionWithTitle:footer:",0xec3e8,IVar5);
      NSArray::addObject_(IVar2,"addObject:",IVar4);
      NSArray::addObject_(IVar2,"addObject:",IVar6);
      NSArray::addObject_(IVar2,"addObject:",IVar5);
      IVar4 = UIColor::colorWithRed_green_blue_alpha_
                        ((ID)&_OBJC_CLASS___UIColor,"colorWithRed:green:blue:alpha:",0,
                         0x3fe2b020c49ba5e3,0x3feee147ae147ae1,0x3ff0000000000000);
      IVar2 = FRPreferences::class_FRPreferences__tableWithSections_title_tintColor_
                        ((ID)&objc::class_t::FRPreferences,"tableWithSections:title:tintColor:",
                         IVar2,0xec3e8,IVar4);
      IVar4 = _objc_msgSend(IVar2,"tableView");
      DLHelper::class_DLHelper__switchToRTL_((ID)&objc::class_t::DLHelper,"switchToRTL:",IVar4);
      bVar1 = DLHelper::class_DLHelper__isDarkMode((ID)&objc::class_t::DLHelper,"isDarkMode");
      if ((bVar1 & 1) == 0) {
        IVar4 = UIColor::whiteColor((ID)&_OBJC_CLASS___UIColor,"whiteColor");
      }
      else {
        IVar4 = UIColor::colorWithRed_green_blue_alpha_
                          ((ID)&_OBJC_CLASS___UIColor,"colorWithRed:green:blue:alpha:",
                           0x3fa6161616161616,0x3fae1e1e1e1e1e1e,0x3fb4141414141414,
                           0x3ff0000000000000);
      }
      IVar5 = _objc_msgSend(IVar2,"tableView");
      _objc_msgSend(IVar5,"setBackgroundColor:",IVar4);
      IVar4 = UIColor::clearColor((ID)&_OBJC_CLASS___UIColor,"clearColor");
      IVar5 = _objc_msgSend(IVar2,"tableView");
      _objc_msgSend(IVar5,"setSeparatorColor:",IVar4);
      IVar4 = DLHelper::class_DLHelper__imageIcon_
                        ((ID)&objc::class_t::DLHelper,"imageIcon:",0xec4a8);
      IVar5 = _objc_alloc(&_OBJC_CLASS___UIImageView);
      IVar4 = UIImageView::initWithImage_(IVar5,"initWithImage:",IVar4);
      UIImageView::setFrame_(IVar4,"setFrame:",0,0,0x403d000000000000,0x403d000000000000);
      UIImageView::setContentMode_(IVar4,"setContentMode:",1);
      IVar5 = _objc_msgSend(IVar2,"navigationItem");
      _objc_msgSend(IVar5,"setTitleView:",IVar4);
      IVar4 = _objc_alloc(&objc::class_t::DLBarButtonItem);
      IVar5 = FUN_0008c218(&cf_ACTION_DISMISS);
      IVar4 = DLBarButtonItem::instance_DLBarButtonItem__initWithTitle_style_action_
                        (IVar4,"initWithTitle:style:action:",IVar5,0,0xe8cf8,uVar17);
      bVar1 = DLHelper::class_DLHelper__isDarkMode((ID)&objc::class_t::DLHelper,"isDarkMode");
      if ((bVar1 & 1) == 0) {
        IVar5 = UIColor::blackColor((ID)&_OBJC_CLASS___UIColor,"blackColor");
      }
      else {
        IVar5 = UIColor::colorWithRed_green_blue_alpha_
                          ((ID)&_OBJC_CLASS___UIColor,"colorWithRed:green:blue:alpha:",
                           0x3fef5c28f5c28f5c,0x3fef5c28f5c28f5c,0x3fef5c28f5c28f5c,
                           0x3ff0000000000000);
      }
      _objc_msgSend(IVar4,"setTintColor:",IVar5);
      bVar1 = DLHelper::class_DLHelper__isDeviceLanguageArabic
                        ((ID)&objc::class_t::DLHelper,"isDeviceLanguageArabic");
      if (bVar1 == 0) {
        IVar5 = _objc_msgSend(IVar2,"navigationItem");
        _objc_msgSend(IVar5,"setLeftBarButtonItem:",IVar4);
      }
      else {
        IVar5 = _objc_msgSend(IVar2,"navigationItem");
        _objc_msgSend(IVar5,"setRightBarButtonItem:",IVar4);
      }
      IVar4 = _objc_alloc(&_OBJC_CLASS___UINavigationController);
      IVar2 = UINavigationController::initWithRootViewController_
                        (IVar4,"initWithRootViewController:",IVar2);
      UINavigationController::setModalPresentationStyle_(IVar2,"setModalPresentationStyle:",0);
      IVar4 = DLHelper::class_DLHelper__topMostController
                        ((ID)&objc::class_t::DLHelper,"topMostController");
      _objc_msgSend(IVar4,"presentViewController:animated:completion:",IVar2,1,0);
    }
    _isSettingsOpenFirstTime = 0;
  }
  else {
    IVar4 = FUN_0008c218(&cf_DOWNLOAD_SECTITLE);
    IVar4 = FRPSection::class_FRPSection__sectionWithTitle_footer_
                      ((ID)&objc::class_t::FRPSection,"sectionWithTitle:footer:",IVar4,0xec3e8);
    IVar5 = FUN_0008c218(&cf_DOWNLOAD_HIGHEST_QUALITY);
    IVar6 = NSNumber::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,"numberWithBool:",0);
    bVar1 = DLHelper::class_DLHelper__isDarkMode((ID)&objc::class_t::DLHelper,"isDarkMode");
    IVar5 = DLHelper::class_DLHelper__cellWithTitle_key_defaultValue_statusMode_
                      ((ID)&objc::class_t::DLHelper,"cellWithTitle:key:defaultValue:statusMode:",
                       IVar5,0xebc28,IVar6,(ulong)bVar1);
    FRPSection::instance_FRPSection__addCell_(IVar4,"addCell:",IVar5);
    IVar5 = FUN_0008c218(&cf_MEDIA_SECTITLE);
    IVar5 = FRPSection::class_FRPSection__sectionWithTitle_footer_
                      ((ID)&objc::class_t::FRPSection,"sectionWithTitle:footer:",IVar5,0xec3e8);
    IVar6 = FUN_0008c218(&cf_MEDIA_SHARE_MEDIA);
    IVar7 = NSNumber::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,"numberWithBool:",0);
    bVar1 = DLHelper::class_DLHelper__isDarkMode((ID)&objc::class_t::DLHelper,"isDarkMode");
    IVar6 = DLHelper::class_DLHelper__cellWithTitle_key_defaultValue_statusMode_
                      ((ID)&objc::class_t::DLHelper,"cellWithTitle:key:defaultValue:statusMode:",
                       IVar6,0xec588,IVar7,(ulong)bVar1);
    IVar7 = FUN_0008c218(&cf_MEDIA_NO_REPEAT_VIDEO);
    IVar8 = NSNumber::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,"numberWithBool:",0);
    bVar1 = DLHelper::class_DLHelper__isDarkMode((ID)&objc::class_t::DLHelper,"isDarkMode");
    IVar7 = DLHelper::class_DLHelper__cellWithTitle_key_defaultValue_statusMode_
                      ((ID)&objc::class_t::DLHelper,"cellWithTitle:key:defaultValue:statusMode:",
                       IVar7,0xe9e48,IVar8,(ulong)bVar1);
    FRPSection::instance_FRPSection__addCell_(IVar5,"addCell:",IVar6);
    FRPSection::instance_FRPSection__addCell_(IVar5,"addCell:",IVar7);
    IVar6 = FUN_0008c218(&cf_STORIES_SECTITLE);
    IVar6 = FRPSection::class_FRPSection__sectionWithTitle_footer_
                      ((ID)&objc::class_t::FRPSection,"sectionWithTitle:footer:",IVar6,0xec3e8);
    IVar7 = FUN_0008c218(&cf_STORIES_WATCH_ANONYMOUSLY);
    IVar8 = NSNumber::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,"numberWithBool:",0);
    bVar1 = DLHelper::class_DLHelper__isDarkMode((ID)&objc::class_t::DLHelper,"isDarkMode");
    IVar7 = DLHelper::class_DLHelper__cellWithTitle_key_defaultValue_statusMode_
                      ((ID)&objc::class_t::DLHelper,"cellWithTitle:key:defaultValue:statusMode:",
                       IVar7,0xe9e68,IVar8,(ulong)bVar1);
    IVar8 = FUN_0008c218(&cf_STORIES_DONT_MOVE_AUTO);
    IVar9 = NSNumber::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,"numberWithBool:",0);
    bVar1 = DLHelper::class_DLHelper__isDarkMode((ID)&objc::class_t::DLHelper,"isDarkMode");
    IVar8 = DLHelper::class_DLHelper__cellWithTitle_key_defaultValue_statusMode_
                      ((ID)&objc::class_t::DLHelper,"cellWithTitle:key:defaultValue:statusMode:",
                       IVar8,0xe9e88,IVar9,(ulong)bVar1);
    IVar9 = FUN_0008c218(&cf_STORIES_SELECT_VIDEO_FROM_STICKERS);
    IVar10 = NSNumber::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,"numberWithBool:",0);
    bVar1 = DLHelper::class_DLHelper__isDarkMode((ID)&objc::class_t::DLHelper,"isDarkMode");
    IVar9 = DLHelper::class_DLHelper__cellWithTitle_key_defaultValue_statusMode_
                      ((ID)&objc::class_t::DLHelper,"cellWithTitle:key:defaultValue:statusMode:",
                       IVar9,0xe9ea8,IVar10,(ulong)bVar1);
    IVar10 = FUN_0008c218(&cf_STORIES_SHOW_MENTIONS);
    IVar11 = NSNumber::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,"numberWithBool:",0);
    bVar1 = DLHelper::class_DLHelper__isDarkMode((ID)&objc::class_t::DLHelper,"isDarkMode");
    IVar10 = DLHelper::class_DLHelper__cellWithTitle_key_defaultValue_statusMode_
                       ((ID)&objc::class_t::DLHelper,"cellWithTitle:key:defaultValue:statusMode:",
                        IVar10,0xebe48,IVar11,(ulong)bVar1);
    FRPSection::instance_FRPSection__addCell_(IVar6,"addCell:",IVar7);
    FRPSection::instance_FRPSection__addCell_(IVar6,"addCell:",IVar8);
    FRPSection::instance_FRPSection__addCell_(IVar6,"addCell:",IVar9);
    FRPSection::instance_FRPSection__addCell_(IVar6,"addCell:",IVar10);
    IVar7 = FUN_0008c218(&cf_LIVE_SECTITLE);
    IVar7 = FRPSection::class_FRPSection__sectionWithTitle_footer_
                      ((ID)&objc::class_t::FRPSection,"sectionWithTitle:footer:",IVar7,0xec3e8);
    IVar8 = FUN_0008c218(&cf_LIVE_WATCH_ANONYMOUSLY);
    IVar9 = NSNumber::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,"numberWithBool:",0);
    bVar1 = DLHelper::class_DLHelper__isDarkMode((ID)&objc::class_t::DLHelper,"isDarkMode");
    IVar8 = DLHelper::class_DLHelper__cellWithTitle_key_defaultValue_statusMode_
                      ((ID)&objc::class_t::DLHelper,"cellWithTitle:key:defaultValue:statusMode:",
                       IVar8,0xe9ec8,IVar9,(ulong)bVar1);
    FRPSection::instance_FRPSection__addCell_(IVar7,"addCell:",IVar8);
    IVar8 = FUN_0008c218(&cf_DM_SECTITLE);
    IVar8 = FRPSection::class_FRPSection__sectionWithTitle_footer_
                      ((ID)&objc::class_t::FRPSection,"sectionWithTitle:footer:",IVar8,0xec3e8);
    IVar9 = FUN_0008c218(&cf_DM_WATCH_MESSAGES_ANONYMOSLY);
    IVar10 = NSNumber::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,"numberWithBool:",0);
    bVar1 = DLHelper::class_DLHelper__isDarkMode((ID)&objc::class_t::DLHelper,"isDarkMode");
    IVar9 = DLHelper::class_DLHelper__cellWithTitle_key_defaultValue_statusMode_
                      ((ID)&objc::class_t::DLHelper,"cellWithTitle:key:defaultValue:statusMode:",
                       IVar9,0xeb7a8,IVar10,(ulong)bVar1);
    FRPSection::instance_FRPSection__addCell_(IVar8,"addCell:",IVar9);
    IVar9 = FUN_0008c218(&cf_DM_KEEP_DELETED_MESSAGES);
    IVar10 = NSNumber::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,"numberWithBool:",0);
    bVar1 = DLHelper::class_DLHelper__isDarkMode((ID)&objc::class_t::DLHelper,"isDarkMode");
    IVar9 = DLHelper::class_DLHelper__cellWithTitle_key_defaultValue_statusMode_
                      ((ID)&objc::class_t::DLHelper,"cellWithTitle:key:defaultValue:statusMode:",
                       IVar9,0xeb868,IVar10,(ulong)bVar1);
    FRPSection::instance_FRPSection__addCell_(IVar8,"addCell:",IVar9);
    IVar9 = FUN_0008c218(&cf_DM_DISABLE_TYPING_IND);
    IVar10 = NSNumber::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,"numberWithBool:",0);
    bVar1 = DLHelper::class_DLHelper__isDarkMode((ID)&objc::class_t::DLHelper,"isDarkMode");
    IVar9 = DLHelper::class_DLHelper__cellWithTitle_key_defaultValue_statusMode_
                      ((ID)&objc::class_t::DLHelper,"cellWithTitle:key:defaultValue:statusMode:",
                       IVar9,0xeb968,IVar10,(ulong)bVar1);
    FRPSection::instance_FRPSection__addCell_(IVar8,"addCell:",IVar9);
    IVar9 = FUN_0008c218(&cf_DM_DISABLE_SCREENSHOT_NOTIFICATIONS);
    IVar10 = NSNumber::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,"numberWithBool:",0);
    bVar1 = DLHelper::class_DLHelper__isDarkMode((ID)&objc::class_t::DLHelper,"isDarkMode");
    IVar9 = DLHelper::class_DLHelper__cellWithTitle_key_defaultValue_statusMode_
                      ((ID)&objc::class_t::DLHelper,"cellWithTitle:key:defaultValue:statusMode:",
                       IVar9,0xeb988,IVar10,(ulong)bVar1);
    FRPSection::instance_FRPSection__addCell_(IVar8,"addCell:",IVar9);
    IVar9 = FUN_0008c218(&cf_DM_DISABLE_SCREENSHOT_PROTECTION);
    IVar10 = NSNumber::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,"numberWithBool:",0);
    bVar1 = DLHelper::class_DLHelper__isDarkMode((ID)&objc::class_t::DLHelper,"isDarkMode");
    IVar9 = DLHelper::class_DLHelper__cellWithTitle_key_defaultValue_statusMode_
                      ((ID)&objc::class_t::DLHelper,"cellWithTitle:key:defaultValue:statusMode:",
                       IVar9,0xeb9c8,IVar10,(ulong)bVar1);
    FRPSection::instance_FRPSection__addCell_(IVar8,"addCell:",IVar9);
    IVar9 = FUN_0008c218(&cf_DM_DISABLE_REPLAYED_MEDIA_NOTIFICATIONS);
    IVar10 = NSNumber::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,"numberWithBool:",0);
    bVar1 = DLHelper::class_DLHelper__isDarkMode((ID)&objc::class_t::DLHelper,"isDarkMode");
    IVar9 = DLHelper::class_DLHelper__cellWithTitle_key_defaultValue_statusMode_
                      ((ID)&objc::class_t::DLHelper,"cellWithTitle:key:defaultValue:statusMode:",
                       IVar9,0xeb9a8,IVar10,(ulong)bVar1);
    FRPSection::instance_FRPSection__addCell_(IVar8,"addCell:",IVar9);
    IVar9 = FUN_0008c218(&cf_DM_BYPASS_VOICE_MESSAGE_LIMIT);
    IVar10 = NSNumber::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,"numberWithBool:",0);
    bVar1 = DLHelper::class_DLHelper__isDarkMode((ID)&objc::class_t::DLHelper,"isDarkMode");
    IVar9 = DLHelper::class_DLHelper__cellWithTitle_key_defaultValue_statusMode_
                      ((ID)&objc::class_t::DLHelper,"cellWithTitle:key:defaultValue:statusMode:",
                       IVar9,0xeb9e8,IVar10,(ulong)bVar1);
    FRPSection::instance_FRPSection__addCell_(IVar8,"addCell:",IVar9);
    IVar9 = FUN_0008c218(&cf_DM_DOWNLOAD_VOICE_MESSAGES);
    IVar10 = NSNumber::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,"numberWithBool:",0);
    bVar1 = DLHelper::class_DLHelper__isDarkMode((ID)&objc::class_t::DLHelper,"isDarkMode");
    IVar9 = DLHelper::class_DLHelper__cellWithTitle_key_defaultValue_statusMode_
                      ((ID)&objc::class_t::DLHelper,"cellWithTitle:key:defaultValue:statusMode:",
                       IVar9,0xeba08,IVar10,(ulong)bVar1);
    FRPSection::instance_FRPSection__addCell_(IVar8,"addCell:",IVar9);
    uVar3 = FUN_0008c218(&cf_DM_UPLOAD_VIDEO_AUDIO_AS_VOICE_MESSAGES);
    IVar9 = NSNumber::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,"numberWithBool:",0);
    IVar9 = FRPSettings::class_FRPSettings__settingsWithKey_defaultValue_
                      ((ID)&objc::class_t::FRPSettings,"settingsWithKey:defaultValue:",0xeba88,IVar9
                      );
    IVar9 = _objc_msgSend((ID)&objc::class_t::FRPSwitchCell,
                          "cellWithTitle:setting:postNotification:changeBlock:",uVar3,IVar9,0,
                          &PTR___NSConcreteGlobalBlock_000e8dd8);
    bVar1 = DLHelper::class_DLHelper__isDarkMode((ID)&objc::class_t::DLHelper,"isDarkMode");
    if ((bVar1 & 1) == 0) {
      IVar10 = UIColor::whiteColor((ID)&_OBJC_CLASS___UIColor,"whiteColor");
    }
    else {
      IVar10 = UIColor::colorWithRed_green_blue_alpha_
                         ((ID)&_OBJC_CLASS___UIColor,"colorWithRed:green:blue:alpha:",
                          0x3fa6161616161616,0x3fae1e1e1e1e1e1e,0x3fb4141414141414,
                          0x3ff0000000000000);
    }
    _objc_msgSend(IVar9,"setBackgroundColor:",IVar10);
    bVar1 = DLHelper::class_DLHelper__isDarkMode((ID)&objc::class_t::DLHelper,"isDarkMode");
    if ((bVar1 & 1) == 0) {
      IVar10 = UIColor::blackColor((ID)&_OBJC_CLASS___UIColor,"blackColor");
    }
    else {
      IVar10 = UIColor::whiteColor((ID)&_OBJC_CLASS___UIColor,"whiteColor");
    }
    IVar11 = _objc_msgSend(IVar9,"textLabel");
    _objc_msgSend(IVar11,"setTextColor:",IVar10);
    FRPSection::instance_FRPSection__addCell_(IVar8,"addCell:",IVar9);
    IVar9 = FUN_0008c218(&cf_POPUP_SECTITLE);
    IVar9 = FRPSection::class_FRPSection__sectionWithTitle_footer_
                      ((ID)&objc::class_t::FRPSection,"sectionWithTitle:footer:",IVar9,0xec3e8);
    IVar10 = FUN_0008c218(&cf_POPUP_CONFIRM_FOLLOW_UNFOLLOW);
    IVar11 = NSNumber::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,"numberWithBool:",0);
    bVar1 = DLHelper::class_DLHelper__isDarkMode((ID)&objc::class_t::DLHelper,"isDarkMode");
    IVar10 = DLHelper::class_DLHelper__cellWithTitle_key_defaultValue_statusMode_
                       ((ID)&objc::class_t::DLHelper,"cellWithTitle:key:defaultValue:statusMode:",
                        IVar10,0xe9ee8,IVar11,(ulong)bVar1);
    IVar11 = FUN_0008c218(&cf_POPUP_CONFIRM_LIKE_UNLIKE);
    IVar12 = NSNumber::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,"numberWithBool:",0);
    bVar1 = DLHelper::class_DLHelper__isDarkMode((ID)&objc::class_t::DLHelper,"isDarkMode");
    IVar11 = DLHelper::class_DLHelper__cellWithTitle_key_defaultValue_statusMode_
                       ((ID)&objc::class_t::DLHelper,"cellWithTitle:key:defaultValue:statusMode:",
                        IVar11,0xe9f48,IVar12,(ulong)bVar1);
    FRPSection::instance_FRPSection__addCell_(IVar9,"addCell:",IVar10);
    FRPSection::instance_FRPSection__addCell_(IVar9,"addCell:",IVar11);
    IVar10 = FUN_0008c218(&cf_OTHERS_SECTITLE);
    IVar10 = FRPSection::class_FRPSection__sectionWithTitle_footer_
                       ((ID)&objc::class_t::FRPSection,"sectionWithTitle:footer:",IVar10,0xec3e8);
    IVar11 = FUN_0008c218(&cf_OTHERS_COPY_TEXT);
    IVar12 = NSNumber::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,"numberWithBool:",0);
    bVar1 = DLHelper::class_DLHelper__isDarkMode((ID)&objc::class_t::DLHelper,"isDarkMode");
    IVar11 = DLHelper::class_DLHelper__cellWithTitle_key_defaultValue_statusMode_
                       ((ID)&objc::class_t::DLHelper,"cellWithTitle:key:defaultValue:statusMode:",
                        IVar11,0xea088,IVar12,(ulong)bVar1);
    IVar12 = FUN_0008c218(&cf_OTHERS_SHOW_FOLLOWING_STATUS);
    IVar13 = NSNumber::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,"numberWithBool:",0);
    bVar1 = DLHelper::class_DLHelper__isDarkMode((ID)&objc::class_t::DLHelper,"isDarkMode");
    IVar12 = DLHelper::class_DLHelper__cellWithTitle_key_defaultValue_statusMode_
                       ((ID)&objc::class_t::DLHelper,"cellWithTitle:key:defaultValue:statusMode:",
                        IVar12,0xea1a8,IVar13,(ulong)bVar1);
    IVar13 = FUN_0008c218(&cf_OTHERS_VIEWS_LIKES_NUMBER);
    IVar14 = NSNumber::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,"numberWithBool:",0);
    bVar1 = DLHelper::class_DLHelper__isDarkMode((ID)&objc::class_t::DLHelper,"isDarkMode");
    IVar13 = DLHelper::class_DLHelper__cellWithTitle_key_defaultValue_statusMode_
                       ((ID)&objc::class_t::DLHelper,"cellWithTitle:key:defaultValue:statusMode:",
                        IVar13,0xea2a8,IVar14,(ulong)bVar1);
    IVar14 = FUN_0008c218(&cf_OTHERS_ALWAYS_SHOW_TIMER);
    IVar15 = NSNumber::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,"numberWithBool:",0);
    bVar1 = DLHelper::class_DLHelper__isDarkMode((ID)&objc::class_t::DLHelper,"isDarkMode");
    IVar14 = DLHelper::class_DLHelper__cellWithTitle_key_defaultValue_statusMode_
                       ((ID)&objc::class_t::DLHelper,"cellWithTitle:key:defaultValue:statusMode:",
                        IVar14,0xea308,IVar15,(ulong)bVar1);
    FRPSection::instance_FRPSection__addCell_(IVar10,"addCell:",IVar11);
    FRPSection::instance_FRPSection__addCell_(IVar10,"addCell:",IVar12);
    FRPSection::instance_FRPSection__addCell_(IVar10,"addCell:",IVar13);
    FRPSection::instance_FRPSection__addCell_(IVar10,"addCell:",IVar14);
    IVar11 = FUN_0008c218(&cf_BROWSER_SECTITLE);
    IVar11 = FRPSection::class_FRPSection__sectionWithTitle_footer_
                       ((ID)&objc::class_t::FRPSection,"sectionWithTitle:footer:",IVar11,0xec3e8);
    IVar12 = FUN_0008c218(&cf_BROWSER_IN_SAFARI);
    IVar13 = NSNumber::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,"numberWithBool:",0);
    bVar1 = DLHelper::class_DLHelper__isDarkMode((ID)&objc::class_t::DLHelper,"isDarkMode");
    IVar12 = DLHelper::class_DLHelper__cellWithTitle_key_defaultValue_statusMode_
                       ((ID)&objc::class_t::DLHelper,"cellWithTitle:key:defaultValue:statusMode:",
                        IVar12,0xea328,IVar13,(ulong)bVar1);
    FRPSection::instance_FRPSection__addCell_(IVar11,"addCell:",IVar12);
    IVar12 = FUN_0008c218(&cf_ADS_SECTITLE);
    IVar12 = FRPSection::class_FRPSection__sectionWithTitle_footer_
                       ((ID)&objc::class_t::FRPSection,"sectionWithTitle:footer:",IVar12,0xec3e8);
    IVar13 = FUN_0008c218(&cf_ADS_REMOVE_PROMO_ADS);
    IVar14 = NSNumber::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,"numberWithBool:",0);
    bVar1 = DLHelper::class_DLHelper__isDarkMode((ID)&objc::class_t::DLHelper,"isDarkMode");
    IVar13 = DLHelper::class_DLHelper__cellWithTitle_key_defaultValue_statusMode_
                       ((ID)&objc::class_t::DLHelper,"cellWithTitle:key:defaultValue:statusMode:",
                        IVar13,0xea368,IVar14,(ulong)bVar1);
    FRPSection::instance_FRPSection__addCell_(IVar12,"addCell:",IVar13);
    IVar13 = FUN_0008c218(&cf_APP_LOCK_SECTION);
    IVar13 = FRPSection::class_FRPSection__sectionWithTitle_footer_
                       ((ID)&objc::class_t::FRPSection,"sectionWithTitle:footer:",IVar13,0);
    uVar3 = FUN_0008c218(&cf_APP_LOCK_TITLE);
    IVar14 = FRPSettings::class_FRPSettings__settingsWithKey_defaultValue_
                       ((ID)&objc::class_t::FRPSettings,"settingsWithKey:defaultValue:",0xec0a8,
                        0xec9a8);
    local_90 = FUN_0008c218(&cf_APP_LOCK_IMMEDIATELY);
    local_88 = FUN_0008c218(&cf_APP_LOCK_AFTER_MINUTE);
    local_80 = FUN_0008c218(&cf_APP_LOCK_AFTER_15_MINUTES);
    local_78 = FUN_0008c218(&cf_APP_LOCK_AFTER_HOUR);
    IVar15 = NSArray::arrayWithObjects_count_
                       ((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:count:",&local_90,4);
    local_b0 = &cf_0;
    pcStack_a8 = &cf_60;
    local_a0 = &cf_900;
    pcStack_98 = &cf_3600;
    IVar16 = NSArray::arrayWithObjects_count_
                       ((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:count:",&local_b0,4);
    IVar14 = _objc_msgSend((ID)&objc::class_t::FRPListCell,
                           "cellWithTitle:setting:items:value:popViewOnSelect:postNotification:changedBlock:"
                           ,uVar3,IVar14,IVar15,IVar16,1,0,&PTR___NSConcreteGlobalBlock_000e8e18);
    bVar1 = DLHelper::class_DLHelper__isDarkMode((ID)&objc::class_t::DLHelper,"isDarkMode");
    if ((bVar1 & 1) == 0) {
      IVar15 = UIColor::whiteColor((ID)&_OBJC_CLASS___UIColor,"whiteColor");
    }
    else {
      IVar15 = UIColor::colorWithRed_green_blue_alpha_
                         ((ID)&_OBJC_CLASS___UIColor,"colorWithRed:green:blue:alpha:",
                          0x3fa6161616161616,0x3fae1e1e1e1e1e1e,0x3fb4141414141414,
                          0x3ff0000000000000);
    }
    _objc_msgSend(IVar14,"setBackgroundColor:",IVar15);
    bVar1 = DLHelper::class_DLHelper__isDarkMode((ID)&objc::class_t::DLHelper,"isDarkMode");
    if ((bVar1 & 1) == 0) {
      IVar15 = UIColor::blackColor((ID)&_OBJC_CLASS___UIColor,"blackColor");
    }
    else {
      IVar15 = UIColor::whiteColor((ID)&_OBJC_CLASS___UIColor,"whiteColor");
    }
    IVar16 = _objc_msgSend(IVar14,"textLabel");
    _objc_msgSend(IVar16,"setTextColor:",IVar15);
    local_138 = &local_140;
    local_140 = 0;
    local_130 = 0x3032000000;
    local_128 = FUN_00082b08;
    pcStack_120 = FUN_00082b18;
    local_118 = 0;
    uVar3 = FUN_0008c218(&cf_APP_LOCK_ENABLE);
    IVar15 = NSNumber::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,"numberWithBool:",0);
    IVar15 = FRPSettings::class_FRPSettings__settingsWithKey_defaultValue_
                       ((ID)&objc::class_t::FRPSettings,"settingsWithKey:defaultValue:",0xec068,
                        IVar15);
    local_178 = PTR___NSConcreteStackBlock_000e80d8;
    local_170 = 0xc2000000;
    local_168 = FUN_00082b20;
    puStack_160 = &DAT_000e8e38;
    local_148 = &local_140;
    local_158 = IVar13;
    local_150 = IVar14;
    IVar15 = _objc_msgSend((ID)&objc::class_t::FRPSwitchCell,
                           "cellWithTitle:setting:postNotification:changeBlock:",uVar3,IVar15,0,
                           &local_178);
    local_138[5] = IVar15;
    bVar1 = DLHelper::class_DLHelper__isDarkMode((ID)&objc::class_t::DLHelper,"isDarkMode");
    if ((bVar1 & 1) == 0) {
      IVar15 = UIColor::whiteColor((ID)&_OBJC_CLASS___UIColor,"whiteColor");
    }
    else {
      IVar15 = UIColor::colorWithRed_green_blue_alpha_
                         ((ID)&_OBJC_CLASS___UIColor,"colorWithRed:green:blue:alpha:",
                          0x3fa6161616161616,0x3fae1e1e1e1e1e1e,0x3fb4141414141414,
                          0x3ff0000000000000);
    }
    _objc_msgSend(local_138[5],"setBackgroundColor:",IVar15);
    bVar1 = DLHelper::class_DLHelper__isDarkMode((ID)&objc::class_t::DLHelper,"isDarkMode");
    if ((bVar1 & 1) == 0) {
      IVar15 = UIColor::blackColor((ID)&_OBJC_CLASS___UIColor,"blackColor");
    }
    else {
      IVar15 = UIColor::whiteColor((ID)&_OBJC_CLASS___UIColor,"whiteColor");
    }
    IVar16 = _objc_msgSend(local_138[5],"textLabel");
    _objc_msgSend(IVar16,"setTextColor:",IVar15);
    FRPSection::instance_FRPSection__addCell_(IVar13,"addCell:",local_138[5]);
    IVar15 = NSUserDefaults::standardUserDefaults
                       ((ID)&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
    IVar15 = NSUserDefaults::boolForKey_(IVar15,"boolForKey:",&cf_DL_EnableAppLock);
    if ((IVar15 & 1) != 0) {
      uVar3 = FUN_00097ef8();
      uVar3 = FUN_00097a54(uVar3);
      IVar15 = _objc_msgSend(DAT_001006a8,"length");
      IVar15 = FUN_00097c68(uVar3,IVar15);
      IVar15 = _objc_msgSend(IVar15,"isEqualToString:",DAT_001006a8);
      if ((int)IVar15 != 0) {
        FRPSection::instance_FRPSection__addCell_(IVar13,"addCell:",IVar14);
      }
    }
    local_108 = IVar2;
    IStack_100 = IVar4;
    local_f8 = IVar5;
    IStack_f0 = IVar6;
    local_e8 = IVar7;
    IStack_e0 = IVar8;
    local_d8 = IVar9;
    IStack_d0 = IVar10;
    local_c8 = IVar11;
    IStack_c0 = IVar12;
    local_b8 = IVar13;
    IVar2 = NSArray::arrayWithObjects_count_
                      ((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:count:",&local_108,0xb);
    IVar4 = NSArray::count(IVar2,"count");
    if (IVar4 != 0) {
      IVar2 = NSArray::mutableCopy(IVar2,"mutableCopy");
      IVar4 = FUN_0008c218(&cf_DEVELOPER_SECTITLE);
      IVar4 = FRPSection::class_FRPSection__sectionWithTitle_footer_
                        ((ID)&objc::class_t::FRPSection,"sectionWithTitle:footer:",IVar4,0);
      IVar5 = DLHelper::class_DLHelper__imageIcon_
                        ((ID)&objc::class_t::DLHelper,"imageIcon:",0xec268);
      bVar1 = DLHelper::class_DLHelper__isDarkMode((ID)&objc::class_t::DLHelper,"isDarkMode");
      if ((bVar1 & 1) == 0) {
        IVar6 = UIColor::blackColor((ID)&_OBJC_CLASS___UIColor,"blackColor");
      }
      else {
        IVar6 = UIColor::colorWithRed_green_blue_alpha_
                          ((ID)&_OBJC_CLASS___UIColor,"colorWithRed:green:blue:alpha:",
                           0x3fef5c28f5c28f5c,0x3fef5c28f5c28f5c,0x3fef5c28f5c28f5c,
                           0x3ff0000000000000);
      }
      IVar5 = DLHelper::class_DLHelper__image_color_
                        ((ID)&objc::class_t::DLHelper,"image:color:",IVar5,IVar6);
      IVar6 = FUN_0008c218(&cf_DEVELOPER_NAME);
      IVar7 = _objc_msgSend(0xec2c8,"stringByAppendingString:",&cf_peaceful_0);
      bVar1 = DLHelper::class_DLHelper__isDarkMode((ID)&objc::class_t::DLHelper,"isDarkMode");
      IVar6 = DLHelper::class_DLHelper__cellWithTitle_detail_image_url_statusMode_
                        ((ID)&objc::class_t::DLHelper,"cellWithTitle:detail:image:url:statusMode:",
                         IVar6,0xec2a8,IVar5,IVar7,(ulong)bVar1);
      FRPSection::instance_FRPSection__addCell_(IVar4,"addCell:",IVar6);
      IVar6 = FUN_0008c218(&cf_DEVELOPER_SUPPORT_ACCOUNT);
      IVar7 = _objc_msgSend(0xec2c8,"stringByAppendingString:",&cf_DLTweaks_);
      bVar1 = DLHelper::class_DLHelper__isDarkMode((ID)&objc::class_t::DLHelper,"isDarkMode");
      IVar6 = DLHelper::class_DLHelper__cellWithTitle_detail_image_url_statusMode_
                        ((ID)&objc::class_t::DLHelper,"cellWithTitle:detail:image:url:statusMode:",
                         IVar6,0xec328,IVar5,IVar7,(ulong)bVar1);
      FRPSection::instance_FRPSection__addCell_(IVar4,"addCell:",IVar6);
      IVar6 = FUN_0008c218(&cf_DONATE);
      bVar1 = DLHelper::class_DLHelper__isDarkMode((ID)&objc::class_t::DLHelper,"isDarkMode");
      IVar6 = DLHelper::class_DLHelper__cellWithTitle_detail_image_url_statusMode_
                        ((ID)&objc::class_t::DLHelper,"cellWithTitle:detail:image:url:statusMode:",
                         IVar6,0xec388,0,0xec3a8,(ulong)bVar1);
      FRPSection::instance_FRPSection__addCell_(IVar4,"addCell:",IVar6);
      IVar6 = FUN_0008c218(&cf_THANKS_SECTITLE);
      IVar6 = FRPSection::class_FRPSection__sectionWithTitle_footer_
                        ((ID)&objc::class_t::FRPSection,"sectionWithTitle:footer:",IVar6,0xec3e8);
      IVar7 = FUN_0008c218(&cf_THANKS_FOUADRAHEB);
      IVar8 = _objc_msgSend(0xec2c8,"stringByAppendingString:",&cf_FouadRaheb);
      bVar1 = DLHelper::class_DLHelper__isDarkMode((ID)&objc::class_t::DLHelper,"isDarkMode");
      IVar5 = DLHelper::class_DLHelper__cellWithTitle_detail_image_url_statusMode_
                        ((ID)&objc::class_t::DLHelper,"cellWithTitle:detail:image:url:statusMode:",
                         IVar7,0xec428,IVar5,IVar8,(ulong)bVar1);
      uVar17 = (undefined4)IVar8;
      FRPSection::instance_FRPSection__addCell_(IVar6,"addCell:",IVar5);
      IVar5 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle,"mainBundle");
      IVar5 = NSBundle::infoDictionary(IVar5,"infoDictionary");
      NSBundle::objectForKey_(IVar5,"objectForKey:",&cf_CFBundleShortVersionString);
      IVar5 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_v_____);
      IVar5 = FRPSection::class_FRPSection__sectionWithTitle_footer_
                        ((ID)&objc::class_t::FRPSection,"sectionWithTitle:footer:",0xec3e8,IVar5);
      NSArray::addObject_(IVar2,"addObject:",IVar4);
      NSArray::addObject_(IVar2,"addObject:",IVar6);
      NSArray::addObject_(IVar2,"addObject:",IVar5);
      IVar4 = UIColor::colorWithRed_green_blue_alpha_
                        ((ID)&_OBJC_CLASS___UIColor,"colorWithRed:green:blue:alpha:",0,
                         0x3fe2b020c49ba5e3,0x3feee147ae147ae1,0x3ff0000000000000);
      IVar2 = FRPreferences::class_FRPreferences__tableWithSections_title_tintColor_
                        ((ID)&objc::class_t::FRPreferences,"tableWithSections:title:tintColor:",
                         IVar2,0xec3e8,IVar4);
      IVar4 = _objc_msgSend(IVar2,"tableView");
      DLHelper::class_DLHelper__switchToRTL_((ID)&objc::class_t::DLHelper,"switchToRTL:",IVar4);
      bVar1 = DLHelper::class_DLHelper__isDarkMode((ID)&objc::class_t::DLHelper,"isDarkMode");
      if ((bVar1 & 1) == 0) {
        IVar4 = UIColor::whiteColor((ID)&_OBJC_CLASS___UIColor,"whiteColor");
      }
      else {
        IVar4 = UIColor::colorWithRed_green_blue_alpha_
                          ((ID)&_OBJC_CLASS___UIColor,"colorWithRed:green:blue:alpha:",
                           0x3fa6161616161616,0x3fae1e1e1e1e1e1e,0x3fb4141414141414,
                           0x3ff0000000000000);
      }
      IVar5 = _objc_msgSend(IVar2,"tableView");
      _objc_msgSend(IVar5,"setBackgroundColor:",IVar4);
      IVar4 = UIColor::clearColor((ID)&_OBJC_CLASS___UIColor,"clearColor");
      IVar5 = _objc_msgSend(IVar2,"tableView");
      _objc_msgSend(IVar5,"setSeparatorColor:",IVar4);
      IVar4 = DLHelper::class_DLHelper__imageIcon_
                        ((ID)&objc::class_t::DLHelper,"imageIcon:",0xec4a8);
      IVar5 = _objc_alloc(&_OBJC_CLASS___UIImageView);
      IVar4 = UIImageView::initWithImage_(IVar5,"initWithImage:",IVar4);
      UIImageView::setFrame_(IVar4,"setFrame:",0,0,0x403d000000000000,0x403d000000000000);
      UIImageView::setContentMode_(IVar4,"setContentMode:",1);
      IVar5 = _objc_msgSend(IVar2,"navigationItem");
      _objc_msgSend(IVar5,"setTitleView:",IVar4);
      IVar4 = _objc_alloc(&objc::class_t::DLBarButtonItem);
      IVar5 = FUN_0008c218(&cf_ACTION_DISMISS);
      IVar4 = DLBarButtonItem::instance_DLBarButtonItem__initWithTitle_style_action_
                        (IVar4,"initWithTitle:style:action:",IVar5,0,0xe8cf8,uVar17);
      bVar1 = DLHelper::class_DLHelper__isDarkMode((ID)&objc::class_t::DLHelper,"isDarkMode");
      if ((bVar1 & 1) == 0) {
        IVar5 = UIColor::blackColor((ID)&_OBJC_CLASS___UIColor,"blackColor");
      }
      else {
        IVar5 = UIColor::colorWithRed_green_blue_alpha_
                          ((ID)&_OBJC_CLASS___UIColor,"colorWithRed:green:blue:alpha:",
                           0x3fef5c28f5c28f5c,0x3fef5c28f5c28f5c,0x3fef5c28f5c28f5c,
                           0x3ff0000000000000);
      }
      _objc_msgSend(IVar4,"setTintColor:",IVar5);
      bVar1 = DLHelper::class_DLHelper__isDeviceLanguageArabic
                        ((ID)&objc::class_t::DLHelper,"isDeviceLanguageArabic");
      if (bVar1 == 0) {
        IVar5 = _objc_msgSend(IVar2,"navigationItem");
        _objc_msgSend(IVar5,"setLeftBarButtonItem:",IVar4);
      }
      else {
        IVar5 = _objc_msgSend(IVar2,"navigationItem");
        _objc_msgSend(IVar5,"setRightBarButtonItem:",IVar4);
      }
      IVar4 = _objc_alloc(&_OBJC_CLASS___UINavigationController);
      IVar2 = UINavigationController::initWithRootViewController_
                        (IVar4,"initWithRootViewController:",IVar2);
      UINavigationController::setModalPresentationStyle_(IVar2,"setModalPresentationStyle:",0);
      IVar4 = DLHelper::class_DLHelper__topMostController
                        ((ID)&objc::class_t::DLHelper,"topMostController");
      _objc_msgSend(IVar4,"presentViewController:animated:completion:",IVar2,1,0);
    }
    _isSettingsOpenFirstTime = 1;
    __Block_object_dispose(&local_140,8);
  }
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}

