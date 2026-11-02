/* Address: 0007944c | Name: FUN_0007944c | Body bytes: 4780 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */

void FUN_0007944c(long param_1)

{
  int iVar1;
  ID IVar2;
  ID IVar3;
  undefined8 uVar4;
  ID IVar5;
  ID IVar6;
  ID IVar7;
  ID IVar8;
  ID IVar9;
  undefined *puVar10;
  ID IVar11;
  undefined4 in_w5;
  ID IVar12;
  long lVar13;
  ID IVar14;
  undefined8 local_230;
  long lStack_228;
  long *local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  cfstringStruct *local_1f0;
  cfstringStruct *local_1e8;
  cfstringStruct *local_1e0;
  ID local_1d8;
  ID local_1d0;
  ID local_1c8;
  undefined *local_1c0;
  long lStack_1b8;
  code *local_1b0;
  undefined *puStack_1a8;
  ID local_1a0;
  ID IStack_198;
  ID local_190;
  undefined8 uStack_188;
  undefined *local_140;
  undefined8 local_138;
  code *local_130;
  undefined *puStack_128;
  ID local_120;
  ID local_118;
  ID local_110;
  ID local_108;
  ID local_c0;
  ID IStack_b8;
  long *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long local_80;
  
  local_80 = *(long *)PTR____stack_chk_guard_000e8260;
  IVar11 = *(ID *)(param_1 + 0x20);
  IVar2 = _NSStringFromSelector(*(undefined8 *)(param_1 + 0x28));
  IVar3 = DLHelper::class_DLHelper__findViewController_
                    ((ID)&objc::class_t::DLHelper,"findViewController:",IVar11);
  if (DAT_000fffe0 == 0) {
    DAT_000fffe0 = _objc_getClass("IGSundialFeedViewController");
  }
  uVar4 = _objc_retainAutorelease();
  IVar5 = _objc_msgSend(IVar3,"isMemberOfClass:",uVar4);
  if ((int)IVar5 == 0) goto LAB_00079f90;
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
          local_140 = (undefined *)
                      NSSortDescriptor::sortDescriptorWithKey_ascending_
                                ((ID)&_OBJC_CLASS___NSSortDescriptor,
                                 "sortDescriptorWithKey:ascending:",&cf_width,0);
          IVar5 = NSArray::arrayWithObjects_count_
                            ((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:count:",&local_140,1);
          IVar3 = _objc_msgSend(IVar3,"sortedArrayUsingDescriptors:",IVar5);
        }
        IVar5 = _objc_msgSend(IVar3,"count");
        if (IVar5 != 0) {
          IVar5 = FUN_0008c218(&cf_ACTION_DOWNLOAD);
          local_140 = PTR___NSConcreteStackBlock_000e80d8;
          local_138 = 0xc2000000;
          local_130 = FUN_000620e4;
          puStack_128 = &DAT_000e8ae8;
          local_120 = IVar11;
          local_118 = IVar3;
          local_110 = IVar2;
          puVar10 = (undefined *)
                    ABMenuActionItem::class_ABMenuActionItem__actionItemWithTitle_style_action_
                              ((ID)&objc::class_t::ABMenuActionItem,
                               "actionItemWithTitle:style:action:",IVar5,0,(ID)&local_140);
          IVar11 = _objc_alloc(&objc::class_t::ABMenuViewController);
          local_1c0 = puVar10;
          IVar2 = NSArray::arrayWithObjects_count_
                            ((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:count:",&local_1c0,1);
          IVar11 = ABMenuViewController::instance_ABMenuViewController__initWithActionItems_
                             (IVar11,"initWithActionItems:",IVar2);
          IVar2 = DLHelper::class_DLHelper__topMostController
                            ((ID)&objc::class_t::DLHelper,"topMostController");
          ABMenuViewController::
          instance_ABMenuViewController__presentedFromViewController_animated_completion_
                    (IVar11,"presentedFromViewController:animated:completion:",IVar2,1,0,in_w5);
        }
      }
    }
    goto LAB_00079f90;
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
      puVar10 = PTR___NSConcreteStackBlock_000e80d8;
      local_140 = PTR___NSConcreteStackBlock_000e80d8;
      local_138 = 0xc2000000;
      local_130 = FUN_00062724;
      puStack_128 = &DAT_000e8bf8;
      local_120 = IVar3;
      local_118 = IVar5;
      local_110 = IVar11;
      local_108 = IVar2;
      IVar3 = ABMenuActionItem::class_ABMenuActionItem__actionItemWithTitle_style_action_
                        ((ID)&objc::class_t::ABMenuActionItem,"actionItemWithTitle:style:action:",
                         IVar6,0,(ID)&local_140);
      IVar6 = FUN_0008c218(&cf_VIEW_ALL_ITEMS);
      local_1c0 = puVar10;
      lStack_1b8 = 0xc2000000;
      local_1b0 = FUN_00064770;
      puStack_1a8 = &DAT_000e8ae8;
      local_1a0 = IVar5;
      IStack_198 = IVar11;
      local_190 = IVar2;
      IVar11 = ABMenuActionItem::class_ABMenuActionItem__actionItemWithTitle_style_action_
                         ((ID)&objc::class_t::ABMenuActionItem,"actionItemWithTitle:style:action:",
                          IVar6,0,(ID)&local_1c0);
      IVar2 = _objc_alloc(&objc::class_t::ABMenuViewController);
      local_c0 = IVar3;
      IStack_b8 = IVar11;
      IVar11 = NSArray::arrayWithObjects_count_
                         ((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:count:",&local_c0,2);
      IVar11 = ABMenuViewController::instance_ABMenuViewController__initWithActionItems_
                         (IVar2,"initWithActionItems:",IVar11);
      IVar2 = DLHelper::class_DLHelper__topMostController
                        ((ID)&objc::class_t::DLHelper,"topMostController");
      ABMenuViewController::
      instance_ABMenuViewController__presentedFromViewController_animated_completion_
                (IVar11,"presentedFromViewController:animated:completion:",IVar2,1,0,in_w5);
    }
    goto LAB_00079f90;
  }
  IVar5 = _objc_msgSend(IVar3,"currentViewCell");
  if (DAT_000ffff8 == 0) {
    DAT_000ffff8 = _objc_getClass("IGSundialViewerVideoCell");
  }
  uVar4 = _objc_retainAutorelease();
  IVar5 = _objc_msgSend(IVar5,"isMemberOfClass:",uVar4);
  if ((int)IVar5 == 0) goto LAB_00079f90;
  IVar3 = _objc_msgSend(IVar3,"currentViewCell");
  IVar3 = _objc_msgSend(IVar3,"valueForKey:",&cf__video);
  if (IVar3 == 0) goto LAB_00079f90;
  IVar5 = _objc_msgSend(IVar3,"video");
  if (DAT_000fffa8 == 0) {
    DAT_000fffa8 = _objc_getClass("IGVideo");
  }
  uVar4 = _objc_retainAutorelease();
  IVar5 = _objc_msgSend(IVar5,"isMemberOfClass:",uVar4);
  if ((IVar5 & 1) == 0) goto LAB_00079f90;
  IVar3 = _objc_msgSend(IVar3,"video");
  if (IVar3 == 0) {
    IVar3 = 0;
  }
  else {
    iVar1 = FUN_0008ce2c(IVar3,"_videoVersionDictionaries");
    if (iVar1 == 0) {
      IVar5 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
      IVar5 = NSMutableArray::init(IVar5,"init");
      IVar6 = _objc_msgSend(IVar3,"videoVersions");
      IVar6 = _objc_msgSend(IVar6,"count");
      if (IVar6 == 0) {
        IVar3 = 0;
      }
      else {
        uStack_208 = 0;
        local_210 = 0;
        uStack_1f8 = 0;
        uStack_200 = 0;
        lStack_228 = 0;
        local_230 = 0;
        uStack_218 = 0;
        local_220 = (long *)0x0;
        IVar3 = _objc_msgSend(IVar3,"videoVersions");
        IVar6 = _objc_msgSend(IVar3,"countByEnumeratingWithState:objects:count:",&local_230,
                              &local_1c0,0x10);
        if (IVar6 != 0) {
          lVar13 = *local_220;
          do {
            IVar7 = 0;
            do {
              if (*local_220 != lVar13) {
                _objc_enumerationMutation(IVar3);
              }
              IVar8 = *(ID *)(lStack_228 + IVar7 * 8);
              local_1f0 = &cf_url;
              local_1d8 = _objc_msgSend(IVar8,"urlString");
              local_1e8 = &cf_height;
              IVar12 = _objc_msgSend(IVar8,"height");
              _objc_msgSend(IVar12,"floatValue");
              local_1d0 = NSNumber::numberWithFloat_((ID)&_OBJC_CLASS___NSNumber,"numberWithFloat:")
              ;
              local_1e0 = &cf_width;
              IVar12 = _objc_msgSend(IVar8,"width");
              _objc_msgSend(IVar12,"floatValue");
              local_1c8 = NSNumber::numberWithFloat_((ID)&_OBJC_CLASS___NSNumber,"numberWithFloat:")
              ;
              IVar12 = NSDictionary::dictionaryWithObjects_forKeys_count_
                                 ((ID)&_OBJC_CLASS___NSDictionary,
                                  "dictionaryWithObjects:forKeys:count:",&local_1d8,&local_1f0,3);
              NSMutableArray::addObject_(IVar5,"addObject:",IVar12);
              IVar7 = IVar7 + 1;
            } while (IVar6 != IVar7);
            IVar6 = _objc_msgSend(IVar3,"countByEnumeratingWithState:objects:count:",&local_230,
                                  &local_1c0,0x10);
          } while (IVar6 != 0);
        }
        IVar3 = NSMutableArray::count(IVar5,"count");
        if (IVar3 == 0) goto LAB_0007a53c;
        IVar3 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
        IVar3 = NSMutableArray::init(IVar3,"init");
        IVar6 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
        IVar6 = NSMutableArray::init(IVar6,"init");
        uStack_98 = 0;
        local_a0 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        IStack_b8 = 0;
        local_c0 = 0;
        uStack_a8 = 0;
        local_b0 = (long *)0x0;
        IVar7 = NSMutableArray::countByEnumeratingWithState_objects_count_
                          (IVar5,"countByEnumeratingWithState:objects:count:",&local_c0,&local_140,
                           0x10);
        if (IVar7 != 0) {
          lVar13 = *local_b0;
          do {
            IVar12 = 0;
            do {
              if (*local_b0 != lVar13) {
                _objc_enumerationMutation(IVar5);
              }
              IVar14 = *(ID *)(IStack_b8 + IVar12 * 8);
              IVar8 = _objc_msgSend(IVar14,"objectForKey:",&cf_width);
              IVar9 = NSMutableArray::indexOfObject_(IVar6,"indexOfObject:",IVar8);
              if (IVar9 == 0x7fffffffffffffff) {
                IVar9 = _objc_msgSend(IVar14,"objectForKeyedSubscript:",&cf_url);
                IVar9 = _objc_msgSend(IVar9,"containsString:",&cf__mp4_);
                if ((int)IVar9 != 0) {
                  NSMutableArray::addObject_(IVar6,"addObject:",IVar8);
                  NSMutableArray::addObject_(IVar3,"addObject:",IVar14);
                }
              }
              IVar12 = IVar12 + 1;
            } while (IVar7 != IVar12);
            IVar7 = NSMutableArray::countByEnumeratingWithState_objects_count_
                              (IVar5,"countByEnumeratingWithState:objects:count:",&local_c0,
                               &local_140,0x10);
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
LAB_0007a53c:
        IVar3 = 0;
      }
      else {
        IVar5 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
        IVar5 = NSMutableArray::init(IVar5,"init");
        IVar6 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
        IVar6 = NSMutableArray::init(IVar6,"init");
        IStack_198 = 0;
        local_1a0 = 0;
        uStack_188 = 0;
        local_190 = 0;
        lStack_1b8 = 0;
        local_1c0 = (undefined *)0x0;
        puStack_1a8 = (undefined *)0x0;
        local_1b0 = (code *)0x0;
        IVar7 = _objc_msgSend(IVar3,"countByEnumeratingWithState:objects:count:",&local_1c0,
                              &local_140,0x10);
        if (IVar7 != 0) {
          lVar13 = *(long *)local_1b0;
          do {
            IVar12 = 0;
            do {
              if (*(long *)local_1b0 != lVar13) {
                _objc_enumerationMutation(IVar3);
              }
              IVar14 = *(ID *)(lStack_1b8 + IVar12 * 8);
              IVar8 = _objc_msgSend(IVar14,"objectForKey:",&cf_width);
              IVar9 = NSMutableArray::indexOfObject_(IVar6,"indexOfObject:",IVar8);
              if (IVar9 == 0x7fffffffffffffff) {
                IVar9 = _objc_msgSend(IVar14,"objectForKeyedSubscript:",&cf_url);
                IVar9 = _objc_msgSend(IVar9,"containsString:",&cf__mp4_);
                if ((int)IVar9 != 0) {
                  NSMutableArray::addObject_(IVar6,"addObject:",IVar8);
                  NSMutableArray::addObject_(IVar5,"addObject:",IVar14);
                }
              }
              IVar12 = IVar12 + 1;
            } while (IVar7 != IVar12);
            IVar7 = _objc_msgSend(IVar3,"countByEnumeratingWithState:objects:count:",&local_1c0,
                                  &local_140,0x10);
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
    local_140 = PTR___NSConcreteStackBlock_000e80d8;
    local_138 = 0xc2000000;
    local_130 = FUN_00065aac;
    puStack_128 = &DAT_000e8ae8;
    local_120 = IVar11;
    local_118 = IVar3;
    local_110 = IVar2;
    puVar10 = (undefined *)
              ABMenuActionItem::class_ABMenuActionItem__actionItemWithTitle_style_action_
                        ((ID)&objc::class_t::ABMenuActionItem,"actionItemWithTitle:style:action:",
                         IVar5,0,(ID)&local_140);
    IVar11 = _objc_alloc(&objc::class_t::ABMenuViewController);
    local_1c0 = puVar10;
    IVar2 = NSArray::arrayWithObjects_count_
                      ((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:count:",&local_1c0,1);
    IVar11 = ABMenuViewController::instance_ABMenuViewController__initWithActionItems_
                       (IVar11,"initWithActionItems:",IVar2);
    IVar2 = DLHelper::class_DLHelper__topMostController
                      ((ID)&objc::class_t::DLHelper,"topMostController");
    ABMenuViewController::
    instance_ABMenuViewController__presentedFromViewController_animated_completion_
              (IVar11,"presentedFromViewController:animated:completion:",IVar2,1,0,in_w5);
  }
LAB_00079f90:
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_80) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}

