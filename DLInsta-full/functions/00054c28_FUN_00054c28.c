/* Address: 00054c28 | Name: FUN_00054c28 | Body bytes: 3448 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */

void FUN_00054c28(ID param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
  ID IVar3;
  ID IVar4;
  undefined8 uVar5;
  ID IVar6;
  ID IVar7;
  ID IVar8;
  ID IVar9;
  undefined4 in_w5;
  ID IVar10;
  ID IVar11;
  long lVar12;
  undefined *local_2f0;
  undefined8 local_2e8;
  code *local_2e0;
  undefined *puStack_2d8;
  ID local_2d0;
  ID local_2c8;
  undefined8 local_2c0;
  undefined *local_2b8;
  undefined8 local_2b0;
  code *local_2a8;
  undefined *puStack_2a0;
  ID local_298;
  undefined8 local_290;
  undefined *local_288;
  undefined8 local_280;
  code *local_278;
  undefined *puStack_270;
  ID local_268;
  ID local_260;
  undefined8 local_258;
  undefined8 local_250;
  long lStack_248;
  long *local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 local_210;
  long lStack_208;
  long *local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  ID local_1c8;
  ID IStack_1c0;
  ID local_1b8;
  cfstringStruct *local_1b0;
  cfstringStruct *local_1a8;
  cfstringStruct *local_1a0;
  ID local_198;
  ID local_190;
  ID local_188;
  undefined8 local_180;
  long lStack_178;
  long *local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 auStack_100 [128];
  long local_80;
  
  local_80 = *(long *)PTR____stack_chk_guard_000e8260;
  IVar3 = _objc_msgSend(param_1,"respondsToSelector:","post");
  if ((int)IVar3 == 0) goto LAB_00055950;
  IVar3 = _objc_msgSend(param_1,"performSelector:","post");
  IVar4 = _objc_msgSend(IVar3,"itemMediaType");
  if (IVar4 != 2) {
    IVar4 = _objc_msgSend(IVar3,"itemMediaType");
    if (IVar4 == 8) {
      IVar4 = FUN_0008c218(&cf_ACTION_ITEM);
      puVar1 = PTR___NSConcreteStackBlock_000e80d8;
      local_2b8 = PTR___NSConcreteStackBlock_000e80d8;
      local_2b0 = 0xc2000000;
      local_2a8 = FUN_000564d8;
      puStack_2a0 = &DAT_000e8b18;
      local_298 = param_1;
      local_290 = param_2;
      IVar4 = ABMenuActionItem::class_ABMenuActionItem__actionItemWithTitle_style_action_
                        ((ID)&objc::class_t::ABMenuActionItem,"actionItemWithTitle:style:action:",
                         IVar4,0,(ID)&local_2b8);
      IVar6 = FUN_0008c218(&cf_VIEW_ALL_ITEMS);
      local_2f0 = puVar1;
      local_2e8 = 0xc2000000;
      local_2e0 = FUN_00057ac0;
      puStack_2d8 = &DAT_000e8ae8;
      local_2d0 = IVar3;
      local_2c8 = param_1;
      local_2c0 = param_2;
      IVar3 = ABMenuActionItem::class_ABMenuActionItem__actionItemWithTitle_style_action_
                        ((ID)&objc::class_t::ABMenuActionItem,"actionItemWithTitle:style:action:",
                         IVar6,0,(ID)&local_2f0);
      IVar6 = _objc_alloc(&objc::class_t::ABMenuViewController);
      local_1c8 = IVar4;
      IStack_1c0 = IVar3;
      IVar3 = NSArray::arrayWithObjects_count_
                        ((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:count:",&local_1c8,2);
      IVar3 = ABMenuViewController::instance_ABMenuViewController__initWithActionItems_
                        (IVar6,"initWithActionItems:",IVar3);
      IVar4 = DLHelper::class_DLHelper__topMostController
                        ((ID)&objc::class_t::DLHelper,"topMostController");
      ABMenuViewController::
      instance_ABMenuViewController__presentedFromViewController_animated_completion_
                (IVar3,"presentedFromViewController:animated:completion:",IVar4,1,0,in_w5);
    }
    goto LAB_00055950;
  }
  IVar4 = _objc_msgSend(IVar3,"video");
  if (DAT_000fffa8 == 0) {
    DAT_000fffa8 = _objc_getClass("IGVideo");
  }
  uVar5 = _objc_retainAutorelease();
  IVar4 = _objc_msgSend(IVar4,"isMemberOfClass:",uVar5);
  if ((IVar4 & 1) == 0) goto LAB_00055950;
  IVar3 = _objc_msgSend(IVar3,"video");
  if (IVar3 == 0) {
LAB_00055794:
    IVar3 = 0;
  }
  else {
    iVar2 = FUN_0008ce2c(IVar3,"_videoVersionDictionaries");
    if (iVar2 == 0) {
      IVar4 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
      IVar4 = NSMutableArray::init(IVar4,"init");
      IVar6 = _objc_msgSend(IVar3,"videoVersions");
      IVar6 = _objc_msgSend(IVar6,"count");
      if (IVar6 == 0) goto LAB_00055794;
      uStack_228 = 0;
      local_230 = 0;
      uStack_218 = 0;
      uStack_220 = 0;
      lStack_248 = 0;
      local_250 = 0;
      uStack_238 = 0;
      local_240 = (long *)0x0;
      IVar3 = _objc_msgSend(IVar3,"videoVersions");
      IVar6 = _objc_msgSend(IVar3,"countByEnumeratingWithState:objects:count:",&local_250,&local_180
                            ,0x10);
      if (IVar6 != 0) {
        lVar12 = *local_240;
        do {
          IVar7 = 0;
          do {
            if (*local_240 != lVar12) {
              _objc_enumerationMutation(IVar3);
            }
            IVar8 = *(ID *)(lStack_248 + IVar7 * 8);
            local_1b0 = &cf_url;
            local_198 = _objc_msgSend(IVar8,"urlString");
            local_1a8 = &cf_height;
            IVar11 = _objc_msgSend(IVar8,"height");
            _objc_msgSend(IVar11,"floatValue");
            local_190 = NSNumber::numberWithFloat_((ID)&_OBJC_CLASS___NSNumber,"numberWithFloat:");
            local_1a0 = &cf_width;
            IVar11 = _objc_msgSend(IVar8,"width");
            _objc_msgSend(IVar11,"floatValue");
            local_188 = NSNumber::numberWithFloat_((ID)&_OBJC_CLASS___NSNumber,"numberWithFloat:");
            IVar11 = NSDictionary::dictionaryWithObjects_forKeys_count_
                               ((ID)&_OBJC_CLASS___NSDictionary,
                                "dictionaryWithObjects:forKeys:count:",&local_198,&local_1b0,3);
            NSMutableArray::addObject_(IVar4,"addObject:",IVar11);
            IVar7 = IVar7 + 1;
          } while (IVar6 != IVar7);
          IVar6 = _objc_msgSend(IVar3,"countByEnumeratingWithState:objects:count:",&local_250,
                                &local_180,0x10);
        } while (IVar6 != 0);
      }
      IVar3 = NSMutableArray::count(IVar4,"count");
      if (IVar3 == 0) goto LAB_00055764;
      IVar3 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
      IVar3 = NSMutableArray::init(IVar3,"init");
      IVar6 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
      IVar6 = NSMutableArray::init(IVar6,"init");
      uStack_1e8 = 0;
      local_1f0 = 0;
      uStack_1d8 = 0;
      uStack_1e0 = 0;
      lStack_208 = 0;
      local_210 = 0;
      uStack_1f8 = 0;
      local_200 = (long *)0x0;
      IVar7 = NSMutableArray::countByEnumeratingWithState_objects_count_
                        (IVar4,"countByEnumeratingWithState:objects:count:",&local_210,auStack_100,
                         0x10);
      if (IVar7 != 0) {
        lVar12 = *local_200;
        do {
          IVar11 = 0;
          do {
            if (*local_200 != lVar12) {
              _objc_enumerationMutation(IVar4);
            }
            IVar10 = *(ID *)(lStack_208 + IVar11 * 8);
            IVar8 = _objc_msgSend(IVar10,"objectForKey:",&cf_width);
            IVar9 = NSMutableArray::indexOfObject_(IVar6,"indexOfObject:",IVar8);
            if (IVar9 == 0x7fffffffffffffff) {
              IVar9 = _objc_msgSend(IVar10,"objectForKeyedSubscript:",&cf_url);
              IVar9 = _objc_msgSend(IVar9,"containsString:",&cf__mp4_);
              if ((int)IVar9 != 0) {
                NSMutableArray::addObject_(IVar6,"addObject:",IVar8);
                NSMutableArray::addObject_(IVar3,"addObject:",IVar10);
              }
            }
            IVar11 = IVar11 + 1;
          } while (IVar7 != IVar11);
          IVar7 = NSMutableArray::countByEnumeratingWithState_objects_count_
                            (IVar4,"countByEnumeratingWithState:objects:count:",&local_210,
                             auStack_100,0x10);
        } while (IVar7 != 0);
      }
      IVar4 = NSSortDescriptor::sortDescriptorWithKey_ascending_
                        ((ID)&_OBJC_CLASS___NSSortDescriptor,"sortDescriptorWithKey:ascending:",
                         &cf_width,0);
      IVar4 = NSArray::arrayWithObjects_((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:",IVar4);
      IVar3 = NSMutableArray::sortedArrayUsingDescriptors_
                        (IVar3,"sortedArrayUsingDescriptors:",IVar4);
    }
    else {
      IVar3 = _objc_msgSend(IVar3,"valueForKey:",&cf__videoVersionDictionaries);
      IVar4 = _objc_msgSend(IVar3,"count");
      if (IVar4 == 0) {
LAB_00055764:
        IVar3 = 0;
      }
      else {
        IVar4 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
        IVar4 = NSMutableArray::init(IVar4,"init");
        IVar6 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
        IVar6 = NSMutableArray::init(IVar6,"init");
        uStack_158 = 0;
        local_160 = 0;
        uStack_148 = 0;
        uStack_150 = 0;
        lStack_178 = 0;
        local_180 = 0;
        uStack_168 = 0;
        local_170 = (long *)0x0;
        IVar7 = _objc_msgSend(IVar3,"countByEnumeratingWithState:objects:count:",&local_180,
                              auStack_100,0x10);
        if (IVar7 != 0) {
          lVar12 = *local_170;
          do {
            IVar11 = 0;
            do {
              if (*local_170 != lVar12) {
                _objc_enumerationMutation(IVar3);
              }
              IVar10 = *(ID *)(lStack_178 + IVar11 * 8);
              IVar8 = _objc_msgSend(IVar10,"objectForKey:",&cf_width);
              IVar9 = NSMutableArray::indexOfObject_(IVar6,"indexOfObject:",IVar8);
              if (IVar9 == 0x7fffffffffffffff) {
                IVar9 = _objc_msgSend(IVar10,"objectForKeyedSubscript:",&cf_url);
                IVar9 = _objc_msgSend(IVar9,"containsString:",&cf__mp4_);
                if ((int)IVar9 != 0) {
                  NSMutableArray::addObject_(IVar6,"addObject:",IVar8);
                  NSMutableArray::addObject_(IVar4,"addObject:",IVar10);
                }
              }
              IVar11 = IVar11 + 1;
            } while (IVar7 != IVar11);
            IVar7 = _objc_msgSend(IVar3,"countByEnumeratingWithState:objects:count:",&local_180,
                                  auStack_100,0x10);
          } while (IVar7 != 0);
        }
        IVar3 = NSSortDescriptor::sortDescriptorWithKey_ascending_
                          ((ID)&_OBJC_CLASS___NSSortDescriptor,"sortDescriptorWithKey:ascending:",
                           &cf_width,0);
        IVar3 = NSArray::arrayWithObjects_((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:",IVar3);
        IVar3 = NSMutableArray::sortedArrayUsingDescriptors_
                          (IVar4,"sortedArrayUsingDescriptors:",IVar3);
      }
    }
  }
  if (IVar3 != 0) {
    IVar4 = FUN_0008c218(&cf_ACTION_DOWNLOAD);
    local_288 = PTR___NSConcreteStackBlock_000e80d8;
    local_280 = 0xc2000000;
    local_278 = FUN_00055f04;
    puStack_270 = &DAT_000e8ae8;
    local_268 = param_1;
    local_260 = IVar3;
    local_258 = param_2;
    IVar3 = ABMenuActionItem::class_ABMenuActionItem__actionItemWithTitle_style_action_
                      ((ID)&objc::class_t::ABMenuActionItem,"actionItemWithTitle:style:action:",
                       IVar4,0,(ID)&local_288);
    IVar4 = _objc_alloc(&objc::class_t::ABMenuViewController);
    local_1b8 = IVar3;
    IVar3 = NSArray::arrayWithObjects_count_
                      ((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:count:",&local_1b8,1);
    IVar3 = ABMenuViewController::instance_ABMenuViewController__initWithActionItems_
                      (IVar4,"initWithActionItems:",IVar3);
    IVar4 = DLHelper::class_DLHelper__topMostController
                      ((ID)&objc::class_t::DLHelper,"topMostController");
    ABMenuViewController::
    instance_ABMenuViewController__presentedFromViewController_animated_completion_
              (IVar3,"presentedFromViewController:animated:completion:",IVar4,1,0,in_w5);
  }
LAB_00055950:
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_80) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}

