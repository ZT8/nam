/* Address: 0006cbf8 | Name: FUN_0006cbf8 | Body bytes: 9520 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */

void FUN_0006cbf8(ID param_1,undefined8 param_2,ID param_3,undefined8 param_4,undefined8 param_5,
                 undefined4 param_6)

{
  long_long lVar1;
  bool bVar2;
  int iVar3;
  ID IVar4;
  undefined8 uVar5;
  ID IVar6;
  ID IVar7;
  ID IVar8;
  ID IVar9;
  ID IVar10;
  ID IVar11;
  ID IVar12;
  long lVar13;
  undefined *puVar14;
  ID IVar15;
  undefined *local_250;
  long lStack_248;
  code *local_240;
  undefined *puStack_238;
  ID local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined *local_210;
  long lStack_208;
  code *local_200;
  undefined *puStack_1f8;
  ID local_1f0;
  ID IStack_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  cfstringStruct *local_1d0;
  cfstringStruct *local_1c8;
  cfstringStruct *local_1c0;
  undefined *puStack_1b8;
  ID local_1b0;
  undefined *local_1a8;
  ID local_1a0;
  code *local_198;
  undefined *puStack_190;
  ID local_188;
  undefined8 local_180;
  long lStack_178;
  long *local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *local_100;
  undefined8 local_f8;
  code *local_f0;
  undefined *puStack_e8;
  undefined1 local_e0;
  long local_80;
  
  local_80 = *(long *)PTR____stack_chk_guard_000e8260;
  IVar4 = _objc_msgSend(param_3,"state");
  if (IVar4 != 1) goto LAB_0006f0e0;
  IVar4 = _objc_msgSend(param_1,"item");
  if (DAT_000fffc0 == 0) {
    DAT_000fffc0 = _objc_getClass("IGDirectVisualMessageStoryItemWrapper");
  }
  uVar5 = _objc_retainAutorelease();
  IVar4 = _objc_msgSend(IVar4,"isMemberOfClass:",uVar5);
  if ((int)IVar4 == 0) {
    IVar4 = _objc_msgSend(param_1,"item");
    if (DAT_000fffd0 == 0) {
      DAT_000fffd0 = _objc_getClass("IGMedia");
    }
    uVar5 = _objc_retainAutorelease();
    IVar4 = _objc_msgSend(IVar4,"isMemberOfClass:",uVar5);
    if ((IVar4 & 1) == 0) goto LAB_0006f0e0;
    IVar4 = _objc_msgSend(param_1,"item");
    IVar4 = _objc_msgSend(IVar4,"valueForKey:",&cf_video);
    if (DAT_000fffa8 == 0) {
      DAT_000fffa8 = _objc_getClass("IGVideo");
    }
    uVar5 = _objc_retainAutorelease();
    IVar6 = _objc_msgSend(IVar4,"isMemberOfClass:",uVar5);
    if ((IVar6 & 1) == 0) goto LAB_0006f0e0;
    if (IVar4 == 0) {
      IVar4 = 0;
    }
    else {
      iVar3 = FUN_0008ce2c(IVar4,"_videoVersionDictionaries");
      if (iVar3 == 0) {
        IVar6 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
        IVar6 = NSMutableArray::init(IVar6,"init");
        IVar7 = _objc_msgSend(IVar4,"videoVersions");
        IVar7 = _objc_msgSend(IVar7,"count");
        if (IVar7 == 0) {
          IVar4 = 0;
        }
        else {
          uStack_228 = 0;
          local_230 = 0;
          uStack_218 = 0;
          uStack_220 = 0;
          lStack_248 = 0;
          local_250 = (undefined *)0x0;
          puStack_238 = (undefined *)0x0;
          local_240 = (code *)0x0;
          IVar4 = _objc_msgSend(IVar4,"videoVersions");
          IVar7 = _objc_msgSend(IVar4,"countByEnumeratingWithState:objects:count:",&local_250,
                                &local_180,0x10);
          if (IVar7 != 0) {
            lVar13 = *(long *)local_240;
            do {
              IVar8 = 0;
              do {
                if (*(long *)local_240 != lVar13) {
                  _objc_enumerationMutation(IVar4);
                }
                IVar15 = *(ID *)(lStack_248 + IVar8 * 8);
                local_1d0 = &cf_url;
                local_1a8 = (undefined *)_objc_msgSend(IVar15,"urlString");
                local_1c8 = &cf_height;
                IVar9 = _objc_msgSend(IVar15,"height");
                _objc_msgSend(IVar9,"floatValue");
                local_1a0 = NSNumber::numberWithFloat_
                                      ((ID)&_OBJC_CLASS___NSNumber,"numberWithFloat:");
                local_1c0 = &cf_width;
                IVar9 = _objc_msgSend(IVar15,"width");
                _objc_msgSend(IVar9,"floatValue");
                local_198 = (code *)NSNumber::numberWithFloat_
                                              ((ID)&_OBJC_CLASS___NSNumber,"numberWithFloat:");
                IVar9 = NSDictionary::dictionaryWithObjects_forKeys_count_
                                  ((ID)&_OBJC_CLASS___NSDictionary,
                                   "dictionaryWithObjects:forKeys:count:",&local_1a8,&local_1d0,3);
                NSMutableArray::addObject_(IVar6,"addObject:",IVar9);
                IVar8 = IVar8 + 1;
              } while (IVar7 != IVar8);
              IVar7 = _objc_msgSend(IVar4,"countByEnumeratingWithState:objects:count:",&local_250,
                                    &local_180,0x10);
            } while (IVar7 != 0);
          }
          IVar4 = NSMutableArray::count(IVar6,"count");
          if (IVar4 == 0) goto LAB_0006e248;
          IVar4 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
          IVar4 = NSMutableArray::init(IVar4,"init");
          IVar7 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
          IVar7 = NSMutableArray::init(IVar7,"init");
          IStack_1e8 = 0;
          local_1f0 = 0;
          local_1d8 = 0;
          local_1e0 = 0;
          lStack_208 = 0;
          local_210 = (undefined *)0x0;
          puStack_1f8 = (undefined *)0x0;
          local_200 = (code *)0x0;
          IVar8 = NSMutableArray::countByEnumeratingWithState_objects_count_
                            (IVar6,"countByEnumeratingWithState:objects:count:",&local_210,
                             &local_100,0x10);
          if (IVar8 != 0) {
            lVar13 = *(long *)local_200;
            do {
              IVar9 = 0;
              do {
                if (*(long *)local_200 != lVar13) {
                  _objc_enumerationMutation(IVar6);
                }
                IVar11 = *(ID *)(lStack_208 + IVar9 * 8);
                IVar15 = _objc_msgSend(IVar11,"objectForKey:",&cf_width);
                IVar10 = NSMutableArray::indexOfObject_(IVar7,"indexOfObject:",IVar15);
                if (IVar10 == 0x7fffffffffffffff) {
                  IVar10 = _objc_msgSend(IVar11,"objectForKeyedSubscript:",&cf_url);
                  IVar10 = _objc_msgSend(IVar10,"containsString:",&cf__mp4_);
                  if ((int)IVar10 != 0) {
                    NSMutableArray::addObject_(IVar7,"addObject:",IVar15);
                    NSMutableArray::addObject_(IVar4,"addObject:",IVar11);
                  }
                }
                IVar9 = IVar9 + 1;
              } while (IVar8 != IVar9);
              IVar8 = NSMutableArray::countByEnumeratingWithState_objects_count_
                                (IVar6,"countByEnumeratingWithState:objects:count:",&local_210,
                                 &local_100,0x10);
            } while (IVar8 != 0);
          }
          IVar6 = NSSortDescriptor::sortDescriptorWithKey_ascending_
                            ((ID)&_OBJC_CLASS___NSSortDescriptor,"sortDescriptorWithKey:ascending:",
                             &cf_width,0);
          IVar6 = NSArray::arrayWithObjects_((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:",IVar6);
          IVar4 = NSMutableArray::sortedArrayUsingDescriptors_
                            (IVar4,"sortedArrayUsingDescriptors:",IVar6);
        }
      }
      else {
        IVar4 = _objc_msgSend(IVar4,"valueForKey:",&cf__videoVersionDictionaries);
        IVar6 = _objc_msgSend(IVar4,"count");
        if (IVar6 == 0) {
LAB_0006e248:
          IVar4 = 0;
        }
        else {
          IVar6 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
          IVar6 = NSMutableArray::init(IVar6,"init");
          IVar7 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
          IVar7 = NSMutableArray::init(IVar7,"init");
          IStack_1e8 = 0;
          local_1f0 = 0;
          local_1d8 = 0;
          local_1e0 = 0;
          lStack_208 = 0;
          local_210 = (undefined *)0x0;
          puStack_1f8 = (undefined *)0x0;
          local_200 = (code *)0x0;
          IVar8 = _objc_msgSend(IVar4,"countByEnumeratingWithState:objects:count:",&local_210,
                                &local_100,0x10);
          if (IVar8 != 0) {
            lVar13 = *(long *)local_200;
            do {
              IVar9 = 0;
              do {
                if (*(long *)local_200 != lVar13) {
                  _objc_enumerationMutation(IVar4);
                }
                IVar11 = *(ID *)(lStack_208 + IVar9 * 8);
                IVar15 = _objc_msgSend(IVar11,"objectForKey:",&cf_width);
                IVar10 = NSMutableArray::indexOfObject_(IVar7,"indexOfObject:",IVar15);
                if (IVar10 == 0x7fffffffffffffff) {
                  IVar10 = _objc_msgSend(IVar11,"objectForKeyedSubscript:",&cf_url);
                  IVar10 = _objc_msgSend(IVar10,"containsString:",&cf__mp4_);
                  if ((int)IVar10 != 0) {
                    NSMutableArray::addObject_(IVar7,"addObject:",IVar15);
                    NSMutableArray::addObject_(IVar6,"addObject:",IVar11);
                  }
                }
                IVar9 = IVar9 + 1;
              } while (IVar8 != IVar9);
              IVar8 = _objc_msgSend(IVar4,"countByEnumeratingWithState:objects:count:",&local_210,
                                    &local_100,0x10);
            } while (IVar8 != 0);
          }
          IVar4 = NSSortDescriptor::sortDescriptorWithKey_ascending_
                            ((ID)&_OBJC_CLASS___NSSortDescriptor,"sortDescriptorWithKey:ascending:",
                             &cf_width,0);
          IVar4 = NSArray::arrayWithObjects_((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:",IVar4);
          IVar4 = NSMutableArray::sortedArrayUsingDescriptors_
                            (IVar6,"sortedArrayUsingDescriptors:",IVar4);
        }
      }
    }
    IVar6 = NSMutableArray::count(IVar4,"count");
    if (IVar6 != 0) {
      IVar6 = NSMutableArray::array((ID)&_OBJC_CLASS___NSMutableArray,"array");
      IVar7 = FUN_0008c218(&cf_ACTION_DOWNLOAD);
      local_210 = PTR___NSConcreteStackBlock_000e80d8;
      lStack_208 = 0xc2000000;
      local_200 = FUN_0005d274;
      puStack_1f8 = &DAT_000e8b48;
      local_1e0 = 2;
      local_1f0 = param_1;
      IStack_1e8 = IVar4;
      local_1d8 = param_2;
      IVar4 = ABMenuActionItem::class_ABMenuActionItem__actionItemWithTitle_style_action_
                        ((ID)&objc::class_t::ABMenuActionItem,"actionItemWithTitle:style:action:",
                         IVar7,0,(ID)&local_210);
      NSMutableArray::addObject_(IVar6,"addObject:",IVar4);
      IVar4 = DLHelper::class_DLHelper__findViewController_
                        ((ID)&objc::class_t::DLHelper,"findViewController:",param_1);
      IVar7 = _objc_msgSend(IVar4,"respondsToSelector:","currentViewModel");
      if ((int)IVar7 == 0) {
        IVar4 = 0;
      }
      else {
        IVar4 = _objc_msgSend(IVar4,"currentViewModel");
        IVar4 = _objc_msgSend(IVar4,"items");
        IVar4 = _objc_msgSend(IVar4,"mutableCopy");
      }
      IVar4 = _objc_msgSend(IVar4,"count");
      if (1 < IVar4) {
        IVar4 = FUN_0008c218(&cf_STORIES_VIEW_ALL_STORIES);
        local_1a8 = PTR___NSConcreteStackBlock_000e80d8;
        local_1a0 = 0xc2000000;
        local_198 = FUN_0005de9c;
        puStack_190 = &DAT_000e8948;
        local_188 = param_1;
        IVar4 = ABMenuActionItem::class_ABMenuActionItem__actionItemWithTitle_style_action_
                          ((ID)&objc::class_t::ABMenuActionItem,"actionItemWithTitle:style:action:",
                           IVar4,0,(ID)&local_1a8);
        NSMutableArray::addObject_(IVar6,"addObject:",IVar4);
      }
      IVar4 = NSUserDefaults::standardUserDefaults
                        ((ID)&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
      IVar4 = NSUserDefaults::boolForKey_
                        (IVar4,"boolForKey:",&cf_DL_SeeStoryWithoutOtherPartyKnowing);
      if ((int)IVar4 != 0) {
        uVar5 = FUN_00097ef8();
        uVar5 = FUN_00097a54(uVar5);
        IVar4 = _objc_msgSend(DAT_001006a8,"length");
        IVar4 = FUN_00097c68(uVar5,IVar4);
        IVar4 = _objc_msgSend(IVar4,"isEqualToString:",DAT_001006a8);
        if ((int)IVar4 != 0) {
          IVar4 = _objc_msgSend(param_1,"item");
          IVar4 = _objc_msgSend(IVar4,"respondsToSelector:","mediaId");
          if ((int)IVar4 != 0) {
            IVar4 = _objc_msgSend(param_1,"item");
            IVar4 = _objc_msgSend(IVar4,"mediaId");
            IVar7 = _NSSearchPathForDirectoriesInDomains(9,1,1);
            IVar7 = _objc_msgSend(IVar7,"objectAtIndex:",0);
            IVar7 = _objc_msgSend(IVar7,"stringByAppendingPathComponent:",
                                  &cf_story_seen_media_id_plist);
            IVar8 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager")
            ;
            IVar8 = NSFileManager::fileExistsAtPath_(IVar8,"fileExistsAtPath:",IVar7);
            if ((int)IVar8 == 0) {
              bVar2 = false;
            }
            else {
              IVar8 = _objc_alloc(&_OBJC_CLASS___NSMutableDictionary);
              IVar7 = NSMutableDictionary::initWithContentsOfFile_
                                (IVar8,"initWithContentsOfFile:",IVar7);
              IVar7 = NSMutableDictionary::objectForKey_(IVar7,"objectForKey:",&cf_media_ids);
              lStack_178 = 0;
              local_180 = 0;
              uStack_168 = 0;
              local_170 = (long *)0x0;
              uStack_158 = 0;
              local_160 = 0;
              uStack_148 = 0;
              uStack_150 = 0;
              IVar8 = NSMutableDictionary::countByEnumeratingWithState_objects_count_
                                (IVar7,"countByEnumeratingWithState:objects:count:",&local_180,
                                 &local_100,0x10);
              if (IVar8 == 0) {
                bVar2 = false;
              }
              else {
                lVar13 = *local_170;
                do {
                  IVar9 = 0;
                  do {
                    if (*local_170 != lVar13) {
                      _objc_enumerationMutation(IVar7);
                    }
                    IVar15 = _objc_msgSend(IVar4,"isEqualToString:",
                                           *(undefined8 *)(lStack_178 + IVar9 * 8));
                    if ((IVar15 & 1) != 0) {
                      bVar2 = true;
                      goto LAB_0006e9ec;
                    }
                    IVar9 = IVar9 + 1;
                  } while (IVar8 != IVar9);
                  IVar8 = NSMutableDictionary::countByEnumeratingWithState_objects_count_
                                    (IVar7,"countByEnumeratingWithState:objects:count:",&local_180,
                                     &local_100,0x10);
                } while (IVar8 != 0);
                bVar2 = false;
              }
            }
LAB_0006e9ec:
            IVar4 = FUN_0008c218(&cf_ACTION_SEEN);
            lVar1 = 3;
            if (!bVar2) {
              lVar1 = 1;
            }
            local_250 = PTR___NSConcreteStackBlock_000e80d8;
            lStack_248 = 0xc2000000;
            local_240 = FUN_0005f204;
            puStack_238 = &DAT_000e8b98;
            uStack_228 = CONCAT71(uStack_228._1_7_,bVar2);
            local_230 = param_1;
            IVar4 = ABMenuActionItem::class_ABMenuActionItem__actionItemWithTitle_style_action_
                              ((ID)&objc::class_t::ABMenuActionItem,
                               "actionItemWithTitle:style:action:",IVar4,lVar1,(ID)&local_250);
            NSMutableArray::addObject_(IVar6,"addObject:",IVar4);
          }
        }
      }
      IVar4 = NSUserDefaults::standardUserDefaults
                        ((ID)&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
      IVar4 = NSUserDefaults::boolForKey_(IVar4,"boolForKey:",&cf_DL_ShowMentionsInStory);
      if ((int)IVar4 != 0) {
        uVar5 = FUN_00097ef8();
        uVar5 = FUN_00097a54(uVar5);
        IVar4 = _objc_msgSend(DAT_001006a8,"length");
        IVar4 = FUN_00097c68(uVar5,IVar4);
        IVar4 = _objc_msgSend(IVar4,"isEqualToString:",DAT_001006a8);
        if ((int)IVar4 != 0) {
          IVar4 = NSMutableArray::array((ID)&_OBJC_CLASS___NSMutableArray,"array");
          IVar7 = _objc_msgSend(param_1,"item");
          IVar7 = _objc_msgSend(IVar7,"respondsToSelector:","taggedUsers");
          if ((int)IVar7 == 0) {
            IVar7 = _objc_msgSend(param_1,"item");
            IVar7 = _objc_msgSend(IVar7,"respondsToSelector:","reelMentions");
            if ((int)IVar7 != 0) {
              uStack_158 = 0;
              local_160 = 0;
              uStack_148 = 0;
              uStack_150 = 0;
              lStack_178 = 0;
              local_180 = 0;
              uStack_168 = 0;
              local_170 = (long *)0x0;
              IVar7 = _objc_msgSend(param_1,"item");
              IVar7 = _objc_msgSend(IVar7,"reelMentions");
              IVar8 = _objc_msgSend(IVar7,"countByEnumeratingWithState:objects:count:",&local_180,
                                    &local_100,0x10);
              if (IVar8 != 0) {
                lVar13 = *local_170;
                do {
                  IVar9 = 0;
                  do {
                    if (*local_170 != lVar13) {
                      _objc_enumerationMutation(IVar7);
                    }
                    IVar10 = *(ID *)(lStack_178 + IVar9 * 8);
                    IVar15 = _objc_msgSend(IVar10,"respondsToSelector:","user");
                    if ((int)IVar15 != 0) {
                      IVar15 = _objc_msgSend(IVar10,"performSelector:","user");
                      if (DAT_000fffd8 == 0) {
                        DAT_000fffd8 = _objc_getClass("IGUser");
                      }
                      uVar5 = _objc_retainAutorelease();
                      IVar10 = _objc_msgSend(IVar15,"isKindOfClass:",uVar5);
                      if ((int)IVar10 != 0) {
                        NSMutableArray::addObject_(IVar4,"addObject:",IVar15);
                      }
                    }
                    IVar9 = IVar9 + 1;
                  } while (IVar8 != IVar9);
                  IVar8 = _objc_msgSend(IVar7,"countByEnumeratingWithState:objects:count:",
                                        &local_180,&local_100,0x10);
                } while (IVar8 != 0);
              }
            }
          }
          else {
            uStack_158 = 0;
            local_160 = 0;
            uStack_148 = 0;
            uStack_150 = 0;
            lStack_178 = 0;
            local_180 = 0;
            uStack_168 = 0;
            local_170 = (long *)0x0;
            IVar7 = _objc_msgSend(param_1,"item");
            IVar7 = _objc_msgSend(IVar7,"taggedUsers");
            IVar8 = _objc_msgSend(IVar7,"countByEnumeratingWithState:objects:count:",&local_180,
                                  &local_100,0x10);
            if (IVar8 != 0) {
              lVar13 = *local_170;
              do {
                IVar9 = 0;
                do {
                  if (*local_170 != lVar13) {
                    _objc_enumerationMutation(IVar7);
                  }
                  IVar15 = *(ID *)(lStack_178 + IVar9 * 8);
                  if (DAT_000fffd8 == 0) {
                    DAT_000fffd8 = _objc_getClass("IGUser");
                  }
                  uVar5 = _objc_retainAutorelease();
                  IVar10 = _objc_msgSend(IVar15,"isKindOfClass:",uVar5);
                  if ((int)IVar10 != 0) {
                    NSMutableArray::addObject_(IVar4,"addObject:",IVar15);
                  }
                  IVar9 = IVar9 + 1;
                } while (IVar8 != IVar9);
                IVar8 = _objc_msgSend(IVar7,"countByEnumeratingWithState:objects:count:",&local_180,
                                      &local_100,0x10);
              } while (IVar8 != 0);
            }
          }
          IVar7 = NSMutableArray::count(IVar4,"count");
          if (IVar7 != 0) {
            IVar7 = FUN_0008c218(&cf_STORIES_SHOW_MENTIONS);
            local_1d0 = (cfstringStruct *)PTR___NSConcreteStackBlock_000e80d8;
            local_1c8 = (cfstringStruct *)0xc2000000;
            local_1c0 = (cfstringStruct *)FUN_0005f55c;
            puStack_1b8 = &DAT_000e8948;
            local_1b0 = IVar4;
            IVar4 = ABMenuActionItem::class_ABMenuActionItem__actionItemWithTitle_style_action_
                              ((ID)&objc::class_t::ABMenuActionItem,
                               "actionItemWithTitle:style:action:",IVar7,0,(ID)&local_1d0);
            NSMutableArray::addObject_(IVar6,"addObject:",IVar4);
          }
        }
      }
      IVar4 = _objc_msgSend(param_1,"valueForKey:",&cf_delegate);
      IVar7 = _objc_alloc(&objc::class_t::ABMenuViewController);
      IVar6 = ABMenuViewController::instance_ABMenuViewController__initWithActionItems_
                        (IVar7,"initWithActionItems:",IVar6);
      IVar7 = _objc_msgSend(IVar4,"valueForKey:",&cf__storyItemContext);
      IVar8 = _objc_msgSend(IVar7,"respondsToSelector:","storyItemActionController");
      if ((int)IVar8 != 0) {
        IVar7 = _objc_msgSend(IVar7,"storyItemActionController");
        ABMenuViewController::instance_ABMenuViewController__setDelegate_
                  (IVar6,"setDelegate:",IVar7);
      }
      IVar4 = _objc_msgSend(IVar4,"delegate");
      ABMenuViewController::
      instance_ABMenuViewController__presentedFromViewController_animated_completion_
                (IVar6,"presentedFromViewController:animated:completion:",IVar4,1,0,param_6);
    }
    goto LAB_0006f0e0;
  }
  IVar4 = _objc_msgSend(param_1,"item");
  IVar4 = _objc_msgSend(IVar4,"valueForKey:",&cf_rawVideo);
  if (DAT_000fffa8 == 0) {
    DAT_000fffa8 = _objc_getClass("IGVideo");
  }
  uVar5 = _objc_retainAutorelease();
  IVar6 = _objc_msgSend(IVar4,"isMemberOfClass:",uVar5);
  if ((IVar6 & 1) == 0) goto LAB_0006f0e0;
  if (IVar4 == 0) {
    IVar6 = 0;
  }
  else {
    iVar3 = FUN_0008ce2c(IVar4,"_videoVersionDictionaries");
    if (iVar3 == 0) {
      IVar6 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
      IVar6 = NSMutableArray::init(IVar6,"init");
      IVar7 = _objc_msgSend(IVar4,"videoVersions");
      IVar7 = _objc_msgSend(IVar7,"count");
      if (IVar7 == 0) {
        IVar6 = 0;
      }
      else {
        uStack_228 = 0;
        local_230 = 0;
        uStack_218 = 0;
        uStack_220 = 0;
        lStack_248 = 0;
        local_250 = (undefined *)0x0;
        puStack_238 = (undefined *)0x0;
        local_240 = (code *)0x0;
        IVar7 = _objc_msgSend(IVar4,"videoVersions");
        IVar8 = _objc_msgSend(IVar7,"countByEnumeratingWithState:objects:count:",&local_250,
                              &local_180,0x10);
        if (IVar8 != 0) {
          lVar13 = *(long *)local_240;
          do {
            IVar9 = 0;
            do {
              if (*(long *)local_240 != lVar13) {
                _objc_enumerationMutation(IVar7);
              }
              IVar10 = *(ID *)(lStack_248 + IVar9 * 8);
              local_1d0 = &cf_url;
              local_1a8 = (undefined *)_objc_msgSend(IVar10,"urlString");
              local_1c8 = &cf_height;
              IVar15 = _objc_msgSend(IVar10,"height");
              _objc_msgSend(IVar15,"floatValue");
              local_1a0 = NSNumber::numberWithFloat_((ID)&_OBJC_CLASS___NSNumber,"numberWithFloat:")
              ;
              local_1c0 = &cf_width;
              IVar15 = _objc_msgSend(IVar10,"width");
              _objc_msgSend(IVar15,"floatValue");
              local_198 = (code *)NSNumber::numberWithFloat_
                                            ((ID)&_OBJC_CLASS___NSNumber,"numberWithFloat:");
              IVar15 = NSDictionary::dictionaryWithObjects_forKeys_count_
                                 ((ID)&_OBJC_CLASS___NSDictionary,
                                  "dictionaryWithObjects:forKeys:count:",&local_1a8,&local_1d0,3);
              NSMutableArray::addObject_(IVar6,"addObject:",IVar15);
              IVar9 = IVar9 + 1;
            } while (IVar8 != IVar9);
            IVar8 = _objc_msgSend(IVar7,"countByEnumeratingWithState:objects:count:",&local_250,
                                  &local_180,0x10);
          } while (IVar8 != 0);
        }
        IVar7 = NSMutableArray::count(IVar6,"count");
        if (IVar7 == 0) goto LAB_0006d90c;
        IVar7 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
        IVar7 = NSMutableArray::init(IVar7,"init");
        IVar8 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
        IVar8 = NSMutableArray::init(IVar8,"init");
        IStack_1e8 = 0;
        local_1f0 = 0;
        local_1d8 = 0;
        local_1e0 = 0;
        lStack_208 = 0;
        local_210 = (undefined *)0x0;
        puStack_1f8 = (undefined *)0x0;
        local_200 = (code *)0x0;
        IVar9 = NSMutableArray::countByEnumeratingWithState_objects_count_
                          (IVar6,"countByEnumeratingWithState:objects:count:",&local_210,&local_100,
                           0x10);
        if (IVar9 != 0) {
          lVar13 = *(long *)local_200;
          do {
            IVar15 = 0;
            do {
              if (*(long *)local_200 != lVar13) {
                _objc_enumerationMutation(IVar6);
              }
              IVar12 = *(ID *)(lStack_208 + IVar15 * 8);
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
            IVar9 = NSMutableArray::countByEnumeratingWithState_objects_count_
                              (IVar6,"countByEnumeratingWithState:objects:count:",&local_210,
                               &local_100,0x10);
          } while (IVar9 != 0);
        }
        IVar6 = NSSortDescriptor::sortDescriptorWithKey_ascending_
                          ((ID)&_OBJC_CLASS___NSSortDescriptor,"sortDescriptorWithKey:ascending:",
                           &cf_width,0);
        IVar6 = NSArray::arrayWithObjects_((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:",IVar6);
        IVar6 = NSMutableArray::sortedArrayUsingDescriptors_
                          (IVar7,"sortedArrayUsingDescriptors:",IVar6);
      }
    }
    else {
      IVar6 = _objc_msgSend(IVar4,"valueForKey:",&cf__videoVersionDictionaries);
      IVar7 = _objc_msgSend(IVar6,"count");
      if (IVar7 == 0) {
LAB_0006d90c:
        IVar6 = 0;
      }
      else {
        IVar7 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
        IVar7 = NSMutableArray::init(IVar7,"init");
        IVar8 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
        IVar8 = NSMutableArray::init(IVar8,"init");
        IStack_1e8 = 0;
        local_1f0 = 0;
        local_1d8 = 0;
        local_1e0 = 0;
        lStack_208 = 0;
        local_210 = (undefined *)0x0;
        puStack_1f8 = (undefined *)0x0;
        local_200 = (code *)0x0;
        IVar9 = _objc_msgSend(IVar6,"countByEnumeratingWithState:objects:count:",&local_210,
                              &local_100,0x10);
        if (IVar9 != 0) {
          lVar13 = *(long *)local_200;
          do {
            IVar15 = 0;
            do {
              if (*(long *)local_200 != lVar13) {
                _objc_enumerationMutation(IVar6);
              }
              IVar12 = *(ID *)(lStack_208 + IVar15 * 8);
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
            IVar9 = _objc_msgSend(IVar6,"countByEnumeratingWithState:objects:count:",&local_210,
                                  &local_100,0x10);
          } while (IVar9 != 0);
        }
        IVar6 = NSSortDescriptor::sortDescriptorWithKey_ascending_
                          ((ID)&_OBJC_CLASS___NSSortDescriptor,"sortDescriptorWithKey:ascending:",
                           &cf_width,0);
        IVar6 = NSArray::arrayWithObjects_((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:",IVar6);
        IVar6 = NSMutableArray::sortedArrayUsingDescriptors_
                          (IVar7,"sortedArrayUsingDescriptors:",IVar6);
      }
    }
  }
  IVar7 = NSMutableArray::count(IVar6,"count");
  if (IVar7 != 0) {
    IVar7 = _objc_msgSend(param_1,"valueForKey:",&cf__delegate);
    IVar8 = NSMutableArray::array((ID)&_OBJC_CLASS___NSMutableArray,"array");
    IVar9 = FUN_0008c218(&cf_ACTION_DOWNLOAD);
    local_210 = PTR___NSConcreteStackBlock_000e80d8;
    lStack_208 = 0xc2000000;
    local_200 = FUN_0005c5d0;
    puStack_1f8 = &DAT_000e8b48;
    local_1e0 = 2;
    local_1f0 = param_1;
    IStack_1e8 = IVar6;
    local_1d8 = param_2;
    IVar6 = ABMenuActionItem::class_ABMenuActionItem__actionItemWithTitle_style_action_
                      ((ID)&objc::class_t::ABMenuActionItem,"actionItemWithTitle:style:action:",
                       IVar9,0,(ID)&local_210);
    NSMutableArray::addObject_(IVar8,"addObject:",IVar6);
    IVar6 = NSUserDefaults::standardUserDefaults
                      ((ID)&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
    IVar6 = NSUserDefaults::boolForKey_(IVar6,"boolForKey:",&cf_DL_SeeStoryWithoutOtherPartyKnowing)
    ;
    if ((int)IVar6 != 0) {
      uVar5 = FUN_00097ef8();
      uVar5 = FUN_00097a54(uVar5);
      IVar6 = _objc_msgSend(DAT_001006a8,"length");
      IVar6 = FUN_00097c68(uVar5,IVar6);
      IVar6 = _objc_msgSend(IVar6,"isEqualToString:",DAT_001006a8);
      if (((int)IVar6 != 0) &&
         (IVar6 = _objc_msgSend(IVar4,"respondsToSelector:","mediaID"), (int)IVar6 != 0)) {
        IVar4 = _objc_msgSend(IVar4,"mediaID");
        puVar14 = PTR___NSConcreteStackBlock_000e80d8;
        IVar6 = _NSSearchPathForDirectoriesInDomains(9,1,1);
        IVar6 = _objc_msgSend(IVar6,"objectAtIndex:",0);
        IVar6 = _objc_msgSend(IVar6,"stringByAppendingPathComponent:",&cf_story_seen_media_id_plist)
        ;
        IVar9 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
        IVar9 = NSFileManager::fileExistsAtPath_(IVar9,"fileExistsAtPath:",IVar6);
        if ((int)IVar9 == 0) {
          bVar2 = false;
        }
        else {
          IVar9 = _objc_alloc(&_OBJC_CLASS___NSMutableDictionary);
          IVar6 = NSMutableDictionary::initWithContentsOfFile_
                            (IVar9,"initWithContentsOfFile:",IVar6);
          IVar6 = NSMutableDictionary::objectForKey_(IVar6,"objectForKey:",&cf_media_ids);
          lStack_178 = 0;
          local_180 = 0;
          uStack_168 = 0;
          local_170 = (long *)0x0;
          uStack_158 = 0;
          local_160 = 0;
          uStack_148 = 0;
          uStack_150 = 0;
          IVar9 = NSMutableDictionary::countByEnumeratingWithState_objects_count_
                            (IVar6,"countByEnumeratingWithState:objects:count:",&local_180,
                             &local_100,0x10);
          if (IVar9 == 0) {
            bVar2 = false;
          }
          else {
            lVar13 = *local_170;
            do {
              IVar15 = 0;
              do {
                if (*local_170 != lVar13) {
                  _objc_enumerationMutation(IVar6);
                }
                IVar10 = _objc_msgSend(IVar4,"isEqualToString:",
                                       *(undefined8 *)(lStack_178 + IVar15 * 8));
                if ((IVar10 & 1) != 0) {
                  bVar2 = true;
                  goto LAB_0006e840;
                }
                IVar15 = IVar15 + 1;
              } while (IVar9 != IVar15);
              IVar9 = NSMutableDictionary::countByEnumeratingWithState_objects_count_
                                (IVar6,"countByEnumeratingWithState:objects:count:",&local_180,
                                 &local_100,0x10);
            } while (IVar9 != 0);
            bVar2 = false;
          }
LAB_0006e840:
          puVar14 = PTR___NSConcreteStackBlock_000e80d8;
        }
        IVar4 = FUN_0008c218(&cf_ACTION_SEEN);
        lVar1 = 3;
        if (!bVar2) {
          lVar1 = 1;
        }
        local_f8 = 0xc0000000;
        local_f0 = FUN_0005d1f8;
        puStack_e8 = &DAT_000e8b78;
        local_100 = puVar14;
        local_e0 = bVar2;
        IVar4 = ABMenuActionItem::class_ABMenuActionItem__actionItemWithTitle_style_action_
                          ((ID)&objc::class_t::ABMenuActionItem,"actionItemWithTitle:style:action:",
                           IVar4,lVar1,(ID)&local_100);
        NSMutableArray::addObject_(IVar8,"addObject:",IVar4);
      }
    }
    IVar4 = _objc_alloc(&objc::class_t::ABMenuViewController);
    IVar4 = ABMenuViewController::instance_ABMenuViewController__initWithActionItems_
                      (IVar4,"initWithActionItems:",IVar8);
    ABMenuViewController::
    instance_ABMenuViewController__presentedFromViewController_animated_completion_
              (IVar4,"presentedFromViewController:animated:completion:",IVar7,1,0,param_6);
  }
LAB_0006f0e0:
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_80) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}

