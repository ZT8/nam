/* Address: 000511d4 | Name: FUN_000511d4 | Body bytes: 3432 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID FUN_000511d4(ID param_1)

{
  int iVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  ID IVar7;
  ID IVar8;
  ID IVar9;
  ID IVar10;
  long lVar11;
  ID self;
  long lVar12;
  ID IVar13;
  ID IVar14;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  undefined1 extraout_var_05;
  undefined1 extraout_var_06;
  undefined1 extraout_var_07;
  undefined1 extraout_var_08;
  undefined1 extraout_var_09;
  undefined1 extraout_var_10;
  undefined1 extraout_var_11;
  undefined1 extraout_var_12;
  ID local_330;
  undefined8 local_2e0;
  long lStack_2d8;
  long *local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  long lStack_298;
  long *local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 local_260;
  long lStack_258;
  long *local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined1 auStack_220 [128];
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
  IVar2 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
  IVar2 = NSMutableArray::init(IVar2,"init");
  uStack_2b8 = 0;
  local_2c0 = 0;
  uStack_2a8 = 0;
  uStack_2b0 = 0;
  lStack_2d8 = 0;
  local_2e0 = 0;
  uStack_2c8 = 0;
  local_2d0 = (long *)0x0;
  IVar3 = _objc_msgSend(param_1,"countByEnumeratingWithState:objects:count:",&local_2e0,auStack_220,
                        0x10);
  if (IVar3 != 0) {
    lVar11 = *local_2d0;
    do {
      local_330 = 0;
      do {
        if (*local_2d0 != lVar11) {
          _objc_enumerationMutation(param_1);
        }
        self = *(ID *)(lStack_2d8 + local_330 * 8);
        IVar4 = _objc_alloc(&objc::class_t::DLMediaData);
        IVar4 = _objc_msgSend(IVar4,"init");
        IVar5 = _objc_msgSend(self,"photo");
        if (IVar5 == 0) {
          IVar5 = 0;
        }
        else {
          IVar5 = _objc_msgSend(IVar5,"valueForKey:",&cf__originalImageVersions);
          local_f0[0] = NSSortDescriptor::sortDescriptorWithKey_ascending_
                                  ((ID)&_OBJC_CLASS___NSSortDescriptor,
                                   "sortDescriptorWithKey:ascending:",&cf_width,0);
          IVar6 = NSArray::arrayWithObjects_count_
                            ((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:count:",local_f0,1);
          IVar5 = _objc_msgSend(IVar5,"sortedArrayUsingDescriptors:",IVar6);
        }
        IVar6 = _objc_msgSend(IVar5,"firstObject");
        IVar6 = _objc_msgSend(IVar6,"valueForKey:",&cf__url);
        IVar6 = _objc_msgSend(IVar6,"absoluteString");
        DLMediaData::instance_DLMediaData__setCoverUrl_(IVar4,"setCoverUrl:",IVar6);
        IVar6 = _objc_msgSend(self,"itemMediaType");
        if (IVar6 == 1) {
          DLMediaData::instance_DLMediaData__setMediaType_(IVar4,"setMediaType:",1);
          IVar5 = _objc_msgSend(IVar5,"lastObject");
          IVar5 = _objc_msgSend(IVar5,"valueForKey:",&cf__url);
          IVar5 = _objc_msgSend(IVar5,"absoluteString");
          DLMediaData::instance_DLMediaData__setUrl_(IVar4,"setUrl:",IVar5);
        }
        else {
          IVar5 = _objc_msgSend(self,"itemMediaType");
          if (IVar5 == 2) {
            DLMediaData::instance_DLMediaData__setMediaType_(IVar4,"setMediaType:",2);
            IVar6 = _objc_msgSend(self,"video");
            IVar5 = 0;
            if (IVar6 != 0) {
              iVar1 = FUN_0008ce2c(IVar6,"_videoVersionDictionaries");
              if (iVar1 == 0) {
                IVar5 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
                IVar5 = NSMutableArray::init(IVar5,"init");
                IVar7 = _objc_msgSend(IVar6,"videoVersions");
                IVar7 = _objc_msgSend(IVar7,"count");
                if (IVar7 == 0) {
                  IVar5 = 0;
                }
                else {
                  uStack_278 = 0;
                  local_280 = 0;
                  uStack_268 = 0;
                  uStack_270 = 0;
                  lStack_298 = 0;
                  local_2a0 = 0;
                  uStack_288 = 0;
                  local_290 = (long *)0x0;
                  IVar6 = _objc_msgSend(IVar6,"videoVersions");
                  IVar7 = _objc_msgSend(IVar6,"countByEnumeratingWithState:objects:count:",
                                        &local_2a0,&local_170,0x10);
                  if (IVar7 != 0) {
                    lVar12 = *local_290;
                    do {
                      IVar8 = 0;
                      do {
                        if (*local_290 != lVar12) {
                          _objc_enumerationMutation(IVar6);
                        }
                        IVar9 = *(ID *)(lStack_298 + IVar8 * 8);
                        local_1a0 = &cf_url;
                        local_188 = _objc_msgSend(IVar9,"urlString");
                        local_198 = &cf_height;
                        IVar13 = _objc_msgSend(IVar9,"height");
                        _objc_msgSend(IVar13,"floatValue");
                        local_180 = NSNumber::numberWithFloat_
                                              ((ID)&_OBJC_CLASS___NSNumber,"numberWithFloat:");
                        local_190 = &cf_width;
                        IVar13 = _objc_msgSend(IVar9,"width");
                        _objc_msgSend(IVar13,"floatValue");
                        local_178 = NSNumber::numberWithFloat_
                                              ((ID)&_OBJC_CLASS___NSNumber,"numberWithFloat:");
                        IVar13 = NSDictionary::dictionaryWithObjects_forKeys_count_
                                           ((ID)&_OBJC_CLASS___NSDictionary,
                                            "dictionaryWithObjects:forKeys:count:",&local_188,
                                            &local_1a0,3);
                        NSMutableArray::addObject_(IVar5,"addObject:",IVar13);
                        IVar8 = IVar8 + 1;
                      } while (IVar7 != IVar8);
                      IVar7 = _objc_msgSend(IVar6,"countByEnumeratingWithState:objects:count:",
                                            &local_2a0,&local_170,0x10);
                    } while (IVar7 != 0);
                  }
                  IVar6 = NSMutableArray::count(IVar5,"count");
                  if (IVar6 == 0) goto LAB_00051d6c;
                  IVar6 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
                  IVar6 = NSMutableArray::init(IVar6,"init");
                  IVar7 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
                  IVar7 = NSMutableArray::init(IVar7,"init");
                  uStack_238 = 0;
                  local_240 = 0;
                  uStack_228 = 0;
                  uStack_230 = 0;
                  lStack_258 = 0;
                  local_260 = 0;
                  uStack_248 = 0;
                  local_250 = (long *)0x0;
                  IVar8 = NSMutableArray::countByEnumeratingWithState_objects_count_
                                    (IVar5,"countByEnumeratingWithState:objects:count:",&local_260,
                                     local_f0,0x10);
                  if (IVar8 != 0) {
                    lVar12 = *local_250;
                    do {
                      IVar13 = 0;
                      do {
                        if (*local_250 != lVar12) {
                          _objc_enumerationMutation(IVar5);
                        }
                        IVar14 = *(ID *)(lStack_258 + IVar13 * 8);
                        IVar9 = _objc_msgSend(IVar14,"objectForKey:",&cf_width);
                        IVar10 = NSMutableArray::indexOfObject_(IVar7,"indexOfObject:",IVar9);
                        if (IVar10 == 0x7fffffffffffffff) {
                          IVar10 = _objc_msgSend(IVar14,"objectForKeyedSubscript:",&cf_url);
                          IVar10 = _objc_msgSend(IVar10,"containsString:",&cf__mp4_);
                          if ((int)IVar10 != 0) {
                            NSMutableArray::addObject_(IVar7,"addObject:",IVar9);
                            NSMutableArray::addObject_(IVar6,"addObject:",IVar14);
                          }
                        }
                        IVar13 = IVar13 + 1;
                      } while (IVar8 != IVar13);
                      IVar8 = NSMutableArray::countByEnumeratingWithState_objects_count_
                                        (IVar5,"countByEnumeratingWithState:objects:count:",
                                         &local_260,local_f0,0x10);
                    } while (IVar8 != 0);
                  }
                  IVar5 = NSSortDescriptor::sortDescriptorWithKey_ascending_
                                    ((ID)&_OBJC_CLASS___NSSortDescriptor,
                                     "sortDescriptorWithKey:ascending:",&cf_width,0);
                  IVar5 = NSArray::arrayWithObjects_
                                    ((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:",IVar5);
                  IVar5 = NSMutableArray::sortedArrayUsingDescriptors_
                                    (IVar6,"sortedArrayUsingDescriptors:",IVar5);
                }
              }
              else {
                IVar5 = _objc_msgSend(IVar6,"valueForKey:",&cf__videoVersionDictionaries);
                IVar6 = _objc_msgSend(IVar5,"count");
                if (IVar6 == 0) {
LAB_00051d6c:
                  IVar5 = 0;
                }
                else {
                  IVar6 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
                  IVar6 = NSMutableArray::init(IVar6,"init");
                  IVar7 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
                  IVar7 = NSMutableArray::init(IVar7,"init");
                  uStack_148 = 0;
                  local_150 = 0;
                  uStack_138 = 0;
                  uStack_140 = 0;
                  lStack_168 = 0;
                  local_170 = 0;
                  uStack_158 = 0;
                  local_160 = (long *)0x0;
                  IVar8 = _objc_msgSend(IVar5,"countByEnumeratingWithState:objects:count:",
                                        &local_170,local_f0,0x10);
                  if (IVar8 != 0) {
                    lVar12 = *local_160;
                    do {
                      IVar13 = 0;
                      do {
                        if (*local_160 != lVar12) {
                          _objc_enumerationMutation(IVar5);
                        }
                        IVar14 = *(ID *)(lStack_168 + IVar13 * 8);
                        IVar9 = _objc_msgSend(IVar14,"objectForKey:",&cf_width);
                        IVar10 = NSMutableArray::indexOfObject_(IVar7,"indexOfObject:",IVar9);
                        if (IVar10 == 0x7fffffffffffffff) {
                          IVar10 = _objc_msgSend(IVar14,"objectForKeyedSubscript:",&cf_url);
                          IVar10 = _objc_msgSend(IVar10,"containsString:",&cf__mp4_);
                          if ((int)IVar10 != 0) {
                            NSMutableArray::addObject_(IVar7,"addObject:",IVar9);
                            NSMutableArray::addObject_(IVar6,"addObject:",IVar14);
                          }
                        }
                        IVar13 = IVar13 + 1;
                      } while (IVar8 != IVar13);
                      IVar8 = _objc_msgSend(IVar5,"countByEnumeratingWithState:objects:count:",
                                            &local_170,local_f0,0x10);
                    } while (IVar8 != 0);
                  }
                  IVar5 = NSSortDescriptor::sortDescriptorWithKey_ascending_
                                    ((ID)&_OBJC_CLASS___NSSortDescriptor,
                                     "sortDescriptorWithKey:ascending:",&cf_width,0);
                  IVar5 = NSArray::arrayWithObjects_
                                    ((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:",IVar5);
                  IVar5 = NSMutableArray::sortedArrayUsingDescriptors_
                                    (IVar6,"sortedArrayUsingDescriptors:",IVar5);
                }
              }
            }
            IVar5 = NSMutableArray::objectAtIndexedSubscript_(IVar5,"objectAtIndexedSubscript:",0);
            IVar5 = NSMutableArray::objectForKeyedSubscript_
                              (IVar5,"objectForKeyedSubscript:",&cf_url);
            DLMediaData::instance_DLMediaData__setUrl_(IVar4,"setUrl:",IVar5);
            IVar5 = _objc_msgSend(self,"video");
            _objc_msgSend(IVar5,"videoDuration");
            DLMediaData::instance_DLMediaData__setDuration_
                      (IVar4,"setDuration:",
                       (double)CONCAT17(extraout_var_11,
                                        CONCAT16(extraout_var_09,
                                                 CONCAT15(extraout_var_07,
                                                          CONCAT14(extraout_var_05,
                                                                   CONCAT13(extraout_var_03,
                                                                            CONCAT12(extraout_var_01
                                                                                     ,CONCAT11(
                                                  extraout_var,extraout_b0))))))));
          }
        }
        IVar5 = _objc_msgSend(self,"takenAtDate");
        _objc_msgSend(IVar5,"timeIntervalSince1970");
        DLMediaData::instance_DLMediaData__setTakenAtDate_
                  (IVar4,"setTakenAtDate:",
                   (double)CONCAT17(extraout_var_12,
                                    CONCAT16(extraout_var_10,
                                             CONCAT15(extraout_var_08,
                                                      CONCAT14(extraout_var_06,
                                                               CONCAT13(extraout_var_04,
                                                                        CONCAT12(extraout_var_02,
                                                                                 CONCAT11(
                                                  extraout_var_00,extraout_b0_00))))))));
        NSMutableArray::addObject_(IVar2,"addObject:",IVar4);
        local_330 = local_330 + 1;
      } while (local_330 != IVar3);
      IVar3 = _objc_msgSend(param_1,"countByEnumeratingWithState:objects:count:",&local_2e0,
                            auStack_220,0x10);
    } while (IVar3 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return IVar2;
}

