/* Address: 000a3c8c | Name: class_DLInstaDownloader__downloadMedia_filePath_completion_ | Body bytes: 264 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x28 bytes */

void DLInstaDownloader::class_DLInstaDownloader__downloadMedia_filePath_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,undefined4 param_6)

{
  dispatch_queue_t pdVar1;
  undefined *local_68;
  undefined8 local_60;
  code *local_58;
  undefined *puStack_50;
  ID local_48;
  ID local_40;
  ID local_38;
  
  pdVar1 = _dispatch_get_global_queue(0,0);
  local_68 = PTR___NSConcreteStackBlock_000e80d8;
  local_60 = 0xc2000000;
  local_58 = FUN_000a3d94;
  puStack_50 = &DAT_000e9a98;
  local_48 = param_3;
  local_40 = param_4;
  local_38 = param_5;
  _dispatch_async(pdVar1,&local_68);
  return;
}

