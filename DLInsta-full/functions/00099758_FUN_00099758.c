/* Address: 00099758 | Name: FUN_00099758 | Body bytes: 696 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID FUN_00099758(long param_1)

{
  undefined *puVar1;
  ID IVar2;
  long lVar3;
  ID self;
  long lVar4;
  ID IVar5;
  ID IVar6;
  undefined *local_478;
  undefined8 local_470;
  code *local_468;
  undefined *puStack_460;
  ID local_458;
  undefined8 uStack_450;
  long local_78;
  
  local_78 = *(long *)PTR____stack_chk_guard_000e8260;
  IVar2 = NSError::errorWithDomain_code_userInfo_
                    ((ID)&_OBJC_CLASS___NSError,"errorWithDomain:code:userInfo:",&cf_DLDomainError,
                     0xfffffffffffffc9f,0);
  puVar1 = PTR___NSConcreteStackBlock_000e80d8;
  uStack_450 = *(undefined8 *)(param_1 + 0x20);
  local_458 = *(ID *)(param_1 + 0x28);
  local_478 = PTR___NSConcreteStackBlock_000e80d8;
  local_470 = 0xc0000000;
  local_468 = FUN_0009934c;
  puStack_460 = &DAT_000e9218;
  FUN_0009934c();
  if (DAT_001006e1 == '\0') {
    IVar5 = IVar2;
  }
  else {
    lVar3 = _CFReadStreamCreateForHTTPRequest(0,*(undefined8 *)(param_1 + 0x20));
    _CFReadStreamOpen();
    self = NSMutableData::data((ID)&_OBJC_CLASS___NSMutableData,"data");
    lVar4 = _CFReadStreamRead(lVar3,&local_478,0x400);
    if (0 < lVar4) {
      do {
        NSMutableData::appendBytes_length_(self,"appendBytes:length:",&local_478,lVar4);
        lVar4 = _CFReadStreamRead(lVar3,&local_478,0x400);
      } while (0 < lVar4);
    }
    IVar5 = _CFReadStreamCopyError(lVar3);
    if (IVar5 == 0) {
      IVar6 = _CFReadStreamCopyProperty
                        (lVar3,*(undefined8 *)PTR__kCFStreamPropertyHTTPResponseHeader_000e8288);
      FUN_00099a10();
      IVar5 = IVar2;
      if (DAT_001006e0 != '\0') {
        DAT_001006e1 = '\0';
        local_478 = puVar1;
        local_470 = 0xc0000000;
        local_468 = FUN_00099460;
        puStack_460 = &DAT_000e8978;
        local_458 = IVar6;
        FUN_00099460();
        if (DAT_001006e1 != '\0') {
          if (IVar6 != 0) {
            _CFHTTPMessageSetBody(IVar6,self);
          }
          _CFReadStreamClose(lVar3);
          if (lVar3 != 0) {
            _CFRelease(lVar3);
          }
          IVar5 = IVar6;
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_78) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return IVar5;
}

