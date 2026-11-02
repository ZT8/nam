/* Address: 000a120c | Name: class_DLDownloadManager__multiMediaPath | Body bytes: 316 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID DLDownloadManager::class_DLDownloadManager__multiMediaPath(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  undefined8 local_58;
  
  IVar1 = _NSSearchPathForDirectoriesInDomains(9,1,1);
  IVar1 = _objc_msgSend(IVar1,"objectAtIndex:",0);
  IVar1 = _objc_msgSend(IVar1,"stringByAppendingPathComponent:",&cf_DLInstaMultiMedia);
  IVar2 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
  IVar2 = NSFileManager::fileExistsAtPath_(IVar2,"fileExistsAtPath:",IVar1);
  if ((IVar2 & 1) == 0) {
    IVar2 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
    local_58 = 0;
    NSFileManager::createDirectoryAtPath_withIntermediateDirectories_attributes_error_
              (IVar2,"createDirectoryAtPath:withIntermediateDirectories:attributes:error:",IVar1,0,0
               ,&local_58);
  }
  return IVar1;
}

