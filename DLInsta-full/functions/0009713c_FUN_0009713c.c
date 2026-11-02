/* Address: 0009713c | Name: FUN_0009713c | Body bytes: 176 */

void FUN_0009713c(long param_1)

{
  uint uVar1;
  uint uVar2;
  size_t sVar3;
  size_t sVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  char *pcVar8;
  char *pcVar9;
  
  pcVar8 = *(char **)(param_1 + 0x20);
  sVar3 = _strlen(pcVar8);
  pcVar9 = *(char **)(param_1 + 0x28);
  sVar4 = _strlen(pcVar9);
  uVar2 = (uint)sVar3 & 0xff;
  if (((uint)sVar4 & 0xff) <= uVar2 && (sVar3 & 0xff) != 0) {
    uVar6 = 0;
    do {
      iVar5 = (int)uVar6;
      uVar7 = 0;
      do {
        if (pcVar8[uVar6 & 0xff] != pcVar9[uVar7 & 0xff]) {
          iVar5 = (int)uVar6 - (int)uVar7;
          break;
        }
        uVar1 = (int)uVar7 + 1;
        uVar7 = (ulong)uVar1;
        if ((uVar1 & 0xff) == ((uint)sVar4 & 0xff)) {
          DAT_001006e0 = 1;
        }
        uVar6 = (ulong)((int)uVar6 + 1);
      } while ((uVar1 & 0xff) != 0);
      uVar6 = (ulong)(iVar5 + 1U);
    } while ((iVar5 + 1U & 0xff) < uVar2);
  }
  return;
}

