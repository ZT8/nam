/* Address: 00099ff0 | Name: FUN_00099ff0 | Body bytes: 872 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_00099ff0(long param_1)

{
  ID IVar1;
  long lVar2;
  ID IVar3;
  undefined8 uVar4;
  code *pcVar5;
  ID IVar6;
  
  IVar6 = *(ID *)(param_1 + 0x20);
  IVar1 = NSError::class((ID)&_OBJC_CLASS___NSError,"class");
  IVar1 = _objc_msgSend(IVar6,"isKindOfClass:",IVar1);
  IVar6 = *(ID *)(param_1 + 0x20);
  if ((int)IVar1 == 0) {
    if (IVar6 == 0) {
      (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0,7);
    }
    else {
      lVar2 = _CFHTTPMessageCopyBody(IVar6);
      if (lVar2 == 0) {
        (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0,5);
      }
      else {
        IVar1 = _objc_alloc(&_OBJC_CLASS___NSString);
        IVar1 = NSString::initWithData_encoding_(IVar1,"initWithData:encoding:",lVar2,4);
        IVar3 = NSString::length(IVar1,"length");
        if (IVar3 == 0) {
          lVar2 = *(long *)(param_1 + 0x28);
          pcVar5 = *(code **)(lVar2 + 0x10);
          IVar1 = 0;
          uVar4 = 5;
        }
        else {
          lVar2 = *(long *)(param_1 + 0x28);
          pcVar5 = *(code **)(lVar2 + 0x10);
          uVar4 = 1;
        }
        (*pcVar5)(lVar2,IVar1,uVar4);
      }
      _CFRelease(IVar6);
    }
    goto LAB_0009a1d0;
  }
  if (IVar6 == 0) goto LAB_0009a1d0;
  IVar1 = _objc_msgSend(IVar6,"code");
  if (((IVar1 == 0x32) || (IVar1 = _objc_msgSend(IVar6,"code"), IVar1 == 0x3c)) ||
     (IVar1 = _objc_msgSend(IVar6,"code"), IVar1 == 0x3d)) {
    IVar1 = _objc_msgSend(IVar6,"domain");
    IVar1 = _objc_msgSend(IVar1,"isEqualToString:",*(undefined8 *)PTR__NSPOSIXErrorDomain_000e8078);
    if (((int)IVar1 != 0) || (IVar1 = _objc_msgSend(IVar6,"code"), IVar1 == 0xfffffffffffffc0f))
    goto LAB_0009a174;
LAB_0009a238:
    IVar1 = _objc_msgSend(IVar6,"code");
    if (IVar1 == 0xffffffffffffd9b2) {
      IVar1 = _objc_msgSend(IVar6,"domain");
      IVar1 = _objc_msgSend(IVar1,"isEqualToString:",&cf_NSOSStatusErrorDomain);
      if ((IVar1 & 1) != 0) {
        uVar4 = 3;
        goto LAB_0009a178;
      }
    }
    IVar1 = _objc_msgSend(IVar6,"code");
    if (IVar1 == 0xfffffffffffffc9f) {
      IVar1 = _objc_msgSend(IVar6,"domain");
      IVar1 = _objc_msgSend(IVar1,"isEqualToString:",&cf_DLDomainError);
      if ((IVar1 & 1) != 0) {
        uVar4 = 6;
        goto LAB_0009a178;
      }
    }
    IVar1 = _objc_msgSend(IVar6,"code");
    if (IVar1 == 0xfffffffffffffc55) {
      IVar1 = _objc_msgSend(IVar6,"domain");
      IVar1 = _objc_msgSend(IVar1,"isEqualToString:",&cf_DLDomainError);
      if ((IVar1 & 1) != 0) {
        uVar4 = 4;
        goto LAB_0009a178;
      }
    }
    uVar4 = 7;
  }
  else {
    IVar1 = _objc_msgSend(IVar6,"code");
    if (IVar1 != 0xfffffffffffffc0f) goto LAB_0009a238;
LAB_0009a174:
    uVar4 = 2;
  }
LAB_0009a178:
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0,uVar4);
LAB_0009a1d0:
  if (*(long *)(param_1 + 0x30) != 0) {
    _CFRelease();
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    _CFRelease();
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    _CFRelease();
  }
  if (*(long *)(param_1 + 0x48) == 0) {
    return;
  }
  _CFRelease();
  return;
}

