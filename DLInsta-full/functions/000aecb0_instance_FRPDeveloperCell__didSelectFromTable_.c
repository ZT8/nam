/* Address: 000aecb0 | Name: instance_FRPDeveloperCell__didSelectFromTable_ | Body bytes: 344 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void FRPDeveloperCell::instance_FRPDeveloperCell__didSelectFromTable_
               (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = _objc_msgSend(param_3,"tableView");
  IVar2 = _objc_msgSend(param_3,"tableView");
  IVar2 = _objc_msgSend(IVar2,"indexPathForCell:",param_1);
  _objc_msgSend(IVar1,"deselectRowAtIndexPath:animated:",IVar2,1);
  IVar1 = UIApplication::sharedApplication((ID)&_OBJC_CLASS___UIApplication,"sharedApplication");
  IVar2 = instance_FRPDeveloperCell__url(param_1,"url");
  IVar2 = NSURL::URLWithString_((ID)&_OBJC_CLASS___NSURL,"URLWithString:",IVar2);
  UIApplication::openURL_options_completionHandler_
            (IVar1,"openURL:options:completionHandler:",IVar2,
             *(undefined8 *)PTR____NSDictionary0___000e8248,0);
  return;
}

