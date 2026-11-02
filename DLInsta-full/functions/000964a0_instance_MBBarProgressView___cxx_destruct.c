/* Address: 000964a0 | Name: instance_MBBarProgressView___cxx_destruct | Body bytes: 84 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void MBBarProgressView::instance_MBBarProgressView___cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_progressColor) = 0;
  *(undefined8 *)(param_1 + (long)_progressRemainingColor) = 0;
  *(undefined8 *)(param_1 + (long)_lineColor) = 0;
  return;
}

