/* Address: 00095dc4 | Name: instance_MBBarProgressView__setProgress_ | Body bytes: 40 */

/* Function Stack Size: 0x14 bytes */

void MBBarProgressView::instance_MBBarProgressView__setProgress_
               (ID param_1,SEL param_2,float param_3)

{
  if (*(float *)(param_1 + (long)_progress) == param_3) {
    return;
  }
  *(float *)(param_1 + (long)_progress) = param_3;
  _objc_msgSend(param_1,"setNeedsDisplay");
  return;
}

