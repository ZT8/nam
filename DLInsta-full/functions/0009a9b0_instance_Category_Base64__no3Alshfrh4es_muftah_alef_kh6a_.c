/* Address: 0009a9b0 | Name: instance_Category_Base64__no3Alshfrh4es_muftah_alef_kh6a_ | Body bytes: 392 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

ID instance_Category_Base64__no3Alshfrh4es_muftah_alef_kh6a_
             (ID param_1,undefined8 param_2,CCOperation param_3,ID param_4,ID param_5,int param_6)

{
  CCCryptorStatus CVar1;
  ID IVar2;
  void *dataOut;
  ID self;
  void *dataIn;
  CCOptions options;
  size_t local_90 [3];
  undefined1 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_000e8260;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  _objc_msgSend(param_4,"getCString:maxLength:encoding:",&local_70,0x11,4);
  local_90[1] = 0;
  local_90[2] = 0;
  local_78 = 0;
  if (param_5 != 0) {
    _objc_msgSend(param_5,"getCString:maxLength:encoding:",local_90 + 1,0x11,4);
  }
  IVar2 = _objc_msgSend(param_1,"length");
  dataOut = _malloc(IVar2 + 0x10);
  local_90[0] = 0;
  self = _objc_retainAutorelease(param_1);
  dataIn = (void *)_objc_msgSend(self,"bytes");
  options = 3;
  if (param_6 == 0) {
    options = 1;
  }
  CVar1 = _CCCrypt(param_3,0,options,&local_70,0x10,local_90 + 1,dataIn,IVar2,dataOut,IVar2 + 0x10,
                   local_90);
  if (CVar1 == 0) {
    IVar2 = NSData::dataWithBytesNoCopy_length_
                      ((ID)&_OBJC_CLASS___NSData,"dataWithBytesNoCopy:length:",dataOut,local_90[0]);
  }
  else {
    _free(dataOut);
    IVar2 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return IVar2;
}

