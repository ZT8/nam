/* Address: 0007cb84 | Name: FUN_0007cb84 | Body bytes: 392 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_0007cb84(void)

{
  int iVar1;
  ID IVar2;
  ID local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  cfstringStruct *pcStack_50;
  cfstringStruct *local_48;
  ID local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_000e8260;
  local_78 = *(undefined8 *)PTR__kSecClass_000e82b0;
  uStack_70 = *(undefined8 *)PTR__kSecAttrAccount_000e82a0;
  local_58 = *(undefined8 *)PTR__kSecClassGenericPassword_000e82b8;
  pcStack_50 = &cf_dummyItem;
  local_68 = *(undefined8 *)PTR__kSecAttrService_000e82a8;
  local_48 = &cf_dummyService;
  uStack_60 = *(undefined8 *)PTR__kSecReturnAttributes_000e82c0;
  local_40 = NSNumber::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,"numberWithBool:",1);
  IVar2 = NSDictionary::dictionaryWithObjects_forKeys_count_
                    ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                     &local_58,&local_78,4);
  iVar1 = _SecItemCopyMatching(IVar2,&local_80);
  if (iVar1 == -0x62d4) {
    iVar1 = _SecItemAdd(IVar2,&local_80);
  }
  if ((iVar1 == 0) && (local_80 != 0)) {
    _dl_keychainAccessGroup =
         _objc_msgSend(local_80,"objectForKeyedSubscript:",
                       *(undefined8 *)PTR__kSecAttrAccessGroup_000e8298);
  }
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}

