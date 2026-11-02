/* Address: 000a75bc | Name: instance_DLMaxAlertButton__actionHandler_ | Body bytes: 152 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

void DLMaxAlertButton::instance_DLMaxAlertButton__actionHandler_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(param_1 + (long)_handler);
  *(ID *)(param_1 + (long)_handler) = param_3;
  _objc_initWeak(uVar1,auStack_28,param_1,param_3,param_4);
  _objc_msgSend(param_1,"addTarget:action:forControlEvents:",param_1,"didPressButton",0x40);
  _objc_destroyWeak(auStack_28);
  return;
}

