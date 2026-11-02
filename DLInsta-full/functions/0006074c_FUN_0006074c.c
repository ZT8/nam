/* Address: 0006074c | Name: FUN_0006074c | Body bytes: 4804 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */

void FUN_0006074c(ID param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
  ID IVar3;
  undefined8 uVar4;
  ID IVar5;
  ID IVar6;
  ID IVar7;
  ID IVar8;
  ID IVar9;
  undefined4 in_w5;
  ID IVar10;
  long lVar11;
  ID IVar12;
  undefined *local_348;
  undefined8 local_340;
  code *local_338;
  undefined *puStack_330;
  ID local_328;
  ID local_320;
  undefined8 local_318;
  undefined *local_310;
  undefined8 local_308;
  code *local_300;
  undefined *puStack_2f8;
  ID local_2f0;
  ID local_2e8;
  undefined8 local_2e0;
  undefined *local_2d8;
  undefined8 local_2d0;
  code *local_2c8;
  undefined *puStack_2c0;
  ID local_2b8;
  ID local_2b0;
  ID local_2a8;
  undefined8 local_2a0;
  undefined *local_298;
  undefined8 local_290;
  code *local_288;
  undefined *puStack_280;
  ID local_278;
  ID local_270;
  undefined8 local_268;
  undefined8 local_260;
  long lStack_258;
  long *local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 local_220;
  long lStack_218;
  long *local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  ID local_1e0;
  ID local_1d8;
  ID local_1d0;
  ID local_1c8;
  cfstringStruct *local_1c0;
  cfstringStruct *local_1b8;
  cfstringStruct *local_1b0;
  ID local_1a8;
  ID local_1a0;
  ID local_198;
  undefined8 local_190;
  long lStack_188;
  long *local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  ID local_108 [16];
  long local_88;
  
  local_88 = *(long *)PTR____stack_chk_guard_000e8260;
  IVar3 = DLHelper::class_DLHelper__findViewController_
                    ((ID)&objc::class_t::DLHelper,"findViewController:",param_1);
  if (DAT_000fffe0 == 0) {
    DAT_000fffe0 = _objc_getClass("IGSundialFeedViewController");
  }
  uVar4 = _objc_retainAutorelease();
  IVar5 = _objc_msgSend(IVar3,"isMemberOfClass:",uVar4);
  if ((int)IVar5 == 0) goto LAB_00061280;
  IVar5 = _objc_msgSend(IVar3,"currentViewCell");
  if (DAT_000fffe8 == 0) {
    DAT_000fffe8 = _objc_getClass("IGSundialViewerPhotoCell");
  }
  uVar4 = _objc_retainAutorelease();
  IVar5 = _objc_msgSend(IVar5,"isMemberOfClass:",uVar4);
  if ((int)IVar5 != 0) {
    IVar3 = _objc_msgSend(IVar3,"currentViewCell");
    IVar3 = _objc_msgSend(IVar3,"valueForKey:",&cf__media);
    if (IVar3 != 0) {
      IVar5 = _objc_msgSend(IVar3,"photo");
      if (DAT_000fffc8 == 0) {
        DAT_000fffc8 = _objc_getClass("IGPhoto");
      }
      uVar4 = _objc_retainAutorelease();
      IVar5 = _objc_msgSend(IVar5,"isMemberOfClass:",uVar4);
      if ((IVar5 & 1) != 0) {
        IVar3 = _objc_msgSend(IVar3,"photo");
        if (IVar3 == 0) {
          IVar3 = 0;
        }
        else {
          IVar3 = _objc_msgSend(IVar3,"valueForKey:",&cf__originalImageVersions);
          local_108[0] = NSSortDescriptor::sortDescriptorWithKey_ascending_
                                   ((ID)&_OBJC_CLASS___NSSortDescriptor,
                                    "sortDescriptorWithKey:ascending:",&cf_width,0);
          IVar5 = NSArray::arrayWithObjects_count_
                            ((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:count:",local_108,1);
          IVar3 = _objc_msgSend(IVar3,"sortedArrayUsingDescriptors:",IVar5);
        }
        IVar5 = _objc_msgSend(IVar3,"count");
        if (IVar5 != 0) {
          IVar5 = FUN_0008c218(&cf_ACTION_DOWNLOAD);
          local_298 = PTR___NSConcreteStackBlock_000e80d8;
          local_290 = 0xc2000000;
          local_288 = FUN_000620e4;
          puStack_280 = &DAT_000e8ae8;
          local_278 = param_1;
          local_270 = IVar3;
          local_268 = param_2;
          IVar3 = ABMenuActionItem::class_ABMenuActionItem__actionItemWithTitle_style_action_
                            ((ID)&objc::class_t::ABMenuActionItem,
                             "actionItemWithTitle:style:action:",IVar5,0,(ID)&local_298);
          IVar5 = _objc_alloc(&objc::class_t::ABMenuViewController);
          local_1c8 = IVar3;
          IVar3 = NSArray::arrayWithObjects_count_
                            ((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:count:",&local_1c8,1);
          IVar3 = ABMenuViewController::instance_ABMenuViewController__initWithActionItems_
                            (IVar5,"initWithActionItems:",IVar3);
          IVar5 = DLHelper::class_DLHelper__topMostController
                            ((ID)&objc::class_t::DLHelper,"topMostController");
          ABMenuViewController::
          instance_ABMenuViewController__presentedFromViewController_animated_completion_
                    (IVar3,"presentedFromViewController:animated:completion:",IVar5,1,0,in_w5);
        }
      }
    }
    goto LAB_00061280;
  }
  IVar5 = _objc_msgSend(IVar3,"currentViewCell");
  if (DAT_000ffff0 == 0) {
    DAT_000ffff0 = _objc_getClass("IGSundialViewerCarouselCell");
  }
  uVar4 = _objc_retainAutorelease();
  IVar5 = _objc_msgSend(IVar5,"isMemberOfClass:",uVar4);
  if ((int)IVar5 != 0) {
    IVar3 = _objc_msgSend(IVar3,"currentViewCell");
    IVar5 = _objc_msgSend(IVar3,"valueForKey:",&cf__items);
    IVar6 = _objc_msgSend(IVar5,"count");
    if (IVar6 != 0) {
      IVar6 = FUN_0008c218(&cf_ACTION_ITEM);
      puVar1 = PTR___NSConcreteStackBlock_000e80d8;
      local_2d8 = PTR___NSConcreteStackBlock_000e80d8;
      local_2d0 = 0xc2000000;
      local_2c8 = FUN_00062724;
      puStack_2c0 = &DAT_000e8bf8;
      local_2b8 = IVar3;
      local_2b0 = IVar5;
      local_2a8 = param_1;
      local_2a0 = param_2;
      IVar3 = ABMenuActionItem::class_ABMenuActionItem__actionItemWithTitle_style_action_
                        ((ID)&objc::class_t::ABMenuActionItem,"actionItemWithTitle:style:action:",
                         IVar6,0,(ID)&local_2d8);
      IVar6 = FUN_0008c218(&cf_VIEW_ALL_ITEMS);
      local_310 = puVar1;
      local_308 = 0xc2000000;
      local_300 = FUN_00064770;
      puStack_2f8 = &DAT_000e8ae8;
      local_2f0 = IVar5;
      local_2e8 = param_1;
      local_2e0 = param_2;
      IVar5 = ABMenuActionItem::class_ABMenuActionItem__actionItemWithTitle_style_action_
                        ((ID)&objc::class_t::ABMenuActionItem,"actionItemWithTitle:style:action:",
                         IVar6,0,(ID)&local_310);
      IVar6 = _objc_alloc(&objc::class_t::ABMenuViewController);
      local_1d8 = IVar3;
      local_1d0 = IVar5;
      IVar3 = NSArray::arrayWithObjects_count_
                        ((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:count:",&local_1d8,2);
      IVar3 = ABMenuViewController::instance_ABMenuViewController__initWithActionItems_
                        (IVar6,"initWithActionItems:",IVar3);
      IVar5 = DLHelper::class_DLHelper__topMostController
                        ((ID)&objc::class_t::DLHelper,"topMostController");
      ABMenuViewController::
      instance_ABMenuViewController__presentedFromViewController_animated_completion_
                (IVar3,"presentedFromViewController:animated:completion:",IVar5,1,0,in_w5);
    }
    goto LAB_00061280;
  }
  IVar5 = _objc_msgSend(IVar3,"currentViewCell");
  if (DAT_000ffff8 == 0) {
    DAT_000ffff8 = _objc_getClass("IGSundialViewerVideoCell");
  }
  uVar4 = _objc_retainAutorelease();
  IVar5 = _objc_msgSend(IVar5,"isMemberOfClass:",uVar4);
  if ((int)IVar5 == 0) goto LAB_00061280;
  IVar3 = _objc_msgSend(IVar3,"currentViewCell");
  IVar3 = _objc_msgSend(IVar3,"valueForKey:",&cf__video);
  if (IVar3 == 0) goto LAB_00061280;
  IVar5 = _objc_msgSend(IVar3,"video");
  if (DAT_000fffa8 == 0) {
    DAT_000fffa8 = _objc_getClass("IGVideo");
  }
  uVar4 = _objc_retainAutorelease();
  IVar5 = _objc_msgSend(IVar5,"isMemberOfClass:",uVar4);
  if ((IVar5 & 1) == 0) goto LAB_00061280;
  IVar3 = _objc_msgSend(IVar3,"video");
  if (IVar3 == 0) {
    IVar3 = 0;
  }
  else {
    iVar2 = FUN_0008ce2c(IVar3,"_videoVersionDictionaries");
    if (iVar2 == 0) {
      IVar5 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
      IVar5 = NSMutableArray::init(IVar5,"init");
      IVar6 = _objc_msgSend(IVar3,"videoVersions");
      IVar6 = _objc_msgSend(IVar6,"count");
      if (IVar6 == 0) {
        IVar3 = 0;
      }
      else {
        uStack_238 = 0;
        local_240 = 0;
        uStack_228 = 0;
        uStack_230 = 0;
        lStack_258 = 0;
        local_260 = 0;
        uStack_248 = 0;
        local_250 = (long *)0x0;
        IVar3 = _objc_msgSend(IVar3,"videoVersions");
        IVar6 = _objc_msgSend(IVar3,"countByEnumeratingWithState:objects:count:",&local_260,
                              &local_190,0x10);
        if (IVar6 != 0) {
          lVar11 = *local_250;
          do {
            IVar7 = 0;
            do {
              if (*local_250 != lVar11) {
                _objc_enumerationMutation(IVar3);
              }
              IVar8 = *(ID *)(lStack_258 + IVar7 * 8);
              local_1c0 = &cf_url;
              local_1a8 = _objc_msgSend(IVar8,"urlString");
              local_1b8 = &cf_height;
              IVar10 = _objc_msgSend(IVar8,"height");
              _objc_msgSend(IVar10,"floatValue");
              local_1a0 = NSNumber::numberWithFloat_((ID)&_OBJC_CLASS___NSNumber,"numberWithFloat:")
              ;
              local_1b0 = &cf_width;
              IVar10 = _objc_msgSend(IVar8,"width");
              _objc_msgSend(IVar10,"floatValue");
              local_198 = NSNumber::numberWithFloat_((ID)&_OBJC_CLASS___NSNumber,"numberWithFloat:")
              ;
              IVar10 = NSDictionary::dictionaryWithObjects_forKeys_count_
                                 ((ID)&_OBJC_CLASS___NSDictionary,
                                  "dictionaryWithObjects:forKeys:count:",&local_1a8,&local_1c0,3);
              NSMutableArray::addObject_(IVar5,"addObject:",IVar10);
              IVar7 = IVar7 + 1;
            } while (IVar6 != IVar7);
            IVar6 = _objc_msgSend(IVar3,"countByEnumeratingWithState:objects:count:",&local_260,
                                  &local_190,0x10);
          } while (IVar6 != 0);
        }
        IVar3 = NSMutableArray::count(IVar5,"count");
        if (IVar3 == 0) goto LAB_00061828;
        IVar3 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
        IVar3 = NSMutableArray::init(IVar3,"init");
        IVar6 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
        IVar6 = NSMutableArray::init(IVar6,"init");
        uStack_1f8 = 0;
        local_200 = 0;
        uStack_1e8 = 0;
        uStack_1f0 = 0;
        lStack_218 = 0;
        local_220 = 0;
        uStack_208 = 0;
        local_210 = (long *)0x0;
        IVar7 = NSMutableArray::countByEnumeratingWithState_objects_count_
                          (IVar5,"countByEnumeratingWithState:objects:count:",&local_220,local_108,
                           0x10);
        if (IVar7 != 0) {
          lVar11 = *local_210;
          do {
            IVar10 = 0;
            do {
              if (*local_210 != lVar11) {
                _objc_enumerationMutation(IVar5);
              }
              IVar12 = *(ID *)(lStack_218 + IVar10 * 8);
              IVar8 = _objc_msgSend(IVar12,"objectForKey:",&cf_width);
              IVar9 = NSMutableArray::indexOfObject_(IVar6,"indexOfObject:",IVar8);
              if (IVar9 == 0x7fffffffffffffff) {
                IVar9 = _objc_msgSend(IVar12,"objectForKeyedSubscript:",&cf_url);
                IVar9 = _objc_msgSend(IVar9,"containsString:",&cf__mp4_);
                if ((int)IVar9 != 0) {
                  NSMutableArray::addObject_(IVar6,"addObject:",IVar8);
                  NSMutableArray::addObject_(IVar3,"addObject:",IVar12);
                }
              }
              IVar10 = IVar10 + 1;
            } while (IVar7 != IVar10);
            IVar7 = NSMutableArray::countByEnumeratingWithState_objects_count_
                              (IVar5,"countByEnumeratingWithState:objects:count:",&local_220,
                               local_108,0x10);
          } while (IVar7 != 0);
        }
        IVar5 = NSSortDescriptor::sortDescriptorWithKey_ascending_
                          ((ID)&_OBJC_CLASS___NSSortDescriptor,"sortDescriptorWithKey:ascending:",
                           &cf_width,0);
        IVar5 = NSArray::arrayWithObjects_((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:",IVar5);
        IVar3 = NSMutableArray::sortedArrayUsingDescriptors_
                          (IVar3,"sortedArrayUsingDescriptors:",IVar5);
      }
    }
    else {
      IVar3 = _objc_msgSend(IVar3,"valueForKey:",&cf__videoVersionDictionaries);
      IVar5 = _objc_msgSend(IVar3,"count");
      if (IVar5 == 0) {
LAB_00061828:
        IVar3 = 0;
      }
      else {
        IVar5 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
        IVar5 = NSMutableArray::init(IVar5,"init");
        IVar6 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
        IVar6 = NSMutableArray::init(IVar6,"init");
        uStack_168 = 0;
        local_170 = 0;
        uStack_158 = 0;
        uStack_160 = 0;
        lStack_188 = 0;
        local_190 = 0;
        uStack_178 = 0;
        local_180 = (long *)0x0;
        IVar7 = _objc_msgSend(IVar3,"countByEnumeratingWithState:objects:count:",&local_190,
                              local_108,0x10);
        if (IVar7 != 0) {
          lVar11 = *local_180;
          do {
            IVar10 = 0;
            do {
              if (*local_180 != lVar11) {
                _objc_enumerationMutation(IVar3);
              }
              IVar12 = *(ID *)(lStack_188 + IVar10 * 8);
              IVar8 = _objc_msgSend(IVar12,"objectForKey:",&cf_width);
              IVar9 = NSMutableArray::indexOfObject_(IVar6,"indexOfObject:",IVar8);
              if (IVar9 == 0x7fffffffffffffff) {
                IVar9 = _objc_msgSend(IVar12,"objectForKeyedSubscript:",&cf_url);
                IVar9 = _objc_msgSend(IVar9,"containsString:",&cf__mp4_);
                if ((int)IVar9 != 0) {
                  NSMutableArray::addObject_(IVar6,"addObject:",IVar8);
                  NSMutableArray::addObject_(IVar5,"addObject:",IVar12);
                }
              }
              IVar10 = IVar10 + 1;
            } while (IVar7 != IVar10);
            IVar7 = _objc_msgSend(IVar3,"countByEnumeratingWithState:objects:count:",&local_190,
                                  local_108,0x10);
          } while (IVar7 != 0);
        }
        IVar3 = NSSortDescriptor::sortDescriptorWithKey_ascending_
                          ((ID)&_OBJC_CLASS___NSSortDescriptor,"sortDescriptorWithKey:ascending:",
                           &cf_width,0);
        IVar3 = NSArray::arrayWithObjects_((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:",IVar3);
        IVar3 = NSMutableArray::sortedArrayUsingDescriptors_
                          (IVar5,"sortedArrayUsingDescriptors:",IVar3);
      }
    }
  }
  IVar5 = NSMutableArray::count(IVar3,"count");
  if (IVar5 != 0) {
    IVar5 = FUN_0008c218(&cf_ACTION_DOWNLOAD);
    local_348 = PTR___NSConcreteStackBlock_000e80d8;
    local_340 = 0xc2000000;
    local_338 = FUN_00065aac;
    puStack_330 = &DAT_000e8ae8;
    local_328 = param_1;
    local_320 = IVar3;
    local_318 = param_2;
    IVar3 = ABMenuActionItem::class_ABMenuActionItem__actionItemWithTitle_style_action_
                      ((ID)&objc::class_t::ABMenuActionItem,"actionItemWithTitle:style:action:",
                       IVar5,0,(ID)&local_348);
    IVar5 = _objc_alloc(&objc::class_t::ABMenuViewController);
    local_1e0 = IVar3;
    IVar3 = NSArray::arrayWithObjects_count_
                      ((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:count:",&local_1e0,1);
    IVar3 = ABMenuViewController::instance_ABMenuViewController__initWithActionItems_
                      (IVar5,"initWithActionItems:",IVar3);
    IVar5 = DLHelper::class_DLHelper__topMostController
                      ((ID)&objc::class_t::DLHelper,"topMostController");
    ABMenuViewController::
    instance_ABMenuViewController__presentedFromViewController_animated_completion_
              (IVar3,"presentedFromViewController:animated:completion:",IVar5,1,0,in_w5);
  }
LAB_00061280:
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_88) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}

