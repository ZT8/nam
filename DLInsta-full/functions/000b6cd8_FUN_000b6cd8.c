/* Address: 000b6cd8 | Name: FUN_000b6cd8 | Body bytes: 248 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_000b6cd8(long param_1)

{
  undefined *puVar1;
  ID self;
  dispatch_time_t dVar2;
  long lVar3;
  undefined *local_58;
  undefined8 local_50;
  code *local_48;
  undefined *puStack_40;
  undefined8 local_38;
  
  self = _objc_msgSend(*(ID *)(param_1 + 0x20),"errorLabel");
  _objc_msgSend(self,"setHidden:",0);
  lVar3 = (long)DLSSProfileViewController::indecatorView;
  _objc_msgSend(*(ID *)(*(long *)(param_1 + 0x20) + lVar3),"stopAnimating");
  _objc_msgSend(*(ID *)(*(long *)(param_1 + 0x20) + lVar3),"removeFromSuperview");
  dVar2 = _dispatch_time(0,3000000000);
  puVar1 = PTR___dispatch_main_q_000e8268;
  _objc_retainAutorelease(PTR___dispatch_main_q_000e8268);
  local_58 = PTR___NSConcreteStackBlock_000e80d8;
  local_50 = 0xc2000000;
  local_48 = FUN_000b6dd0;
  puStack_40 = &DAT_000e9798;
  local_38 = *(undefined8 *)(param_1 + 0x20);
  _dispatch_after(dVar2,puVar1,&local_58);
  return;
}

