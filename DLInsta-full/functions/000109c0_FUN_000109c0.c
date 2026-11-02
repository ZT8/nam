/* Address: 000109c0 | Name: FUN_000109c0 | Body bytes: 72 */

void FUN_000109c0(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = DAT_000ff8a0;
  if (DAT_000ff8a0 == (code *)0x0) {
    UNRECOVERED_JUMPTABLE = (code *)_class_getMethodImplementation(DAT_000ff898,"_onDoubleTap:");
  }
                    /* WARNING: Could not recover jumptable at 0x00010a04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x20));
  return;
}

