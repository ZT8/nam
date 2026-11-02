/* Address: 0000b354 | Name: FUN_0000b354 | Body bytes: 940 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */

ID FUN_0000b354(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               ID param_5,undefined8 param_6,undefined4 param_7,undefined4 param_8,
               undefined1 param_9)

{
  code *pcVar1;
  ID self;
  ID IVar2;
  undefined8 uVar3;
  ID IVar4;
  ID IVar5;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  ID local_70;
  ID local_68;
  
  pcVar1 = DAT_000ff928;
  if (DAT_000ff928 == (code *)0x0) {
    pcVar1 = (code *)_class_getMethodImplementation
                               (DAT_000ff920,
                                "initWithMenuType:cell:comment:isEligibleForStoryShare:isEligibleToPinComment:isStoryComment:isEligibleToReply:isEligibleToHideReplies:isEligibleToReplyWithReel:isEligibleToLike:isEligibleToLaunchDirectShareSheet:"
                               );
  }
  self = (*pcVar1)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  if (self != 0) {
    IVar2 = NSUserDefaults::standardUserDefaults
                      ((ID)&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
    IVar2 = NSUserDefaults::boolForKey_(IVar2,"boolForKey:",&cf_DL_EnableCopyText);
    if ((IVar2 & 1) != 0) {
      uVar3 = FUN_00097ef8();
      uVar3 = FUN_00097a54(uVar3);
      IVar2 = _objc_msgSend(DAT_001006a8,"length");
      IVar2 = FUN_00097c68(uVar3,IVar2);
      IVar2 = _objc_msgSend(IVar2,"isEqualToString:",DAT_001006a8);
      if ((int)IVar2 != 0) {
        IVar2 = _objc_msgSend(param_5,"performSelector:","text");
        IVar4 = _objc_msgSend(IVar2,"length");
        if (IVar4 != 0) {
          IVar4 = _objc_msgSend(self,"config");
          local_70 = _objc_msgSend(IVar4,"valueForKey:",&cf_actionProvider);
          if (local_70 != 0) {
            local_90 = PTR___NSConcreteStackBlock_000e80d8;
            local_88 = 0xc2000000;
            local_80 = FUN_00011478;
            puStack_78 = &DAT_000e8868;
            local_68 = IVar2;
            IVar2 = _NSClassFromString(&cf_UIContextMenuConfiguration);
            IVar4 = _objc_msgSend(self,"config");
            IVar4 = _objc_msgSend(IVar4,"identifier");
            IVar5 = _objc_msgSend(self,"config");
            IVar5 = _objc_msgSend(IVar5,"previewProvider");
            IVar2 = _objc_msgSend(IVar2,
                                  "configurationWithIdentifier:previewProvider:actionProvider:",
                                  IVar4,IVar5,&local_90);
            _objc_msgSend(self,"setConfig:",IVar2);
          }
        }
      }
    }
  }
  return self;
}

