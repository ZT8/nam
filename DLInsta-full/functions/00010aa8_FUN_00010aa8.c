/* Address: 00010aa8 | Name: FUN_00010aa8 | Body bytes: 72 */

void FUN_00010aa8(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = DAT_000ff8b0;
  if (DAT_000ff8b0 == (code *)0x0) {
    UNRECOVERED_JUMPTABLE =
         (code *)_class_getMethodImplementation(DAT_000ff8a8,"overlayViewDidDoubleTap:");
  }
                    /* WARNING: Could not recover jumptable at 0x00010aec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x20));
  return;
}

