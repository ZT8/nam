/* Address: 0000d7d8 | Name: FUN_0000d7d8 | Body bytes: 952 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
FUN_0000d7d8(undefined8 param_1,undefined8 param_2,ID param_3,undefined8 param_4,undefined8 param_5)

{
  ID IVar1;
  undefined8 uVar2;
  ID IVar3;
  code *pcVar4;
  
  IVar1 = NSUserDefaults::standardUserDefaults
                    ((ID)&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
  IVar1 = NSUserDefaults::boolForKey_(IVar1,"boolForKey:",&cf_DL_EnableOpenLinksInSafari);
  if ((IVar1 & 1) != 0) {
    uVar2 = FUN_00097ef8();
    uVar2 = FUN_00097a54(uVar2);
    IVar1 = _objc_msgSend(DAT_001006a8,"length");
    IVar1 = FUN_00097c68(uVar2,IVar1);
    IVar1 = _objc_msgSend(IVar1,"isEqualToString:",DAT_001006a8);
    if ((int)IVar1 != 0) {
      if (DAT_000ffb18 == 0) {
        DAT_000ffb18 = _objc_getClass("IGBrowserViewController");
      }
      uVar2 = _objc_retainAutorelease();
      IVar1 = _objc_msgSend(param_3,"isMemberOfClass:",uVar2);
      if ((int)IVar1 == 0) {
        if (DAT_000ffb20 == 0) {
          DAT_000ffb20 = _objc_getClass("IGBrowserNavigationController");
        }
        uVar2 = _objc_retainAutorelease();
        IVar1 = _objc_msgSend(param_3,"isMemberOfClass:",uVar2);
        if ((int)IVar1 != 0) {
          IVar1 = _objc_msgSend(param_3,"valueForKey:",&cf__browserViewController);
          IVar3 = _objc_msgSend(IVar1,"respondsToSelector:","zonedInitialURL");
          if ((int)IVar3 != 0) {
            IVar1 = _objc_msgSend(IVar1,"performSelector:","zonedInitialURL");
            IVar3 = _objc_msgSend(IVar1,"respondsToSelector:","value");
            if ((int)IVar3 != 0) {
              IVar1 = _objc_msgSend(IVar1,"performSelector:","value");
              if (DAT_000ffb28 == 0) {
                DAT_000ffb28 = _objc_getClass("NSURL");
              }
              uVar2 = _objc_retainAutorelease();
              IVar3 = _objc_msgSend(IVar1,"isMemberOfClass:",uVar2);
              if ((int)IVar3 != 0) {
                IVar3 = UIApplication::sharedApplication
                                  ((ID)&_OBJC_CLASS___UIApplication,"sharedApplication");
                UIApplication::openURL_options_completionHandler_
                          (IVar3,"openURL:options:completionHandler:",IVar1,
                           *(undefined8 *)PTR____NSDictionary0___000e8248,0);
                return 0;
              }
            }
          }
        }
      }
      else {
        IVar1 = _objc_msgSend(param_3,"respondsToSelector:","initialURL");
        if ((int)IVar1 != 0) {
          IVar1 = _objc_msgSend(param_3,"performSelector:","initialURL");
          IVar3 = UIApplication::sharedApplication
                            ((ID)&_OBJC_CLASS___UIApplication,"sharedApplication");
          UIApplication::openURL_options_completionHandler_
                    (IVar3,"openURL:options:completionHandler:",IVar1,
                     *(undefined8 *)PTR____NSDictionary0___000e8248,0);
          return 0;
        }
      }
    }
  }
  pcVar4 = DAT_000ff9b0;
  if (DAT_000ff9b0 == (code *)0x0) {
    pcVar4 = (code *)_class_getMethodImplementation
                               (DAT_000ff9a8,"presentViewController:animated:completion:");
  }
  (*pcVar4)(param_1,param_2,param_3,param_4,param_5);
  return 0;
}

