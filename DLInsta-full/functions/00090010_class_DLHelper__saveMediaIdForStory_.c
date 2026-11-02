/* Address: 00090010 | Name: class_DLHelper__saveMediaIdForStory_ | Body bytes: 672 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void DLHelper::class_DLHelper__saveMediaIdForStory_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  
  IVar1 = _NSSearchPathForDirectoriesInDomains(9,1,1);
  IVar1 = _objc_msgSend(IVar1,"objectAtIndex:",0);
  IVar2 = _objc_msgSend(IVar1,"stringByAppendingPathComponent:",&cf_story_seen_media_id_plist);
  IVar3 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
  IVar4 = NSFileManager::fileExistsAtPath_(IVar3,"fileExistsAtPath:",IVar2);
  if ((IVar4 & 1) == 0) {
    IVar2 = NSString::stringWithFormat_
                      ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_story_seen_media_id_plist
                      );
    IVar2 = _objc_msgSend(IVar1,"stringByAppendingPathComponent:",IVar2);
  }
  IVar1 = NSFileManager::fileExistsAtPath_(IVar3,"fileExistsAtPath:",IVar2);
  IVar3 = _objc_alloc(&_OBJC_CLASS___NSMutableDictionary);
  if ((int)IVar1 == 0) {
    IVar1 = NSMutableDictionary::init(IVar3,"init");
  }
  else {
    IVar1 = NSMutableDictionary::initWithContentsOfFile_(IVar3,"initWithContentsOfFile:",IVar2);
  }
  IVar3 = NSMutableDictionary::objectForKey_(IVar1,"objectForKey:",&cf_media_ids);
  if (IVar3 == 0) {
    IVar3 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
    IVar3 = NSMutableArray::init(IVar3,"init");
    NSMutableArray::addObject_(IVar3,"addObject:",param_3);
    NSMutableDictionary::setObject_forKey_(IVar1,"setObject:forKey:",IVar3,&cf_media_ids);
  }
  else {
    IVar3 = NSMutableDictionary::objectForKey_(IVar1,"objectForKey:",&cf_media_ids);
    IVar3 = NSMutableDictionary::mutableCopy(IVar3,"mutableCopy");
    NSMutableDictionary::addObject_(IVar3,"addObject:",param_3);
    NSMutableDictionary::setObject_forKey_(IVar1,"setObject:forKey:",IVar3,&cf_media_ids);
  }
  NSMutableDictionary::writeToFile_atomically_(IVar1,"writeToFile:atomically:",IVar2,1);
  return;
}

