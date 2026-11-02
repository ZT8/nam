/* Address: 000b6618 | Name: FUN_000b6618 | Body bytes: 256 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_000b6618(long param_1,ID param_2)

{
  ID IVar1;
  
  IVar1 = _objc_msgSend(param_2,"objectForKeyedSubscript:",&cf_user);
  IVar1 = _objc_msgSend(IVar1,"objectForKeyedSubscript:",&cf_hd_profile_pic_url_info);
  IVar1 = _objc_msgSend(IVar1,"objectForKeyedSubscript:",&cf_url);
  IVar1 = NSURL::URLWithString_((ID)&_OBJC_CLASS___NSURL,"URLWithString:",IVar1);
  _objc_msgSend(*(ID *)(param_1 + 0x20),"setHDProfilePicURL:",IVar1);
  _objc_msgSend(*(ID *)(param_1 + 0x20),"prepareImageToDownload");
  return 0;
}

