/* Address: 0007add8 | Name: FUN_0007add8 | Body bytes: 132 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_0007add8(ID param_1)

{
  ID IVar1;
  
  IVar1 = _objc_msgSend(param_1,"checkResourceIsReachableAndReturnError:",0);
  if ((IVar1 & 1) == 0) {
    IVar1 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
    NSFileManager::createDirectoryAtURL_withIntermediateDirectories_attributes_error_
              (IVar1,"createDirectoryAtURL:withIntermediateDirectories:attributes:error:",param_1,1,
               0,0);
  }
  return 0;
}

