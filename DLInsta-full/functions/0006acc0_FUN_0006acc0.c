/* Address: 0006acc0 | Name: FUN_0006acc0 | Body bytes: 5644 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */

void FUN_0006acc0(ID param_1,undefined8 param_2,ID param_3,undefined8 param_4,undefined8 param_5,
                 undefined4 param_6)

{
  long_long lVar1;
  bool bVar2;
  ID IVar3;
  undefined8 uVar4;
  ID IVar5;
  ID IVar6;
  ID IVar7;
  ID IVar8;
  ID IVar9;
  long lVar10;
  ID IVar11;
  undefined *local_200;
  undefined8 local_1f8;
  code *local_1f0;
  undefined *puStack_1e8;
  ID local_1e0;
  undefined *local_1d8;
  undefined8 local_1d0;
  code *local_1c8;
  undefined *puStack_1c0;
  ID local_1b8;
  undefined1 local_1b0;
  undefined *local_1a8;
  undefined8 local_1a0;
  code *local_198;
  undefined *puStack_190;
  ID local_188;
  undefined *local_180;
  undefined8 local_178;
  code *local_170;
  undefined *puStack_168;
  ID local_160;
  ID local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  long lStack_138;
  long *local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *local_100;
  undefined8 local_f8;
  code *local_f0;
  undefined *puStack_e8;
  undefined1 local_e0;
  long local_80;
  
  local_80 = *(long *)PTR____stack_chk_guard_000e8260;
  IVar3 = _objc_msgSend(param_3,"state");
  if (IVar3 == 1) {
    IVar3 = _objc_msgSend(param_1,"item");
    if (DAT_000fffc0 == 0) {
      DAT_000fffc0 = _objc_getClass("IGDirectVisualMessageStoryItemWrapper");
    }
    uVar4 = _objc_retainAutorelease();
    IVar3 = _objc_msgSend(IVar3,"isMemberOfClass:",uVar4);
    if ((int)IVar3 == 0) {
      IVar3 = _objc_msgSend(param_1,"item");
      if (DAT_000fffd0 == 0) {
        DAT_000fffd0 = _objc_getClass("IGMedia");
      }
      uVar4 = _objc_retainAutorelease();
      IVar3 = _objc_msgSend(IVar3,"isMemberOfClass:",uVar4);
      if ((IVar3 & 1) != 0) {
        IVar3 = _objc_msgSend(param_1,"item");
        IVar3 = _objc_msgSend(IVar3,"valueForKey:",&cf_photo);
        if (DAT_000fffc8 == 0) {
          DAT_000fffc8 = _objc_getClass("IGPhoto");
        }
        uVar4 = _objc_retainAutorelease();
        IVar5 = _objc_msgSend(IVar3,"isMemberOfClass:",uVar4);
        if ((IVar5 & 1) != 0) {
          if (IVar3 == 0) {
            IVar3 = 0;
          }
          else {
            IVar3 = _objc_msgSend(IVar3,"valueForKey:",&cf__originalImageVersions);
            local_100 = (undefined *)
                        NSSortDescriptor::sortDescriptorWithKey_ascending_
                                  ((ID)&_OBJC_CLASS___NSSortDescriptor,
                                   "sortDescriptorWithKey:ascending:",&cf_width,0);
            IVar5 = NSArray::arrayWithObjects_count_
                              ((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:count:",&local_100,1);
            IVar3 = _objc_msgSend(IVar3,"sortedArrayUsingDescriptors:",IVar5);
          }
          IVar5 = _objc_msgSend(IVar3,"count");
          if (IVar5 != 0) {
            IVar5 = NSMutableArray::array((ID)&_OBJC_CLASS___NSMutableArray,"array");
            IVar6 = FUN_0008c218(&cf_ACTION_DOWNLOAD);
            local_180 = PTR___NSConcreteStackBlock_000e80d8;
            local_178 = 0xc2000000;
            local_170 = FUN_0005d274;
            puStack_168 = &DAT_000e8b48;
            local_150 = 1;
            local_160 = param_1;
            local_158 = IVar3;
            local_148 = param_2;
            IVar3 = ABMenuActionItem::class_ABMenuActionItem__actionItemWithTitle_style_action_
                              ((ID)&objc::class_t::ABMenuActionItem,
                               "actionItemWithTitle:style:action:",IVar6,0,(ID)&local_180);
            NSMutableArray::addObject_(IVar5,"addObject:",IVar3);
            IVar3 = DLHelper::class_DLHelper__findViewController_
                              ((ID)&objc::class_t::DLHelper,"findViewController:",param_1);
            IVar6 = _objc_msgSend(IVar3,"respondsToSelector:","currentViewModel");
            if ((int)IVar6 == 0) {
              IVar3 = 0;
            }
            else {
              IVar3 = _objc_msgSend(IVar3,"currentViewModel");
              IVar3 = _objc_msgSend(IVar3,"items");
              IVar3 = _objc_msgSend(IVar3,"mutableCopy");
            }
            IVar3 = _objc_msgSend(IVar3,"count");
            if (1 < IVar3) {
              IVar3 = FUN_0008c218(&cf_STORIES_VIEW_ALL_STORIES);
              local_1a8 = PTR___NSConcreteStackBlock_000e80d8;
              local_1a0 = 0xc2000000;
              local_198 = FUN_0005de9c;
              puStack_190 = &DAT_000e8948;
              local_188 = param_1;
              IVar3 = ABMenuActionItem::class_ABMenuActionItem__actionItemWithTitle_style_action_
                                ((ID)&objc::class_t::ABMenuActionItem,
                                 "actionItemWithTitle:style:action:",IVar3,0,(ID)&local_1a8);
              NSMutableArray::addObject_(IVar5,"addObject:",IVar3);
            }
            IVar3 = NSUserDefaults::standardUserDefaults
                              ((ID)&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
            IVar3 = NSUserDefaults::boolForKey_
                              (IVar3,"boolForKey:",&cf_DL_SeeStoryWithoutOtherPartyKnowing);
            if ((int)IVar3 != 0) {
              uVar4 = FUN_00097ef8();
              uVar4 = FUN_00097a54(uVar4);
              IVar3 = _objc_msgSend(DAT_001006a8,"length");
              IVar3 = FUN_00097c68(uVar4,IVar3);
              IVar3 = _objc_msgSend(IVar3,"isEqualToString:",DAT_001006a8);
              if ((int)IVar3 != 0) {
                IVar3 = _objc_msgSend(param_1,"item");
                IVar3 = _objc_msgSend(IVar3,"respondsToSelector:","mediaId");
                if ((int)IVar3 != 0) {
                  IVar3 = _objc_msgSend(param_1,"item");
                  IVar3 = _objc_msgSend(IVar3,"mediaId");
                  IVar6 = _NSSearchPathForDirectoriesInDomains(9,1,1);
                  IVar6 = _objc_msgSend(IVar6,"objectAtIndex:",0);
                  IVar6 = _objc_msgSend(IVar6,"stringByAppendingPathComponent:",
                                        &cf_story_seen_media_id_plist);
                  IVar7 = NSFileManager::defaultManager
                                    ((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
                  IVar7 = NSFileManager::fileExistsAtPath_(IVar7,"fileExistsAtPath:",IVar6);
                  if ((int)IVar7 == 0) {
                    bVar2 = false;
                  }
                  else {
                    IVar7 = _objc_alloc(&_OBJC_CLASS___NSMutableDictionary);
                    IVar6 = NSMutableDictionary::initWithContentsOfFile_
                                      (IVar7,"initWithContentsOfFile:",IVar6);
                    IVar6 = NSMutableDictionary::objectForKey_(IVar6,"objectForKey:",&cf_media_ids);
                    lStack_138 = 0;
                    local_140 = 0;
                    uStack_128 = 0;
                    local_130 = (long *)0x0;
                    uStack_118 = 0;
                    local_120 = 0;
                    uStack_108 = 0;
                    uStack_110 = 0;
                    IVar7 = NSMutableDictionary::countByEnumeratingWithState_objects_count_
                                      (IVar6,"countByEnumeratingWithState:objects:count:",&local_140
                                       ,&local_100,0x10);
                    if (IVar7 == 0) {
                      bVar2 = false;
                    }
                    else {
                      lVar10 = *local_130;
                      do {
                        IVar8 = 0;
                        do {
                          if (*local_130 != lVar10) {
                            _objc_enumerationMutation(IVar6);
                          }
                          IVar11 = _objc_msgSend(IVar3,"isEqualToString:",
                                                 *(undefined8 *)(lStack_138 + IVar8 * 8));
                          if ((IVar11 & 1) != 0) {
                            bVar2 = true;
                            goto LAB_0006bb98;
                          }
                          IVar8 = IVar8 + 1;
                        } while (IVar7 != IVar8);
                        IVar7 = NSMutableDictionary::countByEnumeratingWithState_objects_count_
                                          (IVar6,"countByEnumeratingWithState:objects:count:",
                                           &local_140,&local_100,0x10);
                      } while (IVar7 != 0);
                      bVar2 = false;
                    }
                  }
LAB_0006bb98:
                  IVar3 = FUN_0008c218(&cf_ACTION_SEEN);
                  lVar1 = 3;
                  if (!bVar2) {
                    lVar1 = 1;
                  }
                  local_1d8 = PTR___NSConcreteStackBlock_000e80d8;
                  local_1d0 = 0xc2000000;
                  local_1c8 = FUN_0005f204;
                  puStack_1c0 = &DAT_000e8b98;
                  local_1b8 = param_1;
                  local_1b0 = bVar2;
                  IVar3 = ABMenuActionItem::
                          class_ABMenuActionItem__actionItemWithTitle_style_action_
                                    ((ID)&objc::class_t::ABMenuActionItem,
                                     "actionItemWithTitle:style:action:",IVar3,lVar1,(ID)&local_1d8)
                  ;
                  NSMutableArray::addObject_(IVar5,"addObject:",IVar3);
                }
              }
            }
            IVar3 = NSUserDefaults::standardUserDefaults
                              ((ID)&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
            IVar3 = NSUserDefaults::boolForKey_(IVar3,"boolForKey:",&cf_DL_ShowMentionsInStory);
            if ((int)IVar3 != 0) {
              uVar4 = FUN_00097ef8();
              uVar4 = FUN_00097a54(uVar4);
              IVar3 = _objc_msgSend(DAT_001006a8,"length");
              IVar3 = FUN_00097c68(uVar4,IVar3);
              IVar3 = _objc_msgSend(IVar3,"isEqualToString:",DAT_001006a8);
              if ((int)IVar3 != 0) {
                IVar3 = NSMutableArray::array((ID)&_OBJC_CLASS___NSMutableArray,"array");
                IVar6 = _objc_msgSend(param_1,"item");
                IVar6 = _objc_msgSend(IVar6,"respondsToSelector:","taggedUsers");
                if ((int)IVar6 == 0) {
                  IVar6 = _objc_msgSend(param_1,"item");
                  IVar6 = _objc_msgSend(IVar6,"respondsToSelector:","reelMentions");
                  if ((int)IVar6 != 0) {
                    uStack_118 = 0;
                    local_120 = 0;
                    uStack_108 = 0;
                    uStack_110 = 0;
                    lStack_138 = 0;
                    local_140 = 0;
                    uStack_128 = 0;
                    local_130 = (long *)0x0;
                    IVar6 = _objc_msgSend(param_1,"item");
                    IVar6 = _objc_msgSend(IVar6,"reelMentions");
                    IVar7 = _objc_msgSend(IVar6,"countByEnumeratingWithState:objects:count:",
                                          &local_140,&local_100,0x10);
                    if (IVar7 != 0) {
                      lVar10 = *local_130;
                      do {
                        IVar8 = 0;
                        do {
                          if (*local_130 != lVar10) {
                            _objc_enumerationMutation(IVar6);
                          }
                          IVar9 = *(ID *)(lStack_138 + IVar8 * 8);
                          IVar11 = _objc_msgSend(IVar9,"respondsToSelector:","user");
                          if ((int)IVar11 != 0) {
                            IVar11 = _objc_msgSend(IVar9,"performSelector:","user");
                            if (DAT_000fffd8 == 0) {
                              DAT_000fffd8 = _objc_getClass("IGUser");
                            }
                            uVar4 = _objc_retainAutorelease();
                            IVar9 = _objc_msgSend(IVar11,"isKindOfClass:",uVar4);
                            if ((int)IVar9 != 0) {
                              NSMutableArray::addObject_(IVar3,"addObject:",IVar11);
                            }
                          }
                          IVar8 = IVar8 + 1;
                        } while (IVar7 != IVar8);
                        IVar7 = _objc_msgSend(IVar6,"countByEnumeratingWithState:objects:count:",
                                              &local_140,&local_100,0x10);
                      } while (IVar7 != 0);
                    }
                  }
                }
                else {
                  uStack_118 = 0;
                  local_120 = 0;
                  uStack_108 = 0;
                  uStack_110 = 0;
                  lStack_138 = 0;
                  local_140 = 0;
                  uStack_128 = 0;
                  local_130 = (long *)0x0;
                  IVar6 = _objc_msgSend(param_1,"item");
                  IVar6 = _objc_msgSend(IVar6,"taggedUsers");
                  IVar7 = _objc_msgSend(IVar6,"countByEnumeratingWithState:objects:count:",
                                        &local_140,&local_100,0x10);
                  if (IVar7 != 0) {
                    lVar10 = *local_130;
                    do {
                      IVar8 = 0;
                      do {
                        if (*local_130 != lVar10) {
                          _objc_enumerationMutation(IVar6);
                        }
                        IVar11 = *(ID *)(lStack_138 + IVar8 * 8);
                        if (DAT_000fffd8 == 0) {
                          DAT_000fffd8 = _objc_getClass("IGUser");
                        }
                        uVar4 = _objc_retainAutorelease();
                        IVar9 = _objc_msgSend(IVar11,"isKindOfClass:",uVar4);
                        if ((int)IVar9 != 0) {
                          NSMutableArray::addObject_(IVar3,"addObject:",IVar11);
                        }
                        IVar8 = IVar8 + 1;
                      } while (IVar7 != IVar8);
                      IVar7 = _objc_msgSend(IVar6,"countByEnumeratingWithState:objects:count:",
                                            &local_140,&local_100,0x10);
                    } while (IVar7 != 0);
                  }
                }
                IVar6 = NSMutableArray::count(IVar3,"count");
                if (IVar6 != 0) {
                  IVar6 = FUN_0008c218(&cf_STORIES_SHOW_MENTIONS);
                  local_200 = PTR___NSConcreteStackBlock_000e80d8;
                  local_1f8 = 0xc2000000;
                  local_1f0 = FUN_0005f55c;
                  puStack_1e8 = &DAT_000e8948;
                  local_1e0 = IVar3;
                  IVar3 = ABMenuActionItem::
                          class_ABMenuActionItem__actionItemWithTitle_style_action_
                                    ((ID)&objc::class_t::ABMenuActionItem,
                                     "actionItemWithTitle:style:action:",IVar6,0,(ID)&local_200);
                  NSMutableArray::addObject_(IVar5,"addObject:",IVar3);
                }
              }
            }
            IVar3 = _objc_msgSend(param_1,"valueForKey:",&cf_delegate);
            IVar6 = _objc_alloc(&objc::class_t::ABMenuViewController);
            IVar5 = ABMenuViewController::instance_ABMenuViewController__initWithActionItems_
                              (IVar6,"initWithActionItems:",IVar5);
            IVar6 = _objc_msgSend(IVar3,"valueForKey:",&cf__storyItemContext);
            IVar7 = _objc_msgSend(IVar6,"respondsToSelector:","storyItemActionController");
            if ((int)IVar7 != 0) {
              IVar6 = _objc_msgSend(IVar6,"storyItemActionController");
              ABMenuViewController::instance_ABMenuViewController__setDelegate_
                        (IVar5,"setDelegate:",IVar6);
            }
            IVar3 = _objc_msgSend(IVar3,"delegate");
            ABMenuViewController::
            instance_ABMenuViewController__presentedFromViewController_animated_completion_
                      (IVar5,"presentedFromViewController:animated:completion:",IVar3,1,0,param_6);
          }
        }
      }
    }
    else {
      IVar3 = _objc_msgSend(param_1,"item");
      IVar3 = _objc_msgSend(IVar3,"valueForKey:",&cf_rawPhoto);
      if (DAT_000fffc8 == 0) {
        DAT_000fffc8 = _objc_getClass("IGPhoto");
      }
      uVar4 = _objc_retainAutorelease();
      IVar5 = _objc_msgSend(IVar3,"isMemberOfClass:",uVar4);
      if ((IVar5 & 1) != 0) {
        if (IVar3 == 0) {
          IVar5 = 0;
        }
        else {
          IVar5 = _objc_msgSend(IVar3,"valueForKey:",&cf__originalImageVersions);
          local_100 = (undefined *)
                      NSSortDescriptor::sortDescriptorWithKey_ascending_
                                ((ID)&_OBJC_CLASS___NSSortDescriptor,
                                 "sortDescriptorWithKey:ascending:",&cf_width,0);
          IVar6 = NSArray::arrayWithObjects_count_
                            ((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:count:",&local_100,1);
          IVar5 = _objc_msgSend(IVar5,"sortedArrayUsingDescriptors:",IVar6);
        }
        IVar6 = _objc_msgSend(IVar5,"count");
        if (IVar6 != 0) {
          IVar6 = _objc_msgSend(param_1,"valueForKey:",&cf__delegate);
          IVar7 = NSMutableArray::array((ID)&_OBJC_CLASS___NSMutableArray,"array");
          IVar8 = FUN_0008c218(&cf_ACTION_DOWNLOAD);
          local_180 = PTR___NSConcreteStackBlock_000e80d8;
          local_178 = 0xc2000000;
          local_170 = FUN_0005c5d0;
          puStack_168 = &DAT_000e8b48;
          local_150 = 1;
          local_160 = param_1;
          local_158 = IVar5;
          local_148 = param_2;
          IVar5 = ABMenuActionItem::class_ABMenuActionItem__actionItemWithTitle_style_action_
                            ((ID)&objc::class_t::ABMenuActionItem,
                             "actionItemWithTitle:style:action:",IVar8,0,(ID)&local_180);
          NSMutableArray::addObject_(IVar7,"addObject:",IVar5);
          IVar5 = NSUserDefaults::standardUserDefaults
                            ((ID)&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
          IVar5 = NSUserDefaults::boolForKey_
                            (IVar5,"boolForKey:",&cf_DL_SeeStoryWithoutOtherPartyKnowing);
          if ((int)IVar5 != 0) {
            uVar4 = FUN_00097ef8();
            uVar4 = FUN_00097a54(uVar4);
            IVar5 = _objc_msgSend(DAT_001006a8,"length");
            IVar5 = FUN_00097c68(uVar4,IVar5);
            IVar5 = _objc_msgSend(IVar5,"isEqualToString:",DAT_001006a8);
            if (((int)IVar5 != 0) &&
               (IVar5 = _objc_msgSend(IVar3,"respondsToSelector:","mediaID"), (int)IVar5 != 0)) {
              IVar3 = _objc_msgSend(IVar3,"mediaID");
              IVar5 = _NSSearchPathForDirectoriesInDomains(9,1,1);
              IVar5 = _objc_msgSend(IVar5,"objectAtIndex:",0);
              IVar5 = _objc_msgSend(IVar5,"stringByAppendingPathComponent:",
                                    &cf_story_seen_media_id_plist);
              IVar8 = NSFileManager::defaultManager
                                ((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
              IVar8 = NSFileManager::fileExistsAtPath_(IVar8,"fileExistsAtPath:",IVar5);
              if ((int)IVar8 == 0) {
                bVar2 = false;
              }
              else {
                IVar8 = _objc_alloc(&_OBJC_CLASS___NSMutableDictionary);
                IVar5 = NSMutableDictionary::initWithContentsOfFile_
                                  (IVar8,"initWithContentsOfFile:",IVar5);
                IVar5 = NSMutableDictionary::objectForKey_(IVar5,"objectForKey:",&cf_media_ids);
                lStack_138 = 0;
                local_140 = 0;
                uStack_128 = 0;
                local_130 = (long *)0x0;
                uStack_118 = 0;
                local_120 = 0;
                uStack_108 = 0;
                uStack_110 = 0;
                IVar8 = NSMutableDictionary::countByEnumeratingWithState_objects_count_
                                  (IVar5,"countByEnumeratingWithState:objects:count:",&local_140,
                                   &local_100,0x10);
                if (IVar8 != 0) {
                  lVar10 = *local_130;
                  do {
                    IVar11 = 0;
                    do {
                      if (*local_130 != lVar10) {
                        _objc_enumerationMutation(IVar5);
                      }
                      IVar9 = _objc_msgSend(IVar3,"isEqualToString:",
                                            *(undefined8 *)(lStack_138 + IVar11 * 8));
                      if ((IVar9 & 1) != 0) {
                        bVar2 = true;
                        goto LAB_0006ba04;
                      }
                      IVar11 = IVar11 + 1;
                    } while (IVar8 != IVar11);
                    IVar8 = NSMutableDictionary::countByEnumeratingWithState_objects_count_
                                      (IVar5,"countByEnumeratingWithState:objects:count:",&local_140
                                       ,&local_100,0x10);
                  } while (IVar8 != 0);
                }
                bVar2 = false;
              }
LAB_0006ba04:
              IVar3 = FUN_0008c218(&cf_ACTION_SEEN);
              lVar1 = 3;
              if (!bVar2) {
                lVar1 = 1;
              }
              local_100 = PTR___NSConcreteStackBlock_000e80d8;
              local_f8 = 0xc0000000;
              local_f0 = FUN_0005d1f8;
              puStack_e8 = &DAT_000e8b78;
              local_e0 = bVar2;
              IVar3 = ABMenuActionItem::class_ABMenuActionItem__actionItemWithTitle_style_action_
                                ((ID)&objc::class_t::ABMenuActionItem,
                                 "actionItemWithTitle:style:action:",IVar3,lVar1,(ID)&local_100);
              NSMutableArray::addObject_(IVar7,"addObject:",IVar3);
            }
          }
          IVar3 = _objc_alloc(&objc::class_t::ABMenuViewController);
          IVar3 = ABMenuViewController::instance_ABMenuViewController__initWithActionItems_
                            (IVar3,"initWithActionItems:",IVar7);
          ABMenuViewController::
          instance_ABMenuViewController__presentedFromViewController_animated_completion_
                    (IVar3,"presentedFromViewController:animated:completion:",IVar6,1,0,param_6);
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_80) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}

