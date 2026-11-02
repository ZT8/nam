/* Address: 000a093c | Name: FUN_000a093c | Body bytes: 144 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_000a093c(long param_1,ID param_2)

{
  ID IVar1;
  
  IVar1 = _objc_msgSend(*(ID *)(param_1 + 0x20),"status");
  if (IVar1 == 3) {
    IVar1 = _objc_msgSend(param_2,"outputURL");
    DLSaveMedia::class_DLSaveMedia__saveMediaOnCamera_mediaType_
              ((ID)&objc::class_t::DLSaveMedia,"saveMediaOnCamera:mediaType:",IVar1,2);
  }
  return 0;
}

