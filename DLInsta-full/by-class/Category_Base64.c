/* Automatic pseudocode grouped by Objective-C class. NOT original source. */

/* -[Category:Base64 shfrAln9:alef:] | encoding @32@0:8@16@24 */
/* Address: 0009a978 | Name: instance_Category_Base64__shfrAln9_alef_ | Body bytes: 28 */

void instance_Category_Base64__shfrAln9_alef_
               (ID param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_msgSend(param_1,"no3Alshfrh4es:muftah:alef:kh6a:",0,param_3,param_4,0);
  return;
}


/* -[Category:Base64 fkTshferAln9:alef:] | encoding @32@0:8@16@24 */
/* Address: 0009a994 | Name: instance_Category_Base64__fkTshferAln9_alef_ | Body bytes: 28 */

void instance_Category_Base64__fkTshferAln9_alef_
               (ID param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_msgSend(param_1,"no3Alshfrh4es:muftah:alef:kh6a:",1,param_3,param_4,0);
  return;
}


/* -[Category:Base64 no3Alshfrh4es:muftah:alef:kh6a:] | encoding @40@0:8I16@20@28B36 */
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


/* -[Category:Base64 base64EncodedStringWithWrapWidth:] | encoding @24@0:8Q16 */
/* Address: 000892c0 | Name: instance_Category_Base64__base64EncodedStringWithWrapWidth_ | Body bytes: 536 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID instance_Category_Base64__base64EncodedStringWithWrapWidth_
             (ID param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  IVar2 = _objc_msgSend(param_1,"length");
  if (IVar2 == 0) {
    return 0;
  }
  IVar2 = NSData::instancesRespondToSelector_
                    ((ID)&_OBJC_CLASS___NSData,"instancesRespondToSelector:",
                     "base64EncodedStringWithOptions:");
  if ((IVar2 & 1) == 0) {
    IVar2 = _objc_msgSend(param_1,"base64Encoding");
LAB_00089380:
    IVar3 = IVar2;
    if ((param_3 != 0) && (IVar4 = _objc_msgSend(IVar2,"length"), param_3 < IVar4)) {
      IVar3 = NSMutableString::string((ID)&_OBJC_CLASS___NSMutableString,"string");
      IVar4 = _objc_msgSend(IVar2,"length");
      if (IVar4 != 0) {
        uVar6 = 0;
        do {
          uVar1 = uVar6 + (param_3 & 0xfffffffffffffffc);
          IVar4 = _objc_msgSend(IVar2,"length");
          if (IVar4 <= uVar1) {
            IVar2 = _objc_msgSend(IVar2,"substringFromIndex:",uVar6);
            NSMutableString::appendString_(IVar3,"appendString:",IVar2);
            return IVar3;
          }
          IVar4 = _objc_msgSend(IVar2,"substringWithRange:",uVar6,param_3 & 0xfffffffffffffffc);
          NSMutableString::appendString_(IVar3,"appendString:",IVar4);
          NSMutableString::appendString_(IVar3,"appendString:",&cf_format_s_);
          IVar4 = _objc_msgSend(IVar2,"length");
          uVar6 = uVar1;
        } while (uVar1 < IVar4);
      }
    }
  }
  else {
    if (param_3 == 0x4c) {
      uVar5 = 2;
    }
    else {
      if (param_3 != 0x40) {
        IVar2 = _objc_msgSend(param_1,"base64EncodedStringWithOptions:",0);
        goto LAB_00089380;
      }
      uVar5 = 1;
    }
    IVar3 = _objc_msgSend(param_1,"base64EncodedStringWithOptions:",uVar5);
  }
  return IVar3;
}


/* -[Category:Base64 base64EncodedString] | encoding @16@0:8 */
/* Address: 000894d8 | Name: instance_Category_Base64__base64EncodedString | Body bytes: 16 */

void instance_Category_Base64__base64EncodedString(ID param_1)

{
  _objc_msgSend(param_1,"base64EncodedStringWithWrapWidth:",0);
  return;
}


/* +[Category:Base64 dataWithBase64EncodedString:] | encoding @24@0:8@16 */
/* Address: 00089188 | Name: class_Category_Base64__dataWithBase64EncodedString_ | Body bytes: 312 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

ID class_Category_Base64__dataWithBase64EncodedString_
             (undefined8 param_1,undefined8 param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  
  IVar1 = _objc_msgSend(param_3,"length");
  if (IVar1 == 0) {
    IVar1 = 0;
  }
  else {
    IVar1 = NSData::instancesRespondToSelector_
                      ((ID)&_OBJC_CLASS___NSData,"instancesRespondToSelector:",
                       "initWithBase64EncodedString:options:");
    IVar2 = _objc_alloc(param_1);
    if ((IVar1 & 1) == 0) {
      IVar1 = _objc_msgSend(param_3,"length");
      IVar1 = _objc_msgSend(param_3,"stringByReplacingOccurrencesOfString:withString:options:range:"
                            ,&cf___A_Za_z0_9____,&cf___,0x400,0,IVar1);
      IVar2 = _objc_msgSend(IVar2,"initWithBase64Encoding:",IVar1);
    }
    else {
      IVar2 = _objc_msgSend(IVar2,"initWithBase64EncodedString:options:",param_3,1);
    }
    IVar3 = _objc_msgSend(IVar2,"length");
    IVar1 = 0;
    if (IVar3 != 0) {
      IVar1 = IVar2;
    }
  }
  return IVar1;
}


/* -[Category:Base64 base64EncodedStringWithWrapWidth:] | encoding @24@0:8Q16 */
/* Address: 0008955c | Name: instance_Category_Base64__base64EncodedStringWithWrapWidth_ | Body bytes: 100 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID instance_Category_Base64__base64EncodedStringWithWrapWidth_
             (ID param_1,undefined8 param_2,undefined8 param_3)

{
  ID IVar1;
  
  IVar1 = _objc_msgSend(param_1,"dataUsingEncoding:allowLossyConversion:",4,1);
  IVar1 = _objc_msgSend(IVar1,"base64EncodedStringWithWrapWidth:",param_3);
  return IVar1;
}


/* -[Category:Base64 base64EncodedString] | encoding @16@0:8 */
/* Address: 000895c0 | Name: instance_Category_Base64__base64EncodedString | Body bytes: 92 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID instance_Category_Base64__base64EncodedString(ID param_1)

{
  ID IVar1;
  
  IVar1 = _objc_msgSend(param_1,"dataUsingEncoding:allowLossyConversion:",4,1);
  IVar1 = _objc_msgSend(IVar1,"base64EncodedString");
  return IVar1;
}


/* -[Category:Base64 base64DecodedString] | encoding @16@0:8 */
/* Address: 0008961c | Name: instance_Category_Base64__base64DecodedString | Body bytes: 24 */

void instance_Category_Base64__base64DecodedString(undefined8 param_1)

{
  NSString::stringWithBase64EncodedString_
            ((ID)&_OBJC_CLASS___NSString,"stringWithBase64EncodedString:",param_1);
  return;
}


/* -[Category:Base64 base64DecodedData] | encoding @16@0:8 */
/* Address: 00089634 | Name: instance_Category_Base64__base64DecodedData | Body bytes: 24 */

void instance_Category_Base64__base64DecodedData(undefined8 param_1)

{
  NSData::dataWithBase64EncodedString_
            ((ID)&_OBJC_CLASS___NSData,"dataWithBase64EncodedString:",param_1);
  return;
}


/* +[Category:Base64 stringWithBase64EncodedString:] | encoding @24@0:8@16 */
/* Address: 000894e8 | Name: class_Category_Base64__stringWithBase64EncodedString_ | Body bytes: 116 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID class_Category_Base64__stringWithBase64EncodedString_(undefined8 param_1)

{
  ID IVar1;
  ID self;
  
  IVar1 = NSData::dataWithBase64EncodedString_
                    ((ID)&_OBJC_CLASS___NSData,"dataWithBase64EncodedString:");
  if (IVar1 == 0) {
    IVar1 = 0;
  }
  else {
    self = _objc_alloc(param_1);
    IVar1 = _objc_msgSend(self,"initWithData:encoding:",IVar1,4);
  }
  return IVar1;
}

