/* Address: 0004fb74 | Name: FUN_0004fb74 | Body bytes: 2388 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID FUN_0004fb74(ID param_1,long param_2)

{
  int iVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  ID IVar7;
  long lVar8;
  ID IVar9;
  ID IVar10;
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
  cfstringStruct *local_1a8;
  cfstringStruct *local_1a0;
  cfstringStruct *local_198;
  ID local_190;
  ID local_188;
  ID local_180;
  undefined1 auStack_178 [128];
  ID local_f8;
  undefined1 auStack_f0 [128];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_000e8260;
  if (param_1 != 0) {
    if (param_2 == 2) {
      iVar1 = FUN_0008ce2c(param_1,"_videoVersionDictionaries");
      if (iVar1 == 0) {
        IVar2 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
        IVar2 = NSMutableArray::init(IVar2,"init");
        IVar3 = _objc_msgSend(param_1,"videoVersions");
        IVar3 = _objc_msgSend(IVar3,"count");
        if (IVar3 == 0) goto LAB_0005047c;
        uStack_208 = 0;
        local_210 = 0;
        uStack_1f8 = 0;
        uStack_200 = 0;
        lStack_228 = 0;
        local_230 = 0;
        uStack_218 = 0;
        local_220 = (long *)0x0;
        IVar3 = _objc_msgSend(param_1,"videoVersions");
        IVar4 = _objc_msgSend(IVar3,"countByEnumeratingWithState:objects:count:",&local_230,
                              auStack_178,0x10);
        if (IVar4 != 0) {
          lVar8 = *local_220;
          do {
            IVar5 = 0;
            do {
              if (*local_220 != lVar8) {
                _objc_enumerationMutation(IVar3);
              }
              IVar6 = *(ID *)(lStack_228 + IVar5 * 8);
              local_1a8 = &cf_url;
              local_190 = _objc_msgSend(IVar6,"urlString");
              local_1a0 = &cf_height;
              IVar10 = _objc_msgSend(IVar6,"height");
              _objc_msgSend(IVar10,"floatValue");
              local_188 = NSNumber::numberWithFloat_((ID)&_OBJC_CLASS___NSNumber,"numberWithFloat:")
              ;
              local_198 = &cf_width;
              IVar10 = _objc_msgSend(IVar6,"width");
              _objc_msgSend(IVar10,"floatValue");
              local_180 = NSNumber::numberWithFloat_((ID)&_OBJC_CLASS___NSNumber,"numberWithFloat:")
              ;
              IVar10 = NSDictionary::dictionaryWithObjects_forKeys_count_
                                 ((ID)&_OBJC_CLASS___NSDictionary,
                                  "dictionaryWithObjects:forKeys:count:",&local_190,&local_1a8,3);
              NSMutableArray::addObject_(IVar2,"addObject:",IVar10);
              IVar5 = IVar5 + 1;
            } while (IVar4 != IVar5);
            IVar4 = _objc_msgSend(IVar3,"countByEnumeratingWithState:objects:count:",&local_230,
                                  auStack_178,0x10);
          } while (IVar4 != 0);
        }
        IVar3 = NSMutableArray::count(IVar2,"count");
        if (IVar3 != 0) {
          IVar3 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
          IVar3 = NSMutableArray::init(IVar3,"init");
          IVar4 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
          IVar4 = NSMutableArray::init(IVar4,"init");
          uStack_1c8 = 0;
          local_1d0 = 0;
          uStack_1b8 = 0;
          uStack_1c0 = 0;
          lStack_1e8 = 0;
          local_1f0 = 0;
          uStack_1d8 = 0;
          local_1e0 = (long *)0x0;
          IVar5 = NSMutableArray::countByEnumeratingWithState_objects_count_
                            (IVar2,"countByEnumeratingWithState:objects:count:",&local_1f0,
                             auStack_f0,0x10);
          if (IVar5 != 0) {
            lVar8 = *local_1e0;
            do {
              IVar10 = 0;
              do {
                if (*local_1e0 != lVar8) {
                  _objc_enumerationMutation(IVar2);
                }
                IVar9 = *(ID *)(lStack_1e8 + IVar10 * 8);
                IVar6 = _objc_msgSend(IVar9,"objectForKey:",&cf_width);
                IVar7 = NSMutableArray::indexOfObject_(IVar4,"indexOfObject:",IVar6);
                if (IVar7 == 0x7fffffffffffffff) {
                  IVar7 = _objc_msgSend(IVar9,"objectForKeyedSubscript:",&cf_url);
                  IVar7 = _objc_msgSend(IVar7,"containsString:",&cf__mp4_);
                  if ((int)IVar7 != 0) {
                    NSMutableArray::addObject_(IVar4,"addObject:",IVar6);
                    NSMutableArray::addObject_(IVar3,"addObject:",IVar9);
                  }
                }
                IVar10 = IVar10 + 1;
              } while (IVar5 != IVar10);
              IVar5 = NSMutableArray::countByEnumeratingWithState_objects_count_
                                (IVar2,"countByEnumeratingWithState:objects:count:",&local_1f0,
                                 auStack_f0,0x10);
            } while (IVar5 != 0);
          }
          IVar2 = NSSortDescriptor::sortDescriptorWithKey_ascending_
                            ((ID)&_OBJC_CLASS___NSSortDescriptor,"sortDescriptorWithKey:ascending:",
                             &cf_width,0);
          IVar2 = NSArray::arrayWithObjects_((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:",IVar2);
          IVar2 = NSMutableArray::sortedArrayUsingDescriptors_
                            (IVar3,"sortedArrayUsingDescriptors:",IVar2);
          goto LAB_00050480;
        }
      }
      else {
        IVar2 = _objc_msgSend(param_1,"valueForKey:",&cf__videoVersionDictionaries);
        IVar3 = _objc_msgSend(IVar2,"count");
        if (IVar3 != 0) {
          IVar3 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
          IVar3 = NSMutableArray::init(IVar3,"init");
          IVar4 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
          IVar4 = NSMutableArray::init(IVar4,"init");
          uStack_1c8 = 0;
          local_1d0 = 0;
          uStack_1b8 = 0;
          uStack_1c0 = 0;
          lStack_1e8 = 0;
          local_1f0 = 0;
          uStack_1d8 = 0;
          local_1e0 = (long *)0x0;
          IVar5 = _objc_msgSend(IVar2,"countByEnumeratingWithState:objects:count:",&local_1f0,
                                auStack_f0,0x10);
          if (IVar5 != 0) {
            lVar8 = *local_1e0;
            do {
              IVar10 = 0;
              do {
                if (*local_1e0 != lVar8) {
                  _objc_enumerationMutation(IVar2);
                }
                IVar9 = *(ID *)(lStack_1e8 + IVar10 * 8);
                IVar6 = _objc_msgSend(IVar9,"objectForKey:",&cf_width);
                IVar7 = NSMutableArray::indexOfObject_(IVar4,"indexOfObject:",IVar6);
                if (IVar7 == 0x7fffffffffffffff) {
                  IVar7 = _objc_msgSend(IVar9,"objectForKeyedSubscript:",&cf_url);
                  IVar7 = _objc_msgSend(IVar7,"containsString:",&cf__mp4_);
                  if ((int)IVar7 != 0) {
                    NSMutableArray::addObject_(IVar4,"addObject:",IVar6);
                    NSMutableArray::addObject_(IVar3,"addObject:",IVar9);
                  }
                }
                IVar10 = IVar10 + 1;
              } while (IVar5 != IVar10);
              IVar5 = _objc_msgSend(IVar2,"countByEnumeratingWithState:objects:count:",&local_1f0,
                                    auStack_f0,0x10);
            } while (IVar5 != 0);
          }
          IVar2 = NSSortDescriptor::sortDescriptorWithKey_ascending_
                            ((ID)&_OBJC_CLASS___NSSortDescriptor,"sortDescriptorWithKey:ascending:",
                             &cf_width,0);
          IVar2 = NSArray::arrayWithObjects_((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:",IVar2);
          IVar2 = NSMutableArray::sortedArrayUsingDescriptors_
                            (IVar3,"sortedArrayUsingDescriptors:",IVar2);
          goto LAB_00050480;
        }
      }
      IVar2 = 0;
      goto LAB_00050480;
    }
    if (param_2 == 1) {
      IVar2 = _objc_msgSend(param_1,"valueForKey:",&cf__originalImageVersions);
      local_f8 = NSSortDescriptor::sortDescriptorWithKey_ascending_
                           ((ID)&_OBJC_CLASS___NSSortDescriptor,"sortDescriptorWithKey:ascending:",
                            &cf_width,0);
      IVar3 = NSArray::arrayWithObjects_count_
                        ((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:count:",&local_f8,1);
      IVar2 = _objc_msgSend(IVar2,"sortedArrayUsingDescriptors:",IVar3);
      goto LAB_00050480;
    }
  }
LAB_0005047c:
  IVar2 = 0;
LAB_00050480:
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return IVar2;
}

