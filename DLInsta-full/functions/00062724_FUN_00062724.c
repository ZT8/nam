/* Address: 00062724 | Name: FUN_00062724 | Body bytes: 3628 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */

void FUN_00062724(long param_1)

{
  int iVar1;
  ID IVar2;
  ID IVar3;
  undefined8 uVar4;
  ID IVar5;
  ID IVar6;
  ID IVar7;
  ID IVar8;
  undefined4 in_w5;
  ID IVar9;
  ID IVar10;
  long lVar11;
  undefined *local_2a0;
  undefined8 local_298;
  code *local_290;
  undefined *puStack_288;
  undefined8 local_280;
  ID local_278;
  undefined8 local_270;
  undefined *local_268;
  undefined8 local_260;
  code *local_258;
  undefined *puStack_250;
  undefined8 local_248;
  ID local_240;
  undefined8 local_238;
  undefined8 local_230;
  long lStack_228;
  long *local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  long lStack_1e8;
  long *local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  ID local_1b0;
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
  ID local_f0 [16];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_000e8260;
  IVar2 = _objc_msgSend(*(ID *)(param_1 + 0x20),"valueForKey:",&cf__currentIndex);
  IVar2 = _objc_msgSend(IVar2,"integerValue");
  IVar2 = _objc_msgSend(*(ID *)(param_1 + 0x28),"objectAtIndexedSubscript:",IVar2);
  IVar3 = _objc_msgSend(IVar2,"itemMediaType");
  if (IVar3 == 1) {
    IVar3 = _objc_msgSend(IVar2,"photo");
    if (DAT_000fffc8 == 0) {
      DAT_000fffc8 = _objc_getClass("IGPhoto");
    }
    uVar4 = _objc_retainAutorelease();
    IVar3 = _objc_msgSend(IVar3,"isMemberOfClass:",uVar4);
    if ((int)IVar3 != 0) {
      IVar2 = _objc_msgSend(IVar2,"photo");
      if (IVar2 == 0) {
        IVar2 = 0;
      }
      else {
        IVar2 = _objc_msgSend(IVar2,"valueForKey:",&cf__originalImageVersions);
        local_f0[0] = NSSortDescriptor::sortDescriptorWithKey_ascending_
                                ((ID)&_OBJC_CLASS___NSSortDescriptor,
                                 "sortDescriptorWithKey:ascending:",&cf_width,0);
        IVar3 = NSArray::arrayWithObjects_count_
                          ((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:count:",local_f0,1);
        IVar2 = _objc_msgSend(IVar2,"sortedArrayUsingDescriptors:",IVar3);
      }
      IVar3 = _objc_msgSend(IVar2,"count");
      if (IVar3 != 0) {
        IVar3 = FUN_0008c218(&cf_ACTION_DOWNLOAD);
        local_268 = PTR___NSConcreteStackBlock_000e80d8;
        local_260 = 0xc2000000;
        local_258 = FUN_00063aec;
        puStack_250 = &DAT_000e8ae8;
        local_248 = *(undefined8 *)(param_1 + 0x30);
        local_238 = *(undefined8 *)(param_1 + 0x38);
        local_240 = IVar2;
        IVar2 = ABMenuActionItem::class_ABMenuActionItem__actionItemWithTitle_style_action_
                          ((ID)&objc::class_t::ABMenuActionItem,"actionItemWithTitle:style:action:",
                           IVar3,0,(ID)&local_268);
        IVar3 = _objc_alloc(&objc::class_t::ABMenuViewController);
        local_1a8 = IVar2;
        IVar2 = NSArray::arrayWithObjects_count_
                          ((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:count:",&local_1a8,1);
        IVar2 = ABMenuViewController::instance_ABMenuViewController__initWithActionItems_
                          (IVar3,"initWithActionItems:",IVar2);
        IVar3 = DLHelper::class_DLHelper__topMostController
                          ((ID)&objc::class_t::DLHelper,"topMostController");
        ABMenuViewController::
        instance_ABMenuViewController__presentedFromViewController_animated_completion_
                  (IVar2,"presentedFromViewController:animated:completion:",IVar3,1,0,in_w5);
      }
      goto LAB_000634f0;
    }
  }
  IVar3 = _objc_msgSend(IVar2,"itemMediaType");
  if (IVar3 != 2) goto LAB_000634f0;
  IVar3 = _objc_msgSend(IVar2,"video");
  if (DAT_000fffa8 == 0) {
    DAT_000fffa8 = _objc_getClass("IGVideo");
  }
  uVar4 = _objc_retainAutorelease();
  IVar3 = _objc_msgSend(IVar3,"isMemberOfClass:",uVar4);
  if ((int)IVar3 == 0) goto LAB_000634f0;
  IVar2 = _objc_msgSend(IVar2,"video");
  if (IVar2 == 0) {
    IVar2 = 0;
  }
  else {
    iVar1 = FUN_0008ce2c(IVar2,"_videoVersionDictionaries");
    if (iVar1 == 0) {
      IVar3 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
      IVar3 = NSMutableArray::init(IVar3,"init");
      IVar5 = _objc_msgSend(IVar2,"videoVersions");
      IVar5 = _objc_msgSend(IVar5,"count");
      if (IVar5 == 0) {
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
        IVar5 = _objc_msgSend(IVar2,"countByEnumeratingWithState:objects:count:",&local_230,
                              &local_170,0x10);
        if (IVar5 != 0) {
          lVar11 = *local_220;
          do {
            IVar6 = 0;
            do {
              if (*local_220 != lVar11) {
                _objc_enumerationMutation(IVar2);
              }
              IVar7 = *(ID *)(lStack_228 + IVar6 * 8);
              local_1a0 = &cf_url;
              local_188 = _objc_msgSend(IVar7,"urlString");
              local_198 = &cf_height;
              IVar10 = _objc_msgSend(IVar7,"height");
              _objc_msgSend(IVar10,"floatValue");
              local_180 = NSNumber::numberWithFloat_((ID)&_OBJC_CLASS___NSNumber,"numberWithFloat:")
              ;
              local_190 = &cf_width;
              IVar10 = _objc_msgSend(IVar7,"width");
              _objc_msgSend(IVar10,"floatValue");
              local_178 = NSNumber::numberWithFloat_((ID)&_OBJC_CLASS___NSNumber,"numberWithFloat:")
              ;
              IVar10 = NSDictionary::dictionaryWithObjects_forKeys_count_
                                 ((ID)&_OBJC_CLASS___NSDictionary,
                                  "dictionaryWithObjects:forKeys:count:",&local_188,&local_1a0,3);
              NSMutableArray::addObject_(IVar3,"addObject:",IVar10);
              IVar6 = IVar6 + 1;
            } while (IVar5 != IVar6);
            IVar5 = _objc_msgSend(IVar2,"countByEnumeratingWithState:objects:count:",&local_230,
                                  &local_170,0x10);
          } while (IVar5 != 0);
        }
        IVar2 = NSMutableArray::count(IVar3,"count");
        if (IVar2 == 0) goto LAB_00063314;
        IVar2 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
        IVar2 = NSMutableArray::init(IVar2,"init");
        IVar5 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
        IVar5 = NSMutableArray::init(IVar5,"init");
        uStack_1c8 = 0;
        local_1d0 = 0;
        uStack_1b8 = 0;
        uStack_1c0 = 0;
        lStack_1e8 = 0;
        local_1f0 = 0;
        uStack_1d8 = 0;
        local_1e0 = (long *)0x0;
        IVar6 = NSMutableArray::countByEnumeratingWithState_objects_count_
                          (IVar3,"countByEnumeratingWithState:objects:count:",&local_1f0,local_f0,
                           0x10);
        if (IVar6 != 0) {
          lVar11 = *local_1e0;
          do {
            IVar10 = 0;
            do {
              if (*local_1e0 != lVar11) {
                _objc_enumerationMutation(IVar3);
              }
              IVar9 = *(ID *)(lStack_1e8 + IVar10 * 8);
              IVar7 = _objc_msgSend(IVar9,"objectForKey:",&cf_width);
              IVar8 = NSMutableArray::indexOfObject_(IVar5,"indexOfObject:",IVar7);
              if (IVar8 == 0x7fffffffffffffff) {
                IVar8 = _objc_msgSend(IVar9,"objectForKeyedSubscript:",&cf_url);
                IVar8 = _objc_msgSend(IVar8,"containsString:",&cf__mp4_);
                if ((int)IVar8 != 0) {
                  NSMutableArray::addObject_(IVar5,"addObject:",IVar7);
                  NSMutableArray::addObject_(IVar2,"addObject:",IVar9);
                }
              }
              IVar10 = IVar10 + 1;
            } while (IVar6 != IVar10);
            IVar6 = NSMutableArray::countByEnumeratingWithState_objects_count_
                              (IVar3,"countByEnumeratingWithState:objects:count:",&local_1f0,
                               local_f0,0x10);
          } while (IVar6 != 0);
        }
        IVar3 = NSSortDescriptor::sortDescriptorWithKey_ascending_
                          ((ID)&_OBJC_CLASS___NSSortDescriptor,"sortDescriptorWithKey:ascending:",
                           &cf_width,0);
        IVar3 = NSArray::arrayWithObjects_((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:",IVar3);
        IVar2 = NSMutableArray::sortedArrayUsingDescriptors_
                          (IVar2,"sortedArrayUsingDescriptors:",IVar3);
      }
    }
    else {
      IVar2 = _objc_msgSend(IVar2,"valueForKey:",&cf__videoVersionDictionaries);
      IVar3 = _objc_msgSend(IVar2,"count");
      if (IVar3 == 0) {
LAB_00063314:
        IVar2 = 0;
      }
      else {
        IVar3 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
        IVar3 = NSMutableArray::init(IVar3,"init");
        IVar5 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
        IVar5 = NSMutableArray::init(IVar5,"init");
        uStack_148 = 0;
        local_150 = 0;
        uStack_138 = 0;
        uStack_140 = 0;
        lStack_168 = 0;
        local_170 = 0;
        uStack_158 = 0;
        local_160 = (long *)0x0;
        IVar6 = _objc_msgSend(IVar2,"countByEnumeratingWithState:objects:count:",&local_170,local_f0
                              ,0x10);
        if (IVar6 != 0) {
          lVar11 = *local_160;
          do {
            IVar10 = 0;
            do {
              if (*local_160 != lVar11) {
                _objc_enumerationMutation(IVar2);
              }
              IVar9 = *(ID *)(lStack_168 + IVar10 * 8);
              IVar7 = _objc_msgSend(IVar9,"objectForKey:",&cf_width);
              IVar8 = NSMutableArray::indexOfObject_(IVar5,"indexOfObject:",IVar7);
              if (IVar8 == 0x7fffffffffffffff) {
                IVar8 = _objc_msgSend(IVar9,"objectForKeyedSubscript:",&cf_url);
                IVar8 = _objc_msgSend(IVar8,"containsString:",&cf__mp4_);
                if ((int)IVar8 != 0) {
                  NSMutableArray::addObject_(IVar5,"addObject:",IVar7);
                  NSMutableArray::addObject_(IVar3,"addObject:",IVar9);
                }
              }
              IVar10 = IVar10 + 1;
            } while (IVar6 != IVar10);
            IVar6 = _objc_msgSend(IVar2,"countByEnumeratingWithState:objects:count:",&local_170,
                                  local_f0,0x10);
          } while (IVar6 != 0);
        }
        IVar2 = NSSortDescriptor::sortDescriptorWithKey_ascending_
                          ((ID)&_OBJC_CLASS___NSSortDescriptor,"sortDescriptorWithKey:ascending:",
                           &cf_width,0);
        IVar2 = NSArray::arrayWithObjects_((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:",IVar2);
        IVar2 = NSMutableArray::sortedArrayUsingDescriptors_
                          (IVar3,"sortedArrayUsingDescriptors:",IVar2);
      }
    }
  }
  IVar3 = NSMutableArray::count(IVar2,"count");
  if (IVar3 != 0) {
    IVar3 = FUN_0008c218(&cf_ACTION_DOWNLOAD);
    local_2a0 = PTR___NSConcreteStackBlock_000e80d8;
    local_298 = 0xc2000000;
    local_290 = FUN_0006412c;
    puStack_288 = &DAT_000e8ae8;
    local_280 = *(undefined8 *)(param_1 + 0x30);
    local_270 = *(undefined8 *)(param_1 + 0x38);
    local_278 = IVar2;
    IVar2 = ABMenuActionItem::class_ABMenuActionItem__actionItemWithTitle_style_action_
                      ((ID)&objc::class_t::ABMenuActionItem,"actionItemWithTitle:style:action:",
                       IVar3,0,(ID)&local_2a0);
    IVar3 = _objc_alloc(&objc::class_t::ABMenuViewController);
    local_1b0 = IVar2;
    IVar2 = NSArray::arrayWithObjects_count_
                      ((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:count:",&local_1b0,1);
    IVar2 = ABMenuViewController::instance_ABMenuViewController__initWithActionItems_
                      (IVar3,"initWithActionItems:",IVar2);
    IVar3 = DLHelper::class_DLHelper__topMostController
                      ((ID)&objc::class_t::DLHelper,"topMostController");
    ABMenuViewController::
    instance_ABMenuViewController__presentedFromViewController_animated_completion_
              (IVar2,"presentedFromViewController:animated:completion:",IVar3,1,0,in_w5);
  }
LAB_000634f0:
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}

