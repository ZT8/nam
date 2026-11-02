/* Address: 000a4450 | Name: FUN_000a4450 | Body bytes: 252 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_000a4450(long param_1)

{
  undefined *puVar1;
  ID IVar2;
  undefined *local_68;
  undefined8 local_60;
  code *local_58;
  undefined *puStack_50;
  ID local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  IVar2 = NSURL::URLWithString_
                    ((ID)&_OBJC_CLASS___NSURL,"URLWithString:",*(undefined8 *)(param_1 + 0x20));
  IVar2 = NSData::dataWithContentsOfURL_((ID)&_OBJC_CLASS___NSData,"dataWithContentsOfURL:",IVar2);
  puVar1 = PTR___dispatch_main_q_000e8268;
  _objc_retainAutorelease(PTR___dispatch_main_q_000e8268);
  local_68 = PTR___NSConcreteStackBlock_000e80d8;
  local_60 = 0xc2000000;
  local_58 = FUN_000a454c;
  puStack_50 = &DAT_000e9a98;
  uStack_40 = *(undefined8 *)(param_1 + 0x28);
  local_38 = *(undefined8 *)(param_1 + 0x30);
  local_48 = IVar2;
  _dispatch_async(puVar1,&local_68);
  return 0;
}

