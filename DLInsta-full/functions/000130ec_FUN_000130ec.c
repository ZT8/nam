/* Address: 000130ec | Name: FUN_000130ec | Body bytes: 396 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_000130ec(long param_1)

{
  int iVar1;
  ID self;
  ID IVar2;
  ID IVar3;
  ulong uVar4;
  byte *pbVar5;
  
  self = NSUserDefaults::standardUserDefaults
                   ((ID)&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
  IVar2 = NSNumber::numberWithUnsignedInteger_
                    ((ID)&_OBJC_CLASS___NSNumber,"numberWithUnsignedInteger:",
                     *(undefined8 *)(param_1 + 0x20));
  if (((DAT_000ffc28 & 1) == 0) && (iVar1 = ___cxa_guard_acquire(&DAT_000ffc28), iVar1 != 0)) {
    DAT_000ffc24 = '\x01';
    _DAT_000ffc18 = 0x1f9e468c081664c4;
    DAT_000ffc20 = 0x7b0d72c8;
    ___cxa_atexit(PTR_FUN_000e8128,&DAT_000ffc18,0);
    ___cxa_guard_release(&DAT_000ffc28);
  }
  if (DAT_000ffc24 != '\0') {
    uVar4 = 0;
    pbVar5 = &DAT_000ffc18;
    do {
      *pbVar5 = *pbVar5 ^ (byte)(0x57fb21ed7b6501a9 >> (uVar4 & 0x38));
      uVar4 = uVar4 + 8;
      pbVar5 = pbVar5 + 1;
    } while (uVar4 != 0x60);
    DAT_000ffc24 = '\0';
  }
  IVar3 = NSString::stringWithCString_encoding_
                    ((ID)&_OBJC_CLASS___NSString,"stringWithCString:encoding:",&DAT_000ffc18,4);
  NSUserDefaults::setValue_forKey_(self,"setValue:forKey:",IVar2,IVar3);
  return 0;
}

