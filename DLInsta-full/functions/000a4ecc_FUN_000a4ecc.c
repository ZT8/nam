/* Address: 000a4ecc | Name: FUN_000a4ecc | Body bytes: 84 */

void FUN_000a4ecc(undefined8 param_1,int param_2)

{
  if (param_2 == 0) {
    DLSaveMedia::class_DLSaveMedia__showHUDInThreadWithState_
              ((ID)&objc::class_t::DLSaveMedia,"showHUDInThreadWithState:",4);
    return;
  }
  DLSaveMedia::class_DLSaveMedia__showHUDInThreadWithState_
            ((ID)&objc::class_t::DLSaveMedia,"showHUDInThreadWithState:",1);
  DLSaveMedia::class_DLSaveMedia__clearCacheIfNeeded
            ((ID)&objc::class_t::DLSaveMedia,"clearCacheIfNeeded");
  return;
}

