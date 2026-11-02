/* Address: 000b4b08 | Name: instance_FRPreferences__viewWillAppear_ | Body bytes: 1464 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x14 bytes */

void FRPreferences::instance_FRPreferences__viewWillAppear_(ID param_1,SEL param_2,bool param_3)

{
  undefined **ppuVar1;
  int iVar2;
  bool bVar3;
  ID IVar4;
  ID IVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *local_a0;
  undefined8 local_98;
  code *local_90;
  undefined *puStack_88;
  ID local_80;
  ID local_78;
  ID local_70;
  class_t *pcStack_68;
  
  pcStack_68 = &objc::class_t::FRPreferences;
  local_70 = param_1;
  UITableViewController::viewWillAppear_((ID)&local_70,"viewWillAppear:",(ulong)param_3);
  iVar2 = FUN_000bd0fc(2,0xd,0,0);
  if (iVar2 == 0) {
    bVar3 = DLHelper::class_DLHelper__isDarkMode((ID)&objc::class_t::DLHelper,"isDarkMode");
    ppuVar1 = &PTR_s_blackColor_000fbc88;
    if (bVar3 == 0) {
      ppuVar1 = &PTR_s_whiteColor_000fb648;
    }
    IVar4 = UIColor::whiteColor((ID)&_OBJC_CLASS___UIColor,*ppuVar1);
    IVar5 = _objc_msgSend(param_1,"navigationController");
    IVar5 = _objc_msgSend(IVar5,"navigationBar");
    _objc_msgSend(IVar5,"setBarTintColor:",IVar4);
    bVar3 = DLHelper::class_DLHelper__isDarkMode((ID)&objc::class_t::DLHelper,"isDarkMode");
    if ((bVar3 & 1) == 0) {
      uVar6 = 0x3fed3d3d3d3d3d3d;
      uVar7 = 0x3fedbdbdbdbdbdbe;
      uVar8 = 0x3fee1e1e1e1e1e1e;
    }
    else {
      uVar6 = 0x3fc5959595959596;
      uVar7 = 0x3fc8181818181818;
      uVar8 = 0x3fcb1b1b1b1b1b1b;
    }
    IVar4 = UIColor::colorWithRed_green_blue_alpha_
                      ((ID)&_OBJC_CLASS___UIColor,"colorWithRed:green:blue:alpha:",uVar6,uVar7,uVar8
                       ,0x3ff0000000000000);
    IVar4 = _objc_retainAutorelease(IVar4);
    IVar4 = _objc_msgSend(IVar4,"CGColor");
    IVar5 = _objc_msgSend(param_1,"navigationController");
    IVar5 = _objc_msgSend(IVar5,"navigationBar");
    IVar5 = _objc_msgSend(IVar5,"layer");
    _objc_msgSend(IVar5,"setShadowColor:",IVar4);
    IVar4 = _objc_msgSend(param_1,"navigationController");
    IVar4 = _objc_msgSend(IVar4,"navigationBar");
    _objc_msgSend(IVar4,"setTranslucent:",0);
  }
  else {
    _NSClassFromString(&cf_UINavigationBarAppearance);
    IVar4 = _objc_alloc();
    IVar4 = _objc_msgSend(IVar4,"init");
    _objc_msgSend(IVar4,"configureWithOpaqueBackground");
    bVar3 = DLHelper::class_DLHelper__isDarkMode((ID)&objc::class_t::DLHelper,"isDarkMode");
    if (bVar3 == 0) {
      IVar5 = UIColor::whiteColor((ID)&_OBJC_CLASS___UIColor,"whiteColor");
    }
    else {
      IVar5 = UIColor::colorWithRed_green_blue_alpha_
                        ((ID)&_OBJC_CLASS___UIColor,"colorWithRed:green:blue:alpha:",
                         0x3fa6161616161616,0x3fae1e1e1e1e1e1e,0x3fb4141414141414,0x3ff0000000000000
                        );
    }
    _objc_msgSend(IVar4,"setBackgroundColor:",IVar5);
    bVar3 = DLHelper::class_DLHelper__isDarkMode((ID)&objc::class_t::DLHelper,"isDarkMode");
    if (bVar3 == 0) {
      uVar6 = 0x3fed3d3d3d3d3d3d;
      uVar7 = 0x3fedbdbdbdbdbdbe;
      uVar8 = 0x3fee1e1e1e1e1e1e;
    }
    else {
      uVar6 = 0x3fc5959595959596;
      uVar7 = 0x3fc8181818181818;
      uVar8 = 0x3fcb1b1b1b1b1b1b;
    }
    IVar5 = UIColor::colorWithRed_green_blue_alpha_
                      ((ID)&_OBJC_CLASS___UIColor,"colorWithRed:green:blue:alpha:",uVar6,uVar7,uVar8
                       ,0x3ff0000000000000);
    _objc_msgSend(IVar4,"setShadowColor:",IVar5);
    IVar5 = _objc_msgSend(param_1,"navigationController");
    IVar5 = _objc_msgSend(IVar5,"navigationBar");
    _objc_msgSend(IVar5,"setStandardAppearance:",IVar4);
    IVar5 = _objc_msgSend(param_1,"navigationController");
    IVar5 = _objc_msgSend(IVar5,"navigationBar");
    _objc_msgSend(IVar5,"setScrollEdgeAppearance:",IVar4);
  }
  instance_FRPreferences__updateTintColors(param_1,"updateTintColors");
  IVar4 = _objc_msgSend(param_1,"tableView");
  IVar4 = _objc_msgSend(IVar4,"indexPathForSelectedRow");
  if (IVar4 != 0) {
    IVar5 = _objc_msgSend(param_1,"tableView");
    _objc_msgSend(IVar5,"deselectRowAtIndexPath:animated:",IVar4,1);
    IVar5 = _objc_msgSend(param_1,"navigationController");
    IVar5 = _objc_msgSend(IVar5,"transitionCoordinator");
    local_a0 = PTR___NSConcreteStackBlock_000e80d8;
    local_98 = 0xc2000000;
    local_90 = FUN_000b50c0;
    puStack_88 = &DAT_000e9c98;
    local_80 = param_1;
    local_78 = IVar4;
    _objc_msgSend(IVar5,"notifyWhenInteractionEndsUsingBlock:",&local_a0);
  }
  IVar4 = NSNotificationCenter::defaultCenter
                    ((ID)&_OBJC_CLASS___NSNotificationCenter,"defaultCenter");
  NSNotificationCenter::addObserver_selector_name_object_
            (IVar4,"addObserver:selector:name:object:",param_1,"reloadTableView",
             &cf_FRPreferences_reloadTableView,0);
  return;
}

