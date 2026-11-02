/* Address: 0009672c | Name: instance_MBBackgroundView__setBlurEffectStyle_ | Body bytes: 40 */

/* Function Stack Size: 0x18 bytes */

void MBBackgroundView::instance_MBBackgroundView__setBlurEffectStyle_
               (ID param_1,SEL param_2,long_long param_3)

{
  if (*(long_long *)(param_1 + (long)_blurEffectStyle) == param_3) {
    return;
  }
  *(long_long *)(param_1 + (long)_blurEffectStyle) = param_3;
  instance_MBBackgroundView__updateForBackgroundStyle(param_1,"updateForBackgroundStyle");
  return;
}

