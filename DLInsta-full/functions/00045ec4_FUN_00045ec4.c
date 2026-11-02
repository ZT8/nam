/* Address: 00045ec4 | Name: FUN_00045ec4 | Body bytes: 2012 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_00045ec4(undefined8 param_1,undefined8 param_2,ID param_3,undefined8 param_4,undefined8 param_5,
            undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  ID IVar2;
  undefined8 uVar3;
  long lVar4;
  ID IVar5;
  ID IVar6;
  ID IVar7;
  code *pcVar8;
  ulong uVar9;
  byte *pbVar10;
  bool bVar11;
  ID *pIVar12;
  ID IVar13;
  undefined8 *puVar14;
  ID IVar15;
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
      if (DAT_000ffee8 == 0) {
        DAT_000ffee8 = _objc_getClass("IGDirectMessageUpdate");
      }
      uVar3 = _objc_retainAutorelease();
      IVar2 = _objc_msgSend(param_3,"isMemberOfClass:",uVar3);
      if (((int)IVar2 != 0) &&
         (iVar1 = FUN_0008ce2c(param_3,"_removeMessages_messageKeys"), iVar1 != 0)) {
        uVar3 = _object_getClass();
        lVar4 = _class_getInstanceVariable(uVar3,"_removeMessages_messageKeys");
        if (lVar4 == 0) {
          pIVar12 = (ID *)0x0;
        }
        else {
          lVar4 = _ivar_getOffset();
          pIVar12 = (ID *)(param_3 + lVar4);
        }
        IVar2 = *pIVar12;
        lStack_148 = 0;
        local_150 = 0;
        uStack_138 = 0;
        local_140 = (long *)0x0;
        uStack_128 = 0;
        local_130 = 0;
        uStack_118 = 0;
        uStack_120 = 0;
        IVar5 = _objc_msgSend(IVar2,"countByEnumeratingWithState:objects:count:",&local_150,
                              auStack_110,0x10);
        if (IVar5 != 0) {
          bVar11 = false;
          lVar4 = *local_140;
          do {
            IVar15 = 0;
            do {
              if (*local_140 != lVar4) {
                _objc_enumerationMutation(IVar2);
              }
              if ((DAT_000ffc90 & 1) == 0) {
                IVar13 = *(ID *)(lStack_148 + IVar15 * 8);
                if (DAT_000ffec8 == 0) {
                  DAT_000ffec8 = _objc_getClass("NSString");
                }
                uVar3 = _objc_retainAutorelease();
                IVar6 = _objc_msgSend(IVar13,"isMemberOfClass:",uVar3);
                if ((int)IVar6 == 0) {
                  iVar1 = FUN_0008ce2c(IVar13,"_messageServerId");
                  if (iVar1 != 0) {
                    IVar13 = _objc_msgSend(IVar13,"valueForKey:",&cf__messageServerId);
                    goto joined_r0x0004622c;
                  }
                }
                else {
joined_r0x0004622c:
                  if (IVar13 != 0) {
                    IVar6 = _NSSearchPathForDirectoriesInDomains(9,1,1);
                    IVar6 = _objc_msgSend(IVar6,"objectAtIndex:",0);
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
                    IVar7 = NSString::stringWithCString_encoding_
                                      ((ID)&_OBJC_CLASS___NSString,"stringWithCString:encoding:",
                                       &DAT_000ffe88,4);
                    IVar6 = _objc_msgSend(IVar6,"stringByAppendingPathComponent:",IVar7);
                    IVar7 = NSFileManager::defaultManager
                                      ((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
                    IVar7 = NSFileManager::fileExistsAtPath_(IVar7,"fileExistsAtPath:",IVar6);
                    if ((int)IVar7 == 0) {
                      IVar7 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
                      IVar7 = NSMutableArray::init(IVar7,"init");
                    }
                    else {
                      IVar7 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
                      IVar7 = NSMutableArray::initWithContentsOfFile_
                                        (IVar7,"initWithContentsOfFile:",IVar6);
                    }
                    local_90 = &cf_id;
                    local_88 = &cf_date;
                    IStack_80 = IVar13;
                    local_78 = NSDate::date((ID)&_OBJC_CLASS___NSDate,"date");
                    IVar13 = NSDictionary::dictionaryWithObjects_forKeys_count_
                                       ((ID)&_OBJC_CLASS___NSDictionary,
                                        "dictionaryWithObjects:forKeys:count:",&IStack_80,&local_90,
                                        2);
                    NSMutableArray::addObject_(IVar7,"addObject:",IVar13);
                    NSMutableArray::writeToFile_atomically_(IVar7,"writeToFile:atomically:",IVar6,1)
                    ;
                    bVar11 = true;
                    goto LAB_00046450;
                  }
                }
                bVar11 = true;
              }
LAB_00046450:
              IVar15 = IVar15 + 1;
            } while (IVar15 != IVar5);
            IVar5 = _objc_msgSend(IVar2,"countByEnumeratingWithState:objects:count:",&local_150,
                                  auStack_110,0x10);
          } while (IVar5 != 0);
          if (bVar11) {
            IVar2 = NSNotificationCenter::defaultCenter
                              ((ID)&_OBJC_CLASS___NSNotificationCenter,"defaultCenter");
            NSNotificationCenter::postNotificationName_object_
                      (IVar2,"postNotificationName:object:",&cf_reloadData_bubble,0);
            uVar3 = _object_getClass();
            lVar4 = _class_getInstanceVariable(uVar3,"_removeMessages_messageKeys");
            if (lVar4 == 0) {
              puVar14 = (undefined8 *)0x0;
            }
            else {
              lVar4 = _ivar_getOffset();
              puVar14 = (undefined8 *)(param_3 + lVar4);
            }
            *puVar14 = 0;
            pcVar8 = DAT_000ffd38;
            if (DAT_000ffd38 == (code *)0x0) {
              pcVar8 = (code *)_class_getMethodImplementation
                                         (DAT_000ffd30,
                                          "match:insertMessages:removeMessages:replaceMessages:mutateMessage:"
                                         );
            }
            uVar3 = (*pcVar8)(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
            goto LAB_00046654;
          }
        }
      }
      DAT_000ffc90 = 0;
    }
  }
  pcVar8 = DAT_000ffd38;
  if (DAT_000ffd38 == (code *)0x0) {
    pcVar8 = (code *)_class_getMethodImplementation
                               (DAT_000ffd30,
                                "match:insertMessages:removeMessages:replaceMessages:mutateMessage:"
                               );
  }
  uVar3 = (*pcVar8)(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
LAB_00046654:
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return uVar3;
}

