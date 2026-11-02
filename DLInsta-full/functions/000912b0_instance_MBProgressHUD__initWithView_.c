/* Address: 000912b0 | Name: instance_MBProgressHUD__initWithView_ | Body bytes: 272 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID MBProgressHUD::instance_MBProgressHUD__initWithView_(ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  ID IVar2;
  cfstringStruct *pcVar3;
  double extraout_d0;
  double in_d1;
  double in_d2;
  double in_d3;
  CGRect CVar4;
  
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
               pcVar1,0x77,&cf_Viewmustnotbenil_);
  }
  _objc_msgSend(param_3,"bounds");
  CVar4.field0_0x0.field1_0x8 = in_d1;
  CVar4.field0_0x0.field0_0x0 = extraout_d0;
  CVar4.field1_0x10.field1_0x8 = in_d3;
  CVar4.field1_0x10.field0_0x0 = in_d2;
  IVar2 = instance_MBProgressHUD__initWithFrame_(param_1,"initWithFrame:",CVar4);
  return IVar2;
}

