/* Address: 0009f75c | Name: instance_DLTapGestureRecognizer__didTap_ | Body bytes: 28 */

/* Function Stack Size: 0x18 bytes */

void DLTapGestureRecognizer::instance_DLTapGestureRecognizer__didTap_
               (ID param_1,SEL param_2,ID param_3)

{
  if (*(long *)(param_1 + (long)_handler) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0009f770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + (long)_handler) + 0x10))();
  return;
}

