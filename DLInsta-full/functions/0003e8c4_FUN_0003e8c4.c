/* Address: 0003e8c4 | Name: FUN_0003e8c4 | Body bytes: 756 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0003e8c4(undefined8 param_1)

{
  int iVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ulong uVar5;
  byte *pbVar6;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  undefined8 uStack_68;
  ID local_60;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_000e8260;
  IVar2 = _NSSearchPathForDirectoriesInDomains(9,1,1);
  IVar2 = _objc_msgSend(IVar2,"objectAtIndex:",0);
  if (((DAT_000ffea0 & 1) == 0) && (iVar1 = ___cxa_guard_acquire(&DAT_000ffea0), iVar1 != 0)) {
    DAT_000ffe9a = '\x01';
    uRam00000000000ffe90 = 0xbe7ce57f319ded1c;
    _DAT_000ffe88 = 0x9279ec6b409cfb14;
    DAT_000ffe98 = 0x9f09;
    ___cxa_atexit(PTR_FUN_000e8178,&DAT_000ffe88,0);
    ___cxa_guard_release(&DAT_000ffea0);
  }
  if (DAT_000ffe9a != '\0') {
    uVar5 = 0;
    pbVar6 = &DAT_000ffe88;
    do {
      *pbVar6 = *pbVar6 ^ (byte)(0xcd15890f1fef9f7d >> (uVar5 & 0x38));
      uVar5 = uVar5 + 8;
      pbVar6 = pbVar6 + 1;
    } while (uVar5 != 0x90);
    DAT_000ffe9a = '\0';
  }
  IVar3 = NSString::stringWithCString_encoding_
                    ((ID)&_OBJC_CLASS___NSString,"stringWithCString:encoding:",&DAT_000ffe88,4);
  IVar2 = _objc_msgSend(IVar2,"stringByAppendingPathComponent:",IVar3);
  IVar3 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
  IVar3 = NSFileManager::fileExistsAtPath_(IVar3,"fileExistsAtPath:",IVar2);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
    IVar3 = NSMutableArray::init(IVar3,"init");
  }
  else {
    IVar3 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
    IVar3 = NSMutableArray::initWithContentsOfFile_(IVar3,"initWithContentsOfFile:",IVar2);
  }
  local_78 = &cf_id;
  local_70 = &cf_date;
  uStack_68 = param_1;
  local_60 = NSDate::date((ID)&_OBJC_CLASS___NSDate,"date");
  IVar4 = NSDictionary::dictionaryWithObjects_forKeys_count_
                    ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                     &uStack_68,&local_78,2);
  NSMutableArray::addObject_(IVar3,"addObject:",IVar4);
  NSMutableArray::writeToFile_atomically_(IVar3,"writeToFile:atomically:",IVar2,1);
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}

