/* Address: 0003fff0 | Name: FUN_0003fff0 | Body bytes: 1456 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0003fff0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  ID IVar7;
  ulong uVar8;
  byte *pbVar9;
  bool bVar10;
  ID *pIVar11;
  ID IVar12;
  ID IVar13;
  undefined8 *puVar14;
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
  iVar1 = FUN_0008ce2c(param_1,"_removeMessages_messageKeys");
  if (iVar1 != 0) {
    uVar2 = _object_getClass();
    lVar3 = _class_getInstanceVariable(uVar2,"_removeMessages_messageKeys");
    if (lVar3 == 0) {
      pIVar11 = (ID *)0x0;
    }
    else {
      lVar3 = _ivar_getOffset();
      pIVar11 = (ID *)(param_1 + lVar3);
    }
    IVar4 = *pIVar11;
    lStack_148 = 0;
    local_150 = 0;
    uStack_138 = 0;
    local_140 = (long *)0x0;
    uStack_128 = 0;
    local_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    IVar5 = _objc_msgSend(IVar4,"countByEnumeratingWithState:objects:count:",&local_150,auStack_110,
                          0x10);
    if (IVar5 != 0) {
      bVar10 = false;
      lVar3 = *local_140;
      do {
        IVar13 = 0;
        do {
          if (*local_140 != lVar3) {
            _objc_enumerationMutation(IVar4);
          }
          if ((DAT_000ffc90 & 1) == 0) {
            IVar12 = *(ID *)(lStack_148 + IVar13 * 8);
            if (DAT_000ffec8 == 0) {
              DAT_000ffec8 = _objc_getClass("NSString");
            }
            uVar2 = _objc_retainAutorelease();
            IVar6 = _objc_msgSend(IVar12,"isMemberOfClass:",uVar2);
            if ((int)IVar6 == 0) {
              iVar1 = FUN_0008ce2c(IVar12,"_messageServerId");
              if (iVar1 != 0) {
                IVar12 = _objc_msgSend(IVar12,"valueForKey:",&cf__messageServerId);
                goto joined_r0x0004020c;
              }
            }
            else {
joined_r0x0004020c:
              if (IVar12 != 0) {
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
                  uVar8 = 0;
                  pbVar9 = &DAT_000ffe88;
                  do {
                    *pbVar9 = *pbVar9 ^ (byte)(0xcd15890f1fef9f7d >> (uVar8 & 0x38));
                    uVar8 = uVar8 + 8;
                    pbVar9 = pbVar9 + 1;
                  } while (uVar8 != 0x90);
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
                IStack_80 = IVar12;
                local_78 = NSDate::date((ID)&_OBJC_CLASS___NSDate,"date");
                IVar12 = NSDictionary::dictionaryWithObjects_forKeys_count_
                                   ((ID)&_OBJC_CLASS___NSDictionary,
                                    "dictionaryWithObjects:forKeys:count:",&IStack_80,&local_90,2);
                NSMutableArray::addObject_(IVar7,"addObject:",IVar12);
                NSMutableArray::writeToFile_atomically_(IVar7,"writeToFile:atomically:",IVar6,1);
                bVar10 = true;
                goto LAB_00040430;
              }
            }
            bVar10 = true;
          }
LAB_00040430:
          IVar13 = IVar13 + 1;
        } while (IVar13 != IVar5);
        IVar5 = _objc_msgSend(IVar4,"countByEnumeratingWithState:objects:count:",&local_150,
                              auStack_110,0x10);
      } while (IVar5 != 0);
      if (bVar10) {
        IVar4 = NSNotificationCenter::defaultCenter
                          ((ID)&_OBJC_CLASS___NSNotificationCenter,"defaultCenter");
        NSNotificationCenter::postNotificationName_object_
                  (IVar4,"postNotificationName:object:",&cf_reloadData_bubble,0);
        uVar2 = _object_getClass();
        lVar3 = _class_getInstanceVariable(uVar2,"_removeMessages_messageKeys");
        if (lVar3 == 0) {
          puVar14 = (undefined8 *)0x0;
        }
        else {
          lVar3 = _ivar_getOffset();
          puVar14 = (undefined8 *)(param_1 + lVar3);
        }
        *puVar14 = 0;
      }
    }
  }
  DAT_000ffc90 = 0;
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}

