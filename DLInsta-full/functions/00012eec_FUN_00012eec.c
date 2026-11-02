/* Address: 00012eec | Name: FUN_00012eec | Body bytes: 440 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00012eec(long param_1)

{
  int iVar1;
  ID self;
  ID IVar2;
  ulong uVar3;
  byte *pbVar4;
  ID IVar5;
  
  self = UIApplication::sharedApplication((ID)&_OBJC_CLASS___UIApplication,"sharedApplication");
  IVar5 = *(ID *)(param_1 + 0x20);
  if (((DAT_000ffbe0 & 1) == 0) && (iVar1 = ___cxa_guard_acquire(&DAT_000ffbe0), iVar1 != 0)) {
    DAT_000ffbda = '\x01';
    _DAT_000ffbd0 = 0xaf00bffe675e335e;
    DAT_000ffbd8 = 0x435a;
    ___cxa_atexit(PTR_FUN_000e80e0,&DAT_000ffbd0,0);
    ___cxa_guard_release(&DAT_000ffbe0);
  }
  if (DAT_000ffbda != '\0') {
    uVar3 = 0;
    pbVar4 = &DAT_000ffbd0;
    do {
      *pbVar4 = *pbVar4 ^ (byte)(0xc169d3a1093b4331 >> (uVar3 & 0x38));
      uVar3 = uVar3 + 8;
      pbVar4 = pbVar4 + 1;
    } while (uVar3 != 0x50);
    DAT_000ffbda = '\0';
  }
  IVar2 = NSString::stringWithCString_encoding_
                    ((ID)&_OBJC_CLASS___NSString,"stringWithCString:encoding:",&DAT_000ffbd0,4);
  IVar5 = _objc_msgSend(IVar5,"objectForKeyedSubscript:",IVar2);
  IVar5 = NSURL::URLWithString_((ID)&_OBJC_CLASS___NSURL,"URLWithString:",IVar5);
  UIApplication::openURL_options_completionHandler_
            (self,"openURL:options:completionHandler:",IVar5,
             *(undefined8 *)PTR____NSDictionary0___000e8248,0);
  return 0;
}

