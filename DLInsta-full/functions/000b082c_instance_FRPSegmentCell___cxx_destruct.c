/* Address: 000b082c | Name: instance_FRPSegmentCell___cxx_destruct | Body bytes: 84 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void FRPSegmentCell::instance_FRPSegmentCell___cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_displayedValues) = 0;
  *(undefined8 *)(param_1 + (long)_values) = 0;
  *(undefined8 *)(param_1 + (long)_segment) = 0;
  return;
}

