/* Address: 0008faa8 | Name: class_DLHelper__DLMediaSize_ | Body bytes: 228 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_unsafeClaimAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

long_long DLHelper::class_DLHelper__DLMediaSize_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID local_38;
  
  IVar1 = NSURL::URLWithString_((ID)&_OBJC_CLASS___NSURL,"URLWithString:");
  IVar1 = NSMutableURLRequest::requestWithURL_
                    ((ID)&_OBJC_CLASS___NSMutableURLRequest,"requestWithURL:",IVar1);
  NSMutableURLRequest::setHTTPMethod_(IVar1,"setHTTPMethod:",&cf_HEAD);
  local_38 = 0;
  class_DLHelper__sendSynchronousRequest_returningResponse_error_
            (param_1,"sendSynchronousRequest:returningResponse:error:",IVar1,&local_38,(ID *)0x0);
  IVar1 = _objc_msgSend(local_38,"expectedContentLength");
  return IVar1;
}

