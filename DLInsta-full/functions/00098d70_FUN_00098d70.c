/* Address: 00098d70 | Name: FUN_00098d70 | Body bytes: 80 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_00098d70(long param_1)

{
  ID IVar1;
  
  IVar1 = _objc_msgSend(*(ID *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28),"objectAtIndex:",
                        *(undefined8 *)(param_1 + 0x30));
  *(ID *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28) = IVar1;
  return 0;
}

