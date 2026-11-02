/* Address: 000a0f60 | Name: class_DLDownloadManager__allMultiMediaFiles | Body bytes: 152 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID DLDownloadManager::class_DLDownloadManager__allMultiMediaFiles(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
  IVar2 = class_DLDownloadManager__multiMediaPath(param_1,"multiMediaPath");
  IVar1 = NSFileManager::contentsOfDirectoryAtPath_error_
                    (IVar1,"contentsOfDirectoryAtPath:error:",IVar2,0);
  return IVar1;
}

