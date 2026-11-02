/* Address: 000a52d0 | Name: class_DLSaveMedia__clearCacheIfNeeded | Body bytes: 328 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void DLSaveMedia::class_DLSaveMedia__clearCacheIfNeeded(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  
  IVar1 = _NSSearchPathForDirectoriesInDomains(9,1,1);
  IVar1 = _objc_msgSend(IVar1,"objectAtIndex:",0);
  IVar2 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
  IVar3 = _objc_msgSend(IVar1,"stringByAppendingPathComponent:",&cf_DLVideo_mp4);
  NSFileManager::removeItemAtPath_error_(IVar2,"removeItemAtPath:error:",IVar3,0);
  IVar2 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
  IVar1 = _objc_msgSend(IVar1,"stringByAppendingPathComponent:",&cf_DLImage_jpg);
  NSFileManager::removeItemAtPath_error_(IVar2,"removeItemAtPath:error:",IVar1,0);
  return;
}

