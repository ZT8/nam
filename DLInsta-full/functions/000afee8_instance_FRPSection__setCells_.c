/* Address: 000afee8 | Name: instance_FRPSection__setCells_ | Body bytes: 20 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void FRPSection::instance_FRPSection__setCells_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_cells) = param_3;
  return;
}

