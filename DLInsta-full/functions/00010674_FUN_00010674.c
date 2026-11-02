/* Address: 00010674 | Name: FUN_00010674 | Body bytes: 236 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_00010674(ID param_1,undefined8 param_2)

{
  code *pcVar1;
  ID IVar2;
  undefined8 uVar3;
  
  pcVar1 = DAT_000ffaf0;
  if (DAT_000ffaf0 == (code *)0x0) {
    pcVar1 = (code *)_class_getMethodImplementation(DAT_000ffae0,"viewDidLoad");
  }
  (*pcVar1)(param_1,param_2);
  IVar2 = _objc_msgSend(param_1,"dLInstaStatus");
  if (IVar2 == 2) {
    IVar2 = _objc_msgSend(param_1,"valueForKey:",&cf__cancelButton);
    uVar3 = FUN_0008c218(&cf_ACTION_CANCEL);
    _objc_msgSend(IVar2,"setTitle:forState:",uVar3,0);
    return 0;
  }
  return IVar2;
}

