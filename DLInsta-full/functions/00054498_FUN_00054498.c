/* Address: 00054498 | Name: FUN_00054498 | Body bytes: 136 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_00054498(long param_1)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = _objc_alloc(&objc::class_t::DLInstaDownloader);
  IVar1 = _objc_msgSend(IVar1,"init");
  IVar2 = _objc_msgSend(*(ID *)(param_1 + 0x20),"objectForKeyedSubscript:",&cf_url);
  DLInstaDownloader::instance_DLInstaDownloader__downloadMediaURLString_mediaType_
            (IVar1,"downloadMediaURLString:mediaType:",IVar2,2);
  return 0;
}

