/* Address: 00068424 | Name: FUN_00068424 | Body bytes: 3564 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */

void FUN_00068424(ID param_1,undefined8 param_2,ID param_3,undefined8 param_4,undefined8 param_5,
                 undefined4 param_6)

{
  int iVar1;
  ID IVar2;
  undefined8 uVar3;
  ID IVar4;
  undefined8 uVar5;
  ID IVar6;
  ID IVar7;
  ID IVar8;
  ID IVar9;
  undefined *puVar10;
  ID IVar11;
  ID IVar12;
  long lVar13;
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
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined *local_140;
  undefined8 local_138;
  code *local_130;
  undefined *puStack_128;
  ID local_120;
  ID local_118;
  undefined8 local_110;
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
  IVar2 = _objc_msgSend(param_3,"state");
  if (IVar2 != 1) goto LAB_000691ac;
  uVar3 = _NSStringFromSelector(param_2);
  IVar2 = _objc_msgSend(param_1,"respondsToSelector:","post");
  if ((int)IVar2 == 0) goto LAB_000691ac;
  IVar2 = _objc_msgSend(param_1,"performSelector:","post");
  IVar4 = _objc_msgSend(IVar2,"itemMediaType");
  if (IVar4 != 2) {
    IVar4 = _objc_msgSend(IVar2,"itemMediaType");
    if (IVar4 == 8) {
      IVar4 = FUN_0008c218(&cf_ACTION_ITEM);
      puVar10 = PTR___NSConcreteStackBlock_000e80d8;
      local_1c0 = PTR___NSConcreteStackBlock_000e80d8;
      lStack_1b8 = 0xc2000000;
      local_1b0 = FUN_000564d8;
      puStack_1a8 = &DAT_000e8b18;
      local_1a0 = param_1;
      uStack_198 = uVar3;
      IVar4 = ABMenuActionItem::class_ABMenuActionItem__actionItemWithTitle_style_action_
                        ((ID)&objc::class_t::ABMenuActionItem,"actionItemWithTitle:style:action:",
                         IVar4,0,(ID)&local_1c0);
      IVar6 = FUN_0008c218(&cf_VIEW_ALL_ITEMS);
      local_140 = puVar10;
      local_138 = 0xc2000000;
      local_130 = FUN_00057ac0;
      puStack_128 = &DAT_000e8ae8;
      local_120 = IVar2;
      local_118 = param_1;
      local_110 = uVar3;
      IVar2 = ABMenuActionItem::class_ABMenuActionItem__actionItemWithTitle_style_action_
                        ((ID)&objc::class_t::ABMenuActionItem,"actionItemWithTitle:style:action:",
                         IVar6,0,(ID)&local_140);
      IVar6 = _objc_alloc(&objc::class_t::ABMenuViewController);
      local_c0 = IVar4;
      IStack_b8 = IVar2;
      IVar2 = NSArray::arrayWithObjects_count_
                        ((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:count:",&local_c0,2);
      IVar2 = ABMenuViewController::instance_ABMenuViewController__initWithActionItems_
                        (IVar6,"initWithActionItems:",IVar2);
      IVar4 = DLHelper::class_DLHelper__topMostController
                        ((ID)&objc::class_t::DLHelper,"topMostController");
      ABMenuViewController::
      instance_ABMenuViewController__presentedFromViewController_animated_completion_
                (IVar2,"presentedFromViewController:animated:completion:",IVar4,1,0,param_6);
    }
    goto LAB_000691ac;
  }
  IVar4 = _objc_msgSend(IVar2,"video");
  if (DAT_000fffa8 == 0) {
    DAT_000fffa8 = _objc_getClass("IGVideo");
  }
  uVar5 = _objc_retainAutorelease();
  IVar4 = _objc_msgSend(IVar4,"isMemberOfClass:",uVar5);
  if ((IVar4 & 1) == 0) goto LAB_000691ac;
  IVar2 = _objc_msgSend(IVar2,"video");
  if (IVar2 == 0) {
    IVar2 = 0;
  }
  else {
    iVar1 = FUN_0008ce2c(IVar2,"_videoVersionDictionaries");
    if (iVar1 == 0) {
      IVar4 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
      IVar4 = NSMutableArray::init(IVar4,"init");
      IVar6 = _objc_msgSend(IVar2,"videoVersions");
      IVar6 = _objc_msgSend(IVar6,"count");
      if (IVar6 == 0) {
        IVar2 = 0;
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
        IVar2 = _objc_msgSend(IVar2,"videoVersions");
        IVar6 = _objc_msgSend(IVar2,"countByEnumeratingWithState:objects:count:",&local_230,
                              &local_1c0,0x10);
        if (IVar6 != 0) {
          lVar13 = *local_220;
          do {
            IVar7 = 0;
            do {
              if (*local_220 != lVar13) {
                _objc_enumerationMutation(IVar2);
              }
              IVar8 = *(ID *)(lStack_228 + IVar7 * 8);
              local_1f0 = &cf_url;
              local_1d8 = _objc_msgSend(IVar8,"urlString");
              local_1e8 = &cf_height;
              IVar11 = _objc_msgSend(IVar8,"height");
              _objc_msgSend(IVar11,"floatValue");
              local_1d0 = NSNumber::numberWithFloat_((ID)&_OBJC_CLASS___NSNumber,"numberWithFloat:")
              ;
              local_1e0 = &cf_width;
              IVar11 = _objc_msgSend(IVar8,"width");
              _objc_msgSend(IVar11,"floatValue");
              local_1c8 = NSNumber::numberWithFloat_((ID)&_OBJC_CLASS___NSNumber,"numberWithFloat:")
              ;
              IVar11 = NSDictionary::dictionaryWithObjects_forKeys_count_
                                 ((ID)&_OBJC_CLASS___NSDictionary,
                                  "dictionaryWithObjects:forKeys:count:",&local_1d8,&local_1f0,3);
              NSMutableArray::addObject_(IVar4,"addObject:",IVar11);
              IVar7 = IVar7 + 1;
            } while (IVar6 != IVar7);
            IVar6 = _objc_msgSend(IVar2,"countByEnumeratingWithState:objects:count:",&local_230,
                                  &local_1c0,0x10);
          } while (IVar6 != 0);
        }
        IVar2 = NSMutableArray::count(IVar4,"count");
        if (IVar2 == 0) goto LAB_00068fd4;
        IVar2 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
        IVar2 = NSMutableArray::init(IVar2,"init");
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
                          (IVar4,"countByEnumeratingWithState:objects:count:",&local_c0,&local_140,
                           0x10);
        if (IVar7 != 0) {
          lVar13 = *local_b0;
          do {
            IVar11 = 0;
            do {
              if (*local_b0 != lVar13) {
                _objc_enumerationMutation(IVar4);
              }
              IVar12 = *(ID *)(IStack_b8 + IVar11 * 8);
              IVar8 = _objc_msgSend(IVar12,"objectForKey:",&cf_width);
              IVar9 = NSMutableArray::indexOfObject_(IVar6,"indexOfObject:",IVar8);
              if (IVar9 == 0x7fffffffffffffff) {
                IVar9 = _objc_msgSend(IVar12,"objectForKeyedSubscript:",&cf_url);
                IVar9 = _objc_msgSend(IVar9,"containsString:",&cf__mp4_);
                if ((int)IVar9 != 0) {
                  NSMutableArray::addObject_(IVar6,"addObject:",IVar8);
                  NSMutableArray::addObject_(IVar2,"addObject:",IVar12);
                }
              }
              IVar11 = IVar11 + 1;
            } while (IVar7 != IVar11);
            IVar7 = NSMutableArray::countByEnumeratingWithState_objects_count_
                              (IVar4,"countByEnumeratingWithState:objects:count:",&local_c0,
                               &local_140,0x10);
          } while (IVar7 != 0);
        }
        IVar4 = NSSortDescriptor::sortDescriptorWithKey_ascending_
                          ((ID)&_OBJC_CLASS___NSSortDescriptor,"sortDescriptorWithKey:ascending:",
                           &cf_width,0);
        IVar4 = NSArray::arrayWithObjects_((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:",IVar4);
        IVar2 = NSMutableArray::sortedArrayUsingDescriptors_
                          (IVar2,"sortedArrayUsingDescriptors:",IVar4);
      }
    }
    else {
      IVar2 = _objc_msgSend(IVar2,"valueForKey:",&cf__videoVersionDictionaries);
      IVar4 = _objc_msgSend(IVar2,"count");
      if (IVar4 == 0) {
LAB_00068fd4:
        IVar2 = 0;
      }
      else {
        IVar4 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
        IVar4 = NSMutableArray::init(IVar4,"init");
        IVar6 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
        IVar6 = NSMutableArray::init(IVar6,"init");
        uStack_198 = 0;
        local_1a0 = 0;
        uStack_188 = 0;
        uStack_190 = 0;
        lStack_1b8 = 0;
        local_1c0 = (undefined *)0x0;
        puStack_1a8 = (undefined *)0x0;
        local_1b0 = (code *)0x0;
        IVar7 = _objc_msgSend(IVar2,"countByEnumeratingWithState:objects:count:",&local_1c0,
                              &local_140,0x10);
        if (IVar7 != 0) {
          lVar13 = *(long *)local_1b0;
          do {
            IVar11 = 0;
            do {
              if (*(long *)local_1b0 != lVar13) {
                _objc_enumerationMutation(IVar2);
              }
              IVar12 = *(ID *)(lStack_1b8 + IVar11 * 8);
              IVar8 = _objc_msgSend(IVar12,"objectForKey:",&cf_width);
              IVar9 = NSMutableArray::indexOfObject_(IVar6,"indexOfObject:",IVar8);
              if (IVar9 == 0x7fffffffffffffff) {
                IVar9 = _objc_msgSend(IVar12,"objectForKeyedSubscript:",&cf_url);
                IVar9 = _objc_msgSend(IVar9,"containsString:",&cf__mp4_);
                if ((int)IVar9 != 0) {
                  NSMutableArray::addObject_(IVar6,"addObject:",IVar8);
                  NSMutableArray::addObject_(IVar4,"addObject:",IVar12);
                }
              }
              IVar11 = IVar11 + 1;
            } while (IVar7 != IVar11);
            IVar7 = _objc_msgSend(IVar2,"countByEnumeratingWithState:objects:count:",&local_1c0,
                                  &local_140,0x10);
          } while (IVar7 != 0);
        }
        IVar2 = NSSortDescriptor::sortDescriptorWithKey_ascending_
                          ((ID)&_OBJC_CLASS___NSSortDescriptor,"sortDescriptorWithKey:ascending:",
                           &cf_width,0);
        IVar2 = NSArray::arrayWithObjects_((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:",IVar2);
        IVar2 = NSMutableArray::sortedArrayUsingDescriptors_
                          (IVar4,"sortedArrayUsingDescriptors:",IVar2);
      }
    }
  }
  if (IVar2 != 0) {
    IVar4 = FUN_0008c218(&cf_ACTION_DOWNLOAD);
    local_140 = PTR___NSConcreteStackBlock_000e80d8;
    local_138 = 0xc2000000;
    local_130 = FUN_00055f04;
    puStack_128 = &DAT_000e8ae8;
    local_120 = param_1;
    local_118 = IVar2;
    local_110 = uVar3;
    puVar10 = (undefined *)
              ABMenuActionItem::class_ABMenuActionItem__actionItemWithTitle_style_action_
                        ((ID)&objc::class_t::ABMenuActionItem,"actionItemWithTitle:style:action:",
                         IVar4,0,(ID)&local_140);
    IVar2 = _objc_alloc(&objc::class_t::ABMenuViewController);
    local_1c0 = puVar10;
    IVar4 = NSArray::arrayWithObjects_count_
                      ((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:count:",&local_1c0,1);
    IVar2 = ABMenuViewController::instance_ABMenuViewController__initWithActionItems_
                      (IVar2,"initWithActionItems:",IVar4);
    IVar4 = DLHelper::class_DLHelper__topMostController
                      ((ID)&objc::class_t::DLHelper,"topMostController");
    ABMenuViewController::
    instance_ABMenuViewController__presentedFromViewController_animated_completion_
              (IVar2,"presentedFromViewController:animated:completion:",IVar4,1,0,param_6);
  }
LAB_000691ac:
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_80) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}

