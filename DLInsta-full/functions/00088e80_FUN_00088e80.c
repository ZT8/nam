/* Address: 00088e80 | Name: FUN_00088e80 | Body bytes: 364 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00088e80(void)

{
  int iVar1;
  ID IVar2;
  ulong uVar3;
  byte *pbVar4;
  
  IVar2 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle,"mainBundle");
  IVar2 = NSBundle::executablePath(IVar2,"executablePath");
  IVar2 = _objc_retainAutorelease(IVar2);
  IVar2 = _objc_msgSend(IVar2,"UTF8String");
  if (((DAT_00100558 & 1) == 0) && (iVar1 = ___cxa_guard_acquire(&DAT_00100558), iVar1 != 0)) {
    DAT_00100553 = '\x01';
    _DAT_00100548 = 0xb99073099ca7a5;
    _DAT_0010054f = 0xf3b0836e;
    ___cxa_atexit(PTR_FUN_000e8100,&DAT_00100548,0);
    ___cxa_guard_release(&DAT_00100558);
  }
  if (DAT_00100553 != '\0') {
    uVar3 = 0;
    pbVar4 = &DAT_00100548;
    do {
      *pbVar4 = *pbVar4 ^ (byte)(0x1cdc31f65f3d5f1 >> (uVar3 & 0x38));
      uVar3 = uVar3 + 8;
      pbVar4 = pbVar4 + 1;
    } while (uVar3 != 0x58);
    DAT_00100553 = '\0';
  }
  iVar1 = FUN_00098034(IVar2,&DAT_00100548);
  if (iVar1 != 0) {
    DAT_001006e2 = 1;
  }
  FUN_00089014(&PTR___NSConcreteGlobalBlock_000e8ef8);
  return;
}

