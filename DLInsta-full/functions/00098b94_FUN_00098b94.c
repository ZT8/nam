/* Address: 00098b94 | Name: FUN_00098b94 | Body bytes: 432 */

/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_00098b94(long param_1)

{
  undefined *puVar1;
  ID IVar2;
  ulong uVar3;
  undefined8 local_110;
  undefined8 *local_108;
  undefined8 local_100;
  undefined *local_f0;
  undefined8 local_e8;
  code *local_e0;
  undefined *puStack_d8;
  undefined8 *local_d0;
  undefined8 uStack_c8;
  ulong local_c0;
  undefined8 local_b8;
  undefined8 *puStack_b0;
  undefined8 local_a8;
  code *local_a0;
  code *pcStack_98;
  undefined8 local_90;
  
  IVar2 = _objc_msgSend(*(ID *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28),"count");
  puVar1 = PTR___NSConcreteStackBlock_000e80d8;
  if (IVar2 != 0) {
    uVar3 = 0;
    do {
      local_b8 = 0;
      local_a8 = 0x3032000000;
      local_a0 = FUN_00097af4;
      pcStack_98 = FUN_00097b04;
      local_90 = 0;
      local_f0 = puVar1;
      local_e8 = 0xc2000000;
      local_e0 = FUN_00098d70;
      puStack_d8 = &DAT_000e9468;
      uStack_c8 = *(undefined8 *)(param_1 + 0x28);
      local_d0 = &local_b8;
      local_c0 = uVar3;
      puStack_b0 = &local_b8;
      FUN_00098d70();
      local_110 = 0;
      local_100 = 0x2020000000;
      local_108 = &local_110;
      FUN_00098e2c();
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
                (*(long *)(param_1 + 0x20),
                 *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28),
                 *(undefined4 *)(local_108 + 3));
      __Block_object_dispose(&local_110,8);
      __Block_object_dispose(&local_b8,8);
      uVar3 = uVar3 + 1;
      IVar2 = _objc_msgSend(*(ID *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28),"count");
    } while (uVar3 < IVar2);
  }
  return;
}

