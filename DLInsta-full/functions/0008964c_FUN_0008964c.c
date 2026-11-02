/* Address: 0008964c | Name: FUN_0008964c | Body bytes: 572 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

cfstringStruct * FUN_0008964c(void)

{
  cfstringStruct *pcVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  
  IVar2 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle,"mainBundle");
  IVar2 = NSBundle::objectForInfoDictionaryKey_
                    (IVar2,"objectForInfoDictionaryKey:",&cf_CFBundleExecutable);
  IVar3 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle,"mainBundle");
  IVar3 = NSBundle::objectForInfoDictionaryKey_
                    (IVar3,"objectForInfoDictionaryKey:",&cf_CFBundleDisplayName);
  IVar4 = NSBundle::isEqualToString_(IVar2,"isEqualToString:",&cf_YouTube);
  if ((((IVar4 & 1) != 0) ||
      (IVar4 = NSBundle::isEqualToString_(IVar3,"isEqualToString:",&cf_YouTube), (IVar4 & 1) != 0))
     || (IVar4 = NSBundle::containsString_(IVar3,"containsString:",&cf_YouTube), (IVar4 & 1) != 0))
  {
    return &cf_DLTube;
  }
  IVar4 = NSBundle::isEqualToString_(IVar2,"isEqualToString:",&cf_Twitter);
  if ((((IVar4 & 1) != 0) ||
      (IVar4 = NSBundle::isEqualToString_(IVar3,"isEqualToString:",&cf_Twitter), (IVar4 & 1) != 0))
     || (IVar4 = NSBundle::containsString_(IVar3,"containsString:",&cf_Twitter), (IVar4 & 1) != 0))
  {
    return &cf_DLTwitter;
  }
  IVar4 = NSBundle::isEqualToString_(IVar2,"isEqualToString:",&cf_Instagram);
  if ((((IVar4 & 1) != 0) ||
      (IVar4 = NSBundle::isEqualToString_(IVar3,"isEqualToString:",&cf_Instagram), (IVar4 & 1) != 0)
      ) || (IVar4 = NSBundle::containsString_(IVar3,"containsString:",&cf_Instagram),
           (IVar4 & 1) != 0)) {
    return &cf_DLInsta;
  }
  IVar2 = NSBundle::isEqualToString_(IVar2,"isEqualToString:",&cf_TikTok);
  if ((IVar2 & 1) != 0) {
    return &cf_DLTikTok;
  }
  IVar2 = NSBundle::isEqualToString_(IVar3,"isEqualToString:",&cf_TikTok);
  if ((IVar2 & 1) != 0) {
    return &cf_DLTikTok;
  }
  IVar2 = NSBundle::containsString_(IVar3,"containsString:",&cf_TikTok);
  pcVar1 = &cf_DLTikTok;
  if ((int)IVar2 == 0) {
    pcVar1 = &cf_DL;
  }
  return pcVar1;
}

