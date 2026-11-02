/* Address: 00041c98 | Name: FUN_00041c98 | Body bytes: 864 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

ID FUN_00041c98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
               undefined8 param_13)

{
  code *pcVar1;
  ID self;
  ID IVar2;
  undefined8 uVar3;
  
  pcVar1 = DAT_000ffcb8;
  if (DAT_000ffcb8 == (code *)0x0) {
    pcVar1 = (code *)_class_getMethodImplementation
                               (DAT_000ffca8,
                                "initWithUserSession:threadKey:threadViewModelPipe:analyticsLogger:audioPlaybackService:messageDataSource:messagesSortingInfoCache:messagesClientStateManager:nuxProvider:threadNavigationPerfComponents:entryPointContext:"
                               );
  }
  self = (*pcVar1)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                   param_11,param_12,param_13);
  if (self != 0) {
    IVar2 = NSUserDefaults::standardUserDefaults
                      ((ID)&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
    IVar2 = NSUserDefaults::boolForKey_(IVar2,"boolForKey:",&cf_DL_SeeDMWithoutOtherPartyKnowing);
    if ((IVar2 & 1) != 0) {
      uVar3 = FUN_00097ef8();
      uVar3 = FUN_00097a54(uVar3);
      IVar2 = _objc_msgSend(DAT_001006a8,"length");
      IVar2 = FUN_00097c68(uVar3,IVar2);
      IVar2 = _objc_msgSend(IVar2,"isEqualToString:",DAT_001006a8);
      if ((int)IVar2 != 0) {
        _objc_msgSend(self,"setUserHaveSeenMessage:",0);
        IVar2 = NSNotificationCenter::defaultCenter
                          ((ID)&_OBJC_CLASS___NSNotificationCenter,"defaultCenter");
        NSNotificationCenter::addObserver_selector_name_object_
                  (IVar2,"addObserver:selector:name:object:",self,"d_updateMarkAsSeenIfNeeded",
                   &cf_d_updateMarkAsSeenIfNeededDM,0);
      }
    }
  }
  return self;
}

