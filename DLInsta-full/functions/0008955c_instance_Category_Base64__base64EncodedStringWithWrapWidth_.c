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

