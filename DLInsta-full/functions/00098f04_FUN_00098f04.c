/* Address: 00098f04 | Name: FUN_00098f04 | Body bytes: 828 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x00099238) */

ID FUN_00098f04(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  code *pcVar5;
  long lVar6;
  ID IVar7;
  long lVar8;
  long lVar9;
  ID IVar10;
  ID local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  cfstringStruct *pcStack_60;
  cfstringStruct *local_58;
  ID local_50;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_000e8260;
  uVar2 = _objc_autoreleasePoolPush();
  if (DAT_001006e2 == '\0') {
    lVar3 = _dlopen("/System/Library/Frameworks/Security.framework/Security",2);
    if (lVar3 != 0) {
      pcVar4 = (code *)_dlsym(lVar3,"SecTaskCreateFromSelf");
      pcVar5 = (code *)_dlsym(lVar3,"SecTaskCopyValueForEntitlement");
      if ((pcVar4 != (code *)0x0) && (pcVar5 != (code *)0x0)) {
        lVar6 = (*pcVar4)(0);
        if (lVar6 == 0) {
          IVar10 = 0;
        }
        else {
          IVar7 = (*pcVar5)(lVar6,&cf_com_apple_developer_team_identifier,0);
          if (IVar7 == 0) {
            IVar10 = 0;
          }
          else {
            lVar8 = _CFGetTypeID(IVar7);
            lVar9 = _CFStringGetTypeID();
            if (lVar8 == lVar9) {
              IVar10 = _objc_msgSend(IVar7,"copy");
            }
            else {
              IVar10 = 0;
            }
            _CFRelease(IVar7);
          }
          _CFRelease(lVar6);
          _dlclose(lVar3);
        }
        _dlclose(lVar3);
        if (IVar10 == 0) {
          local_88 = *(undefined8 *)PTR__kSecClass_000e82b0;
          uStack_80 = *(undefined8 *)PTR__kSecAttrAccount_000e82a0;
          local_68 = *(undefined8 *)PTR__kSecClassGenericPassword_000e82b8;
          pcStack_60 = &cf_bundleSeedID;
          local_78 = *(undefined8 *)PTR__kSecAttrService_000e82a8;
          local_58 = &cf___;
          uStack_70 = *(undefined8 *)PTR__kSecReturnAttributes_000e82c0;
          local_50 = NSNumber::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,"numberWithBool:",1);
          IVar10 = NSDictionary::dictionaryWithObjects_forKeys_count_
                             ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:"
                              ,&local_68,&local_88,4);
          local_90 = 0;
          iVar1 = _SecItemCopyMatching(IVar10,&local_90);
          if (iVar1 == -0x62d4) {
            iVar1 = _SecItemAdd(IVar10,&local_90);
          }
          IVar7 = local_90;
          IVar10 = 0;
          if ((iVar1 == 0) && (local_90 != 0)) {
            local_90 = 0;
            IVar10 = _objc_msgSend(IVar7,"objectForKeyedSubscript:",
                                   *(undefined8 *)PTR__kSecAttrAccessGroup_000e8298);
            if (IVar10 == 0) {
              IVar10 = 0;
            }
            else {
              IVar10 = _objc_msgSend(IVar10,"componentsSeparatedByString:",&cf__);
              IVar10 = _objc_msgSend(IVar10,"firstObject");
            }
          }
          if (local_90 != 0) {
            _CFRelease(local_90);
            local_90 = 0;
          }
        }
        goto LAB_000991f8;
      }
      _dlclose(lVar3);
    }
    IVar10 = 0;
  }
  else {
    IVar10 = DAT_00100638;
  }
LAB_000991f8:
  _objc_autoreleasePoolPop(uVar2);
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return IVar10;
}

