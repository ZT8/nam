/* Address: 000842e4 | Name: FUN_000842e4 | Body bytes: 260 */

void FUN_000842e4(void)

{
  undefined8 uVar1;
  
  uVar1 = _objc_getClass("IGProfileAvatarView");
  DAT_00100128 = _class_getSuperclass();
  FUN_000843e8(uVar1,"_profilePictureLongPressed:",FUN_000844d8,&DAT_00100130);
  uVar1 = _objc_getClass("IGProfilePhotoView");
  DAT_00100138 = _class_getSuperclass();
  FUN_000843e8(uVar1,"_profilePictureLongPress:",FUN_000848b8,&DAT_00100140);
  uVar1 = _objc_getClass("IGProfilePhotoCoinFlipUI.IGProfilePhotoCoinFlipView");
  DAT_00100148 = _class_getSuperclass();
  FUN_000843e8(uVar1,"viewLongPressedWithGesture:",FUN_00084c98,&DAT_00100150);
  uVar1 = _objc_getClass("IGStoryTrayController");
  DAT_00100158 = _class_getSuperclass();
  FUN_000843e8(uVar1,"traySectionController:didLongPressCell:",FUN_00084f04,&DAT_00100160);
  return;
}

