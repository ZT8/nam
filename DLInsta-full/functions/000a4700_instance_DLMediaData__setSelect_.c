/* Address: 000a4700 | Name: instance_DLMediaData__setSelect_ | Body bytes: 8 */

/* Function Stack Size: 0x14 bytes */

void DLMediaData::instance_DLMediaData__setSelect_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + 9) = (char)param_3;
  return;
}

