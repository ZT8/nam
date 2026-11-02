
/* FRAGMENT entry=0x464bc owner=0x45ec4; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 UndefinedFunction_000464bc(_Unwind_Exception *param_1,undefined8 param_2)

{
  int iVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  undefined8 uVar5;
  long lVar6;
  code *pcVar7;
  undefined8 uVar8;
  ulong uVar9;
  byte *pbVar10;
  undefined8 *puVar11;
  ID unaff_x24;
  ID unaff_x26;
  ulong unaff_x28;
  long unaff_x29;
  _Unwind_Exception *p_Stack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  long in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  SEL in_stack_00000048;
  ID in_stack_00000050;
  undefined8 in_stack_00000058;
  char *in_stack_00000060;
  char *in_stack_00000068;
  char *in_stack_00000070;
  long in_stack_00000078;
  SEL in_stack_00000080;
  ID in_stack_00000088;
  char *in_stack_00000090;
  char *in_stack_00000098;
  char *in_stack_000000a0;
  char *in_stack_000000a8;
  char *in_stack_000000b0;
  char *in_stack_000000b8;
  char *in_stack_000000c0;
  char *in_stack_000000c8;
  char *in_stack_000000d0;
  char *in_stack_000000d8;
  undefined1 uStack00000000000000e0;
  long in_stack_000000e8;
  long *in_stack_000000f0;
  
  p_Stack0000000000000008 = param_1;
  uStack0000000000000010 = param_2;
  if ((int)param_2 == 1) {
    _objc_begin_catch(param_1);
    _objc_end_catch();
LAB_00046450:
    do {
      unaff_x26 = unaff_x26 + 1;
      if (unaff_x26 == unaff_x24) {
        unaff_x24 = _objc_msgSend(in_stack_00000088,in_stack_00000048,&uStack00000000000000e0,
                                  unaff_x29 + -0x100,0x10);
        if (unaff_x24 == 0) goto code_r0x00046568;
        unaff_x26 = 0;
        in_stack_000000d0 = "objectAtIndex:";
        in_stack_000000d8 = "_messageServerId";
        in_stack_000000c0 = "stringByAppendingPathComponent:";
        in_stack_000000c8 = "stringWithCString:encoding:";
        in_stack_000000b0 = "fileExistsAtPath:";
        in_stack_000000b8 = "defaultManager";
        in_stack_00000068 = "init";
        in_stack_00000070 = "valueForKey:";
        in_stack_00000060 = "initWithContentsOfFile:";
        in_stack_000000a0 = "dictionaryWithObjects:forKeys:count:";
        in_stack_000000a8 = "date";
        in_stack_00000090 = "writeToFile:atomically:";
        in_stack_00000098 = "addObject:";
      }
      if (*in_stack_000000f0 != in_stack_00000078) {
        _objc_enumerationMutation(in_stack_00000088);
      }
      if ((DAT_000ffc90 & 1) == 0) {
        IVar4 = *(ID *)(in_stack_000000e8 + unaff_x26 * 8);
        if (DAT_000ffec8 == 0) {
          DAT_000ffec8 = _objc_getClass("NSString");
        }
        uVar5 = _objc_retainAutorelease();
        IVar2 = _objc_msgSend(IVar4,in_stack_00000080,uVar5);
        if ((int)IVar2 == 0) {
          iVar1 = FUN_0008ce2c(IVar4,in_stack_000000d8);
          if (iVar1 == 0) goto LAB_00046450;
          IVar4 = _objc_msgSend(IVar4,in_stack_00000070,&cf__messageServerId);
        }
        if (IVar4 != 0) {
          IVar2 = _NSSearchPathForDirectoriesInDomains(9,1,1);
          IVar2 = _objc_msgSend(IVar2,in_stack_000000d0,0);
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
            uVar9 = 0;
            pbVar10 = &DAT_000ffe88;
            do {
              *pbVar10 = *pbVar10 ^ (byte)(unaff_x28 >> (uVar9 & 0x38));
              uVar9 = uVar9 + 8;
              pbVar10 = pbVar10 + 1;
            } while (uVar9 != 0x90);
            DAT_000ffe9a = '\0';
          }
          IVar3 = NSString::stringWithCString_encoding_
                            ((ID)&_OBJC_CLASS___NSString,in_stack_000000c8,&DAT_000ffe88,4);
          IVar2 = _objc_msgSend(IVar2,in_stack_000000c0,IVar3);
          IVar3 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,in_stack_000000b8);
          IVar3 = NSFileManager::fileExistsAtPath_(IVar3,in_stack_000000b0,IVar2);
          if ((int)IVar3 == 0) {
            IVar3 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
            IVar3 = NSMutableArray::init(IVar3,in_stack_00000068);
          }
          else {
            IVar3 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
            IVar3 = NSMutableArray::initWithContentsOfFile_(IVar3,in_stack_00000060,IVar2);
          }
          *(cfstringStruct **)(unaff_x29 + -0x80) = &cf_id;
          *(cfstringStruct **)(unaff_x29 + -0x78) = &cf_date;
          *(ID *)(unaff_x29 + -0x70) = IVar4;
          IVar4 = NSDate::date((ID)&_OBJC_CLASS___NSDate,in_stack_000000a8);
          *(ID *)(unaff_x29 + -0x68) = IVar4;
          IVar4 = NSDictionary::dictionaryWithObjects_forKeys_count_
                            ((ID)&_OBJC_CLASS___NSDictionary,in_stack_000000a0,unaff_x29 + -0x70,
                             unaff_x29 + -0x80,2);
          NSMutableArray::addObject_(IVar3,in_stack_00000098,IVar4);
          NSMutableArray::writeToFile_atomically_(IVar3,in_stack_00000090,IVar2,1);
        }
      }
    } while( true );
  }
  if ((int)param_2 != 1) {
                    /* WARNING: Subroutine does not return */
    __Unwind_Resume(param_1);
  }
  IVar4 = _objc_begin_catch(param_1);
  IVar4 = _objc_msgSend(IVar4,"reason");
  _objc_msgSend(in_stack_00000050,"class");
  uVar5 = _NSStringFromClass();
  uVar8 = _NSStringFromSelector(in_stack_00000058);
  uVar5 = FUN_0008cde8(uVar5,uVar8,0x206);
  FUN_0008cb50(IVar4,uVar5);
  _objc_end_catch(0);
  pcVar7 = DAT_000ffd38;
  if (DAT_000ffd38 == (code *)0x0) {
    pcVar7 = (code *)_class_getMethodImplementation
                               (DAT_000ffd30,
                                "match:insertMessages:removeMessages:replaceMessages:mutateMessage:"
                               );
  }
  uVar5 = (*pcVar7)(in_stack_00000050,in_stack_00000058,in_stack_00000020,in_stack_00000018,
                    in_stack_00000040,in_stack_00000038,in_stack_00000030);
LAB_00046654:
  if (*(long *)PTR____stack_chk_guard_000e8260 != *(long *)(unaff_x29 + -0x60)) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return uVar5;
code_r0x00046568:
  if (true) {
    IVar4 = NSNotificationCenter::defaultCenter
                      ((ID)&_OBJC_CLASS___NSNotificationCenter,"defaultCenter");
    NSNotificationCenter::postNotificationName_object_
              (IVar4,"postNotificationName:object:",&cf_reloadData_bubble,0);
    uVar5 = _object_getClass();
    lVar6 = _class_getInstanceVariable(uVar5,"_removeMessages_messageKeys");
    if (lVar6 == 0) {
      puVar11 = (undefined8 *)0x0;
    }
    else {
      lVar6 = _ivar_getOffset();
      puVar11 = (undefined8 *)(in_stack_00000028 + lVar6);
    }
    *puVar11 = 0;
    pcVar7 = DAT_000ffd38;
    if (DAT_000ffd38 == (code *)0x0) {
      pcVar7 = (code *)_class_getMethodImplementation
                                 (DAT_000ffd30,
                                  "match:insertMessages:removeMessages:replaceMessages:mutateMessage:"
                                 );
    }
    uVar5 = (*pcVar7)(in_stack_00000050,in_stack_00000058,in_stack_00000028,in_stack_00000018,
                      in_stack_00000040,in_stack_00000038,in_stack_00000030);
  }
  else {
    DAT_000ffc90 = 0;
    pcVar7 = DAT_000ffd38;
    if (DAT_000ffd38 == (code *)0x0) {
      pcVar7 = (code *)_class_getMethodImplementation
                                 (DAT_000ffd30,
                                  "match:insertMessages:removeMessages:replaceMessages:mutateMessage:"
                                 );
    }
    uVar5 = (*pcVar7)(in_stack_00000050,in_stack_00000058,in_stack_00000020,in_stack_00000018,
                      in_stack_00000040,in_stack_00000038,in_stack_00000030);
  }
  goto LAB_00046654;
}


/* FRAGMENT entry=0x46744 owner=0x45ec4; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

undefined8 UndefinedFunction_00046744(_Unwind_Exception *param_1,undefined8 param_2)

{
  ID IVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  long unaff_x29;
  _Unwind_Exception *p_Stack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  ID in_stack_00000050;
  undefined8 in_stack_00000058;
  
  p_Stack0000000000000008 = param_1;
  uStack0000000000000010 = param_2;
  if ((int)param_2 != 1) {
                    /* WARNING: Subroutine does not return */
    __Unwind_Resume(param_1);
  }
  IVar1 = _objc_begin_catch(param_1);
  IVar1 = _objc_msgSend(IVar1,"reason");
  _objc_msgSend(in_stack_00000050,"class");
  uVar2 = _NSStringFromClass();
  uVar3 = _NSStringFromSelector(in_stack_00000058);
  uVar2 = FUN_0008cde8(uVar2,uVar3,0x206);
  FUN_0008cb50(IVar1,uVar2);
  _objc_end_catch(0);
  pcVar4 = DAT_000ffd38;
  if (DAT_000ffd38 == (code *)0x0) {
    pcVar4 = (code *)_class_getMethodImplementation
                               (DAT_000ffd30,
                                "match:insertMessages:removeMessages:replaceMessages:mutateMessage:"
                               );
  }
  uVar2 = (*pcVar4)(in_stack_00000050,in_stack_00000058,in_stack_00000020,in_stack_00000018,
                    in_stack_00000040,in_stack_00000038,in_stack_00000030);
  if (*(long *)PTR____stack_chk_guard_000e8260 != *(long *)(unaff_x29 + -0x60)) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return uVar2;
}


/* FRAGMENT entry=0x46928 owner=0x45ec4; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void UndefinedFunction_00046928(_Unwind_Exception *param_1)

{
  _Unwind_Exception *p_Stack0000000000000008;
  
  p_Stack0000000000000008 = param_1;
  _objc_end_catch(0);
                    /* WARNING: Subroutine does not return */
  __Unwind_Resume(p_Stack0000000000000008);
}

