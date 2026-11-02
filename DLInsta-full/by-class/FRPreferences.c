/* Automatic pseudocode grouped by Objective-C class. NOT original source. */

/* -[FRPreferences initTableWithSections:] | encoding @24@0:8@16 */
/* Address: 000b4708 | Name: instance_FRPreferences__initTableWithSections_ | Body bytes: 120 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID FRPreferences::instance_FRPreferences__initTableWithSections_(ID param_1,SEL param_2,ID param_3)

{
  ID self;
  ID local_30;
  class_t *pcStack_28;
  
  pcStack_28 = &objc::class_t::FRPreferences;
  local_30 = param_1;
  self = UITableViewController::initWithStyle_((ID)&local_30,"initWithStyle:",1);
  if (self != 0) {
    UITableViewController::setSections_(self,"setSections:",param_3);
  }
  return self;
}


/* -[FRPreferences updateTintColors] | encoding v16@0:8 */
/* Address: 000b4780 | Name: instance_FRPreferences__updateTintColors | Body bytes: 852 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void FRPreferences::instance_FRPreferences__updateTintColors(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID self;
  ID self_00;
  ID IVar3;
  ID IVar4;
  long lVar5;
  ID IVar6;
  ID IVar7;
  ID IVar8;
  long lVar9;
  ID local_230;
  undefined8 local_1f0;
  long lStack_1e8;
  long *local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  long lStack_1a8;
  long *local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_000e8260;
  IVar1 = instance_FRPreferences__tintUIColor(param_1,"tintUIColor");
  lStack_1a8 = 0;
  local_1b0 = 0;
  uStack_198 = 0;
  local_1a0 = (long *)0x0;
  uStack_188 = 0;
  local_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  IVar2 = instance_FRPreferences__sections(param_1,"sections");
  local_230 = _objc_msgSend(IVar2,"countByEnumeratingWithState:objects:count:",&local_1b0,auStack_f0
                            ,0x10);
  if (local_230 != 0) {
    lVar5 = *local_1a0;
    do {
      IVar6 = 0;
      do {
        if (*local_1a0 != lVar5) {
          _objc_enumerationMutation(IVar2);
        }
        self = *(ID *)(lStack_1a8 + IVar6 * 8);
        lStack_1e8 = 0;
        local_1f0 = 0;
        uStack_1d8 = 0;
        local_1e0 = (long *)0x0;
        uStack_1c8 = 0;
        local_1d0 = 0;
        uStack_1b8 = 0;
        uStack_1c0 = 0;
        self_00 = _objc_msgSend(self,"cells");
        IVar3 = _objc_msgSend(self_00,"countByEnumeratingWithState:objects:count:",&local_1f0,
                              auStack_170,0x10);
        if (IVar3 != 0) {
          lVar9 = *local_1e0;
          do {
            IVar7 = 0;
            do {
              if (*local_1e0 != lVar9) {
                _objc_enumerationMutation(self_00);
              }
              IVar8 = *(ID *)(lStack_1e8 + IVar7 * 8);
              _objc_msgSend(IVar8,"setTintUIColor:",IVar1);
              IVar4 = instance_FRPreferences__plistPath(param_1,"plistPath");
              IVar4 = _objc_msgSend(IVar4,"length");
              if ((IVar4 != 0) && (IVar4 = _objc_msgSend(IVar8,"setting"), IVar4 != 0)) {
                IVar4 = instance_FRPreferences__plistPath(param_1,"plistPath");
                IVar8 = _objc_msgSend(IVar8,"setting");
                _objc_msgSend(IVar8,"setFileSave:",IVar4);
              }
              IVar7 = IVar7 + 1;
            } while (IVar3 != IVar7);
            IVar3 = _objc_msgSend(self_00,"countByEnumeratingWithState:objects:count:",&local_1f0,
                                  auStack_170,0x10);
          } while (IVar3 != 0);
        }
        _objc_msgSend(self,"setTintUIColor:",IVar1);
        IVar6 = IVar6 + 1;
      } while (IVar6 != local_230);
      local_230 = _objc_msgSend(IVar2,"countByEnumeratingWithState:objects:count:",&local_1b0,
                                auStack_f0,0x10);
    } while (local_230 != 0);
  }
  IVar2 = _objc_msgSend(param_1,"view");
  _objc_msgSend(IVar2,"setTintColor:",IVar1);
  IVar2 = _objc_msgSend(param_1,"tableView");
  _objc_msgSend(IVar2,"setTintColor:",IVar1);
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}


/* -[FRPreferences viewDidDisappear:] | encoding v20@0:8B16 */
/* Address: 000b4ad4 | Name: instance_FRPreferences__viewDidDisappear_ | Body bytes: 52 */

/* Function Stack Size: 0x14 bytes */

void FRPreferences::instance_FRPreferences__viewDidDisappear_(ID param_1,SEL param_2,bool param_3)

{
  ID local_20;
  class_t *pcStack_18;
  
  pcStack_18 = &objc::class_t::FRPreferences;
  local_20 = param_1;
  UITableViewController::viewDidDisappear_((ID)&local_20,"viewDidDisappear:",(ulong)param_3);
  return;
}


/* -[FRPreferences viewWillAppear:] | encoding v20@0:8B16 */
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


/* -[FRPreferences cellForIndexPath:] | encoding @24@0:8@16 */
/* Address: 000b5138 | Name: instance_FRPreferences__cellForIndexPath_ | Body bytes: 248 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID FRPreferences::instance_FRPreferences__cellForIndexPath_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = instance_FRPreferences__sections(param_1,"sections");
  IVar2 = _objc_msgSend(param_3,"section");
  IVar1 = _objc_msgSend(IVar1,"objectAtIndexedSubscript:",IVar2);
  IVar1 = _objc_msgSend(IVar1,"cells");
  IVar2 = _objc_msgSend(param_3,"row");
  IVar1 = _objc_msgSend(IVar1,"objectAtIndexedSubscript:",IVar2);
  return IVar1;
}


/* -[FRPreferences numberOfSectionsInTableView:] | encoding q24@0:8@16 */
/* Address: 000b5230 | Name: instance_FRPreferences__numberOfSectionsInTableView_ | Body bytes: 76 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

long_long FRPreferences::instance_FRPreferences__numberOfSectionsInTableView_
                    (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  IVar1 = instance_FRPreferences__sections(param_1,"sections");
  IVar1 = _objc_msgSend(IVar1,"count");
  return IVar1;
}


/* -[FRPreferences tableView:titleForHeaderInSection:] | encoding @32@0:8@16q24 */
/* Address: 000b527c | Name: instance_FRPreferences__tableView_titleForHeaderInSection_ | Body bytes: 132 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID FRPreferences::instance_FRPreferences__tableView_titleForHeaderInSection_
             (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  ID IVar1;
  
  IVar1 = instance_FRPreferences__sections(param_1,"sections");
  IVar1 = _objc_msgSend(IVar1,"objectAtIndexedSubscript:",param_4);
  IVar1 = _objc_msgSend(IVar1,"headerTitle");
  return IVar1;
}


/* -[FRPreferences tableView:numberOfRowsInSection:] | encoding q32@0:8@16q24 */
/* Address: 000b5300 | Name: instance_FRPreferences__tableView_numberOfRowsInSection_ | Body bytes: 160 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

long_long FRPreferences::instance_FRPreferences__tableView_numberOfRowsInSection_
                    (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  ID IVar1;
  
  IVar1 = instance_FRPreferences__sections(param_1,"sections");
  IVar1 = _objc_msgSend(IVar1,"objectAtIndexedSubscript:",param_4);
  IVar1 = _objc_msgSend(IVar1,"cells");
  IVar1 = _objc_msgSend(IVar1,"count");
  return IVar1;
}


/* -[FRPreferences tableView:heightForRowAtIndexPath:] | encoding d32@0:8@16@24 */
/* Address: 000b53a0 | Name: instance_FRPreferences__tableView_heightForRowAtIndexPath_ | Body bytes: 124 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

double FRPreferences::instance_FRPreferences__tableView_heightForRowAtIndexPath_
                 (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  ID IVar2;
  double dVar3;
  
  IVar1 = instance_FRPreferences__cellForIndexPath_(param_1,"cellForIndexPath:",param_4);
  IVar2 = _objc_msgSend(IVar1,"height");
  if ((int)IVar2 < 1) {
    dVar3 = 48.0;
  }
  else {
    IVar1 = _objc_msgSend(IVar1,"height");
    dVar3 = (double)(int)IVar1;
  }
  return dVar3;
}


/* -[FRPreferences tableView:cellForRowAtIndexPath:] | encoding @32@0:8@16@24 */
/* Address: 000b541c | Name: instance_FRPreferences__tableView_cellForRowAtIndexPath_ | Body bytes: 272 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID FRPreferences::instance_FRPreferences__tableView_cellForRowAtIndexPath_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  ID self;
  ID IVar2;
  ID IVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  self = instance_FRPreferences__cellForIndexPath_(param_1,"cellForIndexPath:",param_4);
  IVar2 = _objc_alloc(&_OBJC_CLASS___UIView);
  IVar2 = UIView::init(IVar2,"init");
  bVar1 = DLHelper::class_DLHelper__isDarkMode((ID)&objc::class_t::DLHelper,"isDarkMode");
  if ((bVar1 & 1) == 0) {
    uVar4 = 0x3fee7e7e7e7e7e7e;
    uVar5 = 0x3feebebebebebebf;
    uVar6 = 0x3feefefefefefeff;
  }
  else {
    uVar4 = 0x3fc2121212121212;
    uVar5 = 0x3fc4949494949495;
    uVar6 = 0x3fc6969696969697;
  }
  IVar3 = UIColor::colorWithRed_green_blue_alpha_
                    ((ID)&_OBJC_CLASS___UIColor,"colorWithRed:green:blue:alpha:",uVar4,uVar5,uVar6,
                     0x3ff0000000000000);
  UIView::setBackgroundColor_(IVar2,"setBackgroundColor:",IVar3);
  _objc_msgSend(self,"setSelectedBackgroundView:",IVar2);
  return self;
}


/* -[FRPreferences tableView:didSelectRowAtIndexPath:] | encoding v32@0:8@16@24 */
/* Address: 000b552c | Name: instance_FRPreferences__tableView_didSelectRowAtIndexPath_ | Body bytes: 112 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void FRPreferences::instance_FRPreferences__tableView_didSelectRowAtIndexPath_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID self;
  ID IVar1;
  
  self = instance_FRPreferences__cellForIndexPath_(param_1,"cellForIndexPath:",param_4);
  IVar1 = _objc_msgSend(self,"respondsToSelector:","didSelectFromTable:");
  if ((int)IVar1 != 0) {
    _objc_msgSend(self,"didSelectFromTable:",param_1);
  }
  return;
}


/* -[FRPreferences tableView:titleForFooterInSection:] | encoding @32@0:8@16q24 */
/* Address: 000b559c | Name: instance_FRPreferences__tableView_titleForFooterInSection_ | Body bytes: 132 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID FRPreferences::instance_FRPreferences__tableView_titleForFooterInSection_
             (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  ID IVar1;
  
  IVar1 = instance_FRPreferences__sections(param_1,"sections");
  IVar1 = _objc_msgSend(IVar1,"objectAtIndexedSubscript:",param_4);
  IVar1 = _objc_msgSend(IVar1,"footerTitle");
  return IVar1;
}


/* -[FRPreferences tableView:willDisplayHeaderView:forSection:] | encoding v40@0:8@16@24q32 */
/* Address: 000b5620 | Name: instance_FRPreferences__tableView_willDisplayHeaderView_forSection_ | Body bytes: 528 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x28 bytes */

void FRPreferences::instance_FRPreferences__tableView_willDisplayHeaderView_forSection_
               (ID param_1,SEL param_2,ID param_3,ID param_4,long_long param_5)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  
  IVar2 = UITableViewHeaderFooterView::class((ID)&_OBJC_CLASS___UITableViewHeaderFooterView,"class")
  ;
  IVar2 = _objc_msgSend(param_4,"isKindOfClass:",IVar2);
  if ((int)IVar2 != 0) {
    IVar2 = UIFont::boldSystemFontOfSize_
                      ((ID)&_OBJC_CLASS___UIFont,"boldSystemFontOfSize:",0x402c000000000000);
    IVar3 = _objc_msgSend(param_4,"textLabel");
    _objc_msgSend(IVar3,"setFont:",IVar2);
    bVar1 = DLHelper::class_DLHelper__isDarkMode((ID)&objc::class_t::DLHelper,"isDarkMode");
    if (bVar1 == 0) {
      IVar2 = UIColor::blackColor((ID)&_OBJC_CLASS___UIColor,"blackColor");
    }
    else {
      IVar2 = UIColor::colorWithRed_green_blue_alpha_
                        ((ID)&_OBJC_CLASS___UIColor,"colorWithRed:green:blue:alpha:",
                         0x3fe4545454545454,0x3fe5555555555555,0x3fe6969696969697,0x3ff0000000000000
                        );
    }
    IVar3 = _objc_msgSend(param_4,"textLabel");
    _objc_msgSend(IVar3,"setTextColor:",IVar2);
    IVar2 = _objc_msgSend(param_4,"textLabel");
    IVar2 = _objc_msgSend(IVar2,"text");
    IVar2 = _objc_msgSend(IVar2,"capitalizedString");
    IVar3 = _objc_msgSend(param_4,"textLabel");
    _objc_msgSend(IVar3,"setText:",IVar2);
  }
  return;
}


/* -[FRPreferences tableView:willDisplayFooterView:forSection:] | encoding v40@0:8@16@24q32 */
/* Address: 000b5830 | Name: instance_FRPreferences__tableView_willDisplayFooterView_forSection_ | Body bytes: 212 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x28 bytes */

void FRPreferences::instance_FRPreferences__tableView_willDisplayFooterView_forSection_
               (ID param_1,SEL param_2,ID param_3,ID param_4,long_long param_5)

{
  ID IVar1;
  
  IVar1 = UITableViewHeaderFooterView::class((ID)&_OBJC_CLASS___UITableViewHeaderFooterView,"class")
  ;
  IVar1 = _objc_msgSend(param_4,"isKindOfClass:",IVar1);
  if ((int)IVar1 != 0) {
    IVar1 = instance_FRPreferences__sections(param_1,"sections");
    IVar1 = _objc_msgSend(IVar1,"count");
    if (IVar1 - 1 == param_5) {
      IVar1 = _objc_msgSend(param_4,"textLabel");
      _objc_msgSend(IVar1,"setTextAlignment:",1);
    }
  }
  return;
}


/* -[FRPreferences tableView:viewForFooterInSection:] | encoding @32@0:8@16q24 */
/* Address: 000b5904 | Name: instance_FRPreferences__tableView_viewForFooterInSection_ | Body bytes: 540 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID FRPreferences::instance_FRPreferences__tableView_viewForFooterInSection_
             (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 in_d2;
  undefined8 uVar7;
  
  if ((param_4 == 0) || (IVar2 = _objc_msgSend(param_3,"numberOfSections"), IVar2 - 1 == param_4)) {
    return 0;
  }
  IVar2 = _objc_msgSend(param_3,"footerViewForSection:",param_4);
  IVar3 = _objc_alloc(&_OBJC_CLASS___UIView);
  _objc_msgSend(param_3,"frame");
  _objc_msgSend(IVar2,"frame");
  IVar2 = UIView::initWithFrame_(IVar3,"initWithFrame:",0,0,in_d2);
  IVar3 = UIColor::clearColor((ID)&_OBJC_CLASS___UIColor,"clearColor");
  UIView::setBackgroundColor_(IVar2,"setBackgroundColor:",IVar3);
  IVar3 = _objc_alloc(&_OBJC_CLASS___UIView);
  _objc_msgSend(param_3,"frame");
  IVar3 = UIView::initWithFrame_(IVar3,"initWithFrame:",0,0);
  bVar1 = DLHelper::class_DLHelper__isDarkMode((ID)&objc::class_t::DLHelper,"isDarkMode");
  if ((bVar1 & 1) == 0) {
    uVar5 = 0x3fef1f1f1f1f1f1f;
    uVar6 = 0x3fef3f3f3f3f3f3f;
    uVar7 = uVar6;
  }
  else {
    uVar5 = 0x3fc0101010101010;
    uVar6 = 0x3fc1111111111111;
    uVar7 = 0x3fc4141414141414;
  }
  IVar4 = UIColor::colorWithRed_green_blue_alpha_
                    ((ID)&_OBJC_CLASS___UIColor,"colorWithRed:green:blue:alpha:",uVar5,uVar6,uVar7,
                     0x3ff0000000000000);
  UIView::setBackgroundColor_(IVar3,"setBackgroundColor:",IVar4);
  UIView::addSubview_(IVar2,"addSubview:",IVar3);
  return IVar2;
}


/* -[FRPreferences reloadTableView] | encoding v16@0:8 */
/* Address: 000b5b20 | Name: instance_FRPreferences__reloadTableView | Body bytes: 64 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void FRPreferences::instance_FRPreferences__reloadTableView(ID param_1,SEL param_2)

{
  ID self;
  
  self = _objc_msgSend(param_1,"tableView");
  _objc_msgSend(self,"reloadData");
  return;
}


/* -[FRPreferences sections] | encoding @16@0:8 */
/* Address: 000b5b60 | Name: instance_FRPreferences__sections | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

ID FRPreferences::instance_FRPreferences__sections(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_sections);
}


/* -[FRPreferences setSections:] | encoding v24@0:8@16 */
/* Address: 000b5b70 | Name: instance_FRPreferences__setSections_ | Body bytes: 20 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void FRPreferences::instance_FRPreferences__setSections_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_sections) = param_3;
  return;
}


/* -[FRPreferences plistPath] | encoding @16@0:8 */
/* Address: 000b5b84 | Name: instance_FRPreferences__plistPath | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

ID FRPreferences::instance_FRPreferences__plistPath(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_plistPath);
}


/* -[FRPreferences setPlistPath:] | encoding v24@0:8@16 */
/* Address: 000b5b94 | Name: instance_FRPreferences__setPlistPath_ | Body bytes: 20 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void FRPreferences::instance_FRPreferences__setPlistPath_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_plistPath) = param_3;
  return;
}


/* -[FRPreferences tintUIColor] | encoding @16@0:8 */
/* Address: 000b5ba8 | Name: instance_FRPreferences__tintUIColor | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

ID FRPreferences::instance_FRPreferences__tintUIColor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_tintUIColor);
}


/* -[FRPreferences setTintUIColor:] | encoding v24@0:8@16 */
/* Address: 000b5bb8 | Name: instance_FRPreferences__setTintUIColor_ | Body bytes: 20 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void FRPreferences::instance_FRPreferences__setTintUIColor_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_tintUIColor) = param_3;
  return;
}


/* -[FRPreferences .cxx_destruct] | encoding v16@0:8 */
/* Address: 000b5bcc | Name: instance_FRPreferences___cxx_destruct | Body bytes: 84 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void FRPreferences::instance_FRPreferences___cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_tintUIColor) = 0;
  *(undefined8 *)(param_1 + (long)_plistPath) = 0;
  *(undefined8 *)(param_1 + (long)_sections) = 0;
  return;
}


/* +[FRPreferences tableWithSections:title:tintColor:] | encoding @40@0:8@16@24@32 */
/* Address: 000b4658 | Name: class_FRPreferences__tableWithSections_title_tintColor_ | Body bytes: 176 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x28 bytes */

ID FRPreferences::class_FRPreferences__tableWithSections_title_tintColor_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  ID IVar1;
  
  IVar1 = _objc_alloc(param_1);
  IVar1 = instance_FRPreferences__initTableWithSections_(IVar1,"initTableWithSections:",param_3);
  _objc_msgSend(IVar1,"setTitle:",param_4);
  instance_FRPreferences__setTintUIColor_(IVar1,"setTintUIColor:",param_5);
  return IVar1;
}

