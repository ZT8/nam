/* Address: 000118cc | Name: FUN_000118cc | Body bytes: 236 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_000118cc(long param_1,ID param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ID IVar2;
  
  if (DAT_000ffaf8 == 0) {
    DAT_000ffaf8 = _objc_getClass("IGMedia");
  }
  uVar1 = _objc_retainAutorelease();
  IVar2 = _objc_msgSend(param_2,"isKindOfClass:",uVar1);
  if (((int)IVar2 == 0) ||
     ((IVar2 = _objc_msgSend(param_2,"isSponsored"), (IVar2 & 1) == 0 &&
      (IVar2 = _objc_msgSend(param_2,"isSponsoredApp"), (IVar2 & 1) == 0)))) {
    if (DAT_000ffb30 == 0) {
      DAT_000ffb30 = _objc_getClass("IGAdItem");
    }
    uVar1 = _objc_retainAutorelease();
    IVar2 = _objc_msgSend(param_2,"isKindOfClass:",uVar1);
    if ((int)IVar2 == 0) {
      return 0;
    }
  }
  _objc_msgSend(*(ID *)(param_1 + 0x20),"removeObjectAtIndex:",param_3);
  return 0;
}

