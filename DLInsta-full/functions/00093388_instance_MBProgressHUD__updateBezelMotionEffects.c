/* Address: 00093388 | Name: instance_MBProgressHUD__updateBezelMotionEffects | Body bytes: 832 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void MBProgressHUD::instance_MBProgressHUD__updateBezelMotionEffects(ID param_1,SEL param_2)

{
  bool bVar1;
  ID self;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  long lVar5;
  undefined8 local_140;
  long lStack_138;
  long *local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [128];
  ID local_80;
  ID IStack_78;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_000e8260;
  self = instance_MBProgressHUD__bezelView(param_1,"bezelView");
  IVar2 = _objc_msgSend(self,"respondsToSelector:","addMotionEffect:");
  if ((int)IVar2 != 0) {
    bVar1 = instance_MBProgressHUD__areDefaultMotionEffectsEnabled
                      (param_1,"areDefaultMotionEffectsEnabled");
    if (bVar1 == 0) {
      IVar2 = _objc_msgSend(self,"motionEffects");
      lStack_138 = 0;
      local_140 = 0;
      uStack_128 = 0;
      local_130 = (long *)0x0;
      uStack_118 = 0;
      local_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      IVar3 = _objc_msgSend(IVar2,"countByEnumeratingWithState:objects:count:",&local_140,
                            auStack_100,0x10);
      if (IVar3 != 0) {
        lVar5 = *local_130;
        do {
          IVar4 = 0;
          do {
            if (*local_130 != lVar5) {
              _objc_enumerationMutation(IVar2);
            }
            _objc_msgSend(self,"removeMotionEffect:",*(undefined8 *)(lStack_138 + IVar4 * 8));
            IVar4 = IVar4 + 1;
          } while (IVar3 != IVar4);
          IVar3 = _objc_msgSend(IVar2,"countByEnumeratingWithState:objects:count:",&local_140,
                                auStack_100,0x10);
        } while (IVar3 != 0);
      }
    }
    else {
      IVar2 = _objc_alloc(&_OBJC_CLASS___UIInterpolatingMotionEffect);
      IVar2 = UIInterpolatingMotionEffect::initWithKeyPath_type_
                        (IVar2,"initWithKeyPath:type:",&cf_center_x,0);
      IVar3 = NSNumber::numberWithDouble_
                        ((ID)&_OBJC_CLASS___NSNumber,"numberWithDouble:",0x4024000000000000);
      UIInterpolatingMotionEffect::setMaximumRelativeValue_(IVar2,"setMaximumRelativeValue:",IVar3);
      IVar3 = NSNumber::numberWithDouble_
                        ((ID)&_OBJC_CLASS___NSNumber,"numberWithDouble:",0xc024000000000000);
      UIInterpolatingMotionEffect::setMinimumRelativeValue_(IVar2,"setMinimumRelativeValue:",IVar3);
      IVar3 = _objc_alloc(&_OBJC_CLASS___UIInterpolatingMotionEffect);
      IVar3 = UIInterpolatingMotionEffect::initWithKeyPath_type_
                        (IVar3,"initWithKeyPath:type:",&cf_center_y,1);
      IVar4 = NSNumber::numberWithDouble_
                        ((ID)&_OBJC_CLASS___NSNumber,"numberWithDouble:",0x4024000000000000);
      UIInterpolatingMotionEffect::setMaximumRelativeValue_(IVar3,"setMaximumRelativeValue:",IVar4);
      IVar4 = NSNumber::numberWithDouble_
                        ((ID)&_OBJC_CLASS___NSNumber,"numberWithDouble:",0xc024000000000000);
      UIInterpolatingMotionEffect::setMinimumRelativeValue_(IVar3,"setMinimumRelativeValue:",IVar4);
      IVar4 = _objc_alloc(&_OBJC_CLASS___UIMotionEffectGroup);
      IVar4 = UIMotionEffectGroup::init(IVar4,"init");
      local_80 = IVar2;
      IStack_78 = IVar3;
      IVar2 = NSArray::arrayWithObjects_count_
                        ((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:count:",&local_80,2);
      UIMotionEffectGroup::setMotionEffects_(IVar4,"setMotionEffects:",IVar2);
      _objc_msgSend(self,"addMotionEffect:",IVar4);
    }
  }
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}

