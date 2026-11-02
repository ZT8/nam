/* Address: 0009a674 | Name: FUN_0009a674 | Body bytes: 632 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_0009a674(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  ID IVar4;
  long lVar5;
  undefined *local_1098;
  undefined8 local_1090;
  code *local_1088;
  undefined *puStack_1080;
  undefined8 local_1078;
  undefined8 local_1070;
  ID local_1068;
  undefined8 local_1060;
  undefined1 auStack_1058 [4096];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_000e8260;
  lVar3 = _CFReadStreamCreateForHTTPRequest
                    (*(undefined8 *)PTR__kCFAllocatorDefault_000e8270,
                     *(undefined8 *)(param_1 + 0x28));
  if (lVar3 == 0) {
    lVar3 = *(long *)(param_1 + 0x20);
    if (*(long *)PTR____stack_chk_guard_000e8260 == local_58) {
                    /* WARNING: Could not recover jumptable at 0x0009a854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar3 + 0x10))(lVar3,0);
      return;
    }
  }
  else {
    _CFReadStreamOpen();
    IVar4 = NSMutableData::data((ID)&_OBJC_CLASS___NSMutableData,"data");
    lVar5 = _CFReadStreamRead(lVar3,auStack_1058,0x1000);
    while (0 < lVar5) {
      NSMutableData::appendBytes_length_(IVar4,"appendBytes:length:",auStack_1058);
      lVar5 = _CFReadStreamRead(lVar3,auStack_1058,0x1000);
    }
    if (lVar5 < 0) {
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
    }
    else {
      local_1060 = 0;
      IVar4 = NSJSONSerialization::JSONObjectWithData_options_error_
                        ((ID)&_OBJC_CLASS___NSJSONSerialization,"JSONObjectWithData:options:error:",
                         IVar4,0,&local_1060);
      uVar2 = local_1060;
      puVar1 = PTR___dispatch_main_q_000e8268;
      _objc_retainAutorelease(PTR___dispatch_main_q_000e8268);
      local_1098 = PTR___NSConcreteStackBlock_000e80d8;
      local_1090 = 0xc2000000;
      local_1088 = FUN_0009a8ec;
      puStack_1080 = &DAT_000e9608;
      local_1078 = uVar2;
      local_1070 = *(undefined8 *)(param_1 + 0x20);
      local_1068 = IVar4;
      _dispatch_async(puVar1,&local_1098);
    }
    _CFReadStreamClose(lVar3);
    _CFRelease(lVar3);
    _CFRelease(*(undefined8 *)(param_1 + 0x30));
    _CFRelease(*(undefined8 *)(param_1 + 0x38));
    _CFRelease(*(undefined8 *)(param_1 + 0x40));
    _CFRelease(*(undefined8 *)(param_1 + 0x48));
    _CFRelease(*(undefined8 *)(param_1 + 0x50));
    _CFRelease(*(undefined8 *)(param_1 + 0x28));
    lVar3 = 0;
    if (*(long *)PTR____stack_chk_guard_000e8260 == local_58) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(lVar3);
}

