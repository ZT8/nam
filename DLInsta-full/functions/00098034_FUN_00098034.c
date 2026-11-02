/* Address: 00098034 | Name: FUN_00098034 | Body bytes: 312 */

bool FUN_00098034(char *param_1,char *param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  FILE *pFVar4;
  size_t sVar5;
  void *pvVar6;
  size_t sVar7;
  size_t sVar8;
  ulong uVar9;
  
  pFVar4 = _fopen(param_1,"rb");
  if (pFVar4 == (FILE *)0x0) {
    bVar2 = false;
  }
  else {
    sVar5 = _strlen(param_2);
    sVar8 = sVar5 * 2;
    pvVar6 = _malloc(sVar8);
    if (pvVar6 == (void *)0x0) {
      bVar2 = false;
    }
    else {
      sVar7 = _fread(pvVar6,1,sVar8,pFVar4);
      if (sVar7 == sVar8) {
        uVar9 = 0;
        do {
          do {
            iVar3 = _memcmp((void *)((long)pvVar6 + uVar9),param_2,sVar5);
            if (iVar3 == 0) {
              bVar2 = true;
              goto LAB_00098140;
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 <= sVar5);
          _memmove(pvVar6,(void *)((long)pvVar6 + sVar5),sVar5);
          sVar7 = _fread((void *)((long)pvVar6 + sVar5),1,sVar5,pFVar4);
          uVar9 = 0;
          sVar7 = sVar7 + sVar5;
        } while (sVar7 == sVar8);
      }
      uVar9 = 1;
      do {
        iVar3 = _memcmp((void *)((long)pvVar6 + (uVar9 - 1)),param_2,sVar5);
        bVar2 = iVar3 == 0;
        bVar1 = uVar9 <= sVar7 - sVar5;
        uVar9 = uVar9 + 1;
      } while (!bVar2 && bVar1);
LAB_00098140:
      _free(pvVar6);
    }
    _fclose(pFVar4);
  }
  return bVar2;
}

