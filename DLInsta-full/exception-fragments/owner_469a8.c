
/* FRAGMENT entry=0x4701c owner=0x469a8; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UndefinedFunction_0004701c(_Unwind_Exception *param_1,int param_2)

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
  ulong unaff_x23;
  ID unaff_x25;
  char *pcVar15;
  ID unaff_x27;
  long unaff_x29;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  char *in_stack_00000028;
  char *in_stack_00000030;
  long in_stack_00000038;
  ID in_stack_00000040;
  char *in_stack_00000048;
  long in_stack_00000050;
  ID in_stack_00000058;
  char *in_stack_00000060;
  SEL in_stack_00000070;
  char *in_stack_00000078;
  char *in_stack_00000080;
  char *in_stack_00000088;
  ID in_stack_00000090;
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
  ID in_stack_000000f0;
  long in_stack_000000f8;
  undefined8 uStack0000000000000100;
  long in_stack_00000108;
  long *in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined1 uStack0000000000000140;
  long in_stack_00000148;
  long *in_stack_00000150;
  undefined1 uStack0000000000000180;
  
  if (param_2 != 1) {
    if (param_2 != 1) {
                    /* WARNING: Subroutine does not return */
      __Unwind_Resume(param_1);
    }
    _objc_begin_catch(param_1);
    _objc_end_catch();
LAB_000471f4:
    pcVar8 = DAT_000ffd48;
    if (DAT_000ffd48 == (code *)0x0) {
      pcVar8 = (code *)_class_getMethodImplementation
                                 (DAT_000ffd40,"_applyThreadUpdates:toThreadWithId:");
    }
    (*pcVar8)(in_stack_00000008,in_stack_00000010,in_stack_00000020,in_stack_00000018);
    if (*(long *)PTR____stack_chk_guard_000e8260 != *(long *)(unaff_x29 + -0x60)) {
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail(0);
    }
    return;
  }
  _objc_begin_catch(param_1);
  _objc_end_catch();
LAB_00046f98:
  bVar11 = true;
LAB_00046fb0:
  do {
    unaff_x25 = unaff_x25 + 1;
    if (unaff_x25 == unaff_x27) {
      unaff_x27 = _objc_msgSend(in_stack_000000f0,in_stack_00000070,&uStack0000000000000100,
                                &uStack0000000000000180,0x10);
      if (unaff_x27 == 0) {
        IVar7 = in_stack_00000040;
        pcVar15 = in_stack_00000048;
        if (bVar11) {
          IVar4 = NSNotificationCenter::defaultCenter
                            ((ID)&_OBJC_CLASS___NSNotificationCenter,in_stack_00000030);
          NSNotificationCenter::postNotificationName_object_
                    (IVar4,in_stack_00000028,&cf_reloadData_bubble,0);
          uVar5 = _object_getClass();
          lVar6 = _class_getInstanceVariable(uVar5,"_removeMessages_messageKeys");
          if (lVar6 == 0) {
            puVar14 = (undefined8 *)0x0;
          }
          else {
            lVar6 = _ivar_getOffset();
            puVar14 = (undefined8 *)(in_stack_00000050 + lVar6);
          }
          *puVar14 = 0;
        }
        do {
          do {
            do {
              in_stack_00000058 = in_stack_00000058 + 1;
              if (in_stack_00000058 == IVar7) {
                IVar7 = _objc_msgSend(in_stack_00000090,in_stack_00000070,&uStack0000000000000140,
                                      unaff_x29 + -0x100,0x10);
                if (IVar7 == 0) {
                  DAT_000ffc90 = 0;
                  goto LAB_000471f4;
                }
                in_stack_00000058 = 0;
                pcVar15 = "_messageUpdate";
                in_stack_00000060 = "_removeMessages_messageKeys";
                in_stack_00000028 = "postNotificationName:object:";
                in_stack_00000030 = "defaultCenter";
                in_stack_00000048 = "_messageUpdate";
                in_stack_00000040 = IVar7;
              }
              if (*in_stack_00000150 != in_stack_00000038) {
                _objc_enumerationMutation(in_stack_00000090);
              }
              lVar6 = *(long *)(in_stack_00000148 + in_stack_00000058 * 8);
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
            in_stack_00000050 = *plVar13;
            iVar1 = FUN_0008ce2c(in_stack_00000050,in_stack_00000060);
          } while (iVar1 == 0);
          uVar5 = _object_getClass();
          lVar6 = _class_getInstanceVariable(uVar5,"_removeMessages_messageKeys");
          if (lVar6 == 0) {
            pIVar12 = (ID *)0x0;
          }
          else {
            lVar6 = _ivar_getOffset();
            pIVar12 = (ID *)(in_stack_00000050 + lVar6);
          }
          in_stack_000000f0 = *pIVar12;
          in_stack_00000108 = 0;
          uStack0000000000000100 = 0;
          in_stack_00000118 = 0;
          in_stack_00000110 = (long *)0x0;
          in_stack_00000128 = 0;
          in_stack_00000120 = 0;
          in_stack_00000138 = 0;
          in_stack_00000130 = 0;
          unaff_x27 = _objc_msgSend(in_stack_000000f0,in_stack_00000070,&uStack0000000000000100,
                                    &uStack0000000000000180,0x10);
          pcVar15 = in_stack_00000048;
        } while (unaff_x27 == 0);
        bVar11 = false;
        in_stack_000000f8 = *in_stack_00000110;
      }
      unaff_x25 = 0;
      in_stack_000000e0 = "_messageServerId";
      in_stack_000000e8 = "isMemberOfClass:";
      in_stack_000000d0 = "stringWithCString:encoding:";
      in_stack_000000d8 = "objectAtIndex:";
      in_stack_000000c0 = "defaultManager";
      in_stack_000000c8 = "stringByAppendingPathComponent:";
      in_stack_00000080 = "init";
      in_stack_00000088 = "valueForKey:";
      in_stack_00000078 = "initWithContentsOfFile:";
      in_stack_000000b0 = "date";
      in_stack_000000b8 = "fileExistsAtPath:";
      in_stack_000000a0 = "addObject:";
      in_stack_000000a8 = "dictionaryWithObjects:forKeys:count:";
      in_stack_00000098 = "writeToFile:atomically:";
    }
    if (*in_stack_00000110 != in_stack_000000f8) {
      _objc_enumerationMutation(in_stack_000000f0);
    }
  } while ((DAT_000ffc90 & 1) != 0);
  IVar7 = *(ID *)(in_stack_00000108 + unaff_x25 * 8);
  if (DAT_000ffec8 == 0) {
    DAT_000ffec8 = _objc_getClass("NSString");
  }
  uVar5 = _objc_retainAutorelease();
  IVar4 = _objc_msgSend(IVar7,in_stack_000000e8,uVar5);
  if ((int)IVar4 == 0) {
    iVar1 = FUN_0008ce2c(IVar7,in_stack_000000e0);
    if (iVar1 != 0) {
      IVar7 = _objc_msgSend(IVar7,in_stack_00000088,&cf__messageServerId);
      goto joined_r0x00046d90;
    }
  }
  else {
joined_r0x00046d90:
    if (IVar7 != 0) goto LAB_00046d94;
  }
  bVar11 = true;
  goto LAB_00046fb0;
LAB_00046d94:
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
    uVar9 = 0;
    pbVar10 = &DAT_000ffe88;
    do {
      *pbVar10 = *pbVar10 ^ (byte)(unaff_x23 >> (uVar9 & 0x38));
      uVar9 = uVar9 + 8;
      pbVar10 = pbVar10 + 1;
    } while (uVar9 != 0x90);
    DAT_000ffe9a = '\0';
  }
  IVar3 = NSString::stringWithCString_encoding_
                    ((ID)&_OBJC_CLASS___NSString,in_stack_000000d0,&DAT_000ffe88,4);
  IVar4 = _objc_msgSend(IVar4,in_stack_000000c8,IVar3);
  IVar3 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,in_stack_000000c0);
  IVar3 = NSFileManager::fileExistsAtPath_(IVar3,in_stack_000000b8,IVar4);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
    IVar3 = NSMutableArray::init(IVar3,in_stack_00000080);
  }
  else {
    IVar3 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
    IVar3 = NSMutableArray::initWithContentsOfFile_(IVar3,in_stack_00000078,IVar4);
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
  goto LAB_00046f98;
}


/* FRAGMENT entry=0x472a4 owner=0x469a8; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void UndefinedFunction_000472a4(_Unwind_Exception *param_1,int param_2)

{
  code *pcVar1;
  long unaff_x29;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  
  if (param_2 != 1) {
                    /* WARNING: Subroutine does not return */
    __Unwind_Resume(param_1);
  }
  _objc_begin_catch(param_1);
  _objc_end_catch();
  pcVar1 = DAT_000ffd48;
  if (DAT_000ffd48 == (code *)0x0) {
    pcVar1 = (code *)_class_getMethodImplementation
                               (DAT_000ffd40,"_applyThreadUpdates:toThreadWithId:");
  }
  (*pcVar1)(in_stack_00000008,in_stack_00000010,in_stack_00000020,in_stack_00000018);
  if (*(long *)PTR____stack_chk_guard_000e8260 != *(long *)(unaff_x29 + -0x60)) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}

