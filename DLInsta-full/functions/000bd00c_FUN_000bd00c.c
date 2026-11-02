/* Address: 000bd00c | Name: FUN_000bd00c | Body bytes: 232 */

bool FUN_000bd00c(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (DAT_00100590 == -1) {
    iVar1 = DAT_00100580 - param_1;
  }
  else {
    _dispatch_once_f(&DAT_00100590,(void *)0x0,FUN_000bd0f4);
    iVar1 = DAT_00100580 - param_1;
  }
  if (param_1 < DAT_00100580) {
    return true;
  }
  if (iVar1 < 0 != SBORROW4(DAT_00100580,param_1)) {
    return false;
  }
  if (param_2 < DAT_00100584) {
    return true;
  }
  if (DAT_00100584 < param_2) {
    return false;
  }
  return param_3 <= DAT_00100588;
}

