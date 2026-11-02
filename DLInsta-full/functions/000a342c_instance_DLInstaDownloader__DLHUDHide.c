/* Address: 000a342c | Name: instance_DLInstaDownloader__DLHUDHide | Body bytes: 88 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void DLInstaDownloader::instance_DLInstaDownloader__DLHUDHide(ID param_1,SEL param_2)

{
  ID self;
  
  self = instance_DLInstaDownloader__hud(param_1,"hud");
  _objc_msgSend(self,"setHidden:",1);
  instance_DLInstaDownloader__whenHideHUD(param_1,"whenHideHUD");
  return;
}

