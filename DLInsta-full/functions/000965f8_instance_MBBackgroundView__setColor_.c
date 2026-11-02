/* Address: 000965f8 | Name: instance_MBBackgroundView__setColor_ | Body bytes: 308 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

void MBBackgroundView::instance_MBBackgroundView__setColor_(ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  ID IVar2;
  cfstringStruct *pcVar3;
  long lVar4;
  
  if (param_3 == 0) {
    pcVar3 = (cfstringStruct *)
             NSString::stringWithUTF8String_
                       ((ID)&_OBJC_CLASS___NSString,"stringWithUTF8String:","Helper/MBProgressHUD.m"
                       );
    pcVar1 = &cf_<UnknownFile>;
    if (pcVar3 != (cfstringStruct *)0x0) {
      pcVar1 = pcVar3;
    }
    IVar2 = NSAssertionHandler::currentHandler
                      ((ID)&_OBJC_CLASS___NSAssertionHandler,"currentHandler");
    NSAssertionHandler::handleFailureInMethod_object_file_lineNumber_description_
              (IVar2,"handleFailureInMethod:object:file:lineNumber:description:",param_2,param_1,
               pcVar1,0x447,&cf_Thecolorshouldnotbenil_);
  }
  lVar4 = (long)_color;
  if ((*(ID *)(param_1 + lVar4) != param_3) &&
     (IVar2 = _objc_msgSend(param_3,"isEqual:"), (IVar2 & 1) == 0)) {
    *(ID *)(param_1 + lVar4) = param_3;
    instance_MBBackgroundView__updateViewsForColor_(param_1,"updateViewsForColor:",param_3);
  }
  return;
}

