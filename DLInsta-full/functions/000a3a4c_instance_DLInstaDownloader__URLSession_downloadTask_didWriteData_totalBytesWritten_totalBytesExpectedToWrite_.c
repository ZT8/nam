/* Address: 000a3a4c | Name: instance_DLInstaDownloader__URLSession_downloadTask_didWriteData_totalBytesWritten_totalBytesExpectedToWrite_ | Body bytes: 232 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x38 bytes */

void DLInstaDownloader::
     instance_DLInstaDownloader__URLSession_downloadTask_didWriteData_totalBytesWritten_totalBytesExpectedToWrite_
               (ID param_1,SEL param_2,ID param_3,ID param_4,long_long param_5,long_long param_6,
               long_long param_7)

{
  long lVar1;
  undefined *puVar2;
  ID IVar3;
  undefined *local_78;
  undefined8 local_70;
  code *local_68;
  undefined *puStack_60;
  ID local_58;
  ID local_50;
  float local_48;
  
  lVar1 = 0;
  if (param_7 != 0) {
    lVar1 = (long)(param_6 * 100) / (long)param_7;
  }
  if (99 < lVar1) {
    lVar1 = 100;
  }
  IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf__2_f__);
  puVar2 = PTR___dispatch_main_q_000e8268;
  _objc_retainAutorelease(PTR___dispatch_main_q_000e8268);
  local_78 = PTR___NSConcreteStackBlock_000e80d8;
  local_70 = 0xc2000000;
  local_68 = FUN_000a3b34;
  puStack_60 = &DAT_000e9a68;
  local_58 = param_1;
  local_50 = IVar3;
  local_48 = (float)lVar1;
  _dispatch_async(puVar2,&local_78);
  return;
}

