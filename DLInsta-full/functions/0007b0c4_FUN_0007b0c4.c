/* Address: 0007b0c4 | Name: FUN_0007b0c4 | Body bytes: 456 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID FUN_0007b0c4(void)

{
  ID self;
  ID IVar1;
  ID IVar2;
  
  self = _objc_msgSend(_dl_fakeGroupContainerURL,"URLByAppendingPathComponent:");
  IVar1 = _objc_msgSend(self,"checkResourceIsReachableAndReturnError:",0);
  if ((IVar1 & 1) == 0) {
    IVar1 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
    NSFileManager::createDirectoryAtURL_withIntermediateDirectories_attributes_error_
              (IVar1,"createDirectoryAtURL:withIntermediateDirectories:attributes:error:",self,1,0,0
              );
  }
  IVar1 = _objc_msgSend(self,"URLByAppendingPathComponent:",&cf_Library);
  IVar2 = _objc_msgSend(IVar1,"checkResourceIsReachableAndReturnError:",0);
  if ((IVar2 & 1) == 0) {
    IVar2 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
    NSFileManager::createDirectoryAtURL_withIntermediateDirectories_attributes_error_
              (IVar2,"createDirectoryAtURL:withIntermediateDirectories:attributes:error:",IVar1,1,0,
               0);
  }
  IVar1 = _objc_msgSend(self,"URLByAppendingPathComponent:",&cf_Library_Caches);
  IVar2 = _objc_msgSend(IVar1,"checkResourceIsReachableAndReturnError:",0);
  if ((IVar2 & 1) == 0) {
    IVar2 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
    NSFileManager::createDirectoryAtURL_withIntermediateDirectories_attributes_error_
              (IVar2,"createDirectoryAtURL:withIntermediateDirectories:attributes:error:",IVar1,1,0,
               0);
  }
  return self;
}

