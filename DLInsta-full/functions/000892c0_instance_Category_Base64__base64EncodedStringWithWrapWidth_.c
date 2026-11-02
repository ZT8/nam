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

