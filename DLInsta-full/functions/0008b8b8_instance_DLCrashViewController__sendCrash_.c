/* Address: 0008b8b8 | Name: instance_DLCrashViewController__sendCrash_ | Body bytes: 1268 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void DLCrashViewController::instance_DLCrashViewController__sendCrash_
               (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  cfstringStruct *self;
  
  IVar1 = _objc_alloc(&_OBJC_CLASS___MFMailComposeViewController);
  IVar1 = MFMailComposeViewController::init(IVar1,"init");
  MFMailComposeViewController::setMailComposeDelegate_(IVar1,"setMailComposeDelegate:",param_1);
  instance_DLCrashViewController__appName(param_1,"appName");
  instance_DLCrashViewController__appVersion(param_1,"appVersion");
  IVar2 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf__);
  MFMailComposeViewController::setSubject_(IVar1,"setSubject:",IVar2);
  IVar2 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle,"mainBundle");
  IVar2 = NSBundle::objectForInfoDictionaryKey_
                    (IVar2,"objectForInfoDictionaryKey:",&cf_CFBundleExecutable);
  IVar3 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle,"mainBundle");
  IVar3 = NSBundle::objectForInfoDictionaryKey_
                    (IVar3,"objectForInfoDictionaryKey:",&cf_CFBundleDisplayName);
  IVar4 = NSBundle::isEqualToString_(IVar2,"isEqualToString:",&cf_YouTube);
  if ((((IVar4 & 1) == 0) &&
      (IVar4 = NSBundle::isEqualToString_(IVar3,"isEqualToString:",&cf_YouTube), (IVar4 & 1) == 0))
     && (IVar4 = NSBundle::containsString_(IVar3,"containsString:",&cf_YouTube), (IVar4 & 1) == 0))
  {
    IVar4 = NSBundle::isEqualToString_(IVar2,"isEqualToString:",&cf_Twitter);
    if ((((IVar4 & 1) == 0) &&
        (IVar4 = NSBundle::isEqualToString_(IVar3,"isEqualToString:",&cf_Twitter), (IVar4 & 1) == 0)
        ) && (IVar4 = NSBundle::containsString_(IVar3,"containsString:",&cf_Twitter),
             (IVar4 & 1) == 0)) {
      IVar4 = NSBundle::isEqualToString_(IVar2,"isEqualToString:",&cf_Instagram);
      if ((((IVar4 & 1) == 0) &&
          (IVar4 = NSBundle::isEqualToString_(IVar3,"isEqualToString:",&cf_Instagram),
          (IVar4 & 1) == 0)) &&
         (IVar4 = NSBundle::containsString_(IVar3,"containsString:",&cf_Instagram), (IVar4 & 1) == 0
         )) {
        IVar2 = NSBundle::isEqualToString_(IVar2,"isEqualToString:",&cf_TikTok);
        if ((IVar2 & 1) == 0) {
          IVar2 = NSBundle::isEqualToString_(IVar3,"isEqualToString:",&cf_TikTok);
          self = &cf_DLTikTok;
          if ((IVar2 & 1) == 0) {
            IVar2 = NSBundle::containsString_(IVar3,"containsString:",&cf_TikTok);
            self = &cf_DLTikTok;
            if ((int)IVar2 == 0) {
              self = &cf_DL;
            }
          }
        }
        else {
          self = &cf_DLTikTok;
        }
      }
      else {
        self = &cf_DLInsta;
      }
    }
    else {
      self = &cf_DLTwitter;
    }
  }
  else {
    self = &cf_DLTube;
  }
  _objc_msgSend((ID)self,"stringByAppendingFormat:",&cf___);
  IVar2 = UIDevice::currentDevice((ID)&_OBJC_CLASS___UIDevice,"currentDevice");
  UIDevice::systemVersion(IVar2,"systemVersion");
  IVar2 = instance_DLCrashViewController__infoDict(param_1,"infoDict");
  _objc_msgSend(IVar2,"objectForKeyedSubscript:",&cf_reason);
  IVar2 = instance_DLCrashViewController__infoDict(param_1,"infoDict");
  _objc_msgSend(IVar2,"objectForKeyedSubscript:",&cf_more_info);
  IVar2 = NSString::stringWithFormat_
                    ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",
                     &cf_Tweak___iOS___Reason___More___);
  MFMailComposeViewController::setMessageBody_isHTML_(IVar1,"setMessageBody:isHTML:",IVar2,0);
  IVar2 = NSArray::arrayWithObject_
                    ((ID)&_OBJC_CLASS___NSArray,"arrayWithObject:",&cf_prooxy0_gmail_com);
  MFMailComposeViewController::setToRecipients_(IVar1,"setToRecipients:",IVar2);
  _objc_msgSend(param_1,"presentViewController:animated:completion:",IVar1,1,0);
  return;
}

