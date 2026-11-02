/* Address: 00049254 | Name: FUN_00049254 | Body bytes: 2016 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00049254(ID param_1,undefined8 param_2,ID param_3,undefined8 param_4,undefined8 param_5)

{
  byte bVar1;
  int iVar2;
  code *pcVar3;
  ID IVar4;
  undefined8 uVar5;
  ID IVar6;
  ID IVar7;
  ID IVar8;
  ID IVar9;
  ulong uVar10;
  byte *pbVar11;
  long lVar12;
  ID IVar13;
  undefined *local_158;
  undefined8 local_150;
  code *local_148;
  undefined *puStack_140;
  ID local_138;
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
  pcVar3 = DAT_000ffda0;
  if (DAT_000ffda0 == (code *)0x0) {
    pcVar3 = (code *)_class_getMethodImplementation
                               (DAT_000ffd90,
                                "configureWithViewModel:ringViewSpecFactory:launcherSet:");
  }
  (*pcVar3)(param_1,param_2,param_3,param_4,param_5);
  IVar4 = NSUserDefaults::standardUserDefaults
                    ((ID)&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
  IVar4 = NSUserDefaults::boolForKey_(IVar4,"boolForKey:",&cf_DL_KeepDeletedDM);
  if ((IVar4 & 1) != 0) {
    uVar5 = FUN_00097ef8();
    uVar5 = FUN_00097a54(uVar5);
    IVar4 = _objc_msgSend(DAT_001006a8,"length");
    IVar4 = FUN_00097c68(uVar5,IVar4);
    IVar4 = _objc_msgSend(IVar4,"isEqualToString:",DAT_001006a8);
    if ((((int)IVar4 != 0) &&
        (IVar4 = _objc_msgSend(param_3,"respondsToSelector:","messageMetadata"), (int)IVar4 != 0))
       && (IVar4 = _objc_msgSend(param_3,"respondsToSelector:","contentType"), (int)IVar4 != 0)) {
      IVar4 = _objc_msgSend(param_1,"dlDeleteInfo");
      _objc_msgSend(IVar4,"removeFromSuperview");
      bVar1 = DAT_000ffc90;
      IVar4 = _objc_msgSend(param_3,"messageMetadata");
      IVar4 = _objc_msgSend(IVar4,"key");
      IVar4 = _objc_msgSend(IVar4,"serverId");
      IVar6 = _NSSearchPathForDirectoriesInDomains(9,1,1);
      IVar6 = _objc_msgSend(IVar6,"objectAtIndex:",0);
      if (((DAT_000ffec0 & 1) == 0) && (iVar2 = ___cxa_guard_acquire(&DAT_000ffec0), iVar2 != 0)) {
        DAT_000ffeba = '\x01';
        uRam00000000000ffeb0 = 0x820c0947ab515992;
        _DAT_000ffea8 = 0xae090053da504f9a;
        DAT_000ffeb8 = 0x2b87;
        ___cxa_atexit(PTR_FUN_000e8180,&DAT_000ffea8,0);
        ___cxa_guard_release(&DAT_000ffec0);
      }
      if (DAT_000ffeba != '\0') {
        uVar10 = 0;
        pbVar11 = &DAT_000ffea8;
        do {
          *pbVar11 = *pbVar11 ^ (byte)(0xf165653785232bf3 >> (uVar10 & 0x38));
          uVar10 = uVar10 + 8;
          pbVar11 = pbVar11 + 1;
        } while (uVar10 != 0x90);
        DAT_000ffeba = '\0';
      }
      IVar7 = NSString::stringWithCString_encoding_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithCString:encoding:",&DAT_000ffea8,4);
      IVar6 = _objc_msgSend(IVar6,"stringByAppendingPathComponent:",IVar7);
      IVar7 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
      IVar7 = NSMutableArray::initWithContentsOfFile_(IVar7,"initWithContentsOfFile:",IVar6);
      uStack_108 = 0;
      local_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      lStack_128 = 0;
      local_130 = 0;
      uStack_118 = 0;
      local_120 = (long *)0x0;
      IVar8 = NSMutableArray::countByEnumeratingWithState_objects_count_
                        (IVar7,"countByEnumeratingWithState:objects:count:",&local_130,auStack_f0,
                         0x10);
      IVar6 = 0;
      if (IVar8 != 0) {
        lVar12 = *local_120;
        do {
          IVar13 = 0;
          do {
            if (*local_120 != lVar12) {
              _objc_enumerationMutation(IVar7);
            }
            IVar6 = *(ID *)(lStack_128 + IVar13 * 8);
            IVar9 = _objc_msgSend(IVar6,"objectForKeyedSubscript:",&cf_id);
            IVar9 = _objc_msgSend(IVar9,"isEqualToString:",IVar4);
            if ((IVar9 & 1) != 0) goto LAB_000496f8;
            IVar13 = IVar13 + 1;
          } while (IVar8 != IVar13);
          IVar8 = NSMutableArray::countByEnumeratingWithState_objects_count_
                            (IVar7,"countByEnumeratingWithState:objects:count:",&local_130,
                             auStack_f0,0x10);
        } while (IVar8 != 0);
        IVar6 = 0;
      }
LAB_000496f8:
      IVar6 = _objc_msgSend(IVar6,"objectForKeyedSubscript:",&cf_id);
      IVar4 = _objc_msgSend(IVar4,"isEqualToString:",IVar6);
      if (((uint)IVar4 & (bVar1 ^ 1)) == 1) {
        IVar4 = DLHelper::class_DLHelper__imageIcon_
                          ((ID)&objc::class_t::DLHelper,"imageIcon:",0xeb8e8);
        IVar4 = _objc_msgSend(IVar4,"imageWithRenderingMode:",2);
        IVar6 = _objc_msgSend((ID)&objc::class_t::DLButton,"buttonWithType:",1);
        _objc_msgSend(param_1,"setDlDeleteInfo:",IVar6);
        IVar6 = _objc_msgSend(param_1,"dlDeleteInfo");
        _objc_msgSend(IVar6,"setImage:forState:",IVar4,0);
        IVar4 = UIColor::colorWithRed_green_blue_alpha_
                          ((ID)&_OBJC_CLASS___UIColor,"colorWithRed:green:blue:alpha:",
                           0x3fedba5e353f7cee,0x3fd24dd2f1a9fbe7,0x3fd5916872b020c5,
                           0x3ff0000000000000);
        IVar6 = _objc_msgSend(param_1,"dlDeleteInfo");
        _objc_msgSend(IVar6,"setTintColor:",IVar4);
        IVar4 = _objc_msgSend(param_1,"dlDeleteInfo");
        local_158 = PTR___NSConcreteStackBlock_000e80d8;
        local_150 = 0xc2000000;
        local_148 = FUN_0004e798;
        puStack_140 = &DAT_000e8948;
        local_138 = param_3;
        _objc_msgSend(IVar4,"actionHandler:",&local_158);
        IVar4 = _objc_msgSend(param_1,"subviews");
        IVar4 = _objc_msgSend(IVar4,"objectAtIndexedSubscript:",0);
        IVar6 = _objc_msgSend(param_1,"dlDeleteInfo");
        _objc_msgSend(IVar4,"addSubview:",IVar6);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}

