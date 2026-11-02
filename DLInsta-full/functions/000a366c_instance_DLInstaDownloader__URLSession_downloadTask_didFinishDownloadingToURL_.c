/* Address: 000a366c | Name: instance_DLInstaDownloader__URLSession_downloadTask_didFinishDownloadingToURL_ | Body bytes: 380 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x28 bytes */

void DLInstaDownloader::
     instance_DLInstaDownloader__URLSession_downloadTask_didFinishDownloadingToURL_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  undefined *puVar1;
  ID self;
  ID IVar2;
  undefined *local_78;
  undefined8 local_70;
  code *local_68;
  undefined *puStack_60;
  ID local_58;
  ID IStack_50;
  ID local_48;
  
  self = NSData::dataWithContentsOfURL_((ID)&_OBJC_CLASS___NSData,"dataWithContentsOfURL:",param_5);
  instance_DLInstaDownloader__mediaType(param_1,"mediaType");
  class_DLInstaDownloader__documentsDirectoryPath
            ((ID)&objc::class_t::DLInstaDownloader,"documentsDirectoryPath");
  IVar2 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf______);
  NSData::writeToFile_atomically_(self,"writeToFile:atomically:",IVar2,1);
  puVar1 = PTR___dispatch_main_q_000e8268;
  _objc_retainAutorelease(PTR___dispatch_main_q_000e8268);
  local_78 = PTR___NSConcreteStackBlock_000e80d8;
  local_70 = 0xc2000000;
  local_68 = FUN_000a37e8;
  puStack_60 = &DAT_000e9a38;
  local_58 = self;
  IStack_50 = param_1;
  local_48 = IVar2;
  _dispatch_async(puVar1,&local_78);
  return;
}

