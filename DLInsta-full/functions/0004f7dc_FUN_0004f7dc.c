/* Address: 0004f7dc | Name: FUN_0004f7dc | Body bytes: 764 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID FUN_0004f7dc(ID param_1)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  long lVar6;
  ID self;
  ID IVar7;
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
  IVar1 = _objc_msgSend(param_1,"count");
  if (IVar1 == 0) {
    IVar1 = 0;
  }
  else {
    IVar1 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
    IVar1 = NSMutableArray::init(IVar1,"init");
    IVar2 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
    IVar2 = NSMutableArray::init(IVar2,"init");
    uStack_108 = 0;
    local_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    local_130 = 0;
    uStack_118 = 0;
    local_120 = (long *)0x0;
    IVar3 = _objc_msgSend(param_1,"countByEnumeratingWithState:objects:count:",&local_130,auStack_f0
                          ,0x10);
    if (IVar3 != 0) {
      lVar6 = *local_120;
      do {
        IVar7 = 0;
        do {
          if (*local_120 != lVar6) {
            _objc_enumerationMutation(param_1);
          }
          self = *(ID *)(lStack_128 + IVar7 * 8);
          IVar4 = _objc_msgSend(self,"objectForKey:",&cf_width);
          IVar5 = NSMutableArray::indexOfObject_(IVar2,"indexOfObject:",IVar4);
          if (IVar5 == 0x7fffffffffffffff) {
            IVar5 = _objc_msgSend(self,"objectForKeyedSubscript:",&cf_url);
            IVar5 = _objc_msgSend(IVar5,"containsString:",&cf__mp4_);
            if ((int)IVar5 != 0) {
              NSMutableArray::addObject_(IVar2,"addObject:",IVar4);
              NSMutableArray::addObject_(IVar1,"addObject:",self);
            }
          }
          IVar7 = IVar7 + 1;
        } while (IVar3 != IVar7);
        IVar3 = _objc_msgSend(param_1,"countByEnumeratingWithState:objects:count:",&local_130,
                              auStack_f0,0x10);
      } while (IVar3 != 0);
    }
    IVar2 = NSSortDescriptor::sortDescriptorWithKey_ascending_
                      ((ID)&_OBJC_CLASS___NSSortDescriptor,"sortDescriptorWithKey:ascending:",
                       &cf_width,0);
    IVar2 = NSArray::arrayWithObjects_((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:",IVar2);
    IVar1 = NSMutableArray::sortedArrayUsingDescriptors_(IVar1,"sortedArrayUsingDescriptors:",IVar2)
    ;
  }
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return IVar1;
}

