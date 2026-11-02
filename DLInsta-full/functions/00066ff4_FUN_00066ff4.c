/* Address: 00066ff4 | Name: FUN_00066ff4 | Body bytes: 3492 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */

void FUN_00066ff4(ID param_1,undefined8 param_2,ID param_3,undefined8 param_4,undefined8 param_5,
                 undefined4 param_6)

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
  ID IVar10;
  ID IVar11;
  long lVar12;
  undefined *local_2e0;
  undefined8 local_2d8;
  code *local_2d0;
  undefined *puStack_2c8;
  ID local_2c0;
  ID IStack_2b8;
  undefined8 local_2b0;
  undefined *local_2a8;
  undefined8 local_2a0;
  code *local_298;
  undefined *puStack_290;
  ID local_288;
  undefined8 uStack_280;
  undefined *local_278;
  undefined8 local_270;
  code *local_268;
  undefined *puStack_260;
  ID local_258;
  ID local_250;
  undefined8 local_248;
  undefined8 local_240;
  long lStack_238;
  long *local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  long lStack_1f8;
  long *local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  ID local_1b8;
  ID IStack_1b0;
  ID local_1a8;
  cfstringStruct *local_1a0;
  cfstringStruct *local_198;
  cfstringStruct *local_190;
  ID local_188;
  ID local_180;
  ID local_178;
  undefined8 local_170;
  long lStack_168;
  long *local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined1 auStack_f0 [128];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_000e8260;
  IVar3 = _objc_msgSend(param_3,"state");
  if ((IVar3 != 1) ||
     (IVar3 = _objc_msgSend(param_1,"respondsToSelector:","delegate"), (IVar3 & 1) == 0))
  goto LAB_00067d30;
  IVar3 = _objc_msgSend(param_1,"delegate");
  if (DAT_00100010 == 0) {
    DAT_00100010 = _objc_getClass("IGFeedItemVideoCell");
  }
  uVar4 = _objc_retainAutorelease();
  IVar3 = _objc_msgSend(IVar3,"isMemberOfClass:",uVar4);
  if ((int)IVar3 == 0) goto LAB_00067d30;
  IVar3 = _objc_msgSend(param_1,"delegate");
  IVar3 = _objc_msgSend(IVar3,"valueForKey:",&cf__post);
  IVar5 = _objc_msgSend(IVar3,"itemMediaType");
  if (IVar5 != 2) {
    IVar5 = _objc_msgSend(IVar3,"itemMediaType");
    if (IVar5 == 8) {
      IVar5 = FUN_0008c218(&cf_ACTION_ITEM);
      puVar1 = PTR___NSConcreteStackBlock_000e80d8;
      local_2a8 = PTR___NSConcreteStackBlock_000e80d8;
      local_2a0 = 0xc0000000;
      local_298 = FUN_00076c08;
      puStack_290 = &DAT_000e87b8;
      local_288 = param_1;
      uStack_280 = param_2;
      IVar5 = ABMenuActionItem::class_ABMenuActionItem__actionItemWithTitle_style_action_
                        ((ID)&objc::class_t::ABMenuActionItem,"actionItemWithTitle:style:action:",
                         IVar5,0,(ID)&local_2a8);
      IVar6 = FUN_0008c218(&cf_VIEW_ALL_ITEMS);
      local_2e0 = puVar1;
      local_2d8 = 0xc2000000;
      local_2d0 = FUN_000780a8;
      puStack_2c8 = &DAT_000e8808;
      local_2c0 = IVar3;
      IStack_2b8 = param_1;
      local_2b0 = param_2;
      IVar3 = ABMenuActionItem::class_ABMenuActionItem__actionItemWithTitle_style_action_
                        ((ID)&objc::class_t::ABMenuActionItem,"actionItemWithTitle:style:action:",
                         IVar6,0,(ID)&local_2e0);
      IVar6 = _objc_alloc(&objc::class_t::ABMenuViewController);
      local_1b8 = IVar5;
      IStack_1b0 = IVar3;
      IVar3 = NSArray::arrayWithObjects_count_
                        ((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:count:",&local_1b8,2);
      IVar3 = ABMenuViewController::instance_ABMenuViewController__initWithActionItems_
                        (IVar6,"initWithActionItems:",IVar3);
      IVar5 = DLHelper::class_DLHelper__topMostController
                        ((ID)&objc::class_t::DLHelper,"topMostController");
      ABMenuViewController::
      instance_ABMenuViewController__presentedFromViewController_animated_completion_
                (IVar3,"presentedFromViewController:animated:completion:",IVar5,1,0,param_6);
    }
    goto LAB_00067d30;
  }
  IVar3 = _objc_msgSend(param_1,"video");
  if (DAT_000fffa8 == 0) {
    DAT_000fffa8 = _objc_getClass("IGVideo");
  }
  uVar4 = _objc_retainAutorelease();
  IVar3 = _objc_msgSend(IVar3,"isMemberOfClass:",uVar4);
  if ((IVar3 & 1) == 0) goto LAB_00067d30;
  IVar3 = _objc_msgSend(param_1,"video");
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
        uStack_218 = 0;
        local_220 = 0;
        uStack_208 = 0;
        uStack_210 = 0;
        lStack_238 = 0;
        local_240 = 0;
        uStack_228 = 0;
        local_230 = (long *)0x0;
        IVar3 = _objc_msgSend(IVar3,"videoVersions");
        IVar6 = _objc_msgSend(IVar3,"countByEnumeratingWithState:objects:count:",&local_240,
                              &local_170,0x10);
        if (IVar6 != 0) {
          lVar12 = *local_230;
          do {
            IVar7 = 0;
            do {
              if (*local_230 != lVar12) {
                _objc_enumerationMutation(IVar3);
              }
              IVar8 = *(ID *)(lStack_238 + IVar7 * 8);
              local_1a0 = &cf_url;
              local_188 = _objc_msgSend(IVar8,"urlString");
              local_198 = &cf_height;
              IVar10 = _objc_msgSend(IVar8,"height");
              _objc_msgSend(IVar10,"floatValue");
              local_180 = NSNumber::numberWithFloat_((ID)&_OBJC_CLASS___NSNumber,"numberWithFloat:")
              ;
              local_190 = &cf_width;
              IVar10 = _objc_msgSend(IVar8,"width");
              _objc_msgSend(IVar10,"floatValue");
              local_178 = NSNumber::numberWithFloat_((ID)&_OBJC_CLASS___NSNumber,"numberWithFloat:")
              ;
              IVar10 = NSDictionary::dictionaryWithObjects_forKeys_count_
                                 ((ID)&_OBJC_CLASS___NSDictionary,
                                  "dictionaryWithObjects:forKeys:count:",&local_188,&local_1a0,3);
              NSMutableArray::addObject_(IVar5,"addObject:",IVar10);
              IVar7 = IVar7 + 1;
            } while (IVar6 != IVar7);
            IVar6 = _objc_msgSend(IVar3,"countByEnumeratingWithState:objects:count:",&local_240,
                                  &local_170,0x10);
          } while (IVar6 != 0);
        }
        IVar3 = NSMutableArray::count(IVar5,"count");
        if (IVar3 == 0) goto LAB_00067b78;
        IVar3 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
        IVar3 = NSMutableArray::init(IVar3,"init");
        IVar6 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
        IVar6 = NSMutableArray::init(IVar6,"init");
        uStack_1d8 = 0;
        local_1e0 = 0;
        uStack_1c8 = 0;
        uStack_1d0 = 0;
        lStack_1f8 = 0;
        local_200 = 0;
        uStack_1e8 = 0;
        local_1f0 = (long *)0x0;
        IVar7 = NSMutableArray::countByEnumeratingWithState_objects_count_
                          (IVar5,"countByEnumeratingWithState:objects:count:",&local_200,auStack_f0,
                           0x10);
        if (IVar7 != 0) {
          lVar12 = *local_1f0;
          do {
            IVar10 = 0;
            do {
              if (*local_1f0 != lVar12) {
                _objc_enumerationMutation(IVar5);
              }
              IVar11 = *(ID *)(lStack_1f8 + IVar10 * 8);
              IVar8 = _objc_msgSend(IVar11,"objectForKey:",&cf_width);
              IVar9 = NSMutableArray::indexOfObject_(IVar6,"indexOfObject:",IVar8);
              if (IVar9 == 0x7fffffffffffffff) {
                IVar9 = _objc_msgSend(IVar11,"objectForKeyedSubscript:",&cf_url);
                IVar9 = _objc_msgSend(IVar9,"containsString:",&cf__mp4_);
                if ((int)IVar9 != 0) {
                  NSMutableArray::addObject_(IVar6,"addObject:",IVar8);
                  NSMutableArray::addObject_(IVar3,"addObject:",IVar11);
                }
              }
              IVar10 = IVar10 + 1;
            } while (IVar7 != IVar10);
            IVar7 = NSMutableArray::countByEnumeratingWithState_objects_count_
                              (IVar5,"countByEnumeratingWithState:objects:count:",&local_200,
                               auStack_f0,0x10);
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
LAB_00067b78:
        IVar3 = 0;
      }
      else {
        IVar5 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
        IVar5 = NSMutableArray::init(IVar5,"init");
        IVar6 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
        IVar6 = NSMutableArray::init(IVar6,"init");
        uStack_148 = 0;
        local_150 = 0;
        uStack_138 = 0;
        uStack_140 = 0;
        lStack_168 = 0;
        local_170 = 0;
        uStack_158 = 0;
        local_160 = (long *)0x0;
        IVar7 = _objc_msgSend(IVar3,"countByEnumeratingWithState:objects:count:",&local_170,
                              auStack_f0,0x10);
        if (IVar7 != 0) {
          lVar12 = *local_160;
          do {
            IVar10 = 0;
            do {
              if (*local_160 != lVar12) {
                _objc_enumerationMutation(IVar3);
              }
              IVar11 = *(ID *)(lStack_168 + IVar10 * 8);
              IVar8 = _objc_msgSend(IVar11,"objectForKey:",&cf_width);
              IVar9 = NSMutableArray::indexOfObject_(IVar6,"indexOfObject:",IVar8);
              if (IVar9 == 0x7fffffffffffffff) {
                IVar9 = _objc_msgSend(IVar11,"objectForKeyedSubscript:",&cf_url);
                IVar9 = _objc_msgSend(IVar9,"containsString:",&cf__mp4_);
                if ((int)IVar9 != 0) {
                  NSMutableArray::addObject_(IVar6,"addObject:",IVar8);
                  NSMutableArray::addObject_(IVar5,"addObject:",IVar11);
                }
              }
              IVar10 = IVar10 + 1;
            } while (IVar7 != IVar10);
            IVar7 = _objc_msgSend(IVar3,"countByEnumeratingWithState:objects:count:",&local_170,
                                  auStack_f0,0x10);
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
    local_278 = PTR___NSConcreteStackBlock_000e80d8;
    local_270 = 0xc2000000;
    local_268 = FUN_0007660c;
    puStack_260 = &DAT_000e8808;
    local_258 = IVar3;
    local_250 = param_1;
    local_248 = param_2;
    IVar3 = ABMenuActionItem::class_ABMenuActionItem__actionItemWithTitle_style_action_
                      ((ID)&objc::class_t::ABMenuActionItem,"actionItemWithTitle:style:action:",
                       IVar5,0,(ID)&local_278);
    IVar5 = _objc_alloc(&objc::class_t::ABMenuViewController);
    local_1a8 = IVar3;
    IVar3 = NSArray::arrayWithObjects_count_
                      ((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:count:",&local_1a8,1);
    IVar3 = ABMenuViewController::instance_ABMenuViewController__initWithActionItems_
                      (IVar5,"initWithActionItems:",IVar3);
    IVar5 = DLHelper::class_DLHelper__topMostController
                      ((ID)&objc::class_t::DLHelper,"topMostController");
    ABMenuViewController::
    instance_ABMenuViewController__presentedFromViewController_animated_completion_
              (IVar3,"presentedFromViewController:animated:completion:",IVar5,1,0,param_6);
  }
LAB_00067d30:
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}

