/* Address: 00094c0c | Name: instance_MBProgressHUD__setNSProgressDisplayLinkEnabled_ | Body bytes: 212 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x14 bytes */

void MBProgressHUD::instance_MBProgressHUD__setNSProgressDisplayLinkEnabled_
               (ID param_1,SEL param_2,bool param_3)

{
  ID IVar1;
  
  if ((param_3 == 0) ||
     (IVar1 = instance_MBProgressHUD__progressObject(param_1,"progressObject"), IVar1 == 0)) {
    instance_MBProgressHUD__setProgressObjectDisplayLink_(param_1,"setProgressObjectDisplayLink:",0)
    ;
    return;
  }
  IVar1 = instance_MBProgressHUD__progressObjectDisplayLink(param_1,"progressObjectDisplayLink");
  if (IVar1 == 0) {
    IVar1 = CADisplayLink::displayLinkWithTarget_selector_
                      ((ID)&_OBJC_CLASS___CADisplayLink,"displayLinkWithTarget:selector:",param_1,
                       "updateProgressFromProgressObject");
    instance_MBProgressHUD__setProgressObjectDisplayLink_
              (param_1,"setProgressObjectDisplayLink:",IVar1);
    return;
  }
  return;
}

