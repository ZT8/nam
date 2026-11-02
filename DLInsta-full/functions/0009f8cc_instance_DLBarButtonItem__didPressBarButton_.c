/* Address: 0009f8cc | Name: instance_DLBarButtonItem__didPressBarButton_ | Body bytes: 28 */

/* Function Stack Size: 0x18 bytes */

void DLBarButtonItem::instance_DLBarButtonItem__didPressBarButton_
               (ID param_1,SEL param_2,ID param_3)

{
  if (*(long *)(param_1 + (long)onPressHandler) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0009f8e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + (long)onPressHandler) + 0x10))();
  return;
}

