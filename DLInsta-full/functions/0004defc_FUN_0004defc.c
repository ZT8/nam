/* Address: 0004defc | Name: FUN_0004defc | Body bytes: 1780 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0004defc(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ID IVar5;
  ID IVar6;
  ID IVar7;
  ID IVar8;
  ulong uVar9;
  byte *pbVar10;
  bool bVar11;
  ID *pIVar12;
  ID IVar13;
  long *plVar14;
  undefined8 *puVar15;
  ID IVar16;
  undefined8 local_150;
  long lStack_148;
  long *local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [128];
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  ID IStack_80;
  ID local_78;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_000e8260;
  uVar2 = FUN_0008ce2c(*(undefined8 *)(param_1 + 0x20),"_messageUpdate");
  if ((int)uVar2 != 0) {
    lVar3 = *(long *)(param_1 + 0x20);
    uVar2 = _object_getClass();
    lVar4 = _class_getInstanceVariable(uVar2,"_messageUpdate");
    if (lVar4 == 0) {
      plVar14 = (long *)0x0;
    }
    else {
      lVar4 = _ivar_getOffset();
      plVar14 = (long *)(lVar3 + lVar4);
    }
    lVar3 = *plVar14;
    if (lVar3 != 0) {
      IVar5 = NSUserDefaults::standardUserDefaults
                        ((ID)&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
      IVar5 = NSUserDefaults::boolForKey_(IVar5,"boolForKey:",&cf_DL_KeepDeletedDM);
      if ((IVar5 & 1) != 0) {
        uVar2 = FUN_00097ef8();
        uVar2 = FUN_00097a54(uVar2);
        IVar5 = _objc_msgSend(DAT_001006a8,"length");
        IVar5 = FUN_00097c68(uVar2,IVar5);
        IVar5 = _objc_msgSend(IVar5,"isEqualToString:",DAT_001006a8);
        if ((int)IVar5 != 0) {
          iVar1 = FUN_0008ce2c(lVar3,"_removeMessages_messageKeys");
          if (iVar1 != 0) {
            uVar2 = _object_getClass();
            lVar4 = _class_getInstanceVariable(uVar2,"_removeMessages_messageKeys");
            if (lVar4 == 0) {
              pIVar12 = (ID *)0x0;
            }
            else {
              lVar4 = _ivar_getOffset();
              pIVar12 = (ID *)(lVar3 + lVar4);
            }
            IVar5 = *pIVar12;
            lStack_148 = 0;
            local_150 = 0;
            uStack_138 = 0;
            local_140 = (long *)0x0;
            uStack_128 = 0;
            local_130 = 0;
            uStack_118 = 0;
            uStack_120 = 0;
            IVar6 = _objc_msgSend(IVar5,"countByEnumeratingWithState:objects:count:",&local_150,
                                  auStack_110,0x10);
            if (IVar6 != 0) {
              bVar11 = false;
              lVar4 = *local_140;
              do {
                IVar16 = 0;
                do {
                  if (*local_140 != lVar4) {
                    _objc_enumerationMutation(IVar5);
                  }
                  if ((DAT_000ffc90 & 1) == 0) {
                    IVar13 = *(ID *)(lStack_148 + IVar16 * 8);
                    if (DAT_000ffec8 == 0) {
                      DAT_000ffec8 = _objc_getClass("NSString");
                    }
                    uVar2 = _objc_retainAutorelease();
                    IVar7 = _objc_msgSend(IVar13,"isMemberOfClass:",uVar2);
                    if ((int)IVar7 == 0) {
                      iVar1 = FUN_0008ce2c(IVar13,"_messageServerId");
                      if (iVar1 != 0) {
                        IVar13 = _objc_msgSend(IVar13,"valueForKey:",&cf__messageServerId);
                        goto joined_r0x0004e248;
                      }
                    }
                    else {
joined_r0x0004e248:
                      if (IVar13 != 0) {
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
                          uVar9 = 0;
                          pbVar10 = &DAT_000ffe88;
                          do {
                            *pbVar10 = *pbVar10 ^ (byte)(0xcd15890f1fef9f7d >> (uVar9 & 0x38));
                            uVar9 = uVar9 + 8;
                            pbVar10 = pbVar10 + 1;
                          } while (uVar9 != 0x90);
                          DAT_000ffe9a = '\0';
                        }
                        IVar8 = NSString::stringWithCString_encoding_
                                          ((ID)&_OBJC_CLASS___NSString,"stringWithCString:encoding:"
                                           ,&DAT_000ffe88,4);
                        IVar7 = _objc_msgSend(IVar7,"stringByAppendingPathComponent:",IVar8);
                        IVar8 = NSFileManager::defaultManager
                                          ((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
                        IVar8 = NSFileManager::fileExistsAtPath_(IVar8,"fileExistsAtPath:",IVar7);
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
                        IStack_80 = IVar13;
                        local_78 = NSDate::date((ID)&_OBJC_CLASS___NSDate,"date");
                        IVar13 = NSDictionary::dictionaryWithObjects_forKeys_count_
                                           ((ID)&_OBJC_CLASS___NSDictionary,
                                            "dictionaryWithObjects:forKeys:count:",&IStack_80,
                                            &local_90,2);
                        NSMutableArray::addObject_(IVar8,"addObject:",IVar13);
                        NSMutableArray::writeToFile_atomically_
                                  (IVar8,"writeToFile:atomically:",IVar7,1);
                        bVar11 = true;
                        goto LAB_0004e470;
                      }
                    }
                    bVar11 = true;
                  }
LAB_0004e470:
                  IVar16 = IVar16 + 1;
                } while (IVar16 != IVar6);
                IVar6 = _objc_msgSend(IVar5,"countByEnumeratingWithState:objects:count:",&local_150,
                                      auStack_110,0x10);
              } while (IVar6 != 0);
              if (bVar11) {
                IVar5 = NSNotificationCenter::defaultCenter
                                  ((ID)&_OBJC_CLASS___NSNotificationCenter,"defaultCenter");
                NSNotificationCenter::postNotificationName_object_
                          (IVar5,"postNotificationName:object:",&cf_reloadData_bubble,0);
                uVar2 = _object_getClass();
                lVar4 = _class_getInstanceVariable(uVar2,"_removeMessages_messageKeys");
                if (lVar4 == 0) {
                  puVar15 = (undefined8 *)0x0;
                }
                else {
                  lVar4 = _ivar_getOffset();
                  puVar15 = (undefined8 *)(lVar3 + lVar4);
                }
                *puVar15 = 0;
              }
            }
          }
          DAT_000ffc90 = 0;
        }
      }
    }
    uVar2 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(uVar2);
  }
  return;
}

