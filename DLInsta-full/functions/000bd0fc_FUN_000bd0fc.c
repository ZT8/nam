/* Address: 000bd0fc | Name: FUN_000bd0fc | Body bytes: 392 */

void FUN_000bd0fc(undefined4 param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined4 local_40;
  uint uStack_3c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_000e8260;
  if (DAT_00100598 != -1) {
    _dispatch_once_f(&DAT_00100598,(void *)0x0,FUN_000bd284);
  }
  if (DAT_001005a0 != (code *)0x0) {
    uStack_3c = param_2 << 0x10 | (param_3 & 0xff) << 8 | param_4 & 0xff;
    local_40 = param_1;
    uVar2 = (*DAT_001005a0)(1,&local_40);
    if (*(long *)PTR____stack_chk_guard_000e8260 == local_38) {
      return;
    }
    goto LAB_000bd254;
  }
  if (DAT_00100590 == -1) {
    iVar1 = DAT_00100580 - param_2;
  }
  else {
    _dispatch_once_f(&DAT_00100590,(void *)0x0,FUN_000bd0f4);
    iVar1 = DAT_00100580 - param_2;
  }
  if (param_2 < DAT_00100580) {
LAB_000bd1d8:
    uVar2 = 1;
    lVar3 = *(long *)PTR____stack_chk_guard_000e8260;
  }
  else if (iVar1 < 0 == SBORROW4(DAT_00100580,param_2)) {
    if ((int)param_3 < DAT_00100584) goto LAB_000bd1d8;
    if (DAT_00100584 < (int)param_3) goto LAB_000bd1fc;
    uVar2 = (ulong)((int)param_4 <= DAT_00100588);
    lVar3 = *(long *)PTR____stack_chk_guard_000e8260;
  }
  else {
LAB_000bd1fc:
    uVar2 = 0;
    lVar3 = *(long *)PTR____stack_chk_guard_000e8260;
  }
  if (lVar3 == local_38) {
    return;
  }
LAB_000bd254:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar2);
}

