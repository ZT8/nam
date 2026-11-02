/* Address: 00066080 | Name: FUN_00066080 | Body bytes: 860 */

void FUN_00066080(void)

{
  undefined8 uVar1;
  undefined4 local_448;
  undefined1 local_444;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_000e8260;
  uVar1 = _objc_getClass("IGFeedPhotoView");
  DAT_000fff18 = _class_getSuperclass();
  FUN_000663dc(uVar1,"initWithFrame:",FUN_000664cc,&DAT_000fff20);
  local_448 = 0x403a4076;
  local_444 = 0;
  _class_addMethod(uVar1,"dl_longPress:",FUN_000665f4,&local_448);
  uVar1 = _objc_getClass("IGFeedItemVideoView");
  DAT_000fff28 = _class_getSuperclass();
  FUN_000663dc(uVar1,"initWithFrame:",FUN_00066ecc,&DAT_000fff30);
  local_448 = 0x403a4076;
  local_444 = 0;
  _class_addMethod(uVar1,"dl_longPress:",FUN_00066ff4,&local_448);
  uVar1 = _objc_getClass("IGModernFeedVideoCell");
  DAT_000fff38 = _class_getSuperclass();
  FUN_000663dc(uVar1,"initWithFrame:",FUN_000682fc,&DAT_000fff40);
  local_448 = 0x403a4076;
  local_444 = 0;
  _class_addMethod(uVar1,"dl_longPress:",FUN_00068424,&local_448);
  uVar1 = _objc_getClass("IGModernFeedVideoCell.IGModernFeedVideoCell");
  DAT_000fff48 = _class_getSuperclass();
  FUN_000663dc(uVar1,"initWithFrame:",FUN_0006978c,&DAT_000fff50);
  local_448 = 0x403a4076;
  local_444 = 0;
  _class_addMethod(uVar1,"dl_longPress:",FUN_000698b4,&local_448);
  uVar1 = _objc_getClass("IGStoryPhotoView");
  DAT_000fff58 = _class_getSuperclass();
  FUN_000663dc(uVar1,"layoutSubviews",FUN_0006ac1c,&DAT_000fff60);
  local_448 = 0x403a4076;
  local_444 = 0;
  _class_addMethod(uVar1,"dl_longPress:",FUN_0006acc0,&local_448);
  uVar1 = _objc_getClass("IGStoryVideoView");
  DAT_000fff68 = _class_getSuperclass();
  FUN_000663dc(uVar1,"layoutSubviews",FUN_0006cb54,&DAT_000fff70);
  local_448 = 0x403a4076;
  local_444 = 0;
  _class_addMethod(uVar1,"dl_longPress:",FUN_0006cbf8,&local_448);
  uVar1 = _objc_getClass("IGStoryModernVideoView");
  DAT_000fff78 = _class_getSuperclass();
  FUN_000663dc(uVar1,"layoutSubviews",FUN_0006fe2c,0xfff80);
  local_448 = 0x403a4076;
  local_444 = 0;
  _class_addMethod(uVar1,"dl_longPress:",FUN_0006fed0,&local_448);
  uVar1 = _objc_getClass("IGSundialViewerVerticalUFI");
  DAT_000fff88 = _class_getSuperclass();
  FUN_000663dc(uVar1,"didMoveToWindow",FUN_00073104,&DAT_000fff90);
  uVar1 = _objc_getClass("IGDirectAggregatedMediaViewerViewControllerTitleViewModel");
  DAT_000fff98 = _class_getSuperclass();
  FUN_000663dc(uVar1,"canSave",FUN_00073ebc,&DAT_000fffa0);
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

