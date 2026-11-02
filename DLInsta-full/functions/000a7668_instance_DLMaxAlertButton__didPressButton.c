/* Address: 000a7668 | Name: instance_DLMaxAlertButton__didPressButton | Body bytes: 124 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void DLMaxAlertButton::instance_DLMaxAlertButton__didPressButton(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = instance_DLMaxAlertButton__handler(param_1,"handler");
  if (IVar1 == 0) {
    return;
  }
  IVar1 = instance_DLMaxAlertButton__handler(param_1,"handler");
  (**(code **)(IVar1 + 0x10))();
  return;
}

