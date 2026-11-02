/* Address: 00086958 | Name: FUN_00086958 | Body bytes: 72 */

void FUN_00086958(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = DAT_00100160;
  if (DAT_00100160 == (code *)0x0) {
    UNRECOVERED_JUMPTABLE =
         (code *)_class_getMethodImplementation
                           (DAT_00100158,"traySectionController:didLongPressCell:");
  }
                    /* WARNING: Could not recover jumptable at 0x0008699c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
             *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  return;
}

