/* Address: 0008ce9c | Name: FUN_0008ce9c | Body bytes: 592 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_0008ce9c(undefined8 param_1,ID param_2)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  
  IVar1 = _NSHomeDirectory();
  IVar1 = _objc_msgSend(IVar1,"stringByAppendingPathComponent:",&cf_Documents);
  IVar1 = _objc_msgSend(IVar1,"stringByAppendingPathComponent:",&cf_DLLog);
  IVar2 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
  IVar2 = NSFileManager::fileExistsAtPath_(IVar2,"fileExistsAtPath:",IVar1);
  if ((IVar2 & 1) == 0) {
    IVar2 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
    NSFileManager::createDirectoryAtPath_withIntermediateDirectories_attributes_error_
              (IVar2,"createDirectoryAtPath:withIntermediateDirectories:attributes:error:",IVar1,0,0
               ,0);
  }
  IVar2 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf____txt);
  IVar1 = _objc_msgSend(IVar1,"stringByAppendingPathComponent:",IVar2);
  IVar2 = _objc_alloc(&_OBJC_CLASS___NSOutputStream);
  IVar1 = NSOutputStream::initToFileAtPath_append_(IVar2,"initToFileAtPath:append:",IVar1,1);
  NSOutputStream::open(IVar1,"open");
  IVar2 = _objc_msgSend(param_2,"dataUsingEncoding:",4);
  IVar2 = _objc_retainAutorelease(IVar2);
  IVar3 = _objc_msgSend(IVar2,"bytes");
  IVar2 = _objc_msgSend(IVar2,"length");
  NSOutputStream::write_maxLength_(IVar1,"write:maxLength:",IVar3,IVar2);
  NSOutputStream::close(IVar1,"close");
  return 0;
}

