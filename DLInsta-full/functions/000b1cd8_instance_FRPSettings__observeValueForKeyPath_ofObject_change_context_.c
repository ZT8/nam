/* Address: 000b1cd8 | Name: instance_FRPSettings__observeValueForKeyPath_ofObject_change_context_ | Body bytes: 124 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x30 bytes */

void FRPSettings::instance_FRPSettings__observeValueForKeyPath_ofObject_change_context_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,void *param_6)

{
  ID IVar1;
  
  IVar1 = instance_FRPSettings__valueDidChangeBlock(param_1,"valueDidChangeBlock");
  if (IVar1 == 0) {
    return;
  }
  IVar1 = instance_FRPSettings__valueDidChangeBlock(param_1,"valueDidChangeBlock");
  (**(code **)(IVar1 + 0x10))();
  return;
}

