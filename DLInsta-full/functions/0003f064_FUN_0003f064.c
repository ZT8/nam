/* Address: 0003f064 | Name: FUN_0003f064 | Body bytes: 908 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0003f064(uint param_1,ID param_2)

{
  int iVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ulong uVar5;
  byte *pbVar6;
  ID IVar7;
  ID self;
  long lVar8;
  undefined8 local_130;
  long lStack_128;
  long *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_000e8260;
  IVar2 = _NSSearchPathForDirectoriesInDomains(9,1,1);
  IVar2 = _objc_msgSend(IVar2,"objectAtIndex:",0);
  if (((DAT_000ffec0 & 1) == 0) && (iVar1 = ___cxa_guard_acquire(&DAT_000ffec0), iVar1 != 0)) {
    DAT_000ffeba = '\x01';
    uRam00000000000ffeb0 = 0x820c0947ab515992;
    _DAT_000ffea8 = 0xae090053da504f9a;
    DAT_000ffeb8 = 0x2b87;
    ___cxa_atexit(PTR_FUN_000e8180,&DAT_000ffea8,0);
    ___cxa_guard_release(&DAT_000ffec0);
  }
  if (DAT_000ffeba != '\0') {
    uVar5 = 0;
    pbVar6 = &DAT_000ffea8;
    do {
      *pbVar6 = *pbVar6 ^ (byte)(0xf165653785232bf3 >> (uVar5 & 0x38));
      uVar5 = uVar5 + 8;
      pbVar6 = pbVar6 + 1;
    } while (uVar5 != 0x90);
    DAT_000ffeba = '\0';
  }
  IVar3 = NSString::stringWithCString_encoding_
                    ((ID)&_OBJC_CLASS___NSString,"stringWithCString:encoding:",&DAT_000ffea8,4);
  IVar2 = _objc_msgSend(IVar2,"stringByAppendingPathComponent:",IVar3);
  IVar3 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
  IVar2 = NSMutableArray::initWithContentsOfFile_(IVar3,"initWithContentsOfFile:",IVar2);
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (long *)0x0;
  IVar3 = NSMutableArray::countByEnumeratingWithState_objects_count_
                    (IVar2,"countByEnumeratingWithState:objects:count:",&local_130,auStack_f0,0x10);
  if (IVar3 == 0) {
    self = 0;
  }
  else {
    lVar8 = *local_120;
    do {
      IVar7 = 0;
      do {
        if (*local_120 != lVar8) {
          _objc_enumerationMutation(IVar2);
        }
        self = *(ID *)(lStack_128 + IVar7 * 8);
        IVar4 = _objc_msgSend(self,"objectForKeyedSubscript:",&cf_id);
        IVar4 = _objc_msgSend(IVar4,"isEqualToString:",param_2);
        if ((IVar4 & 1) != 0) goto LAB_0003f2cc;
        IVar7 = IVar7 + 1;
      } while (IVar3 != IVar7);
      IVar3 = NSMutableArray::countByEnumeratingWithState_objects_count_
                        (IVar2,"countByEnumeratingWithState:objects:count:",&local_130,auStack_f0,
                         0x10);
    } while (IVar3 != 0);
    self = 0;
  }
LAB_0003f2cc:
  IVar2 = _objc_msgSend(self,"objectForKeyedSubscript:",&cf_id);
  IVar2 = _objc_msgSend(param_2,"isEqualToString:",IVar2);
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return (uint)IVar2 & param_1;
}

