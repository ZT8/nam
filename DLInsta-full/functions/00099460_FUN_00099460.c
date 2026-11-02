/* Address: 00099460 | Name: FUN_00099460 | Body bytes: 632 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */

undefined8 FUN_00099460(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar2 = _CFHTTPMessageCopyRequestURL(*(undefined8 *)(param_1 + 0x20));
  uVar5 = 0;
  if (lVar2 != 0) {
    lVar3 = _CFURLGetString();
    lVar4 = FUN_000972c0();
    uVar5 = 0;
    lVar2 = DAT_00100680;
    if (((lVar4 != DAT_00100688) && (lVar2 = DAT_00100698, lVar4 != DAT_001006a0)) &&
       (lVar2 = DAT_00100670, lVar4 != DAT_00100678)) {
      lVar2 = 0;
    }
    if ((lVar2 != 0) && (lVar3 != 0)) {
      iVar1 = FUN_000973f4();
      if ((iVar1 == 0) &&
         ((iVar1 = FUN_000973f4(), iVar1 == 0 && (iVar1 = FUN_000973f4(), iVar1 == 0)))) {
        return 0;
      }
      DAT_001006c0 = lVar2;
      DAT_001006c8 = lVar3;
      uVar5 = FUN_00097050(&PTR___NSConcreteGlobalBlock_000e91f8);
    }
  }
  return uVar5;
}

