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

