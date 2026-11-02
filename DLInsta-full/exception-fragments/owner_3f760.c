
/* FRAGMENT entry=0x3fcfc owner=0x3f760; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UndefinedFunction_0003fcfc(_Unwind_Exception *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  ID IVar3;
  ID IVar4;
  undefined8 uVar5;
  long lVar6;
  ID IVar7;
  ulong uVar8;
  byte *pbVar9;
  ulong unaff_x19;
  bool bVar10;
  ID *pIVar11;
  long *plVar12;
  ID unaff_x21;
  undefined8 *puVar13;
  ID unaff_x23;
  char *op;
  long unaff_x29;
  undefined8 uStack0000000000000008;
  _Unwind_Exception *p_Stack0000000000000010;
  char *in_stack_00000018;
  char *in_stack_00000020;
  ID in_stack_00000028;
  long in_stack_00000030;
  char *in_stack_00000038;
  long in_stack_00000040;
  char *in_stack_00000048;
  ID in_stack_00000050;
  SEL in_stack_00000060;
  char *in_stack_00000068;
  char *in_stack_00000070;
  char *in_stack_00000078;
  ID in_stack_00000080;
  ID in_stack_00000088;
  long in_stack_00000090;
  char *in_stack_00000098;
  char *in_stack_000000a0;
  char *in_stack_000000a8;
  char *in_stack_000000b0;
  char *in_stack_000000b8;
  char *in_stack_000000c0;
  char *in_stack_000000c8;
  char *in_stack_000000d0;
  char *in_stack_000000d8;
  char *in_stack_000000e0;
  char *in_stack_000000e8;
  undefined8 uStack00000000000000f0;
  long in_stack_000000f8;
  long *in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined1 uStack0000000000000130;
  long in_stack_00000138;
  long *in_stack_00000140;
  undefined1 uStack0000000000000170;
  
  uStack0000000000000008 = param_2;
  p_Stack0000000000000010 = param_1;
  if ((int)param_2 != 1) {
    if ((int)param_2 != 1) {
                    /* WARNING: Subroutine does not return */
      __Unwind_Resume(param_1);
    }
    _objc_begin_catch(param_1);
    _objc_end_catch();
LAB_0003feb0:
    if (*(long *)PTR____stack_chk_guard_000e8260 != *(long *)(unaff_x29 + -0x60)) {
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail(0);
    }
    return;
  }
  _objc_begin_catch(param_1);
  _objc_end_catch();
LAB_0003fc78:
  bVar10 = true;
  IVar4 = in_stack_00000088;
  op = in_stack_000000e0;
  lVar6 = in_stack_00000090;
LAB_0003fc90:
  do {
    unaff_x21 = unaff_x21 + 1;
    if (unaff_x21 == unaff_x23) {
      unaff_x23 = _objc_msgSend(IVar4,in_stack_00000060,&uStack00000000000000f0,
                                &uStack0000000000000170,0x10);
      if (unaff_x23 == 0) {
        IVar7 = in_stack_00000028;
        if (bVar10) {
          IVar4 = NSNotificationCenter::defaultCenter
                            ((ID)&_OBJC_CLASS___NSNotificationCenter,in_stack_00000020);
          NSNotificationCenter::postNotificationName_object_
                    (IVar4,in_stack_00000018,&cf_reloadData_bubble,0);
          uVar5 = _object_getClass();
          lVar6 = _class_getInstanceVariable(uVar5,"_removeMessages_messageKeys");
          if (lVar6 == 0) {
            puVar13 = (undefined8 *)0x0;
          }
          else {
            lVar6 = _ivar_getOffset();
            puVar13 = (undefined8 *)(in_stack_00000030 + lVar6);
          }
          *puVar13 = 0;
        }
        do {
          do {
            do {
              in_stack_00000050 = in_stack_00000050 + 1;
              if (in_stack_00000050 == IVar7) {
                IVar7 = _objc_msgSend(in_stack_00000080,in_stack_00000060,&uStack0000000000000130,
                                      unaff_x29 + -0x100,0x10);
                if (IVar7 == 0) {
                  DAT_000ffc90 = 0;
                  goto LAB_0003feb0;
                }
                in_stack_00000050 = 0;
                in_stack_00000048 = "_messageUpdate";
                in_stack_00000038 = "_removeMessages_messageKeys";
                in_stack_00000018 = "postNotificationName:object:";
                in_stack_00000020 = "defaultCenter";
                in_stack_00000028 = IVar7;
              }
              if (*in_stack_00000140 != in_stack_00000040) {
                _objc_enumerationMutation(in_stack_00000080);
              }
              lVar6 = *(long *)(in_stack_00000138 + in_stack_00000050 * 8);
              iVar1 = FUN_0008ce2c(lVar6,in_stack_00000048);
            } while (iVar1 == 0);
            uVar5 = _object_getClass();
            lVar2 = _class_getInstanceVariable(uVar5,"_messageUpdate");
            if (lVar2 == 0) {
              plVar12 = (long *)0x0;
            }
            else {
              lVar2 = _ivar_getOffset();
              plVar12 = (long *)(lVar6 + lVar2);
            }
            in_stack_00000030 = *plVar12;
            iVar1 = FUN_0008ce2c(in_stack_00000030,in_stack_00000038);
          } while (iVar1 == 0);
          uVar5 = _object_getClass();
          lVar6 = _class_getInstanceVariable(uVar5,"_removeMessages_messageKeys");
          if (lVar6 == 0) {
            pIVar11 = (ID *)0x0;
          }
          else {
            lVar6 = _ivar_getOffset();
            pIVar11 = (ID *)(in_stack_00000030 + lVar6);
          }
          IVar4 = *pIVar11;
          in_stack_000000f8 = 0;
          uStack00000000000000f0 = 0;
          in_stack_00000108 = 0;
          in_stack_00000100 = (long *)0x0;
          in_stack_00000118 = 0;
          in_stack_00000110 = 0;
          in_stack_00000128 = 0;
          in_stack_00000120 = 0;
          unaff_x23 = _objc_msgSend(IVar4,in_stack_00000060,&uStack00000000000000f0,
                                    &uStack0000000000000170,0x10);
          IVar7 = in_stack_00000028;
        } while (unaff_x23 == 0);
        bVar10 = false;
        lVar6 = *in_stack_00000100;
        in_stack_00000088 = IVar4;
        in_stack_00000090 = lVar6;
      }
      unaff_x21 = 0;
      op = "isMemberOfClass:";
      in_stack_000000e8 = "_messageServerId";
      in_stack_000000d0 = "stringWithCString:encoding:";
      in_stack_000000d8 = "objectAtIndex:";
      in_stack_000000c0 = "defaultManager";
      in_stack_000000c8 = "stringByAppendingPathComponent:";
      in_stack_00000070 = "init";
      in_stack_00000078 = "valueForKey:";
      in_stack_00000068 = "initWithContentsOfFile:";
      in_stack_000000b0 = "date";
      in_stack_000000b8 = "fileExistsAtPath:";
      in_stack_000000a0 = "addObject:";
      in_stack_000000a8 = "dictionaryWithObjects:forKeys:count:";
      in_stack_00000098 = "writeToFile:atomically:";
      in_stack_000000e0 = "isMemberOfClass:";
    }
    if (*in_stack_00000100 != lVar6) {
      _objc_enumerationMutation(IVar4);
    }
  } while ((DAT_000ffc90 & 1) != 0);
  IVar7 = *(ID *)(in_stack_000000f8 + unaff_x21 * 8);
  if (DAT_000ffec8 == 0) {
    DAT_000ffec8 = _objc_getClass("NSString");
  }
  uVar5 = _objc_retainAutorelease();
  IVar3 = _objc_msgSend(IVar7,op,uVar5);
  if ((int)IVar3 == 0) {
    iVar1 = FUN_0008ce2c(IVar7,in_stack_000000e8);
    if (iVar1 != 0) {
      IVar7 = _objc_msgSend(IVar7,in_stack_00000078,&cf__messageServerId);
      goto joined_r0x0003fa68;
    }
  }
  else {
joined_r0x0003fa68:
    if (IVar7 != 0) goto LAB_0003fa6c;
  }
  bVar10 = true;
  goto LAB_0003fc90;
LAB_0003fa6c:
  IVar4 = _NSSearchPathForDirectoriesInDomains(9,1,1);
  IVar4 = _objc_msgSend(IVar4,in_stack_000000d8,0);
  if (((DAT_000ffea0 & 1) == 0) && (iVar1 = ___cxa_guard_acquire(&DAT_000ffea0), iVar1 != 0)) {
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
      *pbVar9 = *pbVar9 ^ (byte)(unaff_x19 >> (uVar8 & 0x38));
      uVar8 = uVar8 + 8;
      pbVar9 = pbVar9 + 1;
    } while (uVar8 != 0x90);
    DAT_000ffe9a = '\0';
  }
  IVar3 = NSString::stringWithCString_encoding_
                    ((ID)&_OBJC_CLASS___NSString,in_stack_000000d0,&DAT_000ffe88,4);
  IVar4 = _objc_msgSend(IVar4,in_stack_000000c8,IVar3);
  IVar3 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,in_stack_000000c0);
  IVar3 = NSFileManager::fileExistsAtPath_(IVar3,in_stack_000000b8,IVar4);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
    IVar3 = NSMutableArray::init(IVar3,in_stack_00000070);
  }
  else {
    IVar3 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
    IVar3 = NSMutableArray::initWithContentsOfFile_(IVar3,in_stack_00000068,IVar4);
  }
  *(cfstringStruct **)(unaff_x29 + -0x80) = &cf_id;
  *(cfstringStruct **)(unaff_x29 + -0x78) = &cf_date;
  *(ID *)(unaff_x29 + -0x70) = IVar7;
  IVar7 = NSDate::date((ID)&_OBJC_CLASS___NSDate,in_stack_000000b0);
  *(ID *)(unaff_x29 + -0x68) = IVar7;
  IVar7 = NSDictionary::dictionaryWithObjects_forKeys_count_
                    ((ID)&_OBJC_CLASS___NSDictionary,in_stack_000000a8,unaff_x29 + -0x70,
                     unaff_x29 + -0x80,2);
  NSMutableArray::addObject_(IVar3,in_stack_000000a0,IVar7);
  NSMutableArray::writeToFile_atomically_(IVar3,in_stack_00000098,IVar4,1);
  goto LAB_0003fc78;
}


/* FRAGMENT entry=0x3ff0c owner=0x3f760; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void UndefinedFunction_0003ff0c(_Unwind_Exception *param_1,int param_2)

{
  long unaff_x29;
  
  if (param_2 != 1) {
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

