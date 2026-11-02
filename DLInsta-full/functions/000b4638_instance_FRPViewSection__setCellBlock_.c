/* Address: 000b4638 | Name: instance_FRPViewSection__setCellBlock_ | Body bytes: 12 */

/* WARNING: Function: _objc_setProperty_nonatomic_copy replaced with injection:
   _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void FRPViewSection::instance_FRPViewSection__setCellBlock_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  *(ID *)(param_1 + (long)_cellBlock) = param_3;
  return;
}

