/* Address: 0008f6ac | Name: class_DLHelper__sendSynchronousRequest_returningResponse_error_ | Body bytes: 536 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x28 bytes */

ID DLHelper::class_DLHelper__sendSynchronousRequest_returningResponse_error_
             (ID param_1,SEL param_2,ID param_3,ID *param_4,ID *param_5)

{
  ID IVar1;
  undefined *local_160;
  undefined8 local_158;
  code *local_150;
  undefined *puStack_148;
  undefined8 *local_140;
  undefined8 *puStack_138;
  undefined8 *local_130;
  undefined8 *puStack_128;
  undefined8 local_120;
  undefined8 *local_118;
  undefined8 local_110;
  code *local_108;
  code *pcStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 *local_e8;
  undefined8 local_e0;
  undefined1 local_d8;
  undefined8 local_d0;
  undefined8 *local_c8;
  undefined8 local_c0;
  code *local_b8;
  code *pcStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  code *local_88;
  code *pcStack_80;
  undefined8 local_78;
  
  local_a0 = 0;
  local_90 = 0x3032000000;
  local_88 = FUN_0008f904;
  pcStack_80 = FUN_0008f914;
  local_78 = 0;
  local_d0 = 0;
  local_c0 = 0x3032000000;
  local_b8 = FUN_0008f904;
  pcStack_b0 = FUN_0008f914;
  local_a8 = 0;
  local_f0 = 0;
  local_e0 = 0x2020000000;
  local_d8 = 0;
  local_120 = 0;
  local_110 = 0x3032000000;
  local_108 = FUN_0008f904;
  pcStack_100 = FUN_0008f914;
  local_f8 = 0;
  local_118 = &local_120;
  local_e8 = &local_f0;
  local_c8 = &local_d0;
  local_98 = &local_a0;
  IVar1 = NSURLSession::sharedSession((ID)&_OBJC_CLASS___NSURLSession,"sharedSession");
  local_160 = PTR___NSConcreteStackBlock_000e80d8;
  local_158 = 0xc2000000;
  local_150 = FUN_0008f91c;
  puStack_148 = &DAT_000e9058;
  local_140 = &local_120;
  puStack_138 = &local_a0;
  local_130 = &local_d0;
  puStack_128 = &local_f0;
  IVar1 = NSURLSession::dataTaskWithRequest_completionHandler_
                    (IVar1,"dataTaskWithRequest:completionHandler:",param_3,&local_160);
  NSURLSession::resume(IVar1,"resume");
  while (*(char *)(local_e8 + 3) == '\0') {
    NSThread::sleepForTimeInterval_
              ((ID)&_OBJC_CLASS___NSThread,"sleepForTimeInterval:",0x3f947ae147ae147b);
  }
  if (param_4 != (ID *)0x0) {
    IVar1 = _objc_retainAutorelease(local_118[5]);
    *param_4 = IVar1;
  }
  if (param_5 != (ID *)0x0) {
    IVar1 = _objc_retainAutorelease(local_98[5]);
    *param_5 = IVar1;
  }
  IVar1 = local_c8[5];
  __Block_object_dispose(&local_120,8);
  __Block_object_dispose(&local_f0,8);
  __Block_object_dispose(&local_d0,8);
  __Block_object_dispose(&local_a0,8);
  return IVar1;
}

