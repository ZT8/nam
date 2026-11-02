/* Address: 000bcf44 | Name: instance_DLMultiMediaViewController__setCollectionCellSize_ | Body bytes: 20 */

/* Function Stack Size: 0x20 bytes */

void DLMultiMediaViewController::instance_DLMultiMediaViewController__setCollectionCellSize_
               (ID param_1,SEL param_2,CGSize param_3)

{
  long lVar1;
  
  lVar1 = (long)_collectionCellSize;
  *(double *)(param_1 + lVar1) = param_3.field0_0x0;
  ((double *)(param_1 + lVar1))[1] = param_3.field1_0x8;
  return;
}

