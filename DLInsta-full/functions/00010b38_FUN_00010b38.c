/* Address: 00010b38 | Name: FUN_00010b38 | Body bytes: 72 */

void FUN_00010b38(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = DAT_000ff8d0;
  if (DAT_000ff8d0 == (code *)0x0) {
    UNRECOVERED_JUMPTABLE =
         (code *)_class_getMethodImplementation
                           (DAT_000ff8c8,"videoPlayerOverlayControllerDidDoubleTap:locationInfo:");
  }
                    /* WARNING: Could not recover jumptable at 0x00010b7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
             *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  return;
}

