
/* FRAGMENT entry=0x45b14 owner=0x455f8; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 UndefinedFunction_00045b14(_Unwind_Exception *param_1,undefined8 param_2)

{
  int iVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  byte *pbVar9;
  ulong unaff_x21;
  ID unaff_x23;
  ID unaff_x25;
  char *op;
  long unaff_x29;
  undefined8 uStack0000000000000008;
  _Unwind_Exception *p_Stack0000000000000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  ID in_stack_00000028;
  undefined8 in_stack_00000030;
  SEL in_stack_00000038;
  char *in_stack_00000040;
  char *in_stack_00000048;
  char *in_stack_00000050;
  ID in_stack_00000058;
  long in_stack_00000060;
  char *in_stack_00000068;
  char *in_stack_00000070;
  char *in_stack_00000078;
  char *in_stack_00000080;
  char *in_stack_00000088;
  char *in_stack_00000090;
  char *in_stack_00000098;
  char *in_stack_000000a0;
  char *in_stack_000000a8;
  char *in_stack_000000b0;
  char *in_stack_000000b8;
  undefined1 uStack00000000000000c0;
  long in_stack_000000c8;
  long *in_stack_000000d0;
  undefined1 uStack0000000000000100;
  
  uStack0000000000000008 = param_2;
  p_Stack0000000000000010 = param_1;
  if ((int)param_2 == 1) {
    _objc_begin_catch(param_1);
    _objc_end_catch();
    op = in_stack_000000a8;
LAB_00045aa8:
    do {
      unaff_x23 = unaff_x23 + 1;
      if (unaff_x23 == unaff_x25) {
        unaff_x25 = _objc_msgSend(in_stack_00000058,in_stack_00000038,&uStack00000000000000c0,
                                  &uStack0000000000000100,0x10);
        if (unaff_x25 == 0) goto code_r0x00045bd4;
        unaff_x23 = 0;
        op = "isMemberOfClass:";
        in_stack_000000b0 = "objectAtIndex:";
        in_stack_000000b8 = "_messageServerId";
        in_stack_00000098 = "stringByAppendingPathComponent:";
        in_stack_000000a0 = "stringWithCString:encoding:";
        in_stack_00000088 = "fileExistsAtPath:";
        in_stack_00000090 = "defaultManager";
        in_stack_00000048 = "init";
        in_stack_00000050 = "valueForKey:";
        in_stack_00000040 = "initWithContentsOfFile:";
        in_stack_00000078 = "dictionaryWithObjects:forKeys:count:";
        in_stack_00000080 = "date";
        in_stack_00000068 = "writeToFile:atomically:";
        in_stack_00000070 = "addObject:";
        in_stack_000000a8 = "isMemberOfClass:";
      }
      if (*in_stack_000000d0 != in_stack_00000060) {
        _objc_enumerationMutation(in_stack_00000058);
      }
      if ((DAT_000ffc90 & 1) == 0) {
        IVar4 = *(ID *)(in_stack_000000c8 + unaff_x23 * 8);
        if (DAT_000ffec8 == 0) {
          DAT_000ffec8 = _objc_getClass("NSString");
        }
        uVar6 = _objc_retainAutorelease();
        IVar2 = _objc_msgSend(IVar4,op,uVar6);
        if ((int)IVar2 == 0) {
          iVar1 = FUN_0008ce2c(IVar4,in_stack_000000b8);
          if (iVar1 == 0) goto LAB_00045aa8;
          IVar4 = _objc_msgSend(IVar4,in_stack_00000050,&cf__messageServerId);
        }
        if (IVar4 != 0) {
          IVar2 = _NSSearchPathForDirectoriesInDomains(9,1,1);
          IVar2 = _objc_msgSend(IVar2,in_stack_000000b0,0);
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
            uVar8 = 0;
            pbVar9 = &DAT_000ffe88;
            do {
              *pbVar9 = *pbVar9 ^ (byte)(unaff_x21 >> (uVar8 & 0x38));
              uVar8 = uVar8 + 8;
              pbVar9 = pbVar9 + 1;
            } while (uVar8 != 0x90);
            DAT_000ffe9a = '\0';
          }
          IVar3 = NSString::stringWithCString_encoding_
                            ((ID)&_OBJC_CLASS___NSString,in_stack_000000a0,&DAT_000ffe88,4);
          IVar2 = _objc_msgSend(IVar2,in_stack_00000098,IVar3);
          IVar3 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,in_stack_00000090);
          IVar3 = NSFileManager::fileExistsAtPath_(IVar3,in_stack_00000088,IVar2);
          if ((int)IVar3 == 0) {
            IVar3 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
            IVar3 = NSMutableArray::init(IVar3,in_stack_00000048);
          }
          else {
            IVar3 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
            IVar3 = NSMutableArray::initWithContentsOfFile_(IVar3,in_stack_00000040,IVar2);
          }
          *(cfstringStruct **)(unaff_x29 + -0x80) = &cf_id;
          *(cfstringStruct **)(unaff_x29 + -0x78) = &cf_date;
          *(ID *)(unaff_x29 + -0x70) = IVar4;
          IVar4 = NSDate::date((ID)&_OBJC_CLASS___NSDate,in_stack_00000080);
          *(ID *)(unaff_x29 + -0x68) = IVar4;
          IVar4 = NSDictionary::dictionaryWithObjects_forKeys_count_
                            ((ID)&_OBJC_CLASS___NSDictionary,in_stack_00000078,unaff_x29 + -0x70,
                             unaff_x29 + -0x80,2);
          NSMutableArray::addObject_(IVar3,in_stack_00000070,IVar4);
          NSMutableArray::writeToFile_atomically_(IVar3,in_stack_00000068,IVar2,1);
          op = in_stack_000000a8;
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
  _objc_msgSend(in_stack_00000028,"class");
  uVar6 = _NSStringFromClass();
  uVar7 = _NSStringFromSelector(in_stack_00000030);
  uVar6 = FUN_0008cde8(uVar6,uVar7,0x1d8);
  FUN_0008cb50(IVar4,uVar6);
  _objc_end_catch(0);
code_r0x00045c7c:
  pcVar5 = DAT_000ffd28;
  if (DAT_000ffd28 == (code *)0x0) {
    pcVar5 = (code *)_class_getMethodImplementation
                               (DAT_000ffd10,"removeMessagesWithMessageKeys:reason:");
  }
  uVar6 = (*pcVar5)(in_stack_00000028,in_stack_00000030,in_stack_00000020,in_stack_00000018);
LAB_00045cb0:
  if (*(long *)PTR____stack_chk_guard_000e8260 != *(long *)(unaff_x29 + -0x60)) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return uVar6;
code_r0x00045bd4:
  if (true) {
    IVar4 = NSNotificationCenter::defaultCenter
                      ((ID)&_OBJC_CLASS___NSNotificationCenter,"defaultCenter");
    NSNotificationCenter::postNotificationName_object_
              (IVar4,"postNotificationName:object:",&cf_reloadData_bubble,0);
    pcVar5 = DAT_000ffd28;
    if (DAT_000ffd28 == (code *)0x0) {
      pcVar5 = (code *)_class_getMethodImplementation
                                 (DAT_000ffd10,"removeMessagesWithMessageKeys:reason:");
    }
    uVar6 = (*pcVar5)(in_stack_00000028,in_stack_00000030,0,in_stack_00000018);
    goto LAB_00045cb0;
  }
  DAT_000ffc90 = 0;
  goto code_r0x00045c7c;
}


/* FRAGMENT entry=0x45d18 owner=0x455f8; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

undefined8 UndefinedFunction_00045d18(_Unwind_Exception *param_1,int param_2)

{
  code *pcVar1;
  ID IVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x29;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  ID in_stack_00000028;
  undefined8 in_stack_00000030;
  
  if (param_2 != 1) {
                    /* WARNING: Subroutine does not return */
    __Unwind_Resume(param_1);
  }
  IVar2 = _objc_begin_catch(param_1);
  IVar2 = _objc_msgSend(IVar2,"reason");
  _objc_msgSend(in_stack_00000028,"class");
  uVar3 = _NSStringFromClass();
  uVar4 = _NSStringFromSelector(in_stack_00000030);
  uVar3 = FUN_0008cde8(uVar3,uVar4,0x1d8);
  FUN_0008cb50(IVar2,uVar3);
  _objc_end_catch(0);
  pcVar1 = DAT_000ffd28;
  if (DAT_000ffd28 == (code *)0x0) {
    pcVar1 = (code *)_class_getMethodImplementation
                               (DAT_000ffd10,"removeMessagesWithMessageKeys:reason:");
  }
  uVar3 = (*pcVar1)(in_stack_00000028,in_stack_00000030,in_stack_00000020,in_stack_00000018);
  if (*(long *)PTR____stack_chk_guard_000e8260 != *(long *)(unaff_x29 + -0x60)) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return uVar3;
}


/* FRAGMENT entry=0x45d94 owner=0x455f8; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

undefined8 UndefinedFunction_00045d94(_Unwind_Exception *param_1,int param_2)

{
  code *pcVar1;
  ID IVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long unaff_x29;
  ID in_stack_00000028;
  undefined8 in_stack_00000030;
  
  if (param_2 != 1) {
                    /* WARNING: Subroutine does not return */
    __Unwind_Resume(param_1);
  }
  IVar2 = _objc_begin_catch(param_1);
  IVar2 = _objc_msgSend(IVar2,"reason");
  _objc_msgSend(in_stack_00000028,"class");
  uVar3 = _NSStringFromClass();
  uVar4 = _NSStringFromSelector(in_stack_00000030);
  uVar3 = FUN_0008cde8(uVar3,uVar4,0x1d8);
  FUN_0008cb50(IVar2,uVar3);
  _objc_end_catch(0);
  pcVar1 = DAT_000ffd28;
  if (DAT_000ffd28 == (code *)0x0) {
    pcVar1 = (code *)_class_getMethodImplementation
                               (DAT_000ffd10,"removeMessagesWithMessageKeys:reason:");
  }
  uVar3 = (*pcVar1)(in_stack_00000028,in_stack_00000030,unaff_x20,unaff_x21);
  if (*(long *)PTR____stack_chk_guard_000e8260 != *(long *)(unaff_x29 + -0x60)) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return uVar3;
}


/* FRAGMENT entry=0x45e78 owner=0x455f8; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void UndefinedFunction_00045e78(_Unwind_Exception *param_1)

{
  _objc_end_catch(0);
                    /* WARNING: Subroutine does not return */
  __Unwind_Resume(param_1);
}


/* FRAGMENT entry=0x45e88 owner=0x455f8; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void UndefinedFunction_00045e88(_Unwind_Exception *param_1)

{
  _objc_end_catch(0);
                    /* WARNING: Subroutine does not return */
  __Unwind_Resume(param_1);
}


/* FRAGMENT entry=0x45e98 owner=0x455f8; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void UndefinedFunction_00045e98(_Unwind_Exception *param_1)

{
  _objc_end_catch(0);
                    /* WARNING: Subroutine does not return */
  __Unwind_Resume(param_1);
}


/* FRAGMENT entry=0x45ea8 owner=0x455f8; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void UndefinedFunction_00045ea8(_Unwind_Exception *param_1)

{
  _objc_end_catch();
                    /* WARNING: Subroutine does not return */
  __Unwind_Resume(param_1);
}


/* FRAGMENT entry=0x45eb0 owner=0x455f8; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void UndefinedFunction_00045eb0(_Unwind_Exception *param_1)

{
  _objc_end_catch(0);
                    /* WARNING: Subroutine does not return */
  __Unwind_Resume(param_1);
}

