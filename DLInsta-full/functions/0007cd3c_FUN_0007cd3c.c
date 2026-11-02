/* Address: 0007cd3c | Name: FUN_0007cd3c | Body bytes: 1096 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0007cd3c(void)

{
  int iVar1;
  ID IVar2;
  undefined8 uVar3;
  ulong uVar4;
  byte *pbVar5;
  ID local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  cfstringStruct *pcStack_70;
  cfstringStruct *local_68;
  ID local_60;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_000e8260;
  IVar2 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle,"mainBundle");
  IVar2 = NSBundle::bundlePath(IVar2,"bundlePath");
  IVar2 = NSBundle::stringByAppendingPathComponent_
                    (IVar2,"stringByAppendingPathComponent:",
                     &cf_Frameworks_FBSharedFramework_framework_FBSharedFramework);
  IVar2 = _objc_retainAutorelease(IVar2);
  IVar2 = _objc_msgSend(IVar2,"UTF8String");
  _dlopen(IVar2,2);
  IVar2 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle,"mainBundle");
  IVar2 = NSBundle::bundlePath(IVar2,"bundlePath");
  IVar2 = NSBundle::stringByAppendingPathComponent_
                    (IVar2,"stringByAppendingPathComponent:",
                     &cf_Frameworks_IGPyTorchFramework_framework_IGPyTorchFramework);
  IVar2 = _objc_retainAutorelease(IVar2);
  IVar2 = _objc_msgSend(IVar2,"UTF8String");
  _dlopen(IVar2,2);
  local_98 = *(undefined8 *)PTR__kSecClass_000e82b0;
  uStack_90 = *(undefined8 *)PTR__kSecAttrAccount_000e82a0;
  local_78 = *(undefined8 *)PTR__kSecClassGenericPassword_000e82b8;
  pcStack_70 = &cf_dummyItem;
  local_88 = *(undefined8 *)PTR__kSecAttrService_000e82a8;
  local_68 = &cf_dummyService;
  uStack_80 = *(undefined8 *)PTR__kSecReturnAttributes_000e82c0;
  local_60 = NSNumber::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,"numberWithBool:",1);
  IVar2 = NSDictionary::dictionaryWithObjects_forKeys_count_
                    ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                     &local_78,&local_98,4);
  iVar1 = _SecItemCopyMatching(IVar2,&local_a0);
  if (iVar1 == -0x62d4) {
    iVar1 = _SecItemAdd(IVar2,&local_a0);
  }
  if ((iVar1 == 0) && (local_a0 != 0)) {
    _dl_keychainAccessGroup =
         _objc_msgSend(local_a0,"objectForKeyedSubscript:",
                       *(undefined8 *)PTR__kSecAttrAccessGroup_000e8298);
  }
  uVar3 = _objc_getClass("FBSDKKeychainStore");
  DAT_00100068 = _class_getSuperclass();
  FUN_0007d1ec(uVar3,"accessGroup",FUN_0007d2dc,&DAT_00100070);
  uVar3 = _objc_getClass("FBKeychainItemController");
  DAT_00100078 = _class_getSuperclass();
  FUN_0007d1ec(uVar3,"accessGroup",FUN_0007d2e8,&DAT_00100080);
  uVar3 = _objc_getClass("UICKeyChainStore");
  DAT_00100088 = _class_getSuperclass();
  FUN_0007d1ec(uVar3,"accessGroup",FUN_0007d2f4,&DAT_00100090);
  if (((DAT_001000c8 & 1) == 0) && (iVar1 = ___cxa_guard_acquire(&DAT_001000c8), iVar1 != 0)) {
    DAT_001000c6 = '\x01';
    uRam00000000001000b0 = 0x2b5d88573565;
    _DAT_001000a8 = 0x52723b559c763640;
    uRam00000000001000be = 0x5f5e8a4c077b5648;
    _DAT_001000b6 = 0x5f58;
    uRam00000000001000b8 = 0x2b52a2410466;
    ___cxa_atexit(PTR_FUN_000e81a8,&DAT_001000a8,0);
    ___cxa_guard_release(&DAT_001000c8);
  }
  if (DAT_001000c6 != '\0') {
    uVar4 = 0;
    pbVar5 = &DAT_001000a8;
    do {
      *pbVar5 = *pbVar5 ^ (byte)(0x331b5f3be9257109 >> (uVar4 & 0x38));
      uVar4 = uVar4 + 8;
      pbVar5 = pbVar5 + 1;
    } while (uVar4 != 0xf0);
    DAT_001000c6 = '\0';
  }
  uVar3 = _objc_getClass(&DAT_001000a8);
  DAT_00100098 = _class_getSuperclass();
  FUN_0007d1ec(uVar3,"initWithUserSession:",FUN_0007d300,&DAT_001000a0);
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

