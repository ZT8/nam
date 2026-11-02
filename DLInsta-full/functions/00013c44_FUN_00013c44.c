/* Address: 00013c44 | Name: FUN_00013c44 | Body bytes: 1332 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_00013c44(void)

{
  undefined8 uVar1;
  long lVar2;
  void *pvVar3;
  char *pcVar4;
  long lVar5;
  ID IVar6;
  ulong uVar7;
  uint local_458;
  undefined2 local_454;
  undefined1 local_452;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_000e8260;
  uVar1 = _objc_getClass("UIViewController");
  lVar2 = _objc_allocateClassPair(uVar1,"DLDebuggingVC",0);
  DAT_000ffc80 = _class_getSuperclass();
  if (lVar2 != 0) {
    lVar5 = lVar2;
    do {
      pvVar3 = (void *)_class_copyMethodList(lVar5,&local_458);
      if (local_458 != 0) {
        uVar7 = 0;
        do {
          pcVar4 = (char *)_method_getName(*(undefined8 *)((long)pvVar3 + uVar7 * 8));
          if (pcVar4 == "viewDidLoad") {
            if (lVar5 == lVar2) {
              DAT_000ffc88 = _method_getImplementation(*(undefined8 *)((long)pvVar3 + uVar7 * 8));
              DAT_000ffc88 = _method_setImplementation
                                       (*(undefined8 *)((long)pvVar3 + uVar7 * 8),FUN_000141a8);
            }
            else {
              uVar1 = _method_getTypeEncoding();
              _class_addMethod(lVar2,"viewDidLoad",FUN_000141a8,uVar1);
            }
            _free(pvVar3);
            goto LAB_00013d58;
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < local_458);
      }
      _free(pvVar3);
      lVar5 = _class_getSuperclass(lVar5);
    } while (lVar5 != 0);
  }
LAB_00013d58:
  local_458 = 0x403a4071;
  local_454 = (ushort)local_454._1_1_ << 8;
  _class_addMethod(lVar2,"numberOfSectionsInTableView:",FUN_00014cb8,&local_458);
  local_458 = 0x403a4071;
  local_454 = 0x71;
  _class_addMethod(lVar2,"tableView:numberOfRowsInSection:",FUN_00014d18,&local_458);
  local_458 = 0x403a4040;
  local_454 = 0x71;
  _class_addMethod(lVar2,"tableView:titleForHeaderInSection:",FUN_00014e28,&local_458);
  local_458 = 0x403a4040;
  local_454 = 0x40;
  _class_addMethod(lVar2,"tableView:cellForRowAtIndexPath:",FUN_00014ed0,&local_458);
  local_458 = 0x403a4076;
  local_454 = 0x7140;
  local_452 = 0;
  _class_addMethod(lVar2,"tableView:willDisplayHeaderView:forSection:",FUN_00015750,&local_458);
  local_458 = 0x3a4076;
  _class_addMethod(lVar2,"dismissDebugging",FUN_00015df0,&local_458);
  local_458 = 0x3a4076;
  _class_addMethod(lVar2,"debuggingDLInsta",FUN_00015e04,&local_458);
  IVar6 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf__s__);
  IVar6 = _objc_retainAutorelease(IVar6);
  IVar6 = _objc_msgSend(IVar6,"UTF8String");
  _class_addMethod(lVar2,"tableView",FUN_00013b34,IVar6);
  IVar6 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_v___s);
  IVar6 = _objc_retainAutorelease(IVar6);
  IVar6 = _objc_msgSend(IVar6,"UTF8String");
  _class_addMethod(lVar2,"setTableView:",FUN_00013b58,IVar6);
  IVar6 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf__s__);
  IVar6 = _objc_retainAutorelease(IVar6);
  IVar6 = _objc_msgSend(IVar6,"UTF8String");
  _class_addMethod(lVar2,"classDict",FUN_00013b78,IVar6);
  IVar6 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_v___s);
  IVar6 = _objc_retainAutorelease(IVar6);
  IVar6 = _objc_msgSend(IVar6,"UTF8String");
  _class_addMethod(lVar2,"setClassDict:",FUN_00013b9c,IVar6);
  IVar6 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf__s__);
  IVar6 = _objc_retainAutorelease(IVar6);
  IVar6 = _objc_msgSend(IVar6,"UTF8String");
  _class_addMethod(lVar2,"displayList",FUN_00013bbc,IVar6);
  IVar6 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_v___s);
  IVar6 = _objc_retainAutorelease(IVar6);
  IVar6 = _objc_msgSend(IVar6,"UTF8String");
  _class_addMethod(lVar2,"setDisplayList:",FUN_00013be0,IVar6);
  IVar6 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf__s__);
  IVar6 = _objc_retainAutorelease(IVar6);
  IVar6 = _objc_msgSend(IVar6,"UTF8String");
  _class_addMethod(lVar2,"emptyErrLabel",FUN_00013c00,IVar6);
  IVar6 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_v___s);
  IVar6 = _objc_retainAutorelease(IVar6);
  IVar6 = _objc_msgSend(IVar6,"UTF8String");
  _class_addMethod(lVar2,"setEmptyErrLabel:",FUN_00013c24,IVar6);
  _objc_registerClassPair(lVar2);
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

