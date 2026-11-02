/* Address: 00097050 | Name: FUN_00097050 | Body bytes: 128 */

void FUN_00097050(void)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  
  pcVar1 = (char *)_objc_msgSend(DAT_001006c0,"UTF8String");
  pcVar2 = (char *)_objc_msgSend(DAT_001006c8,"UTF8String");
  cVar3 = *pcVar1;
  if (cVar3 != '\0') {
    do {
      pcVar1 = pcVar1 + 1;
      if (*pcVar2 != cVar3) break;
      pcVar2 = pcVar2 + 1;
      cVar3 = *pcVar1;
    } while (cVar3 != '\0');
  }
  if (*pcVar2 == cVar3) {
    DAT_001006e1 = 1;
  }
  return;
}

