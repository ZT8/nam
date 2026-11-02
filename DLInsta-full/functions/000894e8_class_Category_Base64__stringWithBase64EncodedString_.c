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

