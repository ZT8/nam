/* Address: 000ae530 | Name: instance_DLPopupViewController__setInitialTouchPoint_ | Body bytes: 20 */

/* Function Stack Size: 0x20 bytes */

void DLPopupViewController::instance_DLPopupViewController__setInitialTouchPoint_
               (ID param_1,SEL param_2,CGPoint param_3)

{
  long lVar1;
  
  lVar1 = (long)_initialTouchPoint;
  *(double *)(param_1 + lVar1) = param_3.field0_0x0;
  ((double *)(param_1 + lVar1))[1] = param_3.field1_0x8;
  return;
}

