/* Address: 000a33c4 | Name: instance_DLInstaDownloader__cancel | Body bytes: 104 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void DLInstaDownloader::instance_DLInstaDownloader__cancel(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = instance_DLInstaDownloader__task(param_1,"task");
  instance_DLInstaDownloader__cancel(IVar1,"cancel");
  instance_DLInstaDownloader__setTask_(param_1,"setTask:",0);
  instance_DLInstaDownloader__removeViewAndHideHUD(param_1,"removeViewAndHideHUD");
  return;
}

