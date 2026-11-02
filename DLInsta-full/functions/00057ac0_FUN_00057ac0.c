/* Address: 00057ac0 | Name: FUN_00057ac0 | Body bytes: 3664 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_00057ac0(long param_1)

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
  ID IVar11;
  ID IVar12;
  ID IVar13;
  ID self;
  ID IVar14;
  long lVar15;
  ID IVar16;
  long lVar17;
  double extraout_d0;
  double extraout_d0_00;
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
  IVar2 = _objc_msgSend(*(ID *)(param_1 + 0x20),"items");
  IVar3 = _objc_msgSend(IVar2,"count");
  if (IVar3 != 0) {
    IVar3 = _objc_alloc(&objc::class_t::DLMultiMediaViewController);
    IVar3 = DLPopupViewController::instance_DLPopupViewController__initWithCustomHeight_
                      (IVar3,"initWithCustomHeight:",455.0);
    _objc_msgSend(IVar3,"setTitle:",&cf_DLInsta);
    IVar4 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
    IVar4 = NSMutableArray::init(IVar4,"init");
    uStack_2b8 = 0;
    local_2c0 = 0;
    uStack_2a8 = 0;
    uStack_2b0 = 0;
    lStack_2d8 = 0;
    local_2e0 = 0;
    uStack_2c8 = 0;
    local_2d0 = (long *)0x0;
    IVar5 = _objc_msgSend(IVar2,"countByEnumeratingWithState:objects:count:",&local_2e0,auStack_220,
                          0x10);
    if (IVar5 != 0) {
      lVar17 = *local_2d0;
      do {
        IVar14 = 0;
        do {
          if (*local_2d0 != lVar17) {
            _objc_enumerationMutation(IVar2);
          }
          self = *(ID *)(lStack_2d8 + IVar14 * 8);
          IVar6 = _objc_alloc(&objc::class_t::DLMediaData);
          IVar6 = _objc_msgSend(IVar6,"init");
          IVar7 = _objc_msgSend(self,"photo");
          if (IVar7 == 0) {
            IVar7 = 0;
          }
          else {
            IVar7 = _objc_msgSend(IVar7,"valueForKey:",&cf__originalImageVersions);
            local_f0[0] = NSSortDescriptor::sortDescriptorWithKey_ascending_
                                    ((ID)&_OBJC_CLASS___NSSortDescriptor,
                                     "sortDescriptorWithKey:ascending:",&cf_width,0);
            IVar8 = NSArray::arrayWithObjects_count_
                              ((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:count:",local_f0,1);
            IVar7 = _objc_msgSend(IVar7,"sortedArrayUsingDescriptors:",IVar8);
          }
          IVar8 = _objc_msgSend(IVar7,"firstObject");
          IVar8 = _objc_msgSend(IVar8,"valueForKey:",&cf__url);
          IVar8 = _objc_msgSend(IVar8,"absoluteString");
          DLMediaData::instance_DLMediaData__setCoverUrl_(IVar6,"setCoverUrl:",IVar8);
          IVar8 = _objc_msgSend(self,"itemMediaType");
          if (IVar8 == 1) {
            DLMediaData::instance_DLMediaData__setMediaType_(IVar6,"setMediaType:",1);
            IVar7 = _objc_msgSend(IVar7,"lastObject");
            IVar7 = _objc_msgSend(IVar7,"valueForKey:",&cf__url);
            IVar7 = _objc_msgSend(IVar7,"absoluteString");
            DLMediaData::instance_DLMediaData__setUrl_(IVar6,"setUrl:",IVar7);
          }
          else {
            IVar7 = _objc_msgSend(self,"itemMediaType");
            if (IVar7 == 2) {
              DLMediaData::instance_DLMediaData__setMediaType_(IVar6,"setMediaType:",2);
              IVar7 = _objc_msgSend(self,"video");
              if (IVar7 == 0) {
                IVar7 = 0;
              }
              else {
                iVar1 = FUN_0008ce2c(IVar7,"_videoVersionDictionaries");
                if (iVar1 == 0) {
                  IVar8 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
                  IVar8 = NSMutableArray::init(IVar8,"init");
                  IVar9 = _objc_msgSend(IVar7,"videoVersions");
                  IVar9 = _objc_msgSend(IVar9,"count");
                  if (IVar9 == 0) {
                    IVar7 = 0;
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
                    IVar7 = _objc_msgSend(IVar7,"videoVersions");
                    IVar9 = _objc_msgSend(IVar7,"countByEnumeratingWithState:objects:count:",
                                          &local_2a0,&local_170,0x10);
                    if (IVar9 != 0) {
                      lVar15 = *local_290;
                      do {
                        IVar10 = 0;
                        do {
                          if (*local_290 != lVar15) {
                            _objc_enumerationMutation(IVar7);
                          }
                          IVar11 = *(ID *)(lStack_298 + IVar10 * 8);
                          local_1a0 = &cf_url;
                          local_188 = _objc_msgSend(IVar11,"urlString");
                          local_198 = &cf_height;
                          IVar16 = _objc_msgSend(IVar11,"height");
                          _objc_msgSend(IVar16,"floatValue");
                          local_180 = NSNumber::numberWithFloat_
                                                ((ID)&_OBJC_CLASS___NSNumber,"numberWithFloat:");
                          local_190 = &cf_width;
                          IVar16 = _objc_msgSend(IVar11,"width");
                          _objc_msgSend(IVar16,"floatValue");
                          local_178 = NSNumber::numberWithFloat_
                                                ((ID)&_OBJC_CLASS___NSNumber,"numberWithFloat:");
                          IVar16 = NSDictionary::dictionaryWithObjects_forKeys_count_
                                             ((ID)&_OBJC_CLASS___NSDictionary,
                                              "dictionaryWithObjects:forKeys:count:",&local_188,
                                              &local_1a0,3);
                          NSMutableArray::addObject_(IVar8,"addObject:",IVar16);
                          IVar10 = IVar10 + 1;
                        } while (IVar9 != IVar10);
                        IVar9 = _objc_msgSend(IVar7,"countByEnumeratingWithState:objects:count:",
                                              &local_2a0,&local_170,0x10);
                      } while (IVar9 != 0);
                    }
                    IVar7 = NSMutableArray::count(IVar8,"count");
                    if (IVar7 == 0) goto LAB_000586d4;
                    IVar7 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
                    IVar7 = NSMutableArray::init(IVar7,"init");
                    IVar9 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
                    IVar9 = NSMutableArray::init(IVar9,"init");
                    uStack_238 = 0;
                    local_240 = 0;
                    uStack_228 = 0;
                    uStack_230 = 0;
                    lStack_258 = 0;
                    local_260 = 0;
                    uStack_248 = 0;
                    local_250 = (long *)0x0;
                    IVar10 = NSMutableArray::countByEnumeratingWithState_objects_count_
                                       (IVar8,"countByEnumeratingWithState:objects:count:",
                                        &local_260,local_f0,0x10);
                    if (IVar10 != 0) {
                      lVar15 = *local_250;
                      do {
                        IVar16 = 0;
                        do {
                          if (*local_250 != lVar15) {
                            _objc_enumerationMutation(IVar8);
                          }
                          IVar13 = *(ID *)(lStack_258 + IVar16 * 8);
                          IVar11 = _objc_msgSend(IVar13,"objectForKey:",&cf_width);
                          IVar12 = NSMutableArray::indexOfObject_(IVar9,"indexOfObject:",IVar11);
                          if (IVar12 == 0x7fffffffffffffff) {
                            IVar12 = _objc_msgSend(IVar13,"objectForKeyedSubscript:",&cf_url);
                            IVar12 = _objc_msgSend(IVar12,"containsString:",&cf__mp4_);
                            if ((int)IVar12 != 0) {
                              NSMutableArray::addObject_(IVar9,"addObject:",IVar11);
                              NSMutableArray::addObject_(IVar7,"addObject:",IVar13);
                            }
                          }
                          IVar16 = IVar16 + 1;
                        } while (IVar10 != IVar16);
                        IVar10 = NSMutableArray::countByEnumeratingWithState_objects_count_
                                           (IVar8,"countByEnumeratingWithState:objects:count:",
                                            &local_260,local_f0,0x10);
                      } while (IVar10 != 0);
                    }
                    IVar8 = NSSortDescriptor::sortDescriptorWithKey_ascending_
                                      ((ID)&_OBJC_CLASS___NSSortDescriptor,
                                       "sortDescriptorWithKey:ascending:",&cf_width,0);
                    IVar8 = NSArray::arrayWithObjects_
                                      ((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:",IVar8);
                    IVar7 = NSMutableArray::sortedArrayUsingDescriptors_
                                      (IVar7,"sortedArrayUsingDescriptors:",IVar8);
                  }
                }
                else {
                  IVar7 = _objc_msgSend(IVar7,"valueForKey:",&cf__videoVersionDictionaries);
                  IVar8 = _objc_msgSend(IVar7,"count");
                  if (IVar8 == 0) {
LAB_000586d4:
                    IVar7 = 0;
                  }
                  else {
                    IVar8 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
                    IVar8 = NSMutableArray::init(IVar8,"init");
                    IVar9 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
                    IVar9 = NSMutableArray::init(IVar9,"init");
                    uStack_148 = 0;
                    local_150 = 0;
                    uStack_138 = 0;
                    uStack_140 = 0;
                    lStack_168 = 0;
                    local_170 = 0;
                    uStack_158 = 0;
                    local_160 = (long *)0x0;
                    IVar10 = _objc_msgSend(IVar7,"countByEnumeratingWithState:objects:count:",
                                           &local_170,local_f0,0x10);
                    if (IVar10 != 0) {
                      lVar15 = *local_160;
                      do {
                        IVar16 = 0;
                        do {
                          if (*local_160 != lVar15) {
                            _objc_enumerationMutation(IVar7);
                          }
                          IVar13 = *(ID *)(lStack_168 + IVar16 * 8);
                          IVar11 = _objc_msgSend(IVar13,"objectForKey:",&cf_width);
                          IVar12 = NSMutableArray::indexOfObject_(IVar9,"indexOfObject:",IVar11);
                          if (IVar12 == 0x7fffffffffffffff) {
                            IVar12 = _objc_msgSend(IVar13,"objectForKeyedSubscript:",&cf_url);
                            IVar12 = _objc_msgSend(IVar12,"containsString:",&cf__mp4_);
                            if ((int)IVar12 != 0) {
                              NSMutableArray::addObject_(IVar9,"addObject:",IVar11);
                              NSMutableArray::addObject_(IVar8,"addObject:",IVar13);
                            }
                          }
                          IVar16 = IVar16 + 1;
                        } while (IVar10 != IVar16);
                        IVar10 = _objc_msgSend(IVar7,"countByEnumeratingWithState:objects:count:",
                                               &local_170,local_f0,0x10);
                      } while (IVar10 != 0);
                    }
                    IVar7 = NSSortDescriptor::sortDescriptorWithKey_ascending_
                                      ((ID)&_OBJC_CLASS___NSSortDescriptor,
                                       "sortDescriptorWithKey:ascending:",&cf_width,0);
                    IVar7 = NSArray::arrayWithObjects_
                                      ((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:",IVar7);
                    IVar7 = NSMutableArray::sortedArrayUsingDescriptors_
                                      (IVar8,"sortedArrayUsingDescriptors:",IVar7);
                  }
                }
              }
              IVar7 = NSMutableArray::objectAtIndexedSubscript_(IVar7,"objectAtIndexedSubscript:",0)
              ;
              IVar7 = NSMutableArray::objectForKeyedSubscript_
                                (IVar7,"objectForKeyedSubscript:",&cf_url);
              DLMediaData::instance_DLMediaData__setUrl_(IVar6,"setUrl:",IVar7);
              IVar7 = _objc_msgSend(self,"video");
              _objc_msgSend(IVar7,"videoDuration");
              DLMediaData::instance_DLMediaData__setDuration_(IVar6,"setDuration:",extraout_d0);
            }
          }
          IVar7 = _objc_msgSend(self,"takenAtDate");
          _objc_msgSend(IVar7,"timeIntervalSince1970");
          DLMediaData::instance_DLMediaData__setTakenAtDate_(IVar6,"setTakenAtDate:",extraout_d0_00)
          ;
          NSMutableArray::addObject_(IVar4,"addObject:",IVar6);
          IVar14 = IVar14 + 1;
        } while (IVar14 != IVar5);
        IVar5 = _objc_msgSend(IVar2,"countByEnumeratingWithState:objects:count:",&local_2e0,
                              auStack_220,0x10);
      } while (IVar5 != 0);
    }
    DLMultiMediaViewController::instance_DLMultiMediaViewController__setPosts_
              (IVar3,"setPosts:",IVar4);
    IVar2 = DLHelper::class_DLHelper__topMostController
                      ((ID)&objc::class_t::DLHelper,"topMostController");
    _objc_msgSend(IVar2,"presentViewController:animated:completion:",IVar3,1,0);
  }
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}

