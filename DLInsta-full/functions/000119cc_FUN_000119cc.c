/* Address: 000119cc | Name: FUN_000119cc | Body bytes: 456 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_000119cc(long param_1,ID param_2,undefined8 param_3)

{
  ID IVar1;
  undefined8 uVar2;
  ID IVar3;
  
  IVar1 = _objc_msgSend(param_2,"respondsToSelector:","model");
  if ((int)IVar1 == 0) {
    return 0;
  }
  IVar1 = _objc_msgSend(param_2,"model");
  if (DAT_000ffaf8 == 0) {
    DAT_000ffaf8 = _objc_getClass("IGMedia");
  }
  uVar2 = _objc_retainAutorelease();
  IVar1 = _objc_msgSend(IVar1,"isKindOfClass:",uVar2);
  if ((int)IVar1 != 0) {
    IVar3 = _objc_msgSend(param_2,"model");
    IVar3 = _objc_msgSend(IVar3,"isSponsored");
    if ((IVar3 & 1) != 0) goto LAB_00011b60;
    IVar3 = _objc_msgSend(param_2,"model");
    IVar3 = _objc_msgSend(IVar3,"isSponsoredApp");
    if ((int)IVar3 != 0) goto LAB_00011b60;
  }
  IVar3 = _objc_msgSend(param_2,"model");
  if (DAT_000ffb30 == 0) {
    DAT_000ffb30 = _objc_getClass("IGAdItem");
  }
  uVar2 = _objc_retainAutorelease();
  IVar3 = _objc_msgSend(IVar3,"isKindOfClass:",uVar2);
  if ((int)IVar1 == 0) {
    if ((int)IVar3 == 0) {
      return 0;
    }
  }
  else if ((IVar3 & 1) == 0) {
    return 0;
  }
LAB_00011b60:
  _objc_msgSend(*(ID *)(param_1 + 0x20),"removeObjectAtIndex:",param_3);
  return 0;
}

