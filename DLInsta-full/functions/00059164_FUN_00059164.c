/* Address: 00059164 | Name: FUN_00059164 | Body bytes: 10052 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */

void FUN_00059164(ID param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5,
                 undefined4 param_6)

{
  cfstringStruct *pcVar1;
  long_long lVar2;
  bool bVar3;
  int iVar4;
  ID IVar5;
  undefined8 uVar6;
  ID IVar7;
  ID IVar8;
  ID IVar9;
  ID IVar10;
  ID IVar11;
  ID IVar12;
  ID IVar13;
  long lVar14;
  ID IVar15;
  ID local_548;
  undefined *local_4e8;
  undefined8 local_4e0;
  code *local_4d8;
  undefined *puStack_4d0;
  ID local_4c8;
  undefined8 local_4c0;
  long lStack_4b8;
  long *local_4b0;
  undefined8 uStack_4a8;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 local_480;
  long lStack_478;
  long *local_470;
  undefined8 uStack_468;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined *local_440;
  undefined8 local_438;
  code *local_430;
  undefined *puStack_428;
  ID local_420;
  undefined1 local_418;
  undefined *local_410;
  undefined8 local_408;
  code *local_400;
  undefined *puStack_3f8;
  ID local_3f0;
  undefined *local_3e8;
  undefined8 local_3e0;
  code *local_3d8;
  undefined *puStack_3d0;
  ID local_3c8;
  ID local_3c0;
  long local_3b8;
  undefined8 local_3b0;
  undefined *local_3a8;
  undefined8 local_3a0;
  code *local_398;
  undefined *puStack_390;
  undefined1 local_388;
  undefined *local_380;
  undefined8 local_378;
  code *local_370;
  undefined *local_368;
  ID local_360;
  ID local_358;
  long local_350;
  undefined8 local_348;
  undefined8 local_340;
  long lStack_338;
  long *local_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 local_300;
  long lStack_2f8;
  long *local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined1 auStack_2c0 [128];
  undefined1 auStack_240 [128];
  cfstringStruct *local_1c0;
  cfstringStruct *local_1b8;
  cfstringStruct *local_1b0;
  ID local_1a8;
  ID local_1a0;
  ID local_198;
  undefined8 local_190;
  long lStack_188;
  long *local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  ID local_108 [16];
  long local_88;
  
  local_88 = *(long *)PTR____stack_chk_guard_000e8260;
  IVar5 = _objc_msgSend(param_1,"item");
  if (DAT_000fffc0 == 0) {
    DAT_000fffc0 = _objc_getClass("IGDirectVisualMessageStoryItemWrapper");
  }
  uVar6 = _objc_retainAutorelease();
  IVar5 = _objc_msgSend(IVar5,"isMemberOfClass:",uVar6);
  if ((int)IVar5 == 0) {
    IVar5 = _objc_msgSend(param_1,"item");
    if (DAT_000fffd0 == 0) {
      DAT_000fffd0 = _objc_getClass("IGMedia");
    }
    uVar6 = _objc_retainAutorelease();
    IVar5 = _objc_msgSend(IVar5,"isMemberOfClass:",uVar6);
    if ((IVar5 & 1) == 0) goto LAB_0005b860;
    if (param_3 == 1) {
      IVar5 = _objc_msgSend(param_1,"item");
      local_548 = _objc_msgSend(IVar5,"valueForKey:",&cf_photo);
      if (DAT_000fffc8 == 0) {
        DAT_000fffc8 = _objc_getClass("IGPhoto");
      }
    }
    else {
      IVar5 = _objc_msgSend(param_1,"item");
      local_548 = _objc_msgSend(IVar5,"valueForKey:",&cf_video);
      if (DAT_000fffa8 == 0) {
        DAT_000fffa8 = _objc_getClass("IGVideo");
      }
    }
    uVar6 = _objc_retainAutorelease();
    IVar5 = _objc_msgSend(local_548,"isMemberOfClass:",uVar6);
    if ((IVar5 & 1) == 0) goto LAB_0005b860;
    if (param_3 == 1) {
      if (local_548 == 0) {
        IVar5 = 0;
      }
      else {
        IVar5 = _objc_msgSend(local_548,"valueForKey:",&cf__originalImageVersions);
        local_108[0] = NSSortDescriptor::sortDescriptorWithKey_ascending_
                                 ((ID)&_OBJC_CLASS___NSSortDescriptor,
                                  "sortDescriptorWithKey:ascending:",&cf_width,0);
        IVar7 = NSArray::arrayWithObjects_count_
                          ((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:count:",local_108,1);
        IVar5 = _objc_msgSend(IVar5,"sortedArrayUsingDescriptors:",IVar7);
      }
    }
    else if (local_548 == 0) {
      IVar5 = 0;
    }
    else {
      iVar4 = FUN_0008ce2c(local_548,"_videoVersionDictionaries");
      if (iVar4 == 0) {
        IVar5 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
        IVar5 = NSMutableArray::init(IVar5,"init");
        IVar7 = _objc_msgSend(local_548,"videoVersions");
        IVar7 = _objc_msgSend(IVar7,"count");
        if (IVar7 == 0) {
          IVar5 = 0;
        }
        else {
          uStack_318 = 0;
          local_320 = 0;
          uStack_308 = 0;
          uStack_310 = 0;
          lStack_338 = 0;
          local_340 = 0;
          uStack_328 = 0;
          local_330 = (long *)0x0;
          IVar7 = _objc_msgSend(local_548,"videoVersions");
          IVar8 = _objc_msgSend(IVar7,"countByEnumeratingWithState:objects:count:",&local_340,
                                &local_190,0x10);
          if (IVar8 != 0) {
            lVar14 = *local_330;
            do {
              IVar10 = 0;
              do {
                if (*local_330 != lVar14) {
                  _objc_enumerationMutation(IVar7);
                }
                IVar15 = *(ID *)(lStack_338 + IVar10 * 8);
                local_1c0 = &cf_url;
                local_1a8 = _objc_msgSend(IVar15,"urlString");
                local_1b8 = &cf_height;
                IVar11 = _objc_msgSend(IVar15,"height");
                _objc_msgSend(IVar11,"floatValue");
                local_1a0 = NSNumber::numberWithFloat_
                                      ((ID)&_OBJC_CLASS___NSNumber,"numberWithFloat:");
                local_1b0 = &cf_width;
                IVar11 = _objc_msgSend(IVar15,"width");
                _objc_msgSend(IVar11,"floatValue");
                local_198 = NSNumber::numberWithFloat_
                                      ((ID)&_OBJC_CLASS___NSNumber,"numberWithFloat:");
                IVar11 = NSDictionary::dictionaryWithObjects_forKeys_count_
                                   ((ID)&_OBJC_CLASS___NSDictionary,
                                    "dictionaryWithObjects:forKeys:count:",&local_1a8,&local_1c0,3);
                NSMutableArray::addObject_(IVar5,"addObject:",IVar11);
                IVar10 = IVar10 + 1;
              } while (IVar8 != IVar10);
              IVar8 = _objc_msgSend(IVar7,"countByEnumeratingWithState:objects:count:",&local_340,
                                    &local_190,0x10);
            } while (IVar8 != 0);
          }
          IVar7 = NSMutableArray::count(IVar5,"count");
          if (IVar7 == 0) goto LAB_0005a610;
          IVar7 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
          IVar7 = NSMutableArray::init(IVar7,"init");
          IVar8 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
          IVar8 = NSMutableArray::init(IVar8,"init");
          uStack_2d8 = 0;
          local_2e0 = 0;
          uStack_2c8 = 0;
          uStack_2d0 = 0;
          lStack_2f8 = 0;
          local_300 = 0;
          uStack_2e8 = 0;
          local_2f0 = (long *)0x0;
          IVar10 = NSMutableArray::countByEnumeratingWithState_objects_count_
                             (IVar5,"countByEnumeratingWithState:objects:count:",&local_300,
                              local_108,0x10);
          if (IVar10 != 0) {
            lVar14 = *local_2f0;
            do {
              IVar11 = 0;
              do {
                if (*local_2f0 != lVar14) {
                  _objc_enumerationMutation(IVar5);
                }
                IVar9 = *(ID *)(lStack_2f8 + IVar11 * 8);
                IVar15 = _objc_msgSend(IVar9,"objectForKey:",&cf_width);
                IVar12 = NSMutableArray::indexOfObject_(IVar8,"indexOfObject:",IVar15);
                if (IVar12 == 0x7fffffffffffffff) {
                  IVar12 = _objc_msgSend(IVar9,"objectForKeyedSubscript:",&cf_url);
                  IVar12 = _objc_msgSend(IVar12,"containsString:",&cf__mp4_);
                  if ((int)IVar12 != 0) {
                    NSMutableArray::addObject_(IVar8,"addObject:",IVar15);
                    NSMutableArray::addObject_(IVar7,"addObject:",IVar9);
                  }
                }
                IVar11 = IVar11 + 1;
              } while (IVar10 != IVar11);
              IVar10 = NSMutableArray::countByEnumeratingWithState_objects_count_
                                 (IVar5,"countByEnumeratingWithState:objects:count:",&local_300,
                                  local_108,0x10);
            } while (IVar10 != 0);
          }
          IVar5 = NSSortDescriptor::sortDescriptorWithKey_ascending_
                            ((ID)&_OBJC_CLASS___NSSortDescriptor,"sortDescriptorWithKey:ascending:",
                             &cf_width,0);
          IVar5 = NSArray::arrayWithObjects_((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:",IVar5);
          IVar5 = NSMutableArray::sortedArrayUsingDescriptors_
                            (IVar7,"sortedArrayUsingDescriptors:",IVar5);
        }
      }
      else {
        IVar5 = _objc_msgSend(local_548,"valueForKey:",&cf__videoVersionDictionaries);
        IVar7 = _objc_msgSend(IVar5,"count");
        if (IVar7 == 0) {
LAB_0005a610:
          IVar5 = 0;
        }
        else {
          IVar7 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
          IVar7 = NSMutableArray::init(IVar7,"init");
          IVar8 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
          IVar8 = NSMutableArray::init(IVar8,"init");
          uStack_2d8 = 0;
          local_2e0 = 0;
          uStack_2c8 = 0;
          uStack_2d0 = 0;
          lStack_2f8 = 0;
          local_300 = 0;
          uStack_2e8 = 0;
          local_2f0 = (long *)0x0;
          IVar10 = _objc_msgSend(IVar5,"countByEnumeratingWithState:objects:count:",&local_300,
                                 local_108,0x10);
          if (IVar10 != 0) {
            lVar14 = *local_2f0;
            do {
              IVar11 = 0;
              do {
                if (*local_2f0 != lVar14) {
                  _objc_enumerationMutation(IVar5);
                }
                IVar9 = *(ID *)(lStack_2f8 + IVar11 * 8);
                IVar15 = _objc_msgSend(IVar9,"objectForKey:",&cf_width);
                IVar12 = NSMutableArray::indexOfObject_(IVar8,"indexOfObject:",IVar15);
                if (IVar12 == 0x7fffffffffffffff) {
                  IVar12 = _objc_msgSend(IVar9,"objectForKeyedSubscript:",&cf_url);
                  IVar12 = _objc_msgSend(IVar12,"containsString:",&cf__mp4_);
                  if ((int)IVar12 != 0) {
                    NSMutableArray::addObject_(IVar8,"addObject:",IVar15);
                    NSMutableArray::addObject_(IVar7,"addObject:",IVar9);
                  }
                }
                IVar11 = IVar11 + 1;
              } while (IVar10 != IVar11);
              IVar10 = _objc_msgSend(IVar5,"countByEnumeratingWithState:objects:count:",&local_300,
                                     local_108,0x10);
            } while (IVar10 != 0);
          }
          IVar5 = NSSortDescriptor::sortDescriptorWithKey_ascending_
                            ((ID)&_OBJC_CLASS___NSSortDescriptor,"sortDescriptorWithKey:ascending:",
                             &cf_width,0);
          IVar5 = NSArray::arrayWithObjects_((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:",IVar5);
          IVar5 = NSMutableArray::sortedArrayUsingDescriptors_
                            (IVar7,"sortedArrayUsingDescriptors:",IVar5);
        }
      }
    }
    IVar7 = _objc_msgSend(IVar5,"count");
    if (IVar7 != 0) {
      IVar7 = NSMutableArray::array((ID)&_OBJC_CLASS___NSMutableArray,"array");
      IVar8 = FUN_0008c218(&cf_ACTION_DOWNLOAD);
      local_3e8 = PTR___NSConcreteStackBlock_000e80d8;
      local_3e0 = 0xc2000000;
      local_3d8 = FUN_0005d274;
      puStack_3d0 = &DAT_000e8b48;
      local_3c8 = param_1;
      local_3c0 = IVar5;
      local_3b8 = param_3;
      local_3b0 = param_2;
      IVar5 = ABMenuActionItem::class_ABMenuActionItem__actionItemWithTitle_style_action_
                        ((ID)&objc::class_t::ABMenuActionItem,"actionItemWithTitle:style:action:",
                         IVar8,0,(ID)&local_3e8);
      NSMutableArray::addObject_(IVar7,"addObject:",IVar5);
      IVar5 = DLHelper::class_DLHelper__findViewController_
                        ((ID)&objc::class_t::DLHelper,"findViewController:",param_1);
      IVar8 = _objc_msgSend(IVar5,"respondsToSelector:","currentViewModel");
      if ((int)IVar8 == 0) {
        IVar5 = 0;
      }
      else {
        IVar5 = _objc_msgSend(IVar5,"currentViewModel");
        IVar5 = _objc_msgSend(IVar5,"items");
        IVar5 = _objc_msgSend(IVar5,"mutableCopy");
      }
      IVar5 = _objc_msgSend(IVar5,"count");
      if (1 < IVar5) {
        IVar5 = FUN_0008c218(&cf_STORIES_VIEW_ALL_STORIES);
        local_410 = PTR___NSConcreteStackBlock_000e80d8;
        local_408 = 0xc2000000;
        local_400 = FUN_0005de9c;
        puStack_3f8 = &DAT_000e8948;
        local_3f0 = param_1;
        IVar5 = ABMenuActionItem::class_ABMenuActionItem__actionItemWithTitle_style_action_
                          ((ID)&objc::class_t::ABMenuActionItem,"actionItemWithTitle:style:action:",
                           IVar5,0,(ID)&local_410);
        NSMutableArray::addObject_(IVar7,"addObject:",IVar5);
      }
      IVar5 = NSUserDefaults::standardUserDefaults
                        ((ID)&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
      IVar5 = NSUserDefaults::boolForKey_
                        (IVar5,"boolForKey:",&cf_DL_SeeStoryWithoutOtherPartyKnowing);
      if ((int)IVar5 != 0) {
        uVar6 = FUN_00097ef8();
        uVar6 = FUN_00097a54(uVar6);
        IVar5 = _objc_msgSend(DAT_001006a8,"length");
        IVar5 = FUN_00097c68(uVar6,IVar5);
        IVar5 = _objc_msgSend(IVar5,"isEqualToString:",DAT_001006a8);
        if ((int)IVar5 != 0) {
          IVar5 = _objc_msgSend(param_1,"item");
          IVar5 = _objc_msgSend(IVar5,"respondsToSelector:","mediaId");
          if ((int)IVar5 != 0) {
            IVar5 = _objc_msgSend(param_1,"item");
            IVar5 = _objc_msgSend(IVar5,"mediaId");
            IVar8 = _NSSearchPathForDirectoriesInDomains(9,1,1);
            IVar8 = _objc_msgSend(IVar8,"objectAtIndex:",0);
            IVar8 = _objc_msgSend(IVar8,"stringByAppendingPathComponent:",
                                  &cf_story_seen_media_id_plist);
            IVar10 = NSFileManager::defaultManager
                               ((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
            IVar10 = NSFileManager::fileExistsAtPath_(IVar10,"fileExistsAtPath:",IVar8);
            if ((int)IVar10 == 0) {
              bVar3 = false;
            }
            else {
              IVar10 = _objc_alloc(&_OBJC_CLASS___NSMutableDictionary);
              IVar8 = NSMutableDictionary::initWithContentsOfFile_
                                (IVar10,"initWithContentsOfFile:",IVar8);
              IVar8 = NSMutableDictionary::objectForKey_(IVar8,"objectForKey:",&cf_media_ids);
              lStack_188 = 0;
              local_190 = 0;
              uStack_178 = 0;
              local_180 = (long *)0x0;
              uStack_168 = 0;
              local_170 = 0;
              uStack_158 = 0;
              uStack_160 = 0;
              IVar10 = NSMutableDictionary::countByEnumeratingWithState_objects_count_
                                 (IVar8,"countByEnumeratingWithState:objects:count:",&local_190,
                                  local_108,0x10);
              bVar3 = false;
              if (IVar10 != 0) {
                lVar14 = *local_180;
                do {
                  IVar11 = 0;
                  do {
                    if (*local_180 != lVar14) {
                      _objc_enumerationMutation(IVar8);
                    }
                    IVar15 = _objc_msgSend(IVar5,"isEqualToString:",
                                           *(undefined8 *)(lStack_188 + IVar11 * 8));
                    if ((IVar15 & 1) != 0) {
                      bVar3 = true;
                      goto LAB_0005b188;
                    }
                    IVar11 = IVar11 + 1;
                  } while (IVar10 != IVar11);
                  IVar10 = NSMutableDictionary::countByEnumeratingWithState_objects_count_
                                     (IVar8,"countByEnumeratingWithState:objects:count:",&local_190,
                                      local_108,0x10);
                } while (IVar10 != 0);
                bVar3 = false;
              }
            }
LAB_0005b188:
            IVar5 = FUN_0008c218(&cf_ACTION_SEEN);
            lVar2 = 3;
            if (!bVar3) {
              lVar2 = 1;
            }
            local_440 = PTR___NSConcreteStackBlock_000e80d8;
            local_438 = 0xc2000000;
            local_430 = FUN_0005f204;
            puStack_428 = &DAT_000e8b98;
            local_420 = param_1;
            local_418 = bVar3;
            IVar5 = ABMenuActionItem::class_ABMenuActionItem__actionItemWithTitle_style_action_
                              ((ID)&objc::class_t::ABMenuActionItem,
                               "actionItemWithTitle:style:action:",IVar5,lVar2,(ID)&local_440);
            NSMutableArray::addObject_(IVar7,"addObject:",IVar5);
          }
        }
      }
      IVar5 = NSUserDefaults::standardUserDefaults
                        ((ID)&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
      IVar5 = NSUserDefaults::boolForKey_(IVar5,"boolForKey:",&cf_DL_ShowMentionsInStory);
      if ((int)IVar5 != 0) {
        uVar6 = FUN_00097ef8();
        uVar6 = FUN_00097a54(uVar6);
        IVar5 = _objc_msgSend(DAT_001006a8,"length");
        IVar5 = FUN_00097c68(uVar6,IVar5);
        IVar5 = _objc_msgSend(IVar5,"isEqualToString:",DAT_001006a8);
        if ((int)IVar5 != 0) {
          IVar5 = NSMutableArray::array((ID)&_OBJC_CLASS___NSMutableArray,"array");
          IVar8 = _objc_msgSend(param_1,"item");
          IVar8 = _objc_msgSend(IVar8,"respondsToSelector:","taggedUsers");
          if ((int)IVar8 == 0) {
            IVar8 = _objc_msgSend(param_1,"item");
            IVar8 = _objc_msgSend(IVar8,"respondsToSelector:","reelMentions");
            if ((int)IVar8 != 0) {
              uStack_498 = 0;
              local_4a0 = 0;
              uStack_488 = 0;
              uStack_490 = 0;
              lStack_4b8 = 0;
              local_4c0 = 0;
              uStack_4a8 = 0;
              local_4b0 = (long *)0x0;
              IVar8 = _objc_msgSend(param_1,"item");
              IVar8 = _objc_msgSend(IVar8,"reelMentions");
              IVar10 = _objc_msgSend(IVar8,"countByEnumeratingWithState:objects:count:",&local_4c0,
                                     auStack_2c0,0x10);
              if (IVar10 != 0) {
                lVar14 = *local_4b0;
                do {
                  IVar11 = 0;
                  do {
                    if (*local_4b0 != lVar14) {
                      _objc_enumerationMutation(IVar8);
                    }
                    IVar12 = *(ID *)(lStack_4b8 + IVar11 * 8);
                    IVar15 = _objc_msgSend(IVar12,"respondsToSelector:","user");
                    if ((int)IVar15 != 0) {
                      IVar15 = _objc_msgSend(IVar12,"performSelector:","user");
                      if (DAT_000fffd8 == 0) {
                        DAT_000fffd8 = _objc_getClass("IGUser");
                      }
                      uVar6 = _objc_retainAutorelease();
                      IVar12 = _objc_msgSend(IVar15,"isKindOfClass:",uVar6);
                      if ((int)IVar12 != 0) {
                        NSMutableArray::addObject_(IVar5,"addObject:",IVar15);
                      }
                    }
                    IVar11 = IVar11 + 1;
                  } while (IVar10 != IVar11);
                  IVar10 = _objc_msgSend(IVar8,"countByEnumeratingWithState:objects:count:",
                                         &local_4c0,auStack_2c0,0x10);
                } while (IVar10 != 0);
              }
            }
          }
          else {
            uStack_458 = 0;
            local_460 = 0;
            uStack_448 = 0;
            uStack_450 = 0;
            lStack_478 = 0;
            local_480 = 0;
            uStack_468 = 0;
            local_470 = (long *)0x0;
            IVar8 = _objc_msgSend(param_1,"item");
            IVar8 = _objc_msgSend(IVar8,"taggedUsers");
            IVar10 = _objc_msgSend(IVar8,"countByEnumeratingWithState:objects:count:",&local_480,
                                   auStack_240,0x10);
            if (IVar10 != 0) {
              lVar14 = *local_470;
              do {
                IVar11 = 0;
                do {
                  if (*local_470 != lVar14) {
                    _objc_enumerationMutation(IVar8);
                  }
                  IVar15 = *(ID *)(lStack_478 + IVar11 * 8);
                  if (DAT_000fffd8 == 0) {
                    DAT_000fffd8 = _objc_getClass("IGUser");
                  }
                  uVar6 = _objc_retainAutorelease();
                  IVar12 = _objc_msgSend(IVar15,"isKindOfClass:",uVar6);
                  if ((int)IVar12 != 0) {
                    NSMutableArray::addObject_(IVar5,"addObject:",IVar15);
                  }
                  IVar11 = IVar11 + 1;
                } while (IVar10 != IVar11);
                IVar10 = _objc_msgSend(IVar8,"countByEnumeratingWithState:objects:count:",&local_480
                                       ,auStack_240,0x10);
              } while (IVar10 != 0);
            }
          }
          IVar8 = NSMutableArray::count(IVar5,"count");
          if (IVar8 != 0) {
            IVar8 = FUN_0008c218(&cf_STORIES_SHOW_MENTIONS);
            local_4e8 = PTR___NSConcreteStackBlock_000e80d8;
            local_4e0 = 0xc2000000;
            local_4d8 = FUN_0005f55c;
            puStack_4d0 = &DAT_000e8948;
            local_4c8 = IVar5;
            IVar5 = ABMenuActionItem::class_ABMenuActionItem__actionItemWithTitle_style_action_
                              ((ID)&objc::class_t::ABMenuActionItem,
                               "actionItemWithTitle:style:action:",IVar8,0,(ID)&local_4e8);
            NSMutableArray::addObject_(IVar7,"addObject:",IVar5);
          }
        }
      }
      IVar5 = _objc_msgSend(param_1,"valueForKey:",&cf_delegate);
      IVar8 = _objc_alloc(&objc::class_t::ABMenuViewController);
      IVar7 = ABMenuViewController::instance_ABMenuViewController__initWithActionItems_
                        (IVar8,"initWithActionItems:",IVar7);
      IVar8 = _objc_msgSend(IVar5,"valueForKey:",&cf__storyItemContext);
      IVar10 = _objc_msgSend(IVar8,"respondsToSelector:","storyItemActionController");
      if ((int)IVar10 != 0) {
        IVar8 = _objc_msgSend(IVar8,"storyItemActionController");
        ABMenuViewController::instance_ABMenuViewController__setDelegate_
                  (IVar7,"setDelegate:",IVar8);
      }
      IVar5 = _objc_msgSend(IVar5,"delegate");
      ABMenuViewController::
      instance_ABMenuViewController__presentedFromViewController_animated_completion_
                (IVar7,"presentedFromViewController:animated:completion:",IVar5,1,0,param_6);
    }
    goto LAB_0005b860;
  }
  IVar5 = _objc_msgSend(param_1,"item");
  pcVar1 = &cf_rawPhoto;
  if (param_3 != 1) {
    pcVar1 = &cf_rawVideo;
  }
  IVar5 = _objc_msgSend(IVar5,"valueForKey:",pcVar1);
  if (param_3 == 1) {
    if (DAT_000fffc8 == 0) {
      DAT_000fffc8 = _objc_getClass("IGPhoto");
    }
  }
  else if (DAT_000fffa8 == 0) {
    DAT_000fffa8 = _objc_getClass("IGVideo");
  }
  uVar6 = _objc_retainAutorelease();
  IVar7 = _objc_msgSend(IVar5,"isMemberOfClass:",uVar6);
  if ((IVar7 & 1) == 0) goto LAB_0005b860;
  if (param_3 == 1) {
    if (IVar5 == 0) {
LAB_00059884:
      IVar7 = 0;
    }
    else {
      IVar7 = _objc_msgSend(IVar5,"valueForKey:",&cf__originalImageVersions);
      local_108[0] = NSSortDescriptor::sortDescriptorWithKey_ascending_
                               ((ID)&_OBJC_CLASS___NSSortDescriptor,
                                "sortDescriptorWithKey:ascending:",&cf_width,0);
      IVar8 = NSArray::arrayWithObjects_count_
                        ((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:count:",local_108,1);
      IVar7 = _objc_msgSend(IVar7,"sortedArrayUsingDescriptors:",IVar8);
    }
  }
  else {
    if (IVar5 == 0) goto LAB_00059884;
    iVar4 = FUN_0008ce2c(IVar5,"_videoVersionDictionaries");
    if (iVar4 == 0) {
      IVar7 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
      IVar7 = NSMutableArray::init(IVar7,"init");
      IVar8 = _objc_msgSend(IVar5,"videoVersions");
      IVar8 = _objc_msgSend(IVar8,"count");
      if (IVar8 == 0) {
        IVar7 = 0;
      }
      else {
        uStack_318 = 0;
        local_320 = 0;
        uStack_308 = 0;
        uStack_310 = 0;
        lStack_338 = 0;
        local_340 = 0;
        uStack_328 = 0;
        local_330 = (long *)0x0;
        IVar8 = _objc_msgSend(IVar5,"videoVersions");
        IVar10 = _objc_msgSend(IVar8,"countByEnumeratingWithState:objects:count:",&local_340,
                               &local_190,0x10);
        if (IVar10 != 0) {
          lVar14 = *local_330;
          do {
            IVar11 = 0;
            do {
              if (*local_330 != lVar14) {
                _objc_enumerationMutation(IVar8);
              }
              IVar12 = *(ID *)(lStack_338 + IVar11 * 8);
              local_1c0 = &cf_url;
              local_1a8 = _objc_msgSend(IVar12,"urlString");
              local_1b8 = &cf_height;
              IVar15 = _objc_msgSend(IVar12,"height");
              _objc_msgSend(IVar15,"floatValue");
              local_1a0 = NSNumber::numberWithFloat_((ID)&_OBJC_CLASS___NSNumber,"numberWithFloat:")
              ;
              local_1b0 = &cf_width;
              IVar15 = _objc_msgSend(IVar12,"width");
              _objc_msgSend(IVar15,"floatValue");
              local_198 = NSNumber::numberWithFloat_((ID)&_OBJC_CLASS___NSNumber,"numberWithFloat:")
              ;
              IVar15 = NSDictionary::dictionaryWithObjects_forKeys_count_
                                 ((ID)&_OBJC_CLASS___NSDictionary,
                                  "dictionaryWithObjects:forKeys:count:",&local_1a8,&local_1c0,3);
              NSMutableArray::addObject_(IVar7,"addObject:",IVar15);
              IVar11 = IVar11 + 1;
            } while (IVar10 != IVar11);
            IVar10 = _objc_msgSend(IVar8,"countByEnumeratingWithState:objects:count:",&local_340,
                                   &local_190,0x10);
          } while (IVar10 != 0);
        }
        IVar8 = NSMutableArray::count(IVar7,"count");
        if (IVar8 == 0) {
          IVar7 = 0;
        }
        else {
          IVar8 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
          IVar8 = NSMutableArray::init(IVar8,"init");
          IVar10 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
          IVar10 = NSMutableArray::init(IVar10,"init");
          uStack_2d8 = 0;
          local_2e0 = 0;
          uStack_2c8 = 0;
          uStack_2d0 = 0;
          lStack_2f8 = 0;
          local_300 = 0;
          uStack_2e8 = 0;
          local_2f0 = (long *)0x0;
          IVar11 = NSMutableArray::countByEnumeratingWithState_objects_count_
                             (IVar7,"countByEnumeratingWithState:objects:count:",&local_300,
                              local_108,0x10);
          if (IVar11 != 0) {
            lVar14 = *local_2f0;
            do {
              IVar15 = 0;
              do {
                if (*local_2f0 != lVar14) {
                  _objc_enumerationMutation(IVar7);
                }
                IVar13 = *(ID *)(lStack_2f8 + IVar15 * 8);
                IVar12 = _objc_msgSend(IVar13,"objectForKey:",&cf_width);
                IVar9 = NSMutableArray::indexOfObject_(IVar10,"indexOfObject:",IVar12);
                if (IVar9 == 0x7fffffffffffffff) {
                  IVar9 = _objc_msgSend(IVar13,"objectForKeyedSubscript:",&cf_url);
                  IVar9 = _objc_msgSend(IVar9,"containsString:",&cf__mp4_);
                  if ((int)IVar9 != 0) {
                    NSMutableArray::addObject_(IVar10,"addObject:",IVar12);
                    NSMutableArray::addObject_(IVar8,"addObject:",IVar13);
                  }
                }
                IVar15 = IVar15 + 1;
              } while (IVar11 != IVar15);
              IVar11 = NSMutableArray::countByEnumeratingWithState_objects_count_
                                 (IVar7,"countByEnumeratingWithState:objects:count:",&local_300,
                                  local_108,0x10);
            } while (IVar11 != 0);
          }
          IVar7 = NSSortDescriptor::sortDescriptorWithKey_ascending_
                            ((ID)&_OBJC_CLASS___NSSortDescriptor,"sortDescriptorWithKey:ascending:",
                             &cf_width,0);
          IVar7 = NSArray::arrayWithObjects_((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:",IVar7);
          IVar7 = NSMutableArray::sortedArrayUsingDescriptors_
                            (IVar8,"sortedArrayUsingDescriptors:",IVar7);
        }
      }
    }
    else {
      IVar7 = _objc_msgSend(IVar5,"valueForKey:",&cf__videoVersionDictionaries);
      IVar8 = _objc_msgSend(IVar7,"count");
      if (IVar8 == 0) {
        IVar7 = 0;
      }
      else {
        IVar8 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
        IVar8 = NSMutableArray::init(IVar8,"init");
        IVar10 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
        IVar10 = NSMutableArray::init(IVar10,"init");
        uStack_2d8 = 0;
        local_2e0 = 0;
        uStack_2c8 = 0;
        uStack_2d0 = 0;
        lStack_2f8 = 0;
        local_300 = 0;
        uStack_2e8 = 0;
        local_2f0 = (long *)0x0;
        IVar11 = _objc_msgSend(IVar7,"countByEnumeratingWithState:objects:count:",&local_300,
                               local_108,0x10);
        if (IVar11 != 0) {
          lVar14 = *local_2f0;
          do {
            IVar15 = 0;
            do {
              if (*local_2f0 != lVar14) {
                _objc_enumerationMutation(IVar7);
              }
              IVar13 = *(ID *)(lStack_2f8 + IVar15 * 8);
              IVar12 = _objc_msgSend(IVar13,"objectForKey:",&cf_width);
              IVar9 = NSMutableArray::indexOfObject_(IVar10,"indexOfObject:",IVar12);
              if (IVar9 == 0x7fffffffffffffff) {
                IVar9 = _objc_msgSend(IVar13,"objectForKeyedSubscript:",&cf_url);
                IVar9 = _objc_msgSend(IVar9,"containsString:",&cf__mp4_);
                if ((int)IVar9 != 0) {
                  NSMutableArray::addObject_(IVar10,"addObject:",IVar12);
                  NSMutableArray::addObject_(IVar8,"addObject:",IVar13);
                }
              }
              IVar15 = IVar15 + 1;
            } while (IVar11 != IVar15);
            IVar11 = _objc_msgSend(IVar7,"countByEnumeratingWithState:objects:count:",&local_300,
                                   local_108,0x10);
          } while (IVar11 != 0);
        }
        IVar7 = NSSortDescriptor::sortDescriptorWithKey_ascending_
                          ((ID)&_OBJC_CLASS___NSSortDescriptor,"sortDescriptorWithKey:ascending:",
                           &cf_width,0);
        IVar7 = NSArray::arrayWithObjects_((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:",IVar7);
        IVar7 = NSMutableArray::sortedArrayUsingDescriptors_
                          (IVar8,"sortedArrayUsingDescriptors:",IVar7);
      }
    }
  }
  IVar8 = _objc_msgSend(IVar7,"count");
  if (IVar8 != 0) {
    IVar8 = _objc_msgSend(param_1,"valueForKey:",&cf__delegate);
    IVar10 = NSMutableArray::array((ID)&_OBJC_CLASS___NSMutableArray,"array");
    IVar11 = FUN_0008c218(&cf_ACTION_DOWNLOAD);
    local_380 = PTR___NSConcreteStackBlock_000e80d8;
    local_378 = 0xc2000000;
    local_370 = FUN_0005c5d0;
    local_368 = &DAT_000e8b48;
    local_360 = param_1;
    local_358 = IVar7;
    local_350 = param_3;
    local_348 = param_2;
    IVar7 = ABMenuActionItem::class_ABMenuActionItem__actionItemWithTitle_style_action_
                      ((ID)&objc::class_t::ABMenuActionItem,"actionItemWithTitle:style:action:",
                       IVar11,0,(ID)&local_380);
    NSMutableArray::addObject_(IVar10,"addObject:",IVar7);
    IVar7 = NSUserDefaults::standardUserDefaults
                      ((ID)&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
    IVar7 = NSUserDefaults::boolForKey_(IVar7,"boolForKey:",&cf_DL_SeeStoryWithoutOtherPartyKnowing)
    ;
    if ((int)IVar7 != 0) {
      uVar6 = FUN_00097ef8();
      uVar6 = FUN_00097a54(uVar6);
      IVar7 = _objc_msgSend(DAT_001006a8,"length");
      IVar7 = FUN_00097c68(uVar6,IVar7);
      IVar7 = _objc_msgSend(IVar7,"isEqualToString:",DAT_001006a8);
      if (((int)IVar7 != 0) &&
         (IVar7 = _objc_msgSend(IVar5,"respondsToSelector:","mediaID"), (int)IVar7 != 0)) {
        IVar5 = _objc_msgSend(IVar5,"mediaID");
        IVar7 = _NSSearchPathForDirectoriesInDomains(9,1,1);
        IVar7 = _objc_msgSend(IVar7,"objectAtIndex:",0);
        IVar7 = _objc_msgSend(IVar7,"stringByAppendingPathComponent:",&cf_story_seen_media_id_plist)
        ;
        IVar11 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
        IVar11 = NSFileManager::fileExistsAtPath_(IVar11,"fileExistsAtPath:",IVar7);
        if ((int)IVar11 == 0) {
          bVar3 = false;
        }
        else {
          IVar11 = _objc_alloc(&_OBJC_CLASS___NSMutableDictionary);
          IVar7 = NSMutableDictionary::initWithContentsOfFile_
                            (IVar11,"initWithContentsOfFile:",IVar7);
          IVar7 = NSMutableDictionary::objectForKey_(IVar7,"objectForKey:",&cf_media_ids);
          lStack_188 = 0;
          local_190 = 0;
          uStack_178 = 0;
          local_180 = (long *)0x0;
          uStack_168 = 0;
          local_170 = 0;
          uStack_158 = 0;
          uStack_160 = 0;
          IVar11 = NSMutableDictionary::countByEnumeratingWithState_objects_count_
                             (IVar7,"countByEnumeratingWithState:objects:count:",&local_190,
                              local_108,0x10);
          if (IVar11 == 0) {
            bVar3 = false;
          }
          else {
            lVar14 = *local_180;
            do {
              IVar15 = 0;
              do {
                if (*local_180 != lVar14) {
                  _objc_enumerationMutation(IVar7);
                }
                IVar12 = _objc_msgSend(IVar5,"isEqualToString:",
                                       *(undefined8 *)(lStack_188 + IVar15 * 8));
                if ((IVar12 & 1) != 0) {
                  bVar3 = true;
                  goto code_r0x0005b00c;
                }
                IVar15 = IVar15 + 1;
              } while (IVar11 != IVar15);
              IVar11 = NSMutableDictionary::countByEnumeratingWithState_objects_count_
                                 (IVar7,"countByEnumeratingWithState:objects:count:",&local_190,
                                  local_108,0x10);
            } while (IVar11 != 0);
            bVar3 = false;
          }
        }
code_r0x0005b00c:
        IVar5 = FUN_0008c218(&cf_ACTION_SEEN);
        lVar2 = 3;
        if (!bVar3) {
          lVar2 = 1;
        }
        local_3a8 = PTR___NSConcreteStackBlock_000e80d8;
        local_3a0 = 0xc0000000;
        local_398 = FUN_0005d1f8;
        puStack_390 = &DAT_000e8b78;
        local_388 = bVar3;
        IVar5 = ABMenuActionItem::class_ABMenuActionItem__actionItemWithTitle_style_action_
                          ((ID)&objc::class_t::ABMenuActionItem,"actionItemWithTitle:style:action:",
                           IVar5,lVar2,(ID)&local_3a8);
        NSMutableArray::addObject_(IVar10,"addObject:",IVar5);
      }
    }
    IVar5 = _objc_alloc(&objc::class_t::ABMenuViewController);
    IVar5 = ABMenuViewController::instance_ABMenuViewController__initWithActionItems_
                      (IVar5,"initWithActionItems:",IVar10);
    ABMenuViewController::
    instance_ABMenuViewController__presentedFromViewController_animated_completion_
              (IVar5,"presentedFromViewController:animated:completion:",IVar8,1,0,param_6);
  }
LAB_0005b860:
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_88) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}

