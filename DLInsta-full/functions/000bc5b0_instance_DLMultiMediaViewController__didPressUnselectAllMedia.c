/* Address: 000bc5b0 | Name: instance_DLMultiMediaViewController__didPressUnselectAllMedia | Body bytes: 520 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void DLMultiMediaViewController::instance_DLMultiMediaViewController__didPressUnselectAllMedia
               (ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  long lVar5;
  ID self;
  undefined8 local_130;
  long lStack_128;
  long *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_000e8260;
  DLHelper::class_DLHelper__vibration_((ID)&objc::class_t::DLHelper,"vibration:",0);
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (long *)0x0;
  IVar1 = instance_DLMultiMediaViewController__posts(param_1,"posts");
  IVar2 = _objc_msgSend(IVar1,"countByEnumeratingWithState:objects:count:",&local_130,auStack_f0,
                        0x10);
  if (IVar2 != 0) {
    lVar5 = *local_120;
    do {
      IVar4 = 0;
      do {
        if (*local_120 != lVar5) {
          _objc_enumerationMutation(IVar1);
        }
        self = *(ID *)(lStack_128 + IVar4 * 8);
        IVar3 = _objc_msgSend(self,"isSelected");
        if ((int)IVar3 != 0) {
          _objc_msgSend(self,"setSelect:",0);
          IVar3 = instance_DLMultiMediaViewController__allSelectedMedia(param_1,"allSelectedMedia");
          _objc_msgSend(IVar3,"removeObject:",self);
        }
        IVar4 = IVar4 + 1;
      } while (IVar2 != IVar4);
      IVar2 = _objc_msgSend(IVar1,"countByEnumeratingWithState:objects:count:",&local_130,auStack_f0
                            ,0x10);
    } while (IVar2 != 0);
  }
  IVar1 = instance_DLMultiMediaViewController__mediaCollectionView(param_1,"mediaCollectionView");
  _objc_msgSend(IVar1,"reloadData");
  IVar1 = instance_DLMultiMediaViewController__optionTableView(param_1,"optionTableView");
  _objc_msgSend(IVar1,"reloadData");
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}

