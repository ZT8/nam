/* Address: 00010bc8 | Name: FUN_00010bc8 | Body bytes: 72 */

void FUN_00010bc8(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = DAT_000ff8e0;
  if (DAT_000ff8e0 == (code *)0x0) {
    UNRECOVERED_JUMPTABLE =
         (code *)_class_getMethodImplementation(DAT_000ff8d8,"_onLikeButtonPressed:");
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x20));
  return;
}

