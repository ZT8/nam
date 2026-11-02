/* Address: 0008fb8c | Name: class_DLHelper__getStatusCodeFromURL_ | Body bytes: 216 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_unsafeClaimAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

long_long DLHelper::class_DLHelper__getStatusCodeFromURL_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID local_40;
  ID local_38;
  
  IVar1 = NSMutableURLRequest::requestWithURL_cachePolicy_timeoutInterval_
                    ((ID)&_OBJC_CLASS___NSMutableURLRequest,
                     "requestWithURL:cachePolicy:timeoutInterval:",0x4014000000000000,param_3,0);
  NSMutableURLRequest::setHTTPMethod_(IVar1,"setHTTPMethod:",&cf_HEAD);
  local_40 = 0;
  local_38 = 0;
  class_DLHelper__sendSynchronousRequest_returningResponse_error_
            (param_1,"sendSynchronousRequest:returningResponse:error:",IVar1,&local_38,&local_40);
  IVar1 = _objc_msgSend(local_38,"statusCode");
  return IVar1;
}

