/* Address: 000a35dc | Name: instance_DLInstaDownloader__removeViewAndHideHUD | Body bytes: 144 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void DLInstaDownloader::instance_DLInstaDownloader__removeViewAndHideHUD(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = instance_DLInstaDownloader__minimizeView(param_1,"minimizeView");
  _objc_msgSend(IVar1,"setHidden:",1);
  IVar1 = instance_DLInstaDownloader__minimizeView(param_1,"minimizeView");
  _objc_msgSend(IVar1,"removeFromSuperview");
  instance_DLInstaDownloader__hideHUDIfNeeded(param_1,"hideHUDIfNeeded");
  return;
}

