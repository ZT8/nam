/* Address: 000564d8 | Name: FUN_000564d8 | Body bytes: 3016 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */

void FUN_000564d8(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ID IVar5;
  ID IVar6;
  ID IVar7;
  ID IVar8;
  ID IVar9;
  ID IVar10;
  undefined4 in_w5;
  ID IVar11;
  ID *pIVar12;
  ID IVar13;
  undefined *local_278;
  undefined8 local_270;
  code *local_268;
  undefined *puStack_260;
  undefined8 local_258;
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
  lVar2 = *(long *)(param_1 + 0x20);
  uVar3 = _object_getClass();
  lVar4 = _class_getInstanceVariable(uVar3,"delegate");
  if (lVar4 == 0) {
    pIVar12 = (ID *)0x0;
  }
  else {
    lVar4 = _ivar_getOffset();
    pIVar12 = (ID *)(lVar2 + lVar4);
  }
  IVar5 = *pIVar12;
  IVar6 = _objc_msgSend(IVar5,"pageCellState");
  IVar6 = _objc_msgSend(IVar6,"respondsToSelector:","currentPageIndex");
  if ((int)IVar6 == 0) {
    IVar6 = _objc_msgSend(IVar5,"pageCellState");
    IVar6 = _objc_msgSend(IVar6,"currentItemIndex");
  }
  else {
    IVar6 = _objc_msgSend(IVar5,"pageCellState");
    IVar6 = _objc_msgSend(IVar6,"currentPageIndex");
  }
  IVar5 = _objc_msgSend(IVar5,"items");
  IVar5 = _objc_msgSend(IVar5,"objectAtIndexedSubscript:",IVar6);
  IVar6 = _objc_msgSend(IVar5,"video");
  if (DAT_000fffa8 == 0) {
    DAT_000fffa8 = _objc_getClass("IGVideo");
  }
  uVar3 = _objc_retainAutorelease();
  IVar6 = _objc_msgSend(IVar6,"isMemberOfClass:",uVar3);
  if ((IVar6 & 1) == 0) goto LAB_00057054;
  IVar5 = _objc_msgSend(IVar5,"video");
  if (IVar5 == 0) {
LAB_00056eb4:
    IVar5 = 0;
  }
  else {
    iVar1 = FUN_0008ce2c(IVar5,"_videoVersionDictionaries");
    if (iVar1 == 0) {
      IVar6 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
      IVar6 = NSMutableArray::init(IVar6,"init");
      IVar7 = _objc_msgSend(IVar5,"videoVersions");
      IVar7 = _objc_msgSend(IVar7,"count");
      if (IVar7 == 0) goto LAB_00056eb4;
      uStack_218 = 0;
      local_220 = 0;
      uStack_208 = 0;
      uStack_210 = 0;
      lStack_238 = 0;
      local_240 = 0;
      uStack_228 = 0;
      local_230 = (long *)0x0;
      IVar5 = _objc_msgSend(IVar5,"videoVersions");
      IVar7 = _objc_msgSend(IVar5,"countByEnumeratingWithState:objects:count:",&local_240,&local_180
                            ,0x10);
      if (IVar7 != 0) {
        lVar2 = *local_230;
        do {
          IVar8 = 0;
          do {
            if (*local_230 != lVar2) {
              _objc_enumerationMutation(IVar5);
            }
            IVar9 = *(ID *)(lStack_238 + IVar8 * 8);
            local_1b0 = &cf_url;
            local_198 = _objc_msgSend(IVar9,"urlString");
            local_1a8 = &cf_height;
            IVar13 = _objc_msgSend(IVar9,"height");
            _objc_msgSend(IVar13,"floatValue");
            local_190 = NSNumber::numberWithFloat_((ID)&_OBJC_CLASS___NSNumber,"numberWithFloat:");
            local_1a0 = &cf_width;
            IVar13 = _objc_msgSend(IVar9,"width");
            _objc_msgSend(IVar13,"floatValue");
            local_188 = NSNumber::numberWithFloat_((ID)&_OBJC_CLASS___NSNumber,"numberWithFloat:");
            IVar13 = NSDictionary::dictionaryWithObjects_forKeys_count_
                               ((ID)&_OBJC_CLASS___NSDictionary,
                                "dictionaryWithObjects:forKeys:count:",&local_198,&local_1b0,3);
            NSMutableArray::addObject_(IVar6,"addObject:",IVar13);
            IVar8 = IVar8 + 1;
          } while (IVar7 != IVar8);
          IVar7 = _objc_msgSend(IVar5,"countByEnumeratingWithState:objects:count:",&local_240,
                                &local_180,0x10);
        } while (IVar7 != 0);
      }
      IVar5 = NSMutableArray::count(IVar6,"count");
      if (IVar5 == 0) goto LAB_00056e80;
      IVar5 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
      IVar5 = NSMutableArray::init(IVar5,"init");
      IVar7 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
      IVar7 = NSMutableArray::init(IVar7,"init");
      uStack_1d8 = 0;
      local_1e0 = 0;
      uStack_1c8 = 0;
      uStack_1d0 = 0;
      uStack_1e8 = 0;
      local_1f0 = (long *)0x0;
      lStack_1f8 = 0;
      local_200 = 0;
      IVar8 = NSMutableArray::countByEnumeratingWithState_objects_count_
                        (IVar6,"countByEnumeratingWithState:objects:count:",&local_200,auStack_f8,
                         0x10);
      if (IVar8 != 0) {
        lVar2 = *local_1f0;
        do {
          IVar13 = 0;
          do {
            if (*local_1f0 != lVar2) {
              _objc_enumerationMutation(IVar6);
            }
            IVar11 = *(ID *)(lStack_1f8 + IVar13 * 8);
            IVar9 = _objc_msgSend(IVar11,"objectForKey:",&cf_width);
            IVar10 = NSMutableArray::indexOfObject_(IVar7,"indexOfObject:",IVar9);
            if (IVar10 == 0x7fffffffffffffff) {
              IVar10 = _objc_msgSend(IVar11,"objectForKeyedSubscript:",&cf_url);
              IVar10 = _objc_msgSend(IVar10,"containsString:",&cf__mp4_);
              if ((int)IVar10 != 0) {
                NSMutableArray::addObject_(IVar7,"addObject:",IVar9);
                NSMutableArray::addObject_(IVar5,"addObject:",IVar11);
              }
            }
            IVar13 = IVar13 + 1;
          } while (IVar8 != IVar13);
          IVar8 = NSMutableArray::countByEnumeratingWithState_objects_count_
                            (IVar6,"countByEnumeratingWithState:objects:count:",&local_200,
                             auStack_f8,0x10);
        } while (IVar8 != 0);
      }
      IVar6 = NSSortDescriptor::sortDescriptorWithKey_ascending_
                        ((ID)&_OBJC_CLASS___NSSortDescriptor,"sortDescriptorWithKey:ascending:",
                         &cf_width,0);
      IVar6 = NSArray::arrayWithObjects_((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:",IVar6);
      IVar5 = NSMutableArray::sortedArrayUsingDescriptors_
                        (IVar5,"sortedArrayUsingDescriptors:",IVar6);
    }
    else {
      IVar5 = _objc_msgSend(IVar5,"valueForKey:",&cf__videoVersionDictionaries);
      IVar6 = _objc_msgSend(IVar5,"count");
      if (IVar6 == 0) {
LAB_00056e80:
        IVar5 = 0;
      }
      else {
        IVar6 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
        IVar6 = NSMutableArray::init(IVar6,"init");
        IVar7 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
        IVar7 = NSMutableArray::init(IVar7,"init");
        uStack_158 = 0;
        local_160 = 0;
        uStack_148 = 0;
        uStack_150 = 0;
        lStack_178 = 0;
        local_180 = 0;
        uStack_168 = 0;
        local_170 = (long *)0x0;
        IVar8 = _objc_msgSend(IVar5,"countByEnumeratingWithState:objects:count:",&local_180,
                              auStack_f8,0x10);
        if (IVar8 != 0) {
          lVar2 = *local_170;
          do {
            IVar13 = 0;
            do {
              if (*local_170 != lVar2) {
                _objc_enumerationMutation(IVar5);
              }
              IVar11 = *(ID *)(lStack_178 + IVar13 * 8);
              IVar9 = _objc_msgSend(IVar11,"objectForKey:",&cf_width);
              IVar10 = NSMutableArray::indexOfObject_(IVar7,"indexOfObject:",IVar9);
              if (IVar10 == 0x7fffffffffffffff) {
                IVar10 = _objc_msgSend(IVar11,"objectForKeyedSubscript:",&cf_url);
                IVar10 = _objc_msgSend(IVar10,"containsString:",&cf__mp4_);
                if ((int)IVar10 != 0) {
                  NSMutableArray::addObject_(IVar7,"addObject:",IVar9);
                  NSMutableArray::addObject_(IVar6,"addObject:",IVar11);
                }
              }
              IVar13 = IVar13 + 1;
            } while (IVar8 != IVar13);
            IVar8 = _objc_msgSend(IVar5,"countByEnumeratingWithState:objects:count:",&local_180,
                                  auStack_f8,0x10);
          } while (IVar8 != 0);
        }
        IVar5 = NSSortDescriptor::sortDescriptorWithKey_ascending_
                          ((ID)&_OBJC_CLASS___NSSortDescriptor,"sortDescriptorWithKey:ascending:",
                           &cf_width,0);
        IVar5 = NSArray::arrayWithObjects_((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:",IVar5);
        IVar5 = NSMutableArray::sortedArrayUsingDescriptors_
                          (IVar6,"sortedArrayUsingDescriptors:",IVar5);
      }
    }
  }
  if (IVar5 != 0) {
    IVar6 = FUN_0008c218(&cf_ACTION_DOWNLOAD);
    local_278 = PTR___NSConcreteStackBlock_000e80d8;
    local_270 = 0xc2000000;
    local_268 = FUN_000574ec;
    puStack_260 = &DAT_000e8ae8;
    local_258 = *(undefined8 *)(param_1 + 0x20);
    local_248 = *(undefined8 *)(param_1 + 0x28);
    local_250 = IVar5;
    IVar5 = ABMenuActionItem::class_ABMenuActionItem__actionItemWithTitle_style_action_
                      ((ID)&objc::class_t::ABMenuActionItem,"actionItemWithTitle:style:action:",
                       IVar6,0,(ID)&local_278);
    IVar6 = _objc_alloc(&objc::class_t::ABMenuViewController);
    local_1b8 = IVar5;
    IVar5 = NSArray::arrayWithObjects_count_
                      ((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:count:",&local_1b8,1);
    IVar5 = ABMenuViewController::instance_ABMenuViewController__initWithActionItems_
                      (IVar6,"initWithActionItems:",IVar5);
    IVar6 = DLHelper::class_DLHelper__topMostController
                      ((ID)&objc::class_t::DLHelper,"topMostController");
    ABMenuViewController::
    instance_ABMenuViewController__presentedFromViewController_animated_completion_
              (IVar5,"presentedFromViewController:animated:completion:",IVar6,1,0,in_w5);
  }
LAB_00057054:
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_78) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}

