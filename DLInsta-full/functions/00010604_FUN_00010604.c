/* Address: 00010604 | Name: FUN_00010604 | Body bytes: 112 */

void FUN_00010604(ID param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  
  pcVar1 = DAT_000ffae8;
  if (DAT_000ffae8 == (code *)0x0) {
    pcVar1 = (code *)_class_getMethodImplementation(DAT_000ffae0,"viewDidAppear:");
  }
  (*pcVar1)(param_1,param_2,param_3);
  _objc_msgSend(param_1,"setDLInstaStatus:",0);
  return;
}

