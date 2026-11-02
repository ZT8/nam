/* Address: 00053c98 | Name: FUN_00053c98 | Body bytes: 176 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_00053c98(long param_1)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = _objc_alloc(&objc::class_t::DLInstaDownloader);
  IVar1 = _objc_msgSend(IVar1,"init");
  IVar2 = _objc_msgSend(*(ID *)(param_1 + 0x20),"valueForKey:",&cf__url);
  IVar2 = _objc_msgSend(IVar2,"absoluteString");
  DLInstaDownloader::instance_DLInstaDownloader__downloadMediaURLString_mediaType_
            (IVar1,"downloadMediaURLString:mediaType:",IVar2,1);
  return 0;
}

