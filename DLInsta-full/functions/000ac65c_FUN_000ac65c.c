/* Address: 000ac65c | Name: FUN_000ac65c | Body bytes: 176 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_000ac65c(ID param_1,int param_2)

{
  ID IVar1;
  ID IVar2;
  
  IVar2 = param_1;
  if (param_2 != 0) {
    IVar1 = _objc_msgSend(*(ID *)(param_1 + 0x20),"tag");
    IVar2 = _objc_msgSend(*(ID *)(param_1 + 0x28),"row");
    if (IVar1 == IVar2) {
      IVar2 = _objc_msgSend(*(ID *)(param_1 + 0x20),"avatarImageView");
      IVar1 = _objc_msgSend(*(ID *)(param_1 + 0x30),"avatarImage");
      _objc_msgSend(IVar2,"setImage:",IVar1);
      return 0;
    }
  }
  return IVar2;
}

