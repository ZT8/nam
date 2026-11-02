/* Address: 000baba0 | Name: instance_DLMultiMediaViewController__collectionView_numberOfItemsInSection_ | Body bytes: 76 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

long_long DLMultiMediaViewController::
          instance_DLMultiMediaViewController__collectionView_numberOfItemsInSection_
                    (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  ID IVar1;
  
  IVar1 = instance_DLMultiMediaViewController__posts(param_1,"posts");
  IVar1 = _objc_msgSend(IVar1,"count");
  return IVar1;
}

