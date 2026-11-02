/* Address: 00076c08 | Name: FUN_00076c08 | Body bytes: 2720 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */

void FUN_00076c08(long param_1)

{
  int iVar1;
  ID IVar2;
  undefined8 uVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  ID IVar7;
  ID IVar8;
  undefined4 in_w5;
  ID IVar9;
  long lVar10;
  ID IVar11;
  undefined *local_278;
  undefined8 local_270;
  code *local_268;
  undefined *puStack_260;
  ID local_258;
  undefined8 local_250;
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
  undefined1 auStack_f8 [128];
  long local_78;
  
  local_78 = *(long *)PTR____stack_chk_guard_000e8260;
  IVar2 = _objc_msgSend(*(ID *)(param_1 + 0x20),"video");
  if (DAT_000fffa8 == 0) {
    DAT_000fffa8 = _objc_getClass("IGVideo");
  }
  uVar3 = _objc_retainAutorelease();
  IVar2 = _objc_msgSend(IVar2,"isMemberOfClass:",uVar3);
  if ((IVar2 & 1) == 0) goto LAB_00077654;
  IVar2 = _objc_msgSend(*(ID *)(param_1 + 0x20),"video");
  if (IVar2 == 0) {
    IVar2 = 0;
  }
  else {
    iVar1 = FUN_0008ce2c(IVar2,"_videoVersionDictionaries");
    if (iVar1 == 0) {
      IVar4 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
      IVar4 = NSMutableArray::init(IVar4,"init");
      IVar5 = _objc_msgSend(IVar2,"videoVersions");
      IVar5 = _objc_msgSend(IVar5,"count");
      if (IVar5 == 0) {
        IVar2 = 0;
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
        IVar2 = _objc_msgSend(IVar2,"videoVersions");
        IVar5 = _objc_msgSend(IVar2,"countByEnumeratingWithState:objects:count:",&local_240,
                              &local_180,0x10);
        if (IVar5 != 0) {
          lVar10 = *local_230;
          do {
            IVar6 = 0;
            do {
              if (*local_230 != lVar10) {
                _objc_enumerationMutation(IVar2);
              }
              IVar7 = *(ID *)(lStack_238 + IVar6 * 8);
              local_1b0 = &cf_url;
              local_198 = _objc_msgSend(IVar7,"urlString");
              local_1a8 = &cf_height;
              IVar11 = _objc_msgSend(IVar7,"height");
              _objc_msgSend(IVar11,"floatValue");
              local_190 = NSNumber::numberWithFloat_((ID)&_OBJC_CLASS___NSNumber,"numberWithFloat:")
              ;
              local_1a0 = &cf_width;
              IVar11 = _objc_msgSend(IVar7,"width");
              _objc_msgSend(IVar11,"floatValue");
              local_188 = NSNumber::numberWithFloat_((ID)&_OBJC_CLASS___NSNumber,"numberWithFloat:")
              ;
              IVar11 = NSDictionary::dictionaryWithObjects_forKeys_count_
                                 ((ID)&_OBJC_CLASS___NSDictionary,
                                  "dictionaryWithObjects:forKeys:count:",&local_198,&local_1b0,3);
              NSMutableArray::addObject_(IVar4,"addObject:",IVar11);
              IVar6 = IVar6 + 1;
            } while (IVar5 != IVar6);
            IVar5 = _objc_msgSend(IVar2,"countByEnumeratingWithState:objects:count:",&local_240,
                                  &local_180,0x10);
          } while (IVar5 != 0);
        }
        IVar2 = NSMutableArray::count(IVar4,"count");
        if (IVar2 == 0) goto LAB_000774a4;
        IVar2 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
        IVar2 = NSMutableArray::init(IVar2,"init");
        IVar5 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
        IVar5 = NSMutableArray::init(IVar5,"init");
        uStack_1d8 = 0;
        local_1e0 = 0;
        uStack_1c8 = 0;
        uStack_1d0 = 0;
        uStack_1e8 = 0;
        local_1f0 = (long *)0x0;
        lStack_1f8 = 0;
        local_200 = 0;
        IVar6 = NSMutableArray::countByEnumeratingWithState_objects_count_
                          (IVar4,"countByEnumeratingWithState:objects:count:",&local_200,auStack_f8,
                           0x10);
        if (IVar6 != 0) {
          lVar10 = *local_1f0;
          do {
            IVar11 = 0;
            do {
              if (*local_1f0 != lVar10) {
                _objc_enumerationMutation(IVar4);
              }
              IVar9 = *(ID *)(lStack_1f8 + IVar11 * 8);
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
              IVar11 = IVar11 + 1;
            } while (IVar6 != IVar11);
            IVar6 = NSMutableArray::countByEnumeratingWithState_objects_count_
                              (IVar4,"countByEnumeratingWithState:objects:count:",&local_200,
                               auStack_f8,0x10);
          } while (IVar6 != 0);
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
LAB_000774a4:
        IVar2 = 0;
      }
      else {
        IVar4 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
        IVar4 = NSMutableArray::init(IVar4,"init");
        IVar5 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
        IVar5 = NSMutableArray::init(IVar5,"init");
        uStack_158 = 0;
        local_160 = 0;
        uStack_148 = 0;
        uStack_150 = 0;
        lStack_178 = 0;
        local_180 = 0;
        uStack_168 = 0;
        local_170 = (long *)0x0;
        IVar6 = _objc_msgSend(IVar2,"countByEnumeratingWithState:objects:count:",&local_180,
                              auStack_f8,0x10);
        if (IVar6 != 0) {
          lVar10 = *local_170;
          do {
            IVar11 = 0;
            do {
              if (*local_170 != lVar10) {
                _objc_enumerationMutation(IVar2);
              }
              IVar9 = *(ID *)(lStack_178 + IVar11 * 8);
              IVar7 = _objc_msgSend(IVar9,"objectForKey:",&cf_width);
              IVar8 = NSMutableArray::indexOfObject_(IVar5,"indexOfObject:",IVar7);
              if (IVar8 == 0x7fffffffffffffff) {
                IVar8 = _objc_msgSend(IVar9,"objectForKeyedSubscript:",&cf_url);
                IVar8 = _objc_msgSend(IVar8,"containsString:",&cf__mp4_);
                if ((int)IVar8 != 0) {
                  NSMutableArray::addObject_(IVar5,"addObject:",IVar7);
                  NSMutableArray::addObject_(IVar4,"addObject:",IVar9);
                }
              }
              IVar11 = IVar11 + 1;
            } while (IVar6 != IVar11);
            IVar6 = _objc_msgSend(IVar2,"countByEnumeratingWithState:objects:count:",&local_180,
                                  auStack_f8,0x10);
          } while (IVar6 != 0);
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
  IVar4 = NSMutableArray::count(IVar2,"count");
  if (IVar4 != 0) {
    IVar4 = FUN_0008c218(&cf_ACTION_DOWNLOAD);
    local_278 = PTR___NSConcreteStackBlock_000e80d8;
    local_270 = 0xc2000000;
    local_268 = FUN_00077aac;
    puStack_260 = &DAT_000e8808;
    local_250 = *(undefined8 *)(param_1 + 0x20);
    local_248 = *(undefined8 *)(param_1 + 0x28);
    local_258 = IVar2;
    IVar2 = ABMenuActionItem::class_ABMenuActionItem__actionItemWithTitle_style_action_
                      ((ID)&objc::class_t::ABMenuActionItem,"actionItemWithTitle:style:action:",
                       IVar4,0,(ID)&local_278);
    IVar4 = _objc_alloc(&objc::class_t::ABMenuViewController);
    local_1b8 = IVar2;
    IVar2 = NSArray::arrayWithObjects_count_
                      ((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:count:",&local_1b8,1);
    IVar2 = ABMenuViewController::instance_ABMenuViewController__initWithActionItems_
                      (IVar4,"initWithActionItems:",IVar2);
    IVar4 = DLHelper::class_DLHelper__topMostController
                      ((ID)&objc::class_t::DLHelper,"topMostController");
    ABMenuViewController::
    instance_ABMenuViewController__presentedFromViewController_animated_completion_
              (IVar2,"presentedFromViewController:animated:completion:",IVar4,1,0,in_w5);
  }
LAB_00077654:
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_78) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}

