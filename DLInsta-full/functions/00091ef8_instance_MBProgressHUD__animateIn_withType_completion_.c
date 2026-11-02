/* Address: 00091ef8 | Name: instance_MBProgressHUD__animateIn_withType_completion_ | Body bytes: 472 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x24 bytes */

void MBProgressHUD::instance_MBProgressHUD__animateIn_withType_completion_
               (ID param_1,SEL param_2,bool param_3,long_long param_4,ID param_5,undefined4 param_6)

{
  long_long lVar1;
  ID self;
  undefined8 *puVar2;
  undefined8 *puVar3;
  double extraout_d0;
  double extraout_d0_00;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *local_1b0;
  undefined8 local_1a8;
  code *local_1a0;
  undefined *puStack_198;
  ID local_190;
  ID local_188;
  long_long lStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined1 local_118;
  undefined8 local_110 [6];
  undefined8 auStack_e0 [6];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  lVar1 = 2;
  if (param_3 != 0) {
    lVar1 = 3;
  }
  if (param_4 != 1) {
    lVar1 = param_4;
  }
  _CGAffineTransformMakeScale(&local_80,0x3fe0000000000000,0x3fe0000000000000);
  _CGAffineTransformMakeScale(&local_b0,0x3ff8000000000000,0x3ff8000000000000);
  self = instance_MBProgressHUD__bezelView(param_1,"bezelView");
  if (param_3 != 0) {
    _objc_msgSend(self,"alpha");
    if (extraout_d0 == 0.0 && lVar1 == 3) {
      puVar3 = &local_80;
      puVar2 = auStack_e0;
    }
    else {
      _objc_msgSend(self,"alpha");
      if (extraout_d0_00 != 0.0 || lVar1 != 2) goto code_r0x00091fec;
      puVar3 = &local_b0;
      puVar2 = local_110;
    }
    uVar4 = *puVar3;
    uVar6 = puVar3[3];
    uVar5 = puVar3[2];
    puVar2[1] = puVar3[1];
    *puVar2 = uVar4;
    puVar2[3] = uVar6;
    puVar2[2] = uVar5;
    uVar4 = puVar3[4];
    puVar2[5] = puVar3[5];
    puVar2[4] = uVar4;
    _objc_msgSend(self,"setTransform:");
  }
code_r0x00091fec:
  local_1a8 = 0xc2000000;
  uStack_170 = uStack_a8;
  local_178 = local_b0;
  uStack_160 = uStack_98;
  local_168 = uStack_a0;
  uStack_150 = uStack_88;
  local_158 = local_90;
  uStack_140 = uStack_78;
  local_148 = local_80;
  local_1b0 = PTR___NSConcreteStackBlock_000e80d8;
  local_1a0 = FUN_000920d0;
  puStack_198 = &DAT_000e9168;
  local_118 = (undefined1)param_3;
  uStack_130 = uStack_68;
  local_138 = uStack_70;
  uStack_120 = uStack_58;
  local_128 = local_60;
  local_190 = self;
  local_188 = param_1;
  lStack_180 = lVar1;
  UIView::
  animateWithDuration_delay_usingSpringWithDamping_initialSpringVelocity_options_animations_completion_
            ((ID)&_OBJC_CLASS___UIView,
             "animateWithDuration:delay:usingSpringWithDamping:initialSpringVelocity:options:animations:completion:"
             ,0x3fd3333333333333,0,0x3ff0000000000000,0,4,&local_1b0,param_5);
  return;
}

