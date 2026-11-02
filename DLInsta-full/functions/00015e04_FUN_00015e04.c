/* Address: 00015e04 | Name: FUN_00015e04 | Body bytes: 101580 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_00015e04(ID param_1)

{
  ID IVar1;
  long lVar2;
  ID IVar3;
  ID IVar4;
  undefined8 uVar5;
  cfstringStruct *local_90;
  cfstringStruct *pcStack_88;
  ID local_80;
  cfstringStruct *pcStack_78;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_000e8260;
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xea6e8,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_00016120;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"_profilePictureLongPressed:");
      goto LAB_00015f38;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("_profilePictureLongPressed:");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_00016120;
      goto code_r0x00015f40;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"_profilePictureLongPressed:");
LAB_00015f38:
    if (lVar2 == 0) {
code_r0x00015f40:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("_profilePictureLongPressed:");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInsta___DownloadProfile_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_00016120:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xea6e8,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_0001640c;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"profilePic");
      goto LAB_00016224;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("profilePic");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_0001640c;
      goto code_r0x0001622c;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"profilePic");
LAB_00016224:
    if (lVar2 == 0) {
code_r0x0001622c:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("profilePic");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInsta___DownloadProfile_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_0001640c:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xea728,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_000166f8;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"_profilePictureLongPress:");
      goto LAB_00016510;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("_profilePictureLongPress:");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_000166f8;
      goto code_r0x00016518;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"_profilePictureLongPress:");
LAB_00016510:
    if (lVar2 == 0) {
code_r0x00016518:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("_profilePictureLongPress:");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInsta___DownloadProfile_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_000166f8:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xea728,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_000169e4;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"profilePicture");
      goto LAB_000167fc;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("profilePicture");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_000169e4;
      goto code_r0x00016804;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"profilePicture");
LAB_000167fc:
    if (lVar2 == 0) {
code_r0x00016804:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("profilePicture");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInsta___DownloadProfile_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_000169e4:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xea748,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_00016cd0;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"hdProfilePicUrlInfo");
      goto LAB_00016ae8;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("hdProfilePicUrlInfo");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_00016cd0;
      goto code_r0x00016af0;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"hdProfilePicUrlInfo");
LAB_00016ae8:
    if (lVar2 == 0) {
code_r0x00016af0:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("hdProfilePicUrlInfo");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInsta___DownloadProfile_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_00016cd0:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xea748,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_00016fbc;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"followsCurrentUser");
      goto LAB_00016dd4;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("followsCurrentUser");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_00016fbc;
      goto code_r0x00016ddc;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"followsCurrentUser");
LAB_00016dd4:
    if (lVar2 == 0) {
code_r0x00016ddc:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("followsCurrentUser");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInstaAddons___ShowFollowStatus_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_00016fbc:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xea748,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_000172a8;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"followStatus");
      goto LAB_000170c0;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("followStatus");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_000172a8;
      goto code_r0x000170c8;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"followStatus");
LAB_000170c0:
    if (lVar2 == 0) {
code_r0x000170c8:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("followStatus");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInstaAddons___ShowFollowStatus_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_000172a8:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xea788,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_00017594;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"delegate");
      goto LAB_000173b0;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("delegate");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_00017594;
      goto code_r0x000173b8;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"delegate");
LAB_000173b0:
    if (lVar2 == 0) {
code_r0x000173b8:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("delegate");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInsta___DownloadImage_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_00017594:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xea7c8,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_00017880;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"post");
      goto LAB_00017698;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("post");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_00017880;
      goto code_r0x000176a0;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"post");
LAB_00017698:
    if (lVar2 == 0) {
code_r0x000176a0:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("post");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInsta___DownloadImage_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_00017880:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xea7e8,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_00017b6c;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"video");
      goto LAB_00017988;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("video");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_00017b6c;
      goto code_r0x00017990;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"video");
LAB_00017988:
    if (lVar2 == 0) {
code_r0x00017990:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("video");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInsta___DownloadVideo_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_00017b6c:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xea7e8,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_00017e58;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"photo");
      goto LAB_00017c74;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("photo");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_00017e58;
      goto code_r0x00017c7c;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"photo");
LAB_00017c74:
    if (lVar2 == 0) {
code_r0x00017c7c:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("photo");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInsta___DownloadImage_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_00017e58:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xea7e8,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_00018144;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"items");
      goto LAB_00017f60;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("items");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_00018144;
      goto code_r0x00017f68;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"items");
LAB_00017f60:
    if (lVar2 == 0) {
code_r0x00017f68:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("items");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInsta___DownloadItems_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_00018144:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xea7e8,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_00018430;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"itemMediaType");
      goto LAB_0001824c;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("itemMediaType");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_00018430;
      goto code_r0x00018254;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"itemMediaType");
LAB_0001824c:
    if (lVar2 == 0) {
code_r0x00018254:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("itemMediaType");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInsta___DownloadVideo___DownloadImage_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_00018430:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xea7e8,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_0001871c;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"likeCount");
      goto LAB_00018534;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("likeCount");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_0001871c;
      goto code_r0x0001853c;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"likeCount");
LAB_00018534:
    if (lVar2 == 0) {
code_r0x0001853c:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("likeCount");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInstaAddons___ShowLikesViewsCount_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_0001871c:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xea7e8,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_00018a08;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"viewCount");
      goto LAB_00018820;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("viewCount");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_00018a08;
      goto code_r0x00018828;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"viewCount");
LAB_00018820:
    if (lVar2 == 0) {
code_r0x00018828:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("viewCount");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInstaAddons___ShowLikesViewsCount_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_00018a08:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xea7e8,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_00018cf4;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"hasLiked");
      goto LAB_00018b0c;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("hasLiked");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_00018cf4;
      goto code_r0x00018b14;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"hasLiked");
LAB_00018b0c:
    if (lVar2 == 0) {
code_r0x00018b14:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("hasLiked");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInstaAddons___ConfirmLike_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_00018cf4:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xea7e8,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_00018fe0;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"mediaId");
      goto LAB_00018dfc;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("mediaId");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_00018fe0;
      goto code_r0x00018e04;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"mediaId");
LAB_00018dfc:
    if (lVar2 == 0) {
code_r0x00018e04:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("mediaId");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInstaAddons___Forcomparestory_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_00018fe0:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xea7e8,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_000192cc;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"isSponsored");
      goto LAB_000190e4;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("isSponsored");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_000192cc;
      goto code_r0x000190ec;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"isSponsored");
LAB_000190e4:
    if (lVar2 == 0) {
code_r0x000190ec:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("isSponsored");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInstaAddons___RemoveAds_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_000192cc:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xea7e8,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_000195b8;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"isSponsoredApp");
      goto LAB_000193d0;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("isSponsoredApp");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_000195b8;
      goto code_r0x000193d8;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"isSponsoredApp");
LAB_000193d0:
    if (lVar2 == 0) {
code_r0x000193d8:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("isSponsoredApp");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInstaAddons___RemoveAds_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_000195b8:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xea7e8,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_000198a4;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"reelMentions");
      goto LAB_000196bc;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("reelMentions");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_000198a4;
      goto code_r0x000196c4;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"reelMentions");
LAB_000196bc:
    if (lVar2 == 0) {
code_r0x000196c4:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("reelMentions");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInstaAddons___ShowUserMentions_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_000198a4:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xea908,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_00019b90;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"likeAndViewCountsDisabled");
      goto LAB_000199a8;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("likeAndViewCountsDisabled");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_00019b90;
      goto code_r0x000199b0;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"likeAndViewCountsDisabled");
LAB_000199a8:
    if (lVar2 == 0) {
code_r0x000199b0:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("likeAndViewCountsDisabled");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInstaAddons___ShowLikesCount_Views_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_00019b90:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xea948,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_00019e80;
  }
  IVar3 = _objc_msgSend(0xea4e8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4e8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"_originalImageVersions");
      goto LAB_00019c98;
    }
    IVar3 = _objc_msgSend(0xea4e8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("_originalImageVersions");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_00019e80;
      goto code_r0x00019ca0;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"_originalImageVersions");
LAB_00019c98:
    if (lVar2 == 0) {
code_r0x00019ca0:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("_originalImageVersions");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInsta___DownloadImage_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_00019e80:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xea948,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_0001a170;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"mediaID");
      goto LAB_00019f88;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("mediaID");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_0001a170;
      goto code_r0x00019f90;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"mediaID");
LAB_00019f88:
    if (lVar2 == 0) {
code_r0x00019f90:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("mediaID");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInsta___ForcheckseenStory_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_0001a170:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xea988,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_0001a45c;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"height");
      goto LAB_0001a274;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("height");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_0001a45c;
      goto code_r0x0001a27c;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"height");
LAB_0001a274:
    if (lVar2 == 0) {
code_r0x0001a27c:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("height");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInsta___DownloadImage_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_0001a45c:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xea988,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_0001a748;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"width");
      goto LAB_0001a560;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("width");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_0001a748;
      goto code_r0x0001a568;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"width");
LAB_0001a560:
    if (lVar2 == 0) {
code_r0x0001a568:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("width");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInsta___DownloadImage_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_0001a748:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xea988,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_0001aa34;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"url");
      goto LAB_0001a84c;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("url");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_0001aa34;
      goto code_r0x0001a854;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"url");
LAB_0001a84c:
    if (lVar2 == 0) {
code_r0x0001a854:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("url");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInsta___DownloadImage_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_0001aa34:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xea9a8,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_0001ad14;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"delegate");
      goto LAB_0001ab30;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("delegate");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_0001ad14;
      goto code_r0x0001ab38;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"delegate");
LAB_0001ab30:
    if (lVar2 == 0) {
code_r0x0001ab38:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("delegate");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInsta___DownloadImage_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_0001ad14:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xea9c8,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_0001b000;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"currentPageIndex");
      goto LAB_0001ae18;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("currentPageIndex");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_0001b000;
      goto code_r0x0001ae20;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"currentPageIndex");
LAB_0001ae18:
    if (lVar2 == 0) {
code_r0x0001ae20:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("currentPageIndex");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInsta___DownloadMultiableMedia_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_0001b000:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xeaa08,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_0001b2ec;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"media");
      goto LAB_0001b104;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("media");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_0001b2ec;
      goto code_r0x0001b10c;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"media");
LAB_0001b104:
    if (lVar2 == 0) {
code_r0x0001b10c:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("media");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInsta___DownloadMultiableMedia_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_0001b2ec:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xeaa08,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_0001b5cc;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"items");
      goto LAB_0001b3e8;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("items");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_0001b5cc;
      goto code_r0x0001b3f0;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"items");
LAB_0001b3e8:
    if (lVar2 == 0) {
code_r0x0001b3f0:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("items");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInsta___DownloadMultiableMedia_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_0001b5cc:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xeaa08,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_0001b8b8;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"pageCellState");
      goto LAB_0001b6d0;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("pageCellState");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_0001b8b8;
      goto code_r0x0001b6d8;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"pageCellState");
LAB_0001b6d0:
    if (lVar2 == 0) {
code_r0x0001b6d8:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("pageCellState");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInsta___DownloadMultiableMedia_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_0001b8b8:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xeaa28,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_0001bb98;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"video");
      goto LAB_0001b9b4;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("video");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_0001bb98;
      goto code_r0x0001b9bc;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"video");
LAB_0001b9b4:
    if (lVar2 == 0) {
code_r0x0001b9bc:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("video");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInsta___DownloadVideo_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_0001bb98:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xeaa28,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_0001be78;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"photo");
      goto LAB_0001bc94;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("photo");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_0001be78;
      goto code_r0x0001bc9c;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"photo");
LAB_0001bc94:
    if (lVar2 == 0) {
code_r0x0001bc9c:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("photo");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInsta___DownloadImage_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_0001be78:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xeaa28,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_0001c158;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"itemMediaType");
      goto LAB_0001bf74;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("itemMediaType");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_0001c158;
      goto code_r0x0001bf7c;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"itemMediaType");
LAB_0001bf74:
    if (lVar2 == 0) {
code_r0x0001bf7c:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("itemMediaType");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInsta___DownloadVideo___DownloadImage_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_0001c158:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xeaa48,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_0001c444;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"videoVersions");
      goto LAB_0001c25c;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("videoVersions");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_0001c444;
      goto code_r0x0001c264;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"videoVersions");
LAB_0001c25c:
    if (lVar2 == 0) {
code_r0x0001c264:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("videoVersions");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInsta___DownloadVideo_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_0001c444:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xeaa48,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_0001c724;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"mediaID");
      goto LAB_0001c540;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("mediaID");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_0001c724;
      goto code_r0x0001c548;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"mediaID");
LAB_0001c540:
    if (lVar2 == 0) {
code_r0x0001c548:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("mediaID");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInsta___Forcheckseenstory_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_0001c724:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xeaa88,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_0001ca04;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"video");
      goto LAB_0001c820;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("video");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_0001ca04;
      goto code_r0x0001c828;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"video");
LAB_0001c820:
    if (lVar2 == 0) {
code_r0x0001c828:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("video");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInsta___DownloadVideo_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_0001ca04:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xeaaa8,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_0001cce4;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"delegate");
      goto LAB_0001cb00;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("delegate");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_0001cce4;
      goto code_r0x0001cb08;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"delegate");
LAB_0001cb00:
    if (lVar2 == 0) {
code_r0x0001cb08:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("delegate");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInsta___DownloadVideo_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_0001cce4:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xeaaa8,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_0001cfd0;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"videoPlayerOverlayControllerDidDoubleTap:locationInfo:");
      goto LAB_0001cde8;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("videoPlayerOverlayControllerDidDoubleTap:locationInfo:");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_0001cfd0;
      goto code_r0x0001cdf0;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"videoPlayerOverlayControllerDidDoubleTap:locationInfo:")
    ;
LAB_0001cde8:
    if (lVar2 == 0) {
code_r0x0001cdf0:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("videoPlayerOverlayControllerDidDoubleTap:locationInfo:");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInstaAddons___ConfirmLikevideo_DoubleTap_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_0001cfd0:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xeaae8,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_0001d2c0;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"item");
      goto LAB_0001d0d4;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("item");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_0001d2c0;
      goto code_r0x0001d0dc;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"item");
LAB_0001d0d4:
    if (lVar2 == 0) {
code_r0x0001d0dc:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("item");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInsta___DownloadPhotoStory_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_0001d2c0:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xeaae8,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_0001d5a8;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"delegate");
      goto LAB_0001d3bc;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("delegate");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_0001d5a8;
      goto code_r0x0001d3c4;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"delegate");
LAB_0001d3bc:
    if (lVar2 == 0) {
code_r0x0001d3c4:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("delegate");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInsta___DownloadPhotoStory_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_0001d5a8:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xeab28,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_0001d890;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"item");
      goto LAB_0001d6a4;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("item");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_0001d890;
      goto code_r0x0001d6ac;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"item");
LAB_0001d6a4:
    if (lVar2 == 0) {
code_r0x0001d6ac:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("item");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInsta___DownloadVideoStory_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_0001d890:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xeab28,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_0001db70;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"delegate");
      goto LAB_0001d98c;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("delegate");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_0001db70;
      goto code_r0x0001d994;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"delegate");
LAB_0001d98c:
    if (lVar2 == 0) {
code_r0x0001d994:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("delegate");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInsta___DownloadVideoStory_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_0001db70:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xeab68,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_0001de5c;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"rawVideo");
      goto LAB_0001dc74;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("rawVideo");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_0001de5c;
      goto code_r0x0001dc7c;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"rawVideo");
LAB_0001dc74:
    if (lVar2 == 0) {
code_r0x0001dc7c:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("rawVideo");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInsta___DownloadStory___Private_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_0001de5c:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xeab68,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_0001e148;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"rawPhoto");
      goto LAB_0001df60;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("rawPhoto");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_0001e148;
      goto code_r0x0001df68;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"rawPhoto");
LAB_0001df60:
    if (lVar2 == 0) {
code_r0x0001df68:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("rawPhoto");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInsta___DownloadStory___Private_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_0001e148:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xeaba8,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_0001e428;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"mediaId");
      goto LAB_0001e244;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("mediaId");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_0001e428;
      goto code_r0x0001e24c;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"mediaId");
LAB_0001e244:
    if (lVar2 == 0) {
code_r0x0001e24c:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("mediaId");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInsta___ForcheckseenstoryDM_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_0001e428:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xeabe8,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_0001e714;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"didMoveToSuperview");
      goto LAB_0001e52c;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("didMoveToSuperview");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_0001e714;
      goto code_r0x0001e534;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"didMoveToSuperview");
LAB_0001e52c:
    if (lVar2 == 0) {
code_r0x0001e534:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("didMoveToSuperview");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInsta___DownloadReels_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_0001e714:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xeac28,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_0001ea00;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"currentViewCell");
      goto LAB_0001e818;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("currentViewCell");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_0001ea00;
      goto code_r0x0001e820;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"currentViewCell");
LAB_0001e818:
    if (lVar2 == 0) {
code_r0x0001e820:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("currentViewCell");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInsta___DownloadReels_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_0001ea00:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xeac48,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_0001ecf0;
  }
  IVar3 = _objc_msgSend(0xea4e8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4e8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"_media");
      goto LAB_0001eb08;
    }
    IVar3 = _objc_msgSend(0xea4e8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("_media");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_0001ecf0;
      goto code_r0x0001eb10;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"_media");
LAB_0001eb08:
    if (lVar2 == 0) {
code_r0x0001eb10:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("_media");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInsta___DownloadReels_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_0001ecf0:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xeac68,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_0001efe0;
  }
  IVar3 = _objc_msgSend(0xea4e8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4e8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"_items");
      goto LAB_0001edf8;
    }
    IVar3 = _objc_msgSend(0xea4e8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("_items");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_0001efe0;
      goto code_r0x0001ee00;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"_items");
LAB_0001edf8:
    if (lVar2 == 0) {
code_r0x0001ee00:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("_items");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInsta___DownloadReels_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_0001efe0:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xeac88,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_0001f2d0;
  }
  IVar3 = _objc_msgSend(0xea4e8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4e8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"_video");
      goto LAB_0001f0e8;
    }
    IVar3 = _objc_msgSend(0xea4e8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("_video");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_0001f2d0;
      goto code_r0x0001f0f0;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"_video");
LAB_0001f0e8:
    if (lVar2 == 0) {
code_r0x0001f0f0:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("_video");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInsta___DownloadReels_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_0001f2d0:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xeac88,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_0001f5bc;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"controlsOverlayControllerDidTapLikeButton:");
      goto LAB_0001f3d4;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("controlsOverlayControllerDidTapLikeButton:");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_0001f5bc;
      goto code_r0x0001f3dc;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"controlsOverlayControllerDidTapLikeButton:");
LAB_0001f3d4:
    if (lVar2 == 0) {
code_r0x0001f3dc:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("controlsOverlayControllerDidTapLikeButton:");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInstaAddons___ConfirmLikeReels_TapButton_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_0001f5bc:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xeacc8,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_0001f8ac;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"looping");
      goto LAB_0001f6c0;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("looping");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_0001f8ac;
      goto code_r0x0001f6c8;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"looping");
LAB_0001f6c0:
    if (lVar2 == 0) {
code_r0x0001f6c8:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("looping");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInstaAddons___Loopingvideo_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_0001f8ac:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xead08,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_0001fb94;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"looping");
      goto LAB_0001f9a8;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("looping");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_0001fb94;
      goto code_r0x0001f9b0;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"looping");
LAB_0001f9a8:
    if (lVar2 == 0) {
code_r0x0001f9b0:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("looping");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInstaAddons___Loopingvideo_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_0001fb94:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xead28,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_0001fe80;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"viewDidAppear:");
      goto LAB_0001fc98;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("viewDidAppear:");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_0001fe80;
      goto code_r0x0001fca0;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"viewDidAppear:");
LAB_0001fc98:
    if (lVar2 == 0) {
code_r0x0001fca0:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("viewDidAppear:");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInstaAddons___SeenStory_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_0001fe80:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xead68,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_00020170;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"storyPlayerMediaViewDidPlayToEnd:");
      goto LAB_0001ff88;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("storyPlayerMediaViewDidPlayToEnd:");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_00020170;
      goto code_r0x0001ff90;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"storyPlayerMediaViewDidPlayToEnd:");
LAB_0001ff88:
    if (lVar2 == 0) {
code_r0x0001ff90:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("storyPlayerMediaViewDidPlayToEnd:");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInstaAddons___SeenStory___AutoNextStory_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_00020170:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xeada8,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_0002045c;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"preferredMediaTypes");
      goto LAB_00020274;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("preferredMediaTypes");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_0002045c;
      goto code_r0x0002027c;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"preferredMediaTypes");
LAB_00020274:
    if (lVar2 == 0) {
code_r0x0002027c:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("preferredMediaTypes");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInstaAddons___SupportVideoinStickerGallery_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_0002045c:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xeade8,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_00020748;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod
                        (lVar2,
                         "initWithUserSession:broadcastId:pullInterval:networker:loggingContext:mode:surface:infoProvider:"
                        );
      goto LAB_00020560;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector
                        (
                        "initWithUserSession:broadcastId:pullInterval:networker:loggingContext:mode:surface:infoProvider:"
                        );
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_00020748;
      goto code_r0x00020568;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod
                      (lVar2,
                       "initWithUserSession:broadcastId:pullInterval:networker:loggingContext:mode:surface:infoProvider:"
                      );
LAB_00020560:
    if (lVar2 == 0) {
code_r0x00020568:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector
                (
                "initWithUserSession:broadcastId:pullInterval:networker:loggingContext:mode:surface:infoProvider:"
                );
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInstaAddons___Seenintolive_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_00020748:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xeae28,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_00020a34;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"setRightBarButtonItems:");
      goto LAB_0002084c;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("setRightBarButtonItems:");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_00020a34;
      goto code_r0x00020854;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"setRightBarButtonItems:");
LAB_0002084c:
    if (lVar2 == 0) {
code_r0x00020854:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("setRightBarButtonItems:");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInstaAddons___SeenDirectMessage_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_00020a34:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xeae68,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_00020d14;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"delegate");
      goto LAB_00020b30;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("delegate");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_00020d14;
      goto code_r0x00020b38;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"delegate");
LAB_00020b30:
    if (lVar2 == 0) {
code_r0x00020b38:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("delegate");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInstaAddons___SeenDirectMessage_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_00020d14:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xeae88,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_00021000;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"containerView");
      goto LAB_00020e18;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("containerView");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_00021000;
      goto code_r0x00020e20;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"containerView");
LAB_00020e18:
    if (lVar2 == 0) {
code_r0x00020e20:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("containerView");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInstaAddons___SeenDirectMessage_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_00021000:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xeaea8,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_000212ec;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod
                        (lVar2,
                         "initWithUserSession:threadKey:threadViewModelPipe:analyticsLogger:audioPlaybackService:audioSegmentPlaybackService:messageDataSource:messagesSortingInfoCache:messagesClientStateManager:nuxProvider:threadNavigationPerfComponents:entryPointContext:bloksXMAViewHelper:initialParams:channelsDataFetcher:"
                        );
      goto LAB_00021104;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector
                        (
                        "initWithUserSession:threadKey:threadViewModelPipe:analyticsLogger:audioPlaybackService:audioSegmentPlaybackService:messageDataSource:messagesSortingInfoCache:messagesClientStateManager:nuxProvider:threadNavigationPerfComponents:entryPointContext:bloksXMAViewHelper:initialParams:channelsDataFetcher:"
                        );
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_000212ec;
      goto code_r0x0002110c;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod
                      (lVar2,
                       "initWithUserSession:threadKey:threadViewModelPipe:analyticsLogger:audioPlaybackService:audioSegmentPlaybackService:messageDataSource:messagesSortingInfoCache:messagesClientStateManager:nuxProvider:threadNavigationPerfComponents:entryPointContext:bloksXMAViewHelper:initialParams:channelsDataFetcher:"
                      );
LAB_00021104:
    if (lVar2 == 0) {
code_r0x0002110c:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector
                (
                "initWithUserSession:threadKey:threadViewModelPipe:analyticsLogger:audioPlaybackService:audioSegmentPlaybackService:messageDataSource:messagesSortingInfoCache:messagesClientStateManager:nuxProvider:threadNavigationPerfComponents:entryPointContext:bloksXMAViewHelper:initialParams:channelsDataFetcher:"
                );
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInstaAddons___SeenDirectMessage_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_000212ec:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xeaea8,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_000215cc;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"delegate");
      goto LAB_000213e8;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("delegate");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_000215cc;
      goto code_r0x000213f0;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"delegate");
LAB_000213e8:
    if (lVar2 == 0) {
code_r0x000213f0:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("delegate");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInstaAddons___SeenDirectMessage_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_000215cc:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xeaea8,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_000218b8;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"shouldUpdateLastSeenMessage");
      goto LAB_000216d0;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("shouldUpdateLastSeenMessage");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_000218b8;
      goto code_r0x000216d8;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"shouldUpdateLastSeenMessage");
LAB_000216d0:
    if (lVar2 == 0) {
code_r0x000216d8:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("shouldUpdateLastSeenMessage");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInstaAddons___SeenDirectMessage_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_000218b8:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xeaec8,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_00021b98;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"storyPlayerMediaViewDidPlayToEnd:");
      goto LAB_000219b4;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("storyPlayerMediaViewDidPlayToEnd:");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_00021b98;
      goto code_r0x000219bc;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"storyPlayerMediaViewDidPlayToEnd:");
LAB_000219b4:
    if (lVar2 == 0) {
code_r0x000219bc:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("storyPlayerMediaViewDidPlayToEnd:");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInstaAddons___seenlivevideoorphotoinDM_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_00021b98:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xeaf08,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_00021e84;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"_applyThreadUpdates:");
      goto LAB_00021c9c;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("_applyThreadUpdates:");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_00021e84;
      goto code_r0x00021ca4;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"_applyThreadUpdates:");
LAB_00021c9c:
    if (lVar2 == 0) {
code_r0x00021ca4:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("_applyThreadUpdates:");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInstaAddons___DeletingMessage_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_00021e84:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xeaf48,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_00022174;
  }
  IVar3 = _objc_msgSend(0xea4e8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4e8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"_collectionView");
      goto LAB_00021f8c;
    }
    IVar3 = _objc_msgSend(0xea4e8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("_collectionView");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_00022174;
      goto code_r0x00021f94;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"_collectionView");
LAB_00021f8c:
    if (lVar2 == 0) {
code_r0x00021f94:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("_collectionView");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInstaAddons___DeletingMessage_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_00022174:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xeaf68,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_00022460;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod
                        (lVar2,
                         "unsendWithMessageViewModel:threadId:consistentThreadFbid:threadSubtype:audienceType:"
                        );
      goto LAB_00022278;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector
                        (
                        "unsendWithMessageViewModel:threadId:consistentThreadFbid:threadSubtype:audienceType:"
                        );
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_00022460;
      goto code_r0x00022280;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod
                      (lVar2,
                       "unsendWithMessageViewModel:threadId:consistentThreadFbid:threadSubtype:audienceType:"
                      );
LAB_00022278:
    if (lVar2 == 0) {
code_r0x00022280:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector
                (
                "unsendWithMessageViewModel:threadId:consistentThreadFbid:threadSubtype:audienceType:"
                );
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInstaAddons___DeletingMessage_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_00022460:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xeaf88,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_0002274c;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"serverId");
      goto LAB_00022564;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("serverId");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_0002274c;
      goto code_r0x0002256c;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"serverId");
LAB_00022564:
    if (lVar2 == 0) {
code_r0x0002256c:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("serverId");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInstaAddons___DeletingMessage_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_0002274c:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xeafa8,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_00022a38;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"key");
      goto LAB_00022850;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("key");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_00022a38;
      goto code_r0x00022858;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"key");
LAB_00022850:
    if (lVar2 == 0) {
code_r0x00022858:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("key");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInstaAddons___DeletingMessage_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_00022a38:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xeafc8,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_00022d24;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"messageMetadata");
      goto LAB_00022b3c;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("messageMetadata");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_00022d24;
      goto code_r0x00022b44;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"messageMetadata");
LAB_00022b3c:
    if (lVar2 == 0) {
code_r0x00022b44:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("messageMetadata");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInstaAddons___DeletingMessageText_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_00022d24:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xeb008,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_00023010;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"viewModel");
      goto LAB_00022e28;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("viewModel");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_00023010;
      goto code_r0x00022e30;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"viewModel");
LAB_00022e28:
    if (lVar2 == 0) {
code_r0x00022e30:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("viewModel");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInstaAddons___DeletingMessageText_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_00023010:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xeb028,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_000232fc;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"textView");
      goto LAB_00023114;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("textView");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_000232fc;
      goto code_r0x0002311c;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"textView");
LAB_00023114:
    if (lVar2 == 0) {
code_r0x0002311c:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("textView");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInstaAddons___DeletingMessageText_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_000232fc:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xeb048,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_000235e8;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"canPullToRefresh:threadsFilterSet:");
      goto LAB_00023400;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("canPullToRefresh:threadsFilterSet:");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_000235e8;
      goto code_r0x00023408;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"canPullToRefresh:threadsFilterSet:");
LAB_00023400:
    if (lVar2 == 0) {
code_r0x00023408:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("canPullToRefresh:threadsFilterSet:");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInstaAddons___disablerefreshmessages_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_000235e8:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xeb088,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_000238d4;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod
                        (lVar2,
                         "updateOutgoingStatusIsActive:threadKey:threadMetadata:typingStatusType:");
      goto LAB_000236ec;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector
                        ("updateOutgoingStatusIsActive:threadKey:threadMetadata:typingStatusType:");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_000238d4;
      goto code_r0x000236f4;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod
                      (lVar2,
                       "updateOutgoingStatusIsActive:threadKey:threadMetadata:typingStatusType:");
LAB_000236ec:
    if (lVar2 == 0) {
code_r0x000236f4:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector
                ("updateOutgoingStatusIsActive:threadKey:threadMetadata:typingStatusType:");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInstaAddons___TypingIndecator_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_000238d4:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xeb0c8,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_00023bc0;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod
                        (lVar2,
                         "initWithClientId:threadId:messageId:type:isE2ELoggingSampled:originalMessageClientContext:productType:"
                        );
      goto LAB_000239d8;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector
                        (
                        "initWithClientId:threadId:messageId:type:isE2ELoggingSampled:originalMessageClientContext:productType:"
                        );
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_00023bc0;
      goto code_r0x000239e0;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod
                      (lVar2,
                       "initWithClientId:threadId:messageId:type:isE2ELoggingSampled:originalMessageClientContext:productType:"
                      );
LAB_000239d8:
    if (lVar2 == 0) {
code_r0x000239e0:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector
                (
                "initWithClientId:threadId:messageId:type:isE2ELoggingSampled:originalMessageClientContext:productType:"
                );
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInstaAddons___Disablesendscreenshot_Replayedmedia_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_00023bc0:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xeae68,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_00023eac;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"setShouldBlockScreenshot:viewModel:");
      goto LAB_00023cc4;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("setShouldBlockScreenshot:viewModel:");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_00023eac;
      goto code_r0x00023ccc;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"setShouldBlockScreenshot:viewModel:");
LAB_00023cc4:
    if (lVar2 == 0) {
code_r0x00023ccc:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("setShouldBlockScreenshot:viewModel:");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInstaAddons___Disablescreenshotprotection_Direcrtmessage_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_00023eac:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xeb128,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_0002419c;
  }
  IVar3 = _objc_msgSend(0xea4e8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4e8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"_module");
      goto LAB_00023fb4;
    }
    IVar3 = _objc_msgSend(0xea4e8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("_module");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_0002419c;
      goto code_r0x00023fbc;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"_module");
LAB_00023fb4:
    if (lVar2 == 0) {
code_r0x00023fbc:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("_module");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInstaAddons___ConfirmFollowing_Unfollowing_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_0002419c:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xeb128,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_0002448c;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"user");
      goto LAB_000242a4;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("user");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_0002448c;
      goto code_r0x000242ac;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"user");
LAB_000242a4:
    if (lVar2 == 0) {
code_r0x000242ac:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("user");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInstaAddons___ConfirmFollowing_Unfollowing_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_0002448c:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xeb128,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_00024778;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"_didPressFollowButton");
      goto LAB_00024590;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("_didPressFollowButton");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_00024778;
      goto code_r0x00024598;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"_didPressFollowButton");
LAB_00024590:
    if (lVar2 == 0) {
code_r0x00024598:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("_didPressFollowButton");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInstaAddons___ConfirmFollowing_Unfollowing_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_00024778:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xeb168,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_00024a64;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"_hackilyHandleOurOwnButtonTaps:event:");
      goto LAB_0002487c;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("_hackilyHandleOurOwnButtonTaps:event:");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_00024a64;
      goto code_r0x00024884;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"_hackilyHandleOurOwnButtonTaps:event:");
LAB_0002487c:
    if (lVar2 == 0) {
code_r0x00024884:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("_hackilyHandleOurOwnButtonTaps:event:");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInstaAddons___ConfirmFollowingonReels_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_00024a64:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xea788,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_00024d50;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"_onDoubleTap:");
      goto LAB_00024b68;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("_onDoubleTap:");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_00024d50;
      goto code_r0x00024b70;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"_onDoubleTap:");
LAB_00024b68:
    if (lVar2 == 0) {
code_r0x00024b70:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("_onDoubleTap:");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInstaAddons___ConfirmLikephoto_video_DoubleTap_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_00024d50:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xeaa88,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_0002503c;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"overlayViewDidDoubleTap:");
      goto LAB_00024e54;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("overlayViewDidDoubleTap:");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_0002503c;
      goto code_r0x00024e5c;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"overlayViewDidDoubleTap:");
LAB_00024e54:
    if (lVar2 == 0) {
code_r0x00024e5c:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("overlayViewDidDoubleTap:");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInstaAddons___ConfirmLikephoto_video_DoubleTap_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_0002503c:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xeb1c8,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_0002531c;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"delegate");
      goto LAB_00025138;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("delegate");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_0002531c;
      goto code_r0x00025140;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"delegate");
LAB_00025138:
    if (lVar2 == 0) {
code_r0x00025140:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("delegate");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInstaAddons___ConfirmLikephoto_video_Button_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_0002531c:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xeb1c8,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_00025608;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"UFIButtonBarDidTapOnLike:");
      goto LAB_00025420;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("UFIButtonBarDidTapOnLike:");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_00025608;
      goto code_r0x00025428;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"UFIButtonBarDidTapOnLike:");
LAB_00025420:
    if (lVar2 == 0) {
code_r0x00025428:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("UFIButtonBarDidTapOnLike:");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInstaAddons___ConfirmLikephoto_video_Button_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_00025608:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xeb208,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_000258f4;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"_onLikeButtonPressed:");
      goto LAB_0002570c;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("_onLikeButtonPressed:");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_000258f4;
      goto code_r0x00025714;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"_onLikeButtonPressed:");
LAB_0002570c:
    if (lVar2 == 0) {
code_r0x00025714:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("_onLikeButtonPressed:");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInstaAddons___ConfirmLikephoto_video_Button_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_000258f4:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xeb228,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_00025be0;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"attributedString");
      goto LAB_000259f8;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("attributedString");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_00025be0;
      goto code_r0x00025a00;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"attributedString");
LAB_000259f8:
    if (lVar2 == 0) {
code_r0x00025a00:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("attributedString");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInstaAddons___CopyText_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_00025be0:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xeb268,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_00025ecc;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"text");
      goto LAB_00025ce4;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("text");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_00025ecc;
      goto code_r0x00025cec;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"text");
LAB_00025ce4:
    if (lVar2 == 0) {
code_r0x00025cec:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("text");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInstaAddons___CompareTextForToastView_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_00025ecc:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xeb268,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_000261b8;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"styledString");
      goto LAB_00025fd0;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("styledString");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_000261b8;
      goto code_r0x00025fd8;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"styledString");
LAB_00025fd0:
    if (lVar2 == 0) {
code_r0x00025fd8:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("styledString");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInstaAddons___CopyText_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_000261b8:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xeb268,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_000264a4;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"linkHandler");
      goto LAB_000262bc;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("linkHandler");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_000264a4;
      goto code_r0x000262c4;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"linkHandler");
LAB_000262bc:
    if (lVar2 == 0) {
code_r0x000262c4:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("linkHandler");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInstaAddons___CopyText_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_000264a4:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xeb2a8,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_00026784;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"user");
      goto LAB_000265a0;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("user");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_00026784;
      goto code_r0x000265a8;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"user");
LAB_000265a0:
    if (lVar2 == 0) {
code_r0x000265a8:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("user");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInstaAddons___ShowFollowStatus___DLShowProfileImage___DownloadImage_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_00026784:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xeb2a8,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_00026a70;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"analyticsModule");
      goto LAB_00026888;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("analyticsModule");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_00026a70;
      goto code_r0x00026890;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"analyticsModule");
LAB_00026888:
    if (lVar2 == 0) {
code_r0x00026890:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("analyticsModule");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInstaAddons___ShowFollowStatus_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_00026a70:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xeb2e8,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_00026d5c;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"initWithFrame:");
      goto LAB_00026b74;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("initWithFrame:");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_00026d5c;
      goto code_r0x00026b7c;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"initWithFrame:");
LAB_00026b74:
    if (lVar2 == 0) {
code_r0x00026b7c:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("initWithFrame:");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInstaAddons___ShowFollowStatus_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_00026d5c:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xeb308,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_00027048;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"isInDaisy");
      goto LAB_00026e60;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("isInDaisy");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_00027048;
      goto code_r0x00026e68;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"isInDaisy");
LAB_00026e60:
    if (lVar2 == 0) {
code_r0x00026e68:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("isInDaisy");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInstaAddons___ShowLikesCount_Views_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_00027048:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xeb328,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_00027338;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"objectsForListAdapter:");
      goto LAB_0002714c;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("objectsForListAdapter:");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_00027338;
      goto code_r0x00027154;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"objectsForListAdapter:");
LAB_0002714c:
    if (lVar2 == 0) {
code_r0x00027154:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("objectsForListAdapter:");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInstaAddons___RemoveAds_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_00027338:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xeb368,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_00027620;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"objectsForListAdapter:");
      goto LAB_00027434;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("objectsForListAdapter:");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_00027620;
      goto code_r0x0002743c;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"objectsForListAdapter:");
LAB_00027434:
    if (lVar2 == 0) {
code_r0x0002743c:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("objectsForListAdapter:");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInstaAddons___RemoveAds_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_00027620:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xeb388,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_0002790c;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod
                        (lVar2,
                         "initWithUserSession:storyAdsManagerDelegate:storyViewerLoggingContext:storyFullscreenSectionLoggingContext:viewController:storyViewerNavigator:"
                        );
      goto LAB_00027724;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector
                        (
                        "initWithUserSession:storyAdsManagerDelegate:storyViewerLoggingContext:storyFullscreenSectionLoggingContext:viewController:storyViewerNavigator:"
                        );
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_0002790c;
      goto code_r0x0002772c;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod
                      (lVar2,
                       "initWithUserSession:storyAdsManagerDelegate:storyViewerLoggingContext:storyFullscreenSectionLoggingContext:viewController:storyViewerNavigator:"
                      );
LAB_00027724:
    if (lVar2 == 0) {
code_r0x0002772c:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector
                (
                "initWithUserSession:storyAdsManagerDelegate:storyViewerLoggingContext:storyFullscreenSectionLoggingContext:viewController:storyViewerNavigator:"
                );
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInstaAddons___RemoveAds_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_0002790c:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xeb3a8,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_00027bf8;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"initWithUserSession:delegate:module:");
      goto LAB_00027a10;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("initWithUserSession:delegate:module:");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_00027bf8;
      goto code_r0x00027a18;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"initWithUserSession:delegate:module:");
LAB_00027a10:
    if (lVar2 == 0) {
code_r0x00027a18:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("initWithUserSession:delegate:module:");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInstaAddons___RemoveAds_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_00027bf8:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xeb3c8,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_00027ee4;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"parsedObjectFromResponse:");
      goto LAB_00027cfc;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("parsedObjectFromResponse:");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_00027ee4;
      goto code_r0x00027d04;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"parsedObjectFromResponse:");
LAB_00027cfc:
    if (lVar2 == 0) {
code_r0x00027d04:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("parsedObjectFromResponse:");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInstaAddons___RemoveAds_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_00027ee4:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xeb3c8,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_000281d0;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"initWithReelStore:adPlatformToolbox:");
      goto LAB_00027fe8;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("initWithReelStore:adPlatformToolbox:");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_000281d0;
      goto code_r0x00027ff0;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"initWithReelStore:adPlatformToolbox:");
LAB_00027fe8:
    if (lVar2 == 0) {
code_r0x00027ff0:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("initWithReelStore:adPlatformToolbox:");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInstaAddons___RemoveAds_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_000281d0:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xeb3e8,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_000284bc;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"initWithTitle:image:handler:");
      goto LAB_000282d4;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("initWithTitle:image:handler:");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_000284bc;
      goto code_r0x000282dc;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"initWithTitle:image:handler:");
LAB_000282d4:
    if (lVar2 == 0) {
code_r0x000282dc:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("initWithTitle:image:handler:");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInstaAddons___SaveRecordAudio_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_000284bc:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xeb428,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_000287a8;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"_onSideTrayButton:");
      goto LAB_000285c0;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("_onSideTrayButton:");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_000287a8;
      goto code_r0x000285c8;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"_onSideTrayButton:");
LAB_000285c0:
    if (lVar2 == 0) {
code_r0x000285c8:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("_onSideTrayButton:");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInstaSettings___Settings_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_000287a8:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xeb468,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_00028a94;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"window");
      goto LAB_000288ac;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("window");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_00028a94;
      goto code_r0x000288b4;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"window");
LAB_000288ac:
    if (lVar2 == 0) {
code_r0x000288b4:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("window");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInstaLockApp___LockApp_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_00028a94:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xeb4a8,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_00028d84;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"accessGroup");
      goto LAB_00028b98;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("accessGroup");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_00028d84;
      goto code_r0x00028ba0;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"accessGroup");
LAB_00028b98:
    if (lVar2 == 0) {
code_r0x00028ba0:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("accessGroup");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInstaLogin___Login_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_00028d84:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xeb4e8,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_0002906c;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"accessGroup");
      goto LAB_00028e80;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("accessGroup");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_0002906c;
      goto code_r0x00028e88;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"accessGroup");
LAB_00028e80:
    if (lVar2 == 0) {
code_r0x00028e88:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("accessGroup");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInstaLogin___Login_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_0002906c:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xeb508,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_00029354;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"accessGroup");
      goto LAB_00029168;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("accessGroup");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_00029354;
      goto code_r0x00029170;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"accessGroup");
LAB_00029168:
    if (lVar2 == 0) {
code_r0x00029170:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("accessGroup");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInstaLogin___Login_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_00029354:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xeb528,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_00029640;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"containerURLForSecurityApplicationGroupIdentifier:");
      goto LAB_00029458;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("containerURLForSecurityApplicationGroupIdentifier:");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_00029640;
      goto code_r0x00029460;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"containerURLForSecurityApplicationGroupIdentifier:");
LAB_00029458:
    if (lVar2 == 0) {
code_r0x00029460:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("containerURLForSecurityApplicationGroupIdentifier:");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInstaLogin___Login_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_00029640:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xeb548,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_0002992c;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"titleLabel");
      goto LAB_00029744;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("titleLabel");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_0002992c;
      goto code_r0x0002974c;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"titleLabel");
LAB_00029744:
    if (lVar2 == 0) {
code_r0x0002974c:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("titleLabel");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__Public___ForActionSheetseenStory_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_0002992c:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xeb588,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_00029c18;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod
                        (lVar2,
                         "initWithTitle:subtitle:style:handler:accessibilityIdentifier:accessibilityLabel:"
                        );
      goto LAB_00029a30;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector
                        (
                        "initWithTitle:subtitle:style:handler:accessibilityIdentifier:accessibilityLabel:"
                        );
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_00029c18;
      goto code_r0x00029a38;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod
                      (lVar2,
                       "initWithTitle:subtitle:style:handler:accessibilityIdentifier:accessibilityLabel:"
                      );
LAB_00029a30:
    if (lVar2 == 0) {
code_r0x00029a38:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector
                ("initWithTitle:subtitle:style:handler:accessibilityIdentifier:accessibilityLabel:")
      ;
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__Public___ActionSheet_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_00029c18:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xeb5c8,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_00029f08;
  }
  IVar3 = _objc_msgSend(0xea4e8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4e8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"_cancelButton");
      goto LAB_00029d20;
    }
    IVar3 = _objc_msgSend(0xea4e8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("_cancelButton");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_00029f08;
      goto code_r0x00029d28;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"_cancelButton");
LAB_00029d20:
    if (lVar2 == 0) {
code_r0x00029d28:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("_cancelButton");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__Public___ThisisjustforchangeactiontitleCanceltoarabic_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_00029f08:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xeb5c8,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_0002a1f4;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"initWithActions:");
      goto LAB_0002a00c;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("initWithActions:");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_0002a1f4;
      goto code_r0x0002a014;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"initWithActions:");
LAB_0002a00c:
    if (lVar2 == 0) {
code_r0x0002a014:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("initWithActions:");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__Public___ActionSheet_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_0002a1f4:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xeb608,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_0002a4e0;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"initWithTitle:image:style:handler:");
      goto LAB_0002a2f8;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("initWithTitle:image:style:handler:");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_0002a4e0;
      goto code_r0x0002a300;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"initWithTitle:image:style:handler:");
LAB_0002a2f8:
    if (lVar2 == 0) {
code_r0x0002a300:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("initWithTitle:image:style:handler:");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__Public___AlertView_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_0002a4e0:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xeb648,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_0002a7cc;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"init");
      goto LAB_0002a5e4;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("init");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_0002a7cc;
      goto code_r0x0002a5ec;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"init");
LAB_0002a5e4:
    if (lVar2 == 0) {
code_r0x0002a5ec:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("init");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__Public___AlertView_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_0002a7cc:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xeb668,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_0002aab8;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod
                        (lVar2,
                         "initWithStyle:titleText:descriptionText:actions:showHorizontalButtons:");
      goto LAB_0002a8d0;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector
                        ("initWithStyle:titleText:descriptionText:actions:showHorizontalButtons:");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_0002aab8;
      goto code_r0x0002a8d8;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod
                      (lVar2,
                       "initWithStyle:titleText:descriptionText:actions:showHorizontalButtons:");
LAB_0002a8d0:
    if (lVar2 == 0) {
code_r0x0002a8d8:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector
                ("initWithStyle:titleText:descriptionText:actions:showHorizontalButtons:");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__Public___AlertView_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_0002aab8:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xeb668,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_0002ada4;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"show");
      goto LAB_0002abbc;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("show");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_0002ada4;
      goto code_r0x0002abc4;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"show");
LAB_0002abbc:
    if (lVar2 == 0) {
code_r0x0002abc4:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("show");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__Public___AlertView_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_0002ada4:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xeaa48,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_0002b090;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"videoDuration");
      goto LAB_0002aea8;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("videoDuration");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_0002b090;
      goto code_r0x0002aeb0;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"videoDuration");
LAB_0002aea8:
    if (lVar2 == 0) {
code_r0x0002aeb0:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("videoDuration");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInsta___ForDownloadAllStories_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_0002b090:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xeb6a8,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_0002b37c;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"timeIntervalSince1970");
      goto LAB_0002b194;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("timeIntervalSince1970");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_0002b37c;
      goto code_r0x0002b19c;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"timeIntervalSince1970");
LAB_0002b194:
    if (lVar2 == 0) {
code_r0x0002b19c:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("timeIntervalSince1970");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInsta___ForDownloadAllStories_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_0002b37c:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xea7e8,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_0002b668;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"takenAtDate");
      goto LAB_0002b480;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("takenAtDate");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_0002b668;
      goto code_r0x0002b488;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"takenAtDate");
LAB_0002b480:
    if (lVar2 == 0) {
code_r0x0002b488:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("takenAtDate");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInsta___ForDownloadAllStories_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_0002b668:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xead28,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_0002b954;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"currentViewModel");
      goto LAB_0002b76c;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("currentViewModel");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_0002b954;
      goto code_r0x0002b774;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"currentViewModel");
LAB_0002b76c:
    if (lVar2 == 0) {
code_r0x0002b774:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("currentViewModel");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInsta___ForDownloadAllStories_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_0002b954:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xeb6c8,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
    goto LAB_0002bc34;
  }
  IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 != 0) {
      lVar2 = _class_getClassMethod(lVar2,"items");
      goto LAB_0002ba50;
    }
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
    if ((int)IVar3 != 0) {
      uVar5 = _NSStringFromSelector("items");
      IVar3 = _objc_retainAutorelease(uVar5);
      IVar3 = _objc_msgSend(IVar3,"UTF8String");
      lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      if (lVar2 != 0) goto LAB_0002bc34;
      goto code_r0x0002ba58;
    }
  }
  else {
    lVar2 = _class_getInstanceMethod(lVar2,"items");
LAB_0002ba50:
    if (lVar2 == 0) {
code_r0x0002ba58:
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector("items");
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLInsta___ForDownloadAllStories_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_0002bc34:
  IVar1 = _objc_msgSend(param_1,"classDict");
  _objc_msgSend(0xeb6e8,"UTF8String");
  lVar2 = _objc_getClass();
  if (lVar2 == 0) {
    IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
    _objc_msgSend(IVar1,"setObject:forKey:",*(undefined8 *)PTR____NSDictionary0___000e8248,IVar3);
  }
  else {
    IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
    if ((int)IVar3 == 0) {
      IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf__);
      if ((int)IVar3 == 0) {
        IVar3 = _objc_msgSend(0xea4a8,"isEqualToString:",&cf_ivar);
        if ((int)IVar3 == 0) goto LAB_0002bf24;
        uVar5 = _NSStringFromSelector
                          (
                          "initWithMenuConfiguration:launcherSet:contentContainer:messageContentView:contentAccessoryFrame:unmanagedHeaderSize:horizontalAlignment:addContentShadow:shouldAllowTapActionOnLongPress:prioritizeContextMenuAbove:shouldBlockMessageListUpdates:allowScalingContent:accessibilityEscapeBlock:menuHeaderText:menuHeaderElement:additionalBottomPadding:multiReactView:multiReactPaddingRight:showEmojiModerationNux:coreImageContext:"
                          );
        IVar3 = _objc_retainAutorelease(uVar5);
        IVar3 = _objc_msgSend(IVar3,"UTF8String");
        lVar2 = _class_getInstanceVariable(lVar2,IVar3);
      }
      else {
        lVar2 = _class_getClassMethod
                          (lVar2,
                           "initWithMenuConfiguration:launcherSet:contentContainer:messageContentView:contentAccessoryFrame:unmanagedHeaderSize:horizontalAlignment:addContentShadow:shouldAllowTapActionOnLongPress:prioritizeContextMenuAbove:shouldBlockMessageListUpdates:allowScalingContent:accessibilityEscapeBlock:menuHeaderText:menuHeaderElement:additionalBottomPadding:multiReactView:multiReactPaddingRight:showEmojiModerationNux:coreImageContext:"
                          );
      }
    }
    else {
      lVar2 = _class_getInstanceMethod
                        (lVar2,
                         "initWithMenuConfiguration:launcherSet:contentContainer:messageContentView:contentAccessoryFrame:unmanagedHeaderSize:horizontalAlignment:addContentShadow:shouldAllowTapActionOnLongPress:prioritizeContextMenuAbove:shouldBlockMessageListUpdates:allowScalingContent:accessibilityEscapeBlock:menuHeaderText:menuHeaderElement:additionalBottomPadding:multiReactView:multiReactPaddingRight:showEmojiModerationNux:coreImageContext:"
                        );
    }
    if (lVar2 == 0) {
      IVar3 = _objc_msgSend(IVar1,"mutableCopy");
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",IVar4);
      IVar3 = _objc_msgSend(IVar3,"objectForKeyedSubscript:",&cf_property);
      IVar4 = _objc_msgSend(IVar3,"mutableCopy");
      IVar3 = *(ID *)PTR____NSArray0___000e8240;
      if (IVar4 != 0) {
        IVar3 = IVar4;
      }
      IVar3 = _objc_msgSend(IVar3,"mutableCopy");
      _NSStringFromSelector
                (
                "initWithMenuConfiguration:launcherSet:contentContainer:messageContentView:contentAccessoryFrame:unmanagedHeaderSize:horizontalAlignment:addContentShadow:shouldAllowTapActionOnLongPress:prioritizeContextMenuAbove:shouldBlockMessageListUpdates:allowScalingContent:accessibilityEscapeBlock:menuHeaderText:menuHeaderElement:additionalBottomPadding:multiReactView:multiReactPaddingRight:showEmojiModerationNux:coreImageContext:"
                );
      IVar4 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___M___);
      _objc_msgSend(IVar3,"addObject:",IVar4);
      local_90 = &cf_property;
      pcStack_88 = &cf_info;
      pcStack_78 = &cf__DLDirectMessage___DownloadVoice_;
      local_80 = IVar3;
      IVar3 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_80,&local_90,2);
      IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_C);
      _objc_msgSend(IVar1,"setObject:forKey:",IVar3,IVar4);
    }
  }
LAB_0002bf24:
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}

