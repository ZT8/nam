/* Address: 000acb88 | Name: FUN_000acb88 | Body bytes: 304 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_000acb88(long param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  ID IVar2;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  undefined8 local_70;
  undefined *local_68;
  undefined8 local_60;
  code *local_58;
  undefined *puStack_50;
  ID local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  puVar1 = PTR___dispatch_main_q_000e8268;
  if ((param_2 == 0) || (param_4 != 0)) {
    _objc_retainAutorelease(PTR___dispatch_main_q_000e8268);
    local_90 = PTR___NSConcreteStackBlock_000e80d8;
    local_88 = 0xc2000000;
    local_80 = FUN_000acd00;
    puStack_78 = &DAT_000e92f8;
    local_70 = *(undefined8 *)(param_1 + 0x28);
    _dispatch_async(puVar1,&local_90);
  }
  else {
    IVar2 = UIImage::imageWithData_((ID)&_OBJC_CLASS___UIImage,"imageWithData:",param_2);
    puVar1 = PTR___dispatch_main_q_000e8268;
    _objc_retainAutorelease(PTR___dispatch_main_q_000e8268);
    local_68 = PTR___NSConcreteStackBlock_000e80d8;
    local_60 = 0xc2000000;
    local_58 = FUN_000accb8;
    puStack_50 = &DAT_000e9a98;
    uStack_40 = *(undefined8 *)(param_1 + 0x20);
    local_38 = *(undefined8 *)(param_1 + 0x28);
    local_48 = IVar2;
    _dispatch_async(puVar1,&local_68);
  }
  return 0;
}

