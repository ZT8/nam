/* Address: 00082f64 | Name: FUN_00082f64 | Body bytes: 324 */

void FUN_00082f64(void)

{
  undefined8 uVar1;
  
  uVar1 = _objc_getClass("IGProfileSideTrayDataSource");
  DAT_001000d0 = _class_getSuperclass();
  FUN_000830a8(uVar1,"objectCount",FUN_00083198,&DAT_001000d8);
  FUN_000830a8(uVar1,"objectsForListAdapter:",FUN_000833d8,&DAT_001000e0);
  uVar1 = _objc_getClass("IGProfileMenuSheetViewController");
  DAT_001000e8 = _class_getSuperclass();
  FUN_000830a8(uVar1,"tableView:cellForRowAtIndexPath:",FUN_00083554,&DAT_001000f0);
  FUN_000830a8(uVar1,"tableView:didSelectRowAtIndexPath:",FUN_0008376c,&DAT_001000f8);
  uVar1 = _objc_getClass("IGProfileNavigationItemsController");
  DAT_00100100 = _class_getSuperclass();
  FUN_000830a8(uVar1,"_onSideTrayButton:",FUN_00083964,&DAT_00100108);
  uVar1 = _objc_getClass("IGTabBarController");
  DAT_00100110 = _class_getSuperclass();
  FUN_000830a8(uVar1,"_homeButtonLongPressed:",FUN_00083c28,&DAT_00100118);
  return;
}

