/* Address: 00098e2c | Name: FUN_00098e2c | Body bytes: 84 */

void FUN_00098e2c(long param_1)

{
  int iVar1;
  int iVar2;
  ID IVar3;
  
  IVar3 = _objc_msgSend(*(ID *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28),"intValue");
  iVar2 = (int)IVar3;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 1;
  }
  iVar1 = 0;
  if (*(int *)(param_1 + 0x30) != 0) {
    iVar1 = (iVar2 >> 1) / *(int *)(param_1 + 0x30);
  }
  *(int *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = iVar1;
  return;
}

