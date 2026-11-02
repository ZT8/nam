/* Address: 000a5418 | Name: instance_DLInfoSheetViewController__initWithTitle_info_ | Body bytes: 180 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

ID DLInfoSheetViewController::instance_DLInfoSheetViewController__initWithTitle_info_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  ID local_50;
  class_t *pcStack_48;
  
  pcStack_48 = &objc::class_t::DLInfoSheetViewController;
  local_50 = param_1;
  IVar1 = UIViewController::init((ID)&local_50,"init");
  if (IVar1 != 0) {
    *(ID *)(IVar1 + (long)_titleInfo) = param_3;
    *(ID *)(IVar1 + (long)_info) = param_4;
  }
  return IVar1;
}

