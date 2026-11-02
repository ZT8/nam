/* Address: 000969e4 | Name: instance_MBBackgroundView___cxx_destruct | Body bytes: 64 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void MBBackgroundView::instance_MBBackgroundView___cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_effectView) = 0;
  *(undefined8 *)(param_1 + (long)_color) = 0;
  return;
}

