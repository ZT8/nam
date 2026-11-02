/* Address: 0005c5d0 | Name: FUN_0005c5d0 | Body bytes: 2440 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */

void FUN_0005c5d0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID IVar3;
  undefined8 uVar4;
  ID IVar5;
  ID IVar6;
  ID IVar7;
  undefined4 in_w5;
  long lVar8;
  ID IVar9;
  ID IVar10;
  undefined *local_178;
  undefined8 local_170;
  code *local_168;
  undefined *puStack_160;
  ID local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  long lStack_138;
  long *local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [128];
  long local_80;
  
  local_80 = *(long *)PTR____stack_chk_guard_000e8260;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  IVar5 = *(ID *)(param_1 + 0x28);
  lVar8 = *(long *)(param_1 + 0x30);
  uVar2 = _NSStringFromSelector(*(undefined8 *)(param_1 + 0x38));
  if (lVar8 == 1) {
    IVar3 = NSUserDefaults::standardUserDefaults
                      ((ID)&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
    IVar3 = NSUserDefaults::boolForKey_(IVar3,"boolForKey:",&cf_DL_EnableAlwaysDLHighQuality);
    if ((IVar3 & 1) != 0) {
      uVar4 = FUN_00097ef8();
      uVar4 = FUN_00097a54(uVar4);
      IVar3 = _objc_msgSend(DAT_001006a8,"length");
      IVar3 = FUN_00097c68(uVar4,IVar3);
      IVar3 = _objc_msgSend(IVar3,"isEqualToString:",DAT_001006a8);
      if ((int)IVar3 != 0) {
        IVar5 = _objc_msgSend(IVar5,"objectAtIndexedSubscript:",0);
        IVar3 = _objc_alloc(&objc::class_t::DLInstaDownloader);
        IVar3 = _objc_msgSend(IVar3,"init");
        IVar5 = _objc_msgSend(IVar5,"valueForKey:",&cf__url);
        IVar5 = _objc_msgSend(IVar5,"absoluteString");
        DLInstaDownloader::instance_DLInstaDownloader__downloadMediaURLString_mediaType_
                  (IVar3,"downloadMediaURLString:mediaType:",IVar5,1);
        goto LAB_0005cf0c;
      }
    }
    IVar3 = NSMutableArray::array((ID)&_OBJC_CLASS___NSMutableArray,"array");
    lStack_138 = 0;
    local_140 = 0;
    uStack_128 = 0;
    local_130 = (long *)0x0;
    uStack_118 = 0;
    local_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    IVar6 = _objc_msgSend(IVar5,"countByEnumeratingWithState:objects:count:",&local_140,auStack_100,
                          0x10);
    if (IVar6 != 0) {
      lVar8 = *local_130;
      do {
        IVar9 = 0;
        do {
          if (*local_130 != lVar8) {
            _objc_enumerationMutation(IVar5);
          }
          IVar10 = *(ID *)(lStack_138 + IVar9 * 8);
          IVar7 = _objc_msgSend(IVar10,"valueForKey:",&cf__width);
          _objc_msgSend(IVar7,"intValue");
          IVar7 = _objc_msgSend(IVar10,"valueForKey:",&cf__height);
          _objc_msgSend(IVar7,"intValue");
          IVar7 = NSString::stringWithFormat_
                            ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf__dx_d);
          local_178 = PTR___NSConcreteStackBlock_000e80d8;
          local_170 = 0xc2000000;
          local_168 = FUN_00053c98;
          puStack_160 = &DAT_000e8ae8;
          local_158 = IVar10;
          local_150 = uVar1;
          local_148 = uVar2;
          IVar7 = ABMenuActionItem::class_ABMenuActionItem__actionItemWithTitle_style_action_
                            ((ID)&objc::class_t::ABMenuActionItem,
                             "actionItemWithTitle:style:action:",IVar7,0,(ID)&local_178);
          NSMutableArray::addObject_(IVar3,"addObject:",IVar7);
          IVar9 = IVar9 + 1;
        } while (IVar6 != IVar9);
        IVar6 = _objc_msgSend(IVar5,"countByEnumeratingWithState:objects:count:",&local_140,
                              auStack_100,0x10);
      } while (IVar6 != 0);
    }
    IVar5 = _objc_alloc(&objc::class_t::ABMenuViewController);
    IVar6 = FUN_0008c218(&cf_ACTION_IMAGE_TITLE);
    IVar5 = ABMenuViewController::instance_ABMenuViewController__initWithTitle_actionItems_
                      (IVar5,"initWithTitle:actionItems:",IVar6,IVar3);
    IVar3 = DLHelper::class_DLHelper__topMostController
                      ((ID)&objc::class_t::DLHelper,"topMostController");
    ABMenuViewController::
    instance_ABMenuViewController__presentedFromViewController_animated_completion_
              (IVar5,"presentedFromViewController:animated:completion:",IVar3,1,0,in_w5);
  }
  else {
    IVar3 = NSUserDefaults::standardUserDefaults
                      ((ID)&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
    IVar3 = NSUserDefaults::boolForKey_(IVar3,"boolForKey:",&cf_DL_EnableAlwaysDLHighQuality);
    if ((IVar3 & 1) != 0) {
      uVar4 = FUN_00097ef8();
      uVar4 = FUN_00097a54(uVar4);
      IVar3 = _objc_msgSend(DAT_001006a8,"length");
      IVar3 = FUN_00097c68(uVar4,IVar3);
      IVar3 = _objc_msgSend(IVar3,"isEqualToString:",DAT_001006a8);
      if ((int)IVar3 != 0) {
        IVar5 = _objc_msgSend(IVar5,"objectAtIndexedSubscript:",0);
        IVar3 = _objc_alloc(&objc::class_t::DLInstaDownloader);
        IVar3 = _objc_msgSend(IVar3,"init");
        IVar5 = _objc_msgSend(IVar5,"objectForKeyedSubscript:",&cf_url);
        DLInstaDownloader::instance_DLInstaDownloader__downloadMediaURLString_mediaType_
                  (IVar3,"downloadMediaURLString:mediaType:",IVar5,2);
        goto LAB_0005cf0c;
      }
    }
    IVar3 = NSMutableArray::array((ID)&_OBJC_CLASS___NSMutableArray,"array");
    lStack_138 = 0;
    local_140 = 0;
    uStack_128 = 0;
    local_130 = (long *)0x0;
    uStack_118 = 0;
    local_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    IVar6 = _objc_msgSend(IVar5,"countByEnumeratingWithState:objects:count:",&local_140,auStack_100,
                          0x10);
    if (IVar6 != 0) {
      lVar8 = *local_130;
      do {
        IVar9 = 0;
        do {
          if (*local_130 != lVar8) {
            _objc_enumerationMutation(IVar5);
          }
          IVar10 = *(ID *)(lStack_138 + IVar9 * 8);
          _objc_msgSend(IVar10,"objectForKeyedSubscript:",&cf_width);
          _objc_msgSend(IVar10,"objectForKeyedSubscript:",&cf_height);
          IVar7 = NSString::stringWithFormat_
                            ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___x__);
          local_178 = PTR___NSConcreteStackBlock_000e80d8;
          local_170 = 0xc2000000;
          local_168 = FUN_00054498;
          puStack_160 = &DAT_000e8ae8;
          local_158 = IVar10;
          local_150 = uVar1;
          local_148 = uVar2;
          IVar7 = ABMenuActionItem::class_ABMenuActionItem__actionItemWithTitle_style_action_
                            ((ID)&objc::class_t::ABMenuActionItem,
                             "actionItemWithTitle:style:action:",IVar7,0,(ID)&local_178);
          NSMutableArray::addObject_(IVar3,"addObject:",IVar7);
          IVar9 = IVar9 + 1;
        } while (IVar6 != IVar9);
        IVar6 = _objc_msgSend(IVar5,"countByEnumeratingWithState:objects:count:",&local_140,
                              auStack_100,0x10);
      } while (IVar6 != 0);
    }
    IVar5 = _objc_alloc(&objc::class_t::ABMenuViewController);
    IVar6 = FUN_0008c218(&cf_ACTION_VIDEO_TITLE);
    IVar5 = ABMenuViewController::instance_ABMenuViewController__initWithTitle_actionItems_
                      (IVar5,"initWithTitle:actionItems:",IVar6,IVar3);
    IVar3 = DLHelper::class_DLHelper__topMostController
                      ((ID)&objc::class_t::DLHelper,"topMostController");
    ABMenuViewController::
    instance_ABMenuViewController__presentedFromViewController_animated_completion_
              (IVar5,"presentedFromViewController:animated:completion:",IVar3,1,0,in_w5);
  }
LAB_0005cf0c:
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_80) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}

