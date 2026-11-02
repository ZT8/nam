/* Address: 000437a0 | Name: FUN_000437a0 | Body bytes: 156 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_000437a0(ID param_1)

{
  ID IVar1;
  
  IVar1 = _objc_msgSend(param_1,"userHaveSeenMessage");
  _objc_msgSend(param_1,"setUserHaveSeenMessage:",(ulong)((uint)IVar1 ^ 1));
  IVar1 = _objc_msgSend(param_1,"userHaveSeenMessage");
  DAT_000ffed8 = (undefined1)IVar1;
  IVar1 = _objc_msgSend(param_1,"delegate");
  _objc_msgSend(IVar1,"performSelector:","_applicationDidBecomeActive:");
  return 0;
}

