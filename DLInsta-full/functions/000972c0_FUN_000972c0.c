/* Address: 000972c0 | Name: FUN_000972c0 | Body bytes: 140 */

void FUN_000972c0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  ID IVar3;
  code *pcVar4;
  undefined8 local_50 [4];
  
  iVar1 = _dladdr(FUN_000971ec,local_50);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = local_50[0];
  }
  uVar2 = _dlopen(uVar2,1);
  _dlerror();
  IVar3 = _objc_retainAutorelease(*(undefined8 *)(param_1 + 0x20));
  IVar3 = _objc_msgSend(IVar3,"UTF8String");
  pcVar4 = (code *)_dlsym(uVar2,IVar3);
  _dlclose(uVar2);
  (*pcVar4)(*(undefined8 *)(param_1 + 0x28));
  return;
}

