/* Address: 000108e4 | Name: FUN_000108e4 | Body bytes: 68 */

void FUN_000108e4(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = DAT_000ff880;
  if (DAT_000ff880 == (code *)0x0) {
    UNRECOVERED_JUMPTABLE =
         (code *)_class_getMethodImplementation(DAT_000ff878,"_didPressFollowButton");
  }
                    /* WARNING: Could not recover jumptable at 0x00010924. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  return;
}

