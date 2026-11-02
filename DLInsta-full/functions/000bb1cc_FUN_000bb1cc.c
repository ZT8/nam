/* Address: 000bb1cc | Name: FUN_000bb1cc | Body bytes: 352 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_000bb1cc(long param_1,int param_2)

{
  ID IVar1;
  ID IVar2;
  char *op;
  
  if (param_2 == 0) {
    IVar1 = _objc_msgSend(*(ID *)(param_1 + 0x20),"indicatorView");
    _objc_msgSend(IVar1,"stopAnimating");
    IVar1 = _objc_msgSend(*(ID *)(param_1 + 0x20),"errorLabel");
    IVar2 = FUN_0008c218(&cf_HUD_ERROR);
    op = "setText:";
  }
  else {
    IVar1 = _objc_msgSend(*(ID *)(param_1 + 0x20),"tag");
    IVar2 = _objc_msgSend(*(ID *)(param_1 + 0x28),"row");
    if (IVar1 != IVar2) {
      return IVar2;
    }
    _objc_msgSend(*(ID *)(param_1 + 0x30),"setFetching:",0);
    IVar1 = _objc_msgSend(*(ID *)(param_1 + 0x20),"indicatorView");
    _objc_msgSend(IVar1,"stopAnimating");
    IVar1 = _objc_msgSend(*(ID *)(param_1 + 0x20),"mediaImageView");
    IVar2 = _objc_msgSend(*(ID *)(param_1 + 0x30),"coverImage");
    op = "setImage:";
  }
  _objc_msgSend(IVar1,op,IVar2);
  return 0;
}

