/* Address: 000828bc | Name: FUN_000828bc | Body bytes: 300 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
FUN_000828bc(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
            undefined8 param_4,ID param_5)

{
  ID IVar1;
  
  IVar1 = _objc_msgSend(param_5,"contentView");
  IVar1 = _objc_msgSend(IVar1,"viewWithTag:",0x6f);
  _objc_msgSend(param_5,"frame");
  _objc_msgSend(IVar1,"setFrame:",0,0xc014000000000000,param_3,0x404e000000000000);
  IVar1 = _objc_msgSend(param_5,"contentView");
  IVar1 = _objc_msgSend(IVar1,"viewWithTag:",0xde);
  _objc_msgSend(param_5,"frame");
  _objc_msgSend(IVar1,"setFrame:",0,0x403e000000000000,param_3,0x404e000000000000);
  return 0;
}

