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

