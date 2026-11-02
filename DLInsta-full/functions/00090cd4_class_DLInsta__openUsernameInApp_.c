/* Address: 00090cd4 | Name: class_DLInsta__openUsernameInApp_ | Body bytes: 272 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void DLInsta::class_DLInsta__openUsernameInApp_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = NSString::stringWithFormat_
                    ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",
                     &cf_instagram___user_username___);
  IVar1 = NSURL::URLWithString_((ID)&_OBJC_CLASS___NSURL,"URLWithString:",IVar1);
  IVar2 = UIApplication::sharedApplication((ID)&_OBJC_CLASS___UIApplication,"sharedApplication");
  IVar2 = UIApplication::canOpenURL_(IVar2,"canOpenURL:",IVar1);
  if ((int)IVar2 != 0) {
    IVar2 = UIApplication::sharedApplication((ID)&_OBJC_CLASS___UIApplication,"sharedApplication");
    UIApplication::openURL_options_completionHandler_
              (IVar2,"openURL:options:completionHandler:",IVar1,
               *(undefined8 *)PTR____NSDictionary0___000e8248,0);
  }
  return;
}

