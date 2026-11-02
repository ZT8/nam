/* Address: 0007c868 | Name: FUN_0007c868 | Body bytes: 216 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_0007c868(long param_1,int param_2,ID param_3)

{
  ulong uVar1;
  undefined **ppuVar2;
  code *pcVar3;
  undefined *local_80 [5];
  undefined *local_58 [5];
  
  ppuVar2 = local_80;
  if (param_2 == 0) {
    _objc_msgSend(param_3,"code");
    uVar1 = FUN_0008c3f0();
    if ((uVar1 & 1) != 0) {
      return 0;
    }
    _objc_retainAutorelease(PTR___dispatch_main_q_000e8268);
    local_80[0] = PTR___NSConcreteStackBlock_000e80d8;
    pcVar3 = FUN_0007ca94;
  }
  else {
    _objc_retainAutorelease(PTR___dispatch_main_q_000e8268);
    local_58[0] = PTR___NSConcreteStackBlock_000e80d8;
    pcVar3 = FUN_0007c954;
    ppuVar2 = local_58;
  }
  ppuVar2[1] = (undefined *)0xc0000000;
  ppuVar2[2] = pcVar3;
  ppuVar2[3] = &DAT_000e8c28;
  ppuVar2[4] = *(undefined **)(param_1 + 0x20);
  _dispatch_async(PTR___dispatch_main_q_000e8268);
  return 0;
}

