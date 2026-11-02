/* Address: 000bab0c | Name: instance_DLMultiMediaViewController__updateCollectionViewForSize_ | Body bytes: 148 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void DLMultiMediaViewController::instance_DLMultiMediaViewController__updateCollectionViewForSize_
               (ID param_1,SEL param_2,CGSize param_3)

{
  ID IVar1;
  CGSize CVar2;
  
  CVar2.field1_0x8 = param_3.field1_0x8 + -20.0;
  CVar2.field0_0x0 = 139.0;
  instance_DLMultiMediaViewController__setCollectionCellSize_
            (param_1,"setCollectionCellSize:",CVar2);
  IVar1 = instance_DLMultiMediaViewController__mediaCollectionView(param_1,"mediaCollectionView");
  IVar1 = _objc_msgSend(IVar1,"collectionViewLayout");
  _objc_msgSend(IVar1,"setSectionInset:",0,0x4014000000000000,0,0x4014000000000000);
  return;
}

