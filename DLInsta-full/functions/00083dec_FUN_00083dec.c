/* Address: 00083dec | Name: FUN_00083dec | Body bytes: 72 */

void FUN_00083dec(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = DAT_00100108;
  if (DAT_00100108 == (code *)0x0) {
    UNRECOVERED_JUMPTABLE =
         (code *)_class_getMethodImplementation(DAT_00100100,"_onSideTrayButton:");
  }
                    /* WARNING: Could not recover jumptable at 0x00083e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x20));
  return;
}

