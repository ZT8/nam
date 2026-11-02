/* Address: 00013498 | Name: FUN_00013498 | Body bytes: 1012 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_00013498(ID param_1,undefined8 param_2,undefined8 param_3,ID param_4,undefined8 param_5)

{
  ID IVar1;
  long lVar2;
  ID IVar3;
  undefined8 uVar4;
  cfstringStruct *local_88;
  cfstringStruct *pcStack_80;
  ID local_78;
  undefined8 uStack_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_000e8260;
  IVar1 = _objc_retainAutorelease(param_2);
  _objc_msgSend(IVar1,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar1 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(param_1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar1);
  }
  else {
    IVar1 = _objc_msgSend(param_4,"isEqualToString:",&cf__);
    if ((int)IVar1 == 0) {
      IVar1 = _objc_msgSend(param_4,"isEqualToString:",&cf__);
      if ((int)IVar1 == 0) {
        IVar1 = _objc_msgSend(param_4,"isEqualToString:",&cf_ivar);
        if ((int)IVar1 == 0) goto LAB_000137d8;
        uVar4 = _NSStringFromSelector(param_3);
        IVar1 = _objc_retainAutorelease(uVar4);
        IVar1 = _objc_msgSend(IVar1,"UTF8String");
        lVar2 = _class_getInstanceVariable(lVar2,IVar1);
      }
      else {
        lVar2 = _class_getClassMethod(lVar2,param_3);
      }
    }
    else {
      lVar2 = _class_getInstanceMethod(lVar2,param_3);
    }
    if (lVar2 == 0) {
      IVar1 = _objc_msgSend(param_1,"mutableCopy");
      IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar1 = _objc_msgSend(IVar1,"objectForKeyedSubscript:",IVar3);
      IVar1 = _objc_msgSend(IVar1,"objectForKeyedSubscript:",&cf_property);
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar1 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar3 != 0) {
        IVar1 = IVar3;
      }
      IVar1 = _objc_msgSend(IVar1,"mutableCopy");
      _NSStringFromSelector(param_3);
      IVar3 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar1,"addObject:",IVar3);
      local_88 = &cf_property;
      pcStack_80 = &cf_info;
      local_78 = IVar1;
      uStack_70 = param_5;
      IVar1 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_78,&local_88,2);
      IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(param_1,"setObject:forKey:",IVar1,IVar3);
    }
  }
LAB_000137d8:
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}

