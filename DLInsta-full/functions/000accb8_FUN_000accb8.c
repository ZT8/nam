/* Address: 000accb8 | Name: FUN_000accb8 | Body bytes: 72 */

void FUN_000accb8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    _objc_msgSend(*(ID *)(param_1 + 0x28),"setAvatarImage:",lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x000accfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),lVar1 != 0);
  return;
}

