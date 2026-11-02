/* Address: 00044e84 | Name: FUN_00044e84 | Body bytes: 1380 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00044e84(undefined8 param_1,undefined8 param_2,ID param_3,undefined8 param_4)

{
  int iVar1;
  ID IVar2;
  undefined8 uVar3;
  code *pcVar4;
  ID IVar5;
  ID IVar6;
  ulong uVar7;
  byte *pbVar8;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  ID IStack_78;
  ID local_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_000e8260;
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
      if ((DAT_000ffc90 & 1) == 0) {
        if (DAT_000ffec8 == 0) {
          DAT_000ffec8 = _objc_getClass("NSString");
        }
        uVar3 = _objc_retainAutorelease();
        IVar5 = _objc_msgSend(param_3,"isMemberOfClass:",uVar3);
        IVar2 = param_3;
        if ((int)IVar5 == 0) {
          iVar1 = FUN_0008ce2c(param_3,"_messageServerId");
          if (iVar1 == 0) goto LAB_00044f94;
          IVar2 = _objc_msgSend(param_3,"valueForKey:",&cf__messageServerId);
        }
        if (IVar2 != 0) {
          IVar5 = _NSSearchPathForDirectoriesInDomains(9,1,1);
          IVar5 = _objc_msgSend(IVar5,"objectAtIndex:",0);
          if (((DAT_000ffea0 & 1) == 0) && (iVar1 = ___cxa_guard_acquire(&DAT_000ffea0), iVar1 != 0)
             ) {
            DAT_000ffe9a = '\x01';
            uRam00000000000ffe90 = 0xbe7ce57f319ded1c;
            _DAT_000ffe88 = 0x9279ec6b409cfb14;
            DAT_000ffe98 = 0x9f09;
            ___cxa_atexit(PTR_FUN_000e8178,&DAT_000ffe88,0);
            ___cxa_guard_release(&DAT_000ffea0);
          }
          if (DAT_000ffe9a != '\0') {
            uVar7 = 0;
            pbVar8 = &DAT_000ffe88;
            do {
              *pbVar8 = *pbVar8 ^ (byte)(0xcd15890f1fef9f7d >> (uVar7 & 0x38));
              uVar7 = uVar7 + 8;
              pbVar8 = pbVar8 + 1;
            } while (uVar7 != 0x90);
            DAT_000ffe9a = '\0';
          }
          IVar6 = NSString::stringWithCString_encoding_
                            ((ID)&_OBJC_CLASS___NSString,"stringWithCString:encoding:",&DAT_000ffe88
                             ,4);
          IVar5 = _objc_msgSend(IVar5,"stringByAppendingPathComponent:",IVar6);
          IVar6 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
          IVar6 = NSFileManager::fileExistsAtPath_(IVar6,"fileExistsAtPath:",IVar5);
          if ((int)IVar6 == 0) {
            IVar6 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
            IVar6 = NSMutableArray::init(IVar6,"init");
          }
          else {
            IVar6 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
            IVar6 = NSMutableArray::initWithContentsOfFile_(IVar6,"initWithContentsOfFile:",IVar5);
          }
          local_88 = &cf_id;
          local_80 = &cf_date;
          IStack_78 = IVar2;
          local_70 = NSDate::date((ID)&_OBJC_CLASS___NSDate,"date");
          IVar2 = NSDictionary::dictionaryWithObjects_forKeys_count_
                            ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                             &IStack_78,&local_88,2);
          NSMutableArray::addObject_(IVar6,"addObject:",IVar2);
          NSMutableArray::writeToFile_atomically_(IVar6,"writeToFile:atomically:",IVar5,1);
          IVar2 = NSNotificationCenter::defaultCenter
                            ((ID)&_OBJC_CLASS___NSNotificationCenter,"defaultCenter");
          NSNotificationCenter::postNotificationName_object_
                    (IVar2,"postNotificationName:object:",&cf_reloadData_bubble,0);
          pcVar4 = DAT_000ffd20;
          if (DAT_000ffd20 == (code *)0x0) {
            pcVar4 = (code *)_class_getMethodImplementation
                                       (DAT_000ffd10,"removeMessageWithMessageKey:reason:");
          }
          uVar3 = (*pcVar4)(param_1,param_2,0,param_4);
          goto LAB_00044fe8;
        }
      }
LAB_00044f94:
      DAT_000ffc90 = 0;
    }
  }
  pcVar4 = DAT_000ffd20;
  if (DAT_000ffd20 == (code *)0x0) {
    pcVar4 = (code *)_class_getMethodImplementation
                               (DAT_000ffd10,"removeMessageWithMessageKey:reason:");
  }
  uVar3 = (*pcVar4)(param_1,param_2,param_3,param_4);
LAB_00044fe8:
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return uVar3;
}

