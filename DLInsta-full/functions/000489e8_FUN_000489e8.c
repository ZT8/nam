/* Address: 000489e8 | Name: FUN_000489e8 | Body bytes: 440 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_000489e8(ID param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  ID IVar2;
  undefined8 uVar3;
  ID self;
  
  pcVar1 = DAT_000ffd78;
  if (DAT_000ffd78 == (code *)0x0) {
    pcVar1 = (code *)_class_getMethodImplementation(DAT_000ffd70,"viewDidAppear:");
  }
  (*pcVar1)(param_1,param_2,param_3);
  IVar2 = NSUserDefaults::standardUserDefaults
                    ((ID)&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
  IVar2 = NSUserDefaults::boolForKey_(IVar2,"boolForKey:",&cf_DL_KeepDeletedDM);
  if ((IVar2 & 1) != 0) {
    uVar3 = FUN_00097ef8();
    uVar3 = FUN_00097a54(uVar3);
    IVar2 = _objc_msgSend(DAT_001006a8,"length");
    IVar2 = FUN_00097c68(uVar3,IVar2);
    IVar2 = _objc_msgSend(IVar2,"isEqualToString:",DAT_001006a8);
    if ((int)IVar2 == 0) {
      return 0;
    }
    IVar2 = _objc_msgSend(param_1,"valueForKey:",&cf__collectionView);
    self = NSNotificationCenter::defaultCenter
                     ((ID)&_OBJC_CLASS___NSNotificationCenter,"defaultCenter");
    NSNotificationCenter::addObserver_selector_name_object_
              (self,"addObserver:selector:name:object:",IVar2,"reloadData",&cf_reloadData_bubble,0);
  }
  return 0;
}

