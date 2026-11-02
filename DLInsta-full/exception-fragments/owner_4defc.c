
/* FRAGMENT entry=0x4e4dc owner=0x4defc; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UndefinedFunction_0004e4dc(_Unwind_Exception *param_1,undefined8 param_2)

{
  int iVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  byte *pbVar8;
  undefined8 *puVar9;
  ID unaff_x21;
  ulong unaff_x22;
  ID unaff_x24;
  char *op;
  long unaff_x29;
  undefined8 uStack0000000000000000;
  _Unwind_Exception *p_Stack0000000000000008;
  long in_stack_00000010;
  SEL in_stack_00000028;
  char *in_stack_00000030;
  char *in_stack_00000038;
  char *in_stack_00000040;
  long in_stack_00000048;
  ID in_stack_00000050;
  char *in_stack_00000058;
  char *in_stack_00000060;
  char *in_stack_00000068;
  char *in_stack_00000070;
  char *in_stack_00000078;
  char *in_stack_00000080;
  char *in_stack_00000088;
  char *in_stack_00000090;
  char *in_stack_00000098;
  char *in_stack_000000a0;
  char *in_stack_000000a8;
  undefined1 uStack00000000000000b0;
  long in_stack_000000b8;
  long *in_stack_000000c0;
  undefined1 uStack00000000000000f0;
  
  uStack0000000000000000 = param_2;
  p_Stack0000000000000008 = param_1;
  if ((int)param_2 != 1) {
    if ((int)param_2 != 1) {
                    /* WARNING: Subroutine does not return */
      __Unwind_Resume(param_1);
    }
    _objc_begin_catch(param_1);
    _objc_end_catch();
LAB_0004e638:
    if (*(long *)PTR____stack_chk_guard_000e8260 != *(long *)(unaff_x29 + -0x60)) {
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail(0);
    }
    return;
  }
  _objc_begin_catch(param_1);
  _objc_end_catch();
  do {
    op = in_stack_000000a0;
    do {
      while( true ) {
        do {
          unaff_x21 = unaff_x21 + 1;
          if (unaff_x21 == unaff_x24) {
            unaff_x24 = _objc_msgSend(in_stack_00000050,in_stack_00000028,&uStack00000000000000b0,
                                      &uStack00000000000000f0,0x10);
            if (unaff_x24 == 0) {
              if (true) {
                IVar4 = NSNotificationCenter::defaultCenter
                                  ((ID)&_OBJC_CLASS___NSNotificationCenter,"defaultCenter");
                NSNotificationCenter::postNotificationName_object_
                          (IVar4,"postNotificationName:object:",&cf_reloadData_bubble,0);
                uVar5 = _object_getClass();
                lVar6 = _class_getInstanceVariable(uVar5,"_removeMessages_messageKeys");
                if (lVar6 == 0) {
                  puVar9 = (undefined8 *)0x0;
                }
                else {
                  lVar6 = _ivar_getOffset();
                  puVar9 = (undefined8 *)(in_stack_00000010 + lVar6);
                }
                *puVar9 = 0;
              }
              DAT_000ffc90 = 0;
              goto LAB_0004e638;
            }
            unaff_x21 = 0;
            op = "isMemberOfClass:";
            in_stack_000000a8 = "_messageServerId";
            in_stack_00000090 = "stringWithCString:encoding:";
            in_stack_00000098 = "objectAtIndex:";
            in_stack_00000080 = "defaultManager";
            in_stack_00000088 = "stringByAppendingPathComponent:";
            in_stack_00000038 = "init";
            in_stack_00000040 = "valueForKey:";
            in_stack_00000030 = "initWithContentsOfFile:";
            in_stack_00000070 = "date";
            in_stack_00000078 = "fileExistsAtPath:";
            in_stack_00000060 = "addObject:";
            in_stack_00000068 = "dictionaryWithObjects:forKeys:count:";
            in_stack_00000058 = "writeToFile:atomically:";
            in_stack_000000a0 = "isMemberOfClass:";
          }
          if (*in_stack_000000c0 != in_stack_00000048) {
            _objc_enumerationMutation(in_stack_00000050);
          }
        } while ((DAT_000ffc90 & 1) != 0);
        IVar4 = *(ID *)(in_stack_000000b8 + unaff_x21 * 8);
        if (DAT_000ffec8 == 0) {
          DAT_000ffec8 = _objc_getClass("NSString");
        }
        uVar5 = _objc_retainAutorelease();
        IVar2 = _objc_msgSend(IVar4,op,uVar5);
        if ((int)IVar2 == 0) break;
        if (IVar4 != 0) goto LAB_0004e24c;
      }
      iVar1 = FUN_0008ce2c(IVar4,in_stack_000000a8);
    } while ((iVar1 == 0) ||
            (IVar4 = _objc_msgSend(IVar4,in_stack_00000040,&cf__messageServerId), IVar4 == 0));
LAB_0004e24c:
    IVar2 = _NSSearchPathForDirectoriesInDomains(9,1,1);
    IVar2 = _objc_msgSend(IVar2,in_stack_00000098,0);
    if (((DAT_000ffea0 & 1) == 0) && (iVar1 = ___cxa_guard_acquire(&DAT_000ffea0), iVar1 != 0)) {
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
        *pbVar8 = *pbVar8 ^ (byte)(unaff_x22 >> (uVar7 & 0x38));
        uVar7 = uVar7 + 8;
        pbVar8 = pbVar8 + 1;
      } while (uVar7 != 0x90);
      DAT_000ffe9a = '\0';
    }
    IVar3 = NSString::stringWithCString_encoding_
                      ((ID)&_OBJC_CLASS___NSString,in_stack_00000090,&DAT_000ffe88,4);
    IVar2 = _objc_msgSend(IVar2,in_stack_00000088,IVar3);
    IVar3 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,in_stack_00000080);
    IVar3 = NSFileManager::fileExistsAtPath_(IVar3,in_stack_00000078,IVar2);
    if ((int)IVar3 == 0) {
      IVar3 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
      IVar3 = NSMutableArray::init(IVar3,in_stack_00000038);
    }
    else {
      IVar3 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
      IVar3 = NSMutableArray::initWithContentsOfFile_(IVar3,in_stack_00000030,IVar2);
    }
    *(cfstringStruct **)(unaff_x29 + -0x80) = &cf_id;
    *(cfstringStruct **)(unaff_x29 + -0x78) = &cf_date;
    *(ID *)(unaff_x29 + -0x70) = IVar4;
    IVar4 = NSDate::date((ID)&_OBJC_CLASS___NSDate,in_stack_00000070);
    *(ID *)(unaff_x29 + -0x68) = IVar4;
    IVar4 = NSDictionary::dictionaryWithObjects_forKeys_count_
                      ((ID)&_OBJC_CLASS___NSDictionary,in_stack_00000068,unaff_x29 + -0x70,
                       unaff_x29 + -0x80,2);
    NSMutableArray::addObject_(IVar3,in_stack_00000060,IVar4);
    NSMutableArray::writeToFile_atomically_(IVar3,in_stack_00000058,IVar2,1);
  } while( true );
}


/* FRAGMENT entry=0x4e698 owner=0x4defc; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void UndefinedFunction_0004e698(_Unwind_Exception *param_1,undefined8 param_2)

{
  long unaff_x29;
  undefined8 uStack0000000000000000;
  _Unwind_Exception *p_Stack0000000000000008;
  
  uStack0000000000000000 = param_2;
  p_Stack0000000000000008 = param_1;
  if ((int)param_2 != 1) {
                    /* WARNING: Subroutine does not return */
    __Unwind_Resume(param_1);
  }
  _objc_begin_catch(param_1);
  _objc_end_catch();
  if (*(long *)PTR____stack_chk_guard_000e8260 != *(long *)(unaff_x29 + -0x60)) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}

