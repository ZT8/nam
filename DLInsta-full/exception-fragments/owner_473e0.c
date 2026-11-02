
/* FRAGMENT entry=0x47a74 owner=0x473e0; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UndefinedFunction_00047a74(_Unwind_Exception *param_1,int param_2)

{
  int iVar1;
  long lVar2;
  ID IVar3;
  ID IVar4;
  undefined8 uVar5;
  long lVar6;
  ID IVar7;
  code *pcVar8;
  ulong uVar9;
  byte *pbVar10;
  bool bVar11;
  ID *pIVar12;
  long *plVar13;
  undefined8 *puVar14;
  ulong unaff_x24;
  ID unaff_x26;
  char *pcVar15;
  ID unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  char *in_stack_00000038;
  char *in_stack_00000040;
  long in_stack_00000048;
  ID in_stack_00000050;
  long in_stack_00000058;
  char *in_stack_00000060;
  ID in_stack_00000068;
  char *in_stack_00000070;
  SEL in_stack_00000080;
  char *in_stack_00000088;
  char *in_stack_00000090;
  char *in_stack_00000098;
  ID in_stack_000000a0;
  ID in_stack_000000a8;
  char *in_stack_000000b0;
  char *in_stack_000000b8;
  char *in_stack_000000c0;
  char *in_stack_000000c8;
  char *in_stack_000000d0;
  char *in_stack_000000d8;
  char *in_stack_000000e0;
  char *in_stack_000000e8;
  char *in_stack_000000f0;
  char *in_stack_000000f8;
  char *in_stack_00000100;
  long in_stack_00000108;
  undefined8 uStack0000000000000110;
  long in_stack_00000118;
  long *in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined1 uStack0000000000000150;
  long in_stack_00000158;
  long *in_stack_00000160;
  undefined1 uStack0000000000000190;
  
  if (param_2 != 1) {
    if (param_2 != 1) {
                    /* WARNING: Subroutine does not return */
      __Unwind_Resume(param_1);
    }
    _objc_begin_catch(param_1);
    _objc_end_catch();
LAB_00047c48:
    pcVar8 = DAT_000ffd50;
    if (DAT_000ffd50 == (code *)0x0) {
      pcVar8 = (code *)_class_getMethodImplementation
                                 (DAT_000ffd40,"_applyThreadUpdates:toThreadWithId:mutationId:");
    }
    (*pcVar8)(in_stack_00000010,in_stack_00000018,in_stack_00000030,in_stack_00000028,
              in_stack_00000020);
    if (*(long *)PTR____stack_chk_guard_000e8260 != *(long *)(unaff_x29 + -0x60)) {
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail(0);
    }
    return;
  }
  _objc_begin_catch(param_1);
  _objc_end_catch();
LAB_000479ec:
  bVar11 = true;
  IVar4 = in_stack_000000a8;
LAB_00047a08:
  do {
    unaff_x26 = unaff_x26 + 1;
    if (unaff_x26 == unaff_x28) {
      unaff_x28 = _objc_msgSend(IVar4,in_stack_00000080,&uStack0000000000000110,
                                &uStack0000000000000190,0x10);
      if (unaff_x28 == 0) {
        IVar7 = in_stack_00000050;
        pcVar15 = in_stack_00000060;
        if (bVar11) {
          IVar4 = NSNotificationCenter::defaultCenter
                            ((ID)&_OBJC_CLASS___NSNotificationCenter,in_stack_00000040);
          NSNotificationCenter::postNotificationName_object_
                    (IVar4,in_stack_00000038,&cf_reloadData_bubble,0);
          uVar5 = _object_getClass();
          lVar6 = _class_getInstanceVariable(uVar5,"_removeMessages_messageKeys");
          if (lVar6 == 0) {
            puVar14 = (undefined8 *)0x0;
          }
          else {
            lVar6 = _ivar_getOffset();
            puVar14 = (undefined8 *)(in_stack_00000058 + lVar6);
          }
          *puVar14 = 0;
        }
        do {
          do {
            do {
              in_stack_00000068 = in_stack_00000068 + 1;
              if (in_stack_00000068 == IVar7) {
                IVar7 = _objc_msgSend(in_stack_000000a0,in_stack_00000080,&uStack0000000000000150,
                                      unaff_x29 + -0x100,0x10);
                if (IVar7 == 0) {
                  DAT_000ffc90 = 0;
                  goto LAB_00047c48;
                }
                in_stack_00000068 = 0;
                pcVar15 = "_messageUpdate";
                in_stack_00000070 = "_removeMessages_messageKeys";
                in_stack_00000038 = "postNotificationName:object:";
                in_stack_00000040 = "defaultCenter";
                in_stack_00000060 = "_messageUpdate";
                in_stack_00000050 = IVar7;
              }
              if (*in_stack_00000160 != in_stack_00000048) {
                _objc_enumerationMutation(in_stack_000000a0);
              }
              lVar6 = *(long *)(in_stack_00000158 + in_stack_00000068 * 8);
              iVar1 = FUN_0008ce2c(lVar6,pcVar15);
            } while (iVar1 == 0);
            uVar5 = _object_getClass();
            lVar2 = _class_getInstanceVariable(uVar5,"_messageUpdate");
            if (lVar2 == 0) {
              plVar13 = (long *)0x0;
            }
            else {
              lVar2 = _ivar_getOffset();
              plVar13 = (long *)(lVar6 + lVar2);
            }
            in_stack_00000058 = *plVar13;
            iVar1 = FUN_0008ce2c(in_stack_00000058,in_stack_00000070);
          } while (iVar1 == 0);
          uVar5 = _object_getClass();
          lVar6 = _class_getInstanceVariable(uVar5,"_removeMessages_messageKeys");
          if (lVar6 == 0) {
            pIVar12 = (ID *)0x0;
          }
          else {
            lVar6 = _ivar_getOffset();
            pIVar12 = (ID *)(in_stack_00000058 + lVar6);
          }
          IVar4 = *pIVar12;
          in_stack_00000118 = 0;
          uStack0000000000000110 = 0;
          in_stack_00000128 = 0;
          in_stack_00000120 = (long *)0x0;
          in_stack_00000138 = 0;
          in_stack_00000130 = 0;
          in_stack_00000148 = 0;
          in_stack_00000140 = 0;
          unaff_x28 = _objc_msgSend(IVar4,in_stack_00000080,&uStack0000000000000110,
                                    &uStack0000000000000190,0x10);
          pcVar15 = in_stack_00000060;
        } while (unaff_x28 == 0);
        bVar11 = false;
        in_stack_00000108 = *in_stack_00000120;
        in_stack_000000a8 = IVar4;
      }
      unaff_x26 = 0;
      in_stack_000000f8 = "_messageServerId";
      in_stack_00000100 = "isMemberOfClass:";
      in_stack_000000e8 = "stringWithCString:encoding:";
      in_stack_000000f0 = "objectAtIndex:";
      in_stack_000000d8 = "defaultManager";
      in_stack_000000e0 = "stringByAppendingPathComponent:";
      in_stack_00000090 = "init";
      in_stack_00000098 = "valueForKey:";
      in_stack_00000088 = "initWithContentsOfFile:";
      in_stack_000000c8 = "date";
      in_stack_000000d0 = "fileExistsAtPath:";
      in_stack_000000b8 = "addObject:";
      in_stack_000000c0 = "dictionaryWithObjects:forKeys:count:";
      in_stack_000000b0 = "writeToFile:atomically:";
    }
    if (*in_stack_00000120 != in_stack_00000108) {
      _objc_enumerationMutation(IVar4);
    }
  } while ((DAT_000ffc90 & 1) != 0);
  IVar7 = *(ID *)(in_stack_00000118 + unaff_x26 * 8);
  if (DAT_000ffec8 == 0) {
    DAT_000ffec8 = _objc_getClass("NSString");
  }
  uVar5 = _objc_retainAutorelease();
  IVar3 = _objc_msgSend(IVar7,in_stack_00000100,uVar5);
  if ((int)IVar3 == 0) {
    iVar1 = FUN_0008ce2c(IVar7,in_stack_000000f8);
    if (iVar1 != 0) {
      IVar7 = _objc_msgSend(IVar7,in_stack_00000098,&cf__messageServerId);
      goto joined_r0x000477e4;
    }
  }
  else {
joined_r0x000477e4:
    if (IVar7 != 0) goto LAB_000477e8;
  }
  bVar11 = true;
  goto LAB_00047a08;
LAB_000477e8:
  IVar4 = _NSSearchPathForDirectoriesInDomains(9,1,1);
  IVar4 = _objc_msgSend(IVar4,in_stack_000000f0,0);
  if (((DAT_000ffea0 & 1) == 0) && (iVar1 = ___cxa_guard_acquire(&DAT_000ffea0), iVar1 != 0)) {
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
      *pbVar10 = *pbVar10 ^ (byte)(unaff_x24 >> (uVar9 & 0x38));
      uVar9 = uVar9 + 8;
      pbVar10 = pbVar10 + 1;
    } while (uVar9 != 0x90);
    DAT_000ffe9a = '\0';
  }
  IVar3 = NSString::stringWithCString_encoding_
                    ((ID)&_OBJC_CLASS___NSString,in_stack_000000e8,&DAT_000ffe88,4);
  IVar4 = _objc_msgSend(IVar4,in_stack_000000e0,IVar3);
  IVar3 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,in_stack_000000d8);
  IVar3 = NSFileManager::fileExistsAtPath_(IVar3,in_stack_000000d0,IVar4);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
    IVar3 = NSMutableArray::init(IVar3,in_stack_00000090);
  }
  else {
    IVar3 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
    IVar3 = NSMutableArray::initWithContentsOfFile_(IVar3,in_stack_00000088,IVar4);
  }
  *(cfstringStruct **)(unaff_x29 + -0x80) = &cf_id;
  *(cfstringStruct **)(unaff_x29 + -0x78) = &cf_date;
  *(ID *)(unaff_x29 + -0x70) = IVar7;
  IVar7 = NSDate::date((ID)&_OBJC_CLASS___NSDate,in_stack_000000c8);
  *(ID *)(unaff_x29 + -0x68) = IVar7;
  IVar7 = NSDictionary::dictionaryWithObjects_forKeys_count_
                    ((ID)&_OBJC_CLASS___NSDictionary,in_stack_000000c0,unaff_x29 + -0x70,
                     unaff_x29 + -0x80,2);
  NSMutableArray::addObject_(IVar3,in_stack_000000b8,IVar7);
  NSMutableArray::writeToFile_atomically_(IVar3,in_stack_000000b0,IVar4,1);
  goto LAB_000479ec;
}


/* FRAGMENT entry=0x47d08 owner=0x473e0; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void UndefinedFunction_00047d08(_Unwind_Exception *param_1,int param_2)

{
  code *pcVar1;
  long unaff_x29;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  if (param_2 != 1) {
                    /* WARNING: Subroutine does not return */
    __Unwind_Resume(param_1);
  }
  _objc_begin_catch(param_1);
  _objc_end_catch();
  pcVar1 = DAT_000ffd50;
  if (DAT_000ffd50 == (code *)0x0) {
    pcVar1 = (code *)_class_getMethodImplementation
                               (DAT_000ffd40,"_applyThreadUpdates:toThreadWithId:mutationId:");
  }
  (*pcVar1)(in_stack_00000010,in_stack_00000018,in_stack_00000030,in_stack_00000028,
            in_stack_00000020);
  if (*(long *)PTR____stack_chk_guard_000e8260 != *(long *)(unaff_x29 + -0x60)) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}

