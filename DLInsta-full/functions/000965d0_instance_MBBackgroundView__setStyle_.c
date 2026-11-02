/* Address: 000965d0 | Name: instance_MBBackgroundView__setStyle_ | Body bytes: 40 */

/* Function Stack Size: 0x18 bytes */

void MBBackgroundView::instance_MBBackgroundView__setStyle_
               (ID param_1,SEL param_2,long_long param_3)

{
  if (*(long_long *)(param_1 + (long)_style) == param_3) {
    return;
  }
  *(long_long *)(param_1 + (long)_style) = param_3;
  instance_MBBackgroundView__updateForBackgroundStyle(param_1,"updateForBackgroundStyle");
  return;
}

