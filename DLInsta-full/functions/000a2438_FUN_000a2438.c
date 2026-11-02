/* Address: 000a2438 | Name: FUN_000a2438 | Body bytes: 164 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_000a2438(long param_1)

{
  ID IVar1;
  
  if (*(char *)(param_1 + 0x30) == '\0') {
    _objc_msgSend(*(ID *)(param_1 + 0x20),"removeViewAndHideHUD");
    DLHelper::class_DLHelper__HUDWithState_((ID)&objc::class_t::DLHelper,"HUDWithState:",1);
  }
  else {
    IVar1 = _objc_msgSend(*(ID *)(param_1 + 0x20),"hud");
    DLDownloadManager::class_DLDownloadManager__mergeVideosAsOneVideoWithHud_
              ((ID)&objc::class_t::DLDownloadManager,"mergeVideosAsOneVideoWithHud:",IVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x000a24d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),1);
  return;
}

