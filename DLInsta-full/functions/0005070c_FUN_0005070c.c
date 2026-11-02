/* Address: 0005070c | Name: FUN_0005070c | Body bytes: 2244 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID FUN_0005070c(ID param_1)

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
  undefined8 local_220;
  long lStack_218;
  long *local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  long lStack_1d8;
  long *local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
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
  if (param_1 == 0) {
    IVar2 = 0;
    goto LAB_00050f1c;
  }
  iVar1 = FUN_0008ce2c(param_1,"_videoVersionDictionaries");
  if (iVar1 == 0) {
    IVar2 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
    IVar2 = NSMutableArray::init(IVar2,"init");
    IVar3 = _objc_msgSend(param_1,"videoVersions");
    IVar3 = _objc_msgSend(IVar3,"count");
    if (IVar3 == 0) {
      IVar2 = 0;
      goto LAB_00050f1c;
    }
    uStack_1f8 = 0;
    local_200 = 0;
    uStack_1e8 = 0;
    uStack_1f0 = 0;
    lStack_218 = 0;
    local_220 = 0;
    uStack_208 = 0;
    local_210 = (long *)0x0;
    IVar3 = _objc_msgSend(param_1,"videoVersions");
    IVar4 = _objc_msgSend(IVar3,"countByEnumeratingWithState:objects:count:",&local_220,&local_170,
                          0x10);
    if (IVar4 != 0) {
      lVar8 = *local_210;
      do {
        IVar5 = 0;
        do {
          if (*local_210 != lVar8) {
            _objc_enumerationMutation(IVar3);
          }
          IVar6 = *(ID *)(lStack_218 + IVar5 * 8);
          local_1a0 = &cf_url;
          local_188 = _objc_msgSend(IVar6,"urlString");
          local_198 = &cf_height;
          IVar10 = _objc_msgSend(IVar6,"height");
          _objc_msgSend(IVar10,"floatValue");
          local_180 = NSNumber::numberWithFloat_((ID)&_OBJC_CLASS___NSNumber,"numberWithFloat:");
          local_190 = &cf_width;
          IVar10 = _objc_msgSend(IVar6,"width");
          _objc_msgSend(IVar10,"floatValue");
          local_178 = NSNumber::numberWithFloat_((ID)&_OBJC_CLASS___NSNumber,"numberWithFloat:");
          IVar10 = NSDictionary::dictionaryWithObjects_forKeys_count_
                             ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:"
                              ,&local_188,&local_1a0,3);
          NSMutableArray::addObject_(IVar2,"addObject:",IVar10);
          IVar5 = IVar5 + 1;
        } while (IVar4 != IVar5);
        IVar4 = _objc_msgSend(IVar3,"countByEnumeratingWithState:objects:count:",&local_220,
                              &local_170,0x10);
      } while (IVar4 != 0);
    }
    IVar3 = NSMutableArray::count(IVar2,"count");
    if (IVar3 != 0) {
      IVar3 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
      IVar3 = NSMutableArray::init(IVar3,"init");
      IVar4 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
      IVar4 = NSMutableArray::init(IVar4,"init");
      uStack_1b8 = 0;
      local_1c0 = 0;
      uStack_1a8 = 0;
      uStack_1b0 = 0;
      lStack_1d8 = 0;
      local_1e0 = 0;
      uStack_1c8 = 0;
      local_1d0 = (long *)0x0;
      IVar5 = NSMutableArray::countByEnumeratingWithState_objects_count_
                        (IVar2,"countByEnumeratingWithState:objects:count:",&local_1e0,auStack_f0,
                         0x10);
      if (IVar5 != 0) {
        lVar8 = *local_1d0;
        do {
          IVar10 = 0;
          do {
            if (*local_1d0 != lVar8) {
              _objc_enumerationMutation(IVar2);
            }
            IVar9 = *(ID *)(lStack_1d8 + IVar10 * 8);
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
                            (IVar2,"countByEnumeratingWithState:objects:count:",&local_1e0,
                             auStack_f0,0x10);
        } while (IVar5 != 0);
      }
      IVar2 = NSSortDescriptor::sortDescriptorWithKey_ascending_
                        ((ID)&_OBJC_CLASS___NSSortDescriptor,"sortDescriptorWithKey:ascending:",
                         &cf_width,0);
      IVar2 = NSArray::arrayWithObjects_((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:",IVar2);
      IVar2 = NSMutableArray::sortedArrayUsingDescriptors_
                        (IVar3,"sortedArrayUsingDescriptors:",IVar2);
      goto LAB_00050f1c;
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
      uStack_148 = 0;
      local_150 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      lStack_168 = 0;
      local_170 = 0;
      uStack_158 = 0;
      local_160 = (long *)0x0;
      IVar5 = _objc_msgSend(IVar2,"countByEnumeratingWithState:objects:count:",&local_170,auStack_f0
                            ,0x10);
      if (IVar5 != 0) {
        lVar8 = *local_160;
        do {
          IVar10 = 0;
          do {
            if (*local_160 != lVar8) {
              _objc_enumerationMutation(IVar2);
            }
            IVar9 = *(ID *)(lStack_168 + IVar10 * 8);
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
          IVar5 = _objc_msgSend(IVar2,"countByEnumeratingWithState:objects:count:",&local_170,
                                auStack_f0,0x10);
        } while (IVar5 != 0);
      }
      IVar2 = NSSortDescriptor::sortDescriptorWithKey_ascending_
                        ((ID)&_OBJC_CLASS___NSSortDescriptor,"sortDescriptorWithKey:ascending:",
                         &cf_width,0);
      IVar2 = NSArray::arrayWithObjects_((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:",IVar2);
      IVar2 = NSMutableArray::sortedArrayUsingDescriptors_
                        (IVar3,"sortedArrayUsingDescriptors:",IVar2);
      goto LAB_00050f1c;
    }
  }
  IVar2 = 0;
LAB_00050f1c:
  IVar2 = NSMutableArray::objectAtIndexedSubscript_(IVar2,"objectAtIndexedSubscript:",0);
  IVar2 = NSMutableArray::objectForKeyedSubscript_(IVar2,"objectForKeyedSubscript:",&cf_url);
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return IVar2;
}

