/* Address: 000473e0 | Name: FUN_000473e0 | Body bytes: 2116 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000473e0(undefined8 param_1,undefined8 param_2,ID param_3,undefined8 param_4,
                 undefined8 param_5)

{
  int iVar1;
  ID IVar2;
  undefined8 uVar3;
  long lVar4;
  ID IVar5;
  ID IVar6;
  ID IVar7;
  ID IVar8;
  code *pcVar9;
  ulong uVar10;
  byte *pbVar11;
  bool bVar12;
  long lVar13;
  ID *pIVar14;
  ID IVar15;
  long *plVar16;
  undefined8 *puVar17;
  long lVar18;
  ID IVar19;
  ID IVar20;
  undefined8 local_210;
  long lStack_208;
  long *local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  long lStack_1c8;
  long *local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined1 auStack_190 [128];
  undefined1 auStack_110 [128];
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  ID IStack_80;
  ID local_78;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_000e8260;
  IVar2 = NSUserDefaults::standardUserDefaults
                    ((ID)&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
  IVar2 = NSUserDefaults::boolForKey_(IVar2,"boolForKey:",&cf_DL_KeepDeletedDM);
  if ((IVar2 & 1) != 0) {
    uVar3 = FUN_00097ef8();
    uVar3 = FUN_00097a54(uVar3);
    IVar2 = _objc_msgSend(DAT_001006a8,"length");
    IVar2 = FUN_00097c68(uVar3,IVar2);
    IVar2 = _objc_msgSend(IVar2,"isEqualToString:",DAT_001006a8);
    if ((int)IVar2 != 0) {
      lStack_1c8 = 0;
      local_1d0 = 0;
      uStack_1b8 = 0;
      local_1c0 = (long *)0x0;
      uStack_1a8 = 0;
      local_1b0 = 0;
      uStack_198 = 0;
      uStack_1a0 = 0;
      IVar2 = _objc_msgSend(param_3,"countByEnumeratingWithState:objects:count:",&local_1d0,
                            auStack_110,0x10);
      if (IVar2 != 0) {
        lVar18 = *local_1c0;
        do {
          IVar20 = 0;
          do {
            if (*local_1c0 != lVar18) {
              _objc_enumerationMutation(param_3);
            }
            lVar13 = *(long *)(lStack_1c8 + IVar20 * 8);
            iVar1 = FUN_0008ce2c(lVar13,"_messageUpdate");
            if (iVar1 != 0) {
              uVar3 = _object_getClass();
              lVar4 = _class_getInstanceVariable(uVar3,"_messageUpdate");
              if (lVar4 == 0) {
                plVar16 = (long *)0x0;
              }
              else {
                lVar4 = _ivar_getOffset();
                plVar16 = (long *)(lVar13 + lVar4);
              }
              lVar13 = *plVar16;
              iVar1 = FUN_0008ce2c(lVar13,"_removeMessages_messageKeys");
              if (iVar1 != 0) {
                uVar3 = _object_getClass();
                lVar4 = _class_getInstanceVariable(uVar3,"_removeMessages_messageKeys");
                if (lVar4 == 0) {
                  pIVar14 = (ID *)0x0;
                }
                else {
                  lVar4 = _ivar_getOffset();
                  pIVar14 = (ID *)(lVar13 + lVar4);
                }
                IVar5 = *pIVar14;
                lStack_208 = 0;
                local_210 = 0;
                uStack_1f8 = 0;
                local_200 = (long *)0x0;
                uStack_1e8 = 0;
                local_1f0 = 0;
                uStack_1d8 = 0;
                uStack_1e0 = 0;
                IVar6 = _objc_msgSend(IVar5,"countByEnumeratingWithState:objects:count:",&local_210,
                                      auStack_190,0x10);
                if (IVar6 != 0) {
                  bVar12 = false;
                  lVar4 = *local_200;
                  do {
                    IVar19 = 0;
                    do {
                      if (*local_200 != lVar4) {
                        _objc_enumerationMutation(IVar5);
                      }
                      if ((DAT_000ffc90 & 1) == 0) {
                        IVar15 = *(ID *)(lStack_208 + IVar19 * 8);
                        if (DAT_000ffec8 == 0) {
                          DAT_000ffec8 = _objc_getClass("NSString");
                        }
                        uVar3 = _objc_retainAutorelease();
                        IVar7 = _objc_msgSend(IVar15,"isMemberOfClass:",uVar3);
                        if ((int)IVar7 == 0) {
                          iVar1 = FUN_0008ce2c(IVar15,"_messageServerId");
                          if (iVar1 != 0) {
                            IVar15 = _objc_msgSend(IVar15,"valueForKey:",&cf__messageServerId);
                            goto joined_r0x000477e4;
                          }
                        }
                        else {
joined_r0x000477e4:
                          if (IVar15 != 0) {
                            IVar7 = _NSSearchPathForDirectoriesInDomains(9,1,1);
                            IVar7 = _objc_msgSend(IVar7,"objectAtIndex:",0);
                            if (((DAT_000ffea0 & 1) == 0) &&
                               (iVar1 = ___cxa_guard_acquire(&DAT_000ffea0), iVar1 != 0)) {
                              DAT_000ffe9a = '\x01';
                              uRam00000000000ffe90 = 0xbe7ce57f319ded1c;
                              _DAT_000ffe88 = 0x9279ec6b409cfb14;
                              DAT_000ffe98 = 0x9f09;
                              ___cxa_atexit(PTR_FUN_000e8178,&DAT_000ffe88,0);
                              ___cxa_guard_release(&DAT_000ffea0);
                            }
                            if (DAT_000ffe9a != '\0') {
                              uVar10 = 0;
                              pbVar11 = &DAT_000ffe88;
                              do {
                                *pbVar11 = *pbVar11 ^ (byte)(0xcd15890f1fef9f7d >> (uVar10 & 0x38));
                                uVar10 = uVar10 + 8;
                                pbVar11 = pbVar11 + 1;
                              } while (uVar10 != 0x90);
                              DAT_000ffe9a = '\0';
                            }
                            IVar8 = NSString::stringWithCString_encoding_
                                              ((ID)&_OBJC_CLASS___NSString,
                                               "stringWithCString:encoding:",&DAT_000ffe88,4);
                            IVar7 = _objc_msgSend(IVar7,"stringByAppendingPathComponent:",IVar8);
                            IVar8 = NSFileManager::defaultManager
                                              ((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
                            IVar8 = NSFileManager::fileExistsAtPath_
                                              (IVar8,"fileExistsAtPath:",IVar7);
                            if ((int)IVar8 == 0) {
                              IVar8 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
                              IVar8 = NSMutableArray::init(IVar8,"init");
                            }
                            else {
                              IVar8 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
                              IVar8 = NSMutableArray::initWithContentsOfFile_
                                                (IVar8,"initWithContentsOfFile:",IVar7);
                            }
                            local_90 = &cf_id;
                            local_88 = &cf_date;
                            IStack_80 = IVar15;
                            local_78 = NSDate::date((ID)&_OBJC_CLASS___NSDate,"date");
                            IVar15 = NSDictionary::dictionaryWithObjects_forKeys_count_
                                               ((ID)&_OBJC_CLASS___NSDictionary,
                                                "dictionaryWithObjects:forKeys:count:",&IStack_80,
                                                &local_90,2);
                            NSMutableArray::addObject_(IVar8,"addObject:",IVar15);
                            NSMutableArray::writeToFile_atomically_
                                      (IVar8,"writeToFile:atomically:",IVar7,1);
                            bVar12 = true;
                            goto LAB_00047a08;
                          }
                        }
                        bVar12 = true;
                      }
LAB_00047a08:
                      IVar19 = IVar19 + 1;
                    } while (IVar19 != IVar6);
                    IVar6 = _objc_msgSend(IVar5,"countByEnumeratingWithState:objects:count:",
                                          &local_210,auStack_190,0x10);
                  } while (IVar6 != 0);
                  if (bVar12) {
                    IVar5 = NSNotificationCenter::defaultCenter
                                      ((ID)&_OBJC_CLASS___NSNotificationCenter,"defaultCenter");
                    NSNotificationCenter::postNotificationName_object_
                              (IVar5,"postNotificationName:object:",&cf_reloadData_bubble,0);
                    uVar3 = _object_getClass();
                    lVar4 = _class_getInstanceVariable(uVar3,"_removeMessages_messageKeys");
                    if (lVar4 == 0) {
                      puVar17 = (undefined8 *)0x0;
                    }
                    else {
                      lVar4 = _ivar_getOffset();
                      puVar17 = (undefined8 *)(lVar13 + lVar4);
                    }
                    *puVar17 = 0;
                  }
                }
              }
            }
            IVar20 = IVar20 + 1;
          } while (IVar20 != IVar2);
          IVar2 = _objc_msgSend(param_3,"countByEnumeratingWithState:objects:count:",&local_1d0,
                                auStack_110,0x10);
        } while (IVar2 != 0);
      }
      DAT_000ffc90 = 0;
    }
  }
  pcVar9 = DAT_000ffd50;
  if (DAT_000ffd50 == (code *)0x0) {
    pcVar9 = (code *)_class_getMethodImplementation
                               (DAT_000ffd40,"_applyThreadUpdates:toThreadWithId:mutationId:");
  }
  (*pcVar9)(param_1,param_2,param_3,param_4,param_5);
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}

