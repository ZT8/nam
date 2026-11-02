/* Address: 000523e8 | Name: FUN_000523e8 | Body bytes: 3652 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_000523e8(ID param_1)

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
  ID self;
  ID IVar12;
  ID IVar13;
  long lVar14;
  ID IVar15;
  long lVar16;
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
  IVar2 = _objc_msgSend(param_1,"count");
  if (IVar2 != 0) {
    IVar2 = _objc_alloc(&objc::class_t::DLMultiMediaViewController);
    IVar2 = DLPopupViewController::instance_DLPopupViewController__initWithCustomHeight_
                      (IVar2,"initWithCustomHeight:",455.0);
    _objc_msgSend(IVar2,"setTitle:",&cf_DLInsta);
    IVar3 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
    IVar3 = NSMutableArray::init(IVar3,"init");
    uStack_2b8 = 0;
    local_2c0 = 0;
    uStack_2a8 = 0;
    uStack_2b0 = 0;
    lStack_2d8 = 0;
    local_2e0 = 0;
    uStack_2c8 = 0;
    local_2d0 = (long *)0x0;
    IVar4 = _objc_msgSend(param_1,"countByEnumeratingWithState:objects:count:",&local_2e0,
                          auStack_220,0x10);
    if (IVar4 != 0) {
      lVar16 = *local_2d0;
      do {
        IVar13 = 0;
        do {
          if (*local_2d0 != lVar16) {
            _objc_enumerationMutation(param_1);
          }
          self = *(ID *)(lStack_2d8 + IVar13 * 8);
          IVar5 = _objc_alloc(&objc::class_t::DLMediaData);
          IVar5 = _objc_msgSend(IVar5,"init");
          IVar6 = _objc_msgSend(self,"photo");
          if (IVar6 == 0) {
            IVar6 = 0;
          }
          else {
            IVar6 = _objc_msgSend(IVar6,"valueForKey:",&cf__originalImageVersions);
            local_f0[0] = NSSortDescriptor::sortDescriptorWithKey_ascending_
                                    ((ID)&_OBJC_CLASS___NSSortDescriptor,
                                     "sortDescriptorWithKey:ascending:",&cf_width,0);
            IVar7 = NSArray::arrayWithObjects_count_
                              ((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:count:",local_f0,1);
            IVar6 = _objc_msgSend(IVar6,"sortedArrayUsingDescriptors:",IVar7);
          }
          IVar7 = _objc_msgSend(IVar6,"firstObject");
          IVar7 = _objc_msgSend(IVar7,"valueForKey:",&cf__url);
          IVar7 = _objc_msgSend(IVar7,"absoluteString");
          DLMediaData::instance_DLMediaData__setCoverUrl_(IVar5,"setCoverUrl:",IVar7);
          IVar7 = _objc_msgSend(self,"itemMediaType");
          if (IVar7 == 1) {
            DLMediaData::instance_DLMediaData__setMediaType_(IVar5,"setMediaType:",1);
            IVar6 = _objc_msgSend(IVar6,"lastObject");
            IVar6 = _objc_msgSend(IVar6,"valueForKey:",&cf__url);
            IVar6 = _objc_msgSend(IVar6,"absoluteString");
            DLMediaData::instance_DLMediaData__setUrl_(IVar5,"setUrl:",IVar6);
          }
          else {
            IVar6 = _objc_msgSend(self,"itemMediaType");
            if (IVar6 == 2) {
              DLMediaData::instance_DLMediaData__setMediaType_(IVar5,"setMediaType:",2);
              IVar6 = _objc_msgSend(self,"video");
              if (IVar6 == 0) {
                IVar6 = 0;
              }
              else {
                iVar1 = FUN_0008ce2c(IVar6,"_videoVersionDictionaries");
                if (iVar1 == 0) {
                  IVar7 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
                  IVar7 = NSMutableArray::init(IVar7,"init");
                  IVar8 = _objc_msgSend(IVar6,"videoVersions");
                  IVar8 = _objc_msgSend(IVar8,"count");
                  if (IVar8 == 0) {
                    IVar6 = 0;
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
                    IVar8 = _objc_msgSend(IVar6,"countByEnumeratingWithState:objects:count:",
                                          &local_2a0,&local_170,0x10);
                    if (IVar8 != 0) {
                      lVar14 = *local_290;
                      do {
                        IVar9 = 0;
                        do {
                          if (*local_290 != lVar14) {
                            _objc_enumerationMutation(IVar6);
                          }
                          IVar10 = *(ID *)(lStack_298 + IVar9 * 8);
                          local_1a0 = &cf_url;
                          local_188 = _objc_msgSend(IVar10,"urlString");
                          local_198 = &cf_height;
                          IVar15 = _objc_msgSend(IVar10,"height");
                          _objc_msgSend(IVar15,"floatValue");
                          local_180 = NSNumber::numberWithFloat_
                                                ((ID)&_OBJC_CLASS___NSNumber,"numberWithFloat:");
                          local_190 = &cf_width;
                          IVar15 = _objc_msgSend(IVar10,"width");
                          _objc_msgSend(IVar15,"floatValue");
                          local_178 = NSNumber::numberWithFloat_
                                                ((ID)&_OBJC_CLASS___NSNumber,"numberWithFloat:");
                          IVar15 = NSDictionary::dictionaryWithObjects_forKeys_count_
                                             ((ID)&_OBJC_CLASS___NSDictionary,
                                              "dictionaryWithObjects:forKeys:count:",&local_188,
                                              &local_1a0,3);
                          NSMutableArray::addObject_(IVar7,"addObject:",IVar15);
                          IVar9 = IVar9 + 1;
                        } while (IVar8 != IVar9);
                        IVar8 = _objc_msgSend(IVar6,"countByEnumeratingWithState:objects:count:",
                                              &local_2a0,&local_170,0x10);
                      } while (IVar8 != 0);
                    }
                    IVar6 = NSMutableArray::count(IVar7,"count");
                    if (IVar6 == 0) goto LAB_00052ff8;
                    IVar6 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
                    IVar6 = NSMutableArray::init(IVar6,"init");
                    IVar8 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
                    IVar8 = NSMutableArray::init(IVar8,"init");
                    uStack_238 = 0;
                    local_240 = 0;
                    uStack_228 = 0;
                    uStack_230 = 0;
                    lStack_258 = 0;
                    local_260 = 0;
                    uStack_248 = 0;
                    local_250 = (long *)0x0;
                    IVar9 = NSMutableArray::countByEnumeratingWithState_objects_count_
                                      (IVar7,"countByEnumeratingWithState:objects:count:",&local_260
                                       ,local_f0,0x10);
                    if (IVar9 != 0) {
                      lVar14 = *local_250;
                      do {
                        IVar15 = 0;
                        do {
                          if (*local_250 != lVar14) {
                            _objc_enumerationMutation(IVar7);
                          }
                          IVar12 = *(ID *)(lStack_258 + IVar15 * 8);
                          IVar10 = _objc_msgSend(IVar12,"objectForKey:",&cf_width);
                          IVar11 = NSMutableArray::indexOfObject_(IVar8,"indexOfObject:",IVar10);
                          if (IVar11 == 0x7fffffffffffffff) {
                            IVar11 = _objc_msgSend(IVar12,"objectForKeyedSubscript:",&cf_url);
                            IVar11 = _objc_msgSend(IVar11,"containsString:",&cf__mp4_);
                            if ((int)IVar11 != 0) {
                              NSMutableArray::addObject_(IVar8,"addObject:",IVar10);
                              NSMutableArray::addObject_(IVar6,"addObject:",IVar12);
                            }
                          }
                          IVar15 = IVar15 + 1;
                        } while (IVar9 != IVar15);
                        IVar9 = NSMutableArray::countByEnumeratingWithState_objects_count_
                                          (IVar7,"countByEnumeratingWithState:objects:count:",
                                           &local_260,local_f0,0x10);
                      } while (IVar9 != 0);
                    }
                    IVar7 = NSSortDescriptor::sortDescriptorWithKey_ascending_
                                      ((ID)&_OBJC_CLASS___NSSortDescriptor,
                                       "sortDescriptorWithKey:ascending:",&cf_width,0);
                    IVar7 = NSArray::arrayWithObjects_
                                      ((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:",IVar7);
                    IVar6 = NSMutableArray::sortedArrayUsingDescriptors_
                                      (IVar6,"sortedArrayUsingDescriptors:",IVar7);
                  }
                }
                else {
                  IVar6 = _objc_msgSend(IVar6,"valueForKey:",&cf__videoVersionDictionaries);
                  IVar7 = _objc_msgSend(IVar6,"count");
                  if (IVar7 == 0) {
LAB_00052ff8:
                    IVar6 = 0;
                  }
                  else {
                    IVar7 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
                    IVar7 = NSMutableArray::init(IVar7,"init");
                    IVar8 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
                    IVar8 = NSMutableArray::init(IVar8,"init");
                    uStack_148 = 0;
                    local_150 = 0;
                    uStack_138 = 0;
                    uStack_140 = 0;
                    lStack_168 = 0;
                    local_170 = 0;
                    uStack_158 = 0;
                    local_160 = (long *)0x0;
                    IVar9 = _objc_msgSend(IVar6,"countByEnumeratingWithState:objects:count:",
                                          &local_170,local_f0,0x10);
                    if (IVar9 != 0) {
                      lVar14 = *local_160;
                      do {
                        IVar15 = 0;
                        do {
                          if (*local_160 != lVar14) {
                            _objc_enumerationMutation(IVar6);
                          }
                          IVar12 = *(ID *)(lStack_168 + IVar15 * 8);
                          IVar10 = _objc_msgSend(IVar12,"objectForKey:",&cf_width);
                          IVar11 = NSMutableArray::indexOfObject_(IVar8,"indexOfObject:",IVar10);
                          if (IVar11 == 0x7fffffffffffffff) {
                            IVar11 = _objc_msgSend(IVar12,"objectForKeyedSubscript:",&cf_url);
                            IVar11 = _objc_msgSend(IVar11,"containsString:",&cf__mp4_);
                            if ((int)IVar11 != 0) {
                              NSMutableArray::addObject_(IVar8,"addObject:",IVar10);
                              NSMutableArray::addObject_(IVar7,"addObject:",IVar12);
                            }
                          }
                          IVar15 = IVar15 + 1;
                        } while (IVar9 != IVar15);
                        IVar9 = _objc_msgSend(IVar6,"countByEnumeratingWithState:objects:count:",
                                              &local_170,local_f0,0x10);
                      } while (IVar9 != 0);
                    }
                    IVar6 = NSSortDescriptor::sortDescriptorWithKey_ascending_
                                      ((ID)&_OBJC_CLASS___NSSortDescriptor,
                                       "sortDescriptorWithKey:ascending:",&cf_width,0);
                    IVar6 = NSArray::arrayWithObjects_
                                      ((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:",IVar6);
                    IVar6 = NSMutableArray::sortedArrayUsingDescriptors_
                                      (IVar7,"sortedArrayUsingDescriptors:",IVar6);
                  }
                }
              }
              IVar6 = NSMutableArray::objectAtIndexedSubscript_(IVar6,"objectAtIndexedSubscript:",0)
              ;
              IVar6 = NSMutableArray::objectForKeyedSubscript_
                                (IVar6,"objectForKeyedSubscript:",&cf_url);
              DLMediaData::instance_DLMediaData__setUrl_(IVar5,"setUrl:",IVar6);
              IVar6 = _objc_msgSend(self,"video");
              _objc_msgSend(IVar6,"videoDuration");
              DLMediaData::instance_DLMediaData__setDuration_(IVar5,"setDuration:",extraout_d0);
            }
          }
          IVar6 = _objc_msgSend(self,"takenAtDate");
          _objc_msgSend(IVar6,"timeIntervalSince1970");
          DLMediaData::instance_DLMediaData__setTakenAtDate_(IVar5,"setTakenAtDate:",extraout_d0_00)
          ;
          NSMutableArray::addObject_(IVar3,"addObject:",IVar5);
          IVar13 = IVar13 + 1;
        } while (IVar13 != IVar4);
        IVar4 = _objc_msgSend(param_1,"countByEnumeratingWithState:objects:count:",&local_2e0,
                              auStack_220,0x10);
      } while (IVar4 != 0);
    }
    DLMultiMediaViewController::instance_DLMultiMediaViewController__setPosts_
              (IVar2,"setPosts:",IVar3);
    IVar3 = DLHelper::class_DLHelper__topMostController
                      ((ID)&objc::class_t::DLHelper,"topMostController");
    _objc_msgSend(IVar3,"presentViewController:animated:completion:",IVar2,1,0);
  }
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}

