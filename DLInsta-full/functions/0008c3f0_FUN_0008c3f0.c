/* Address: 0008c3f0 | Name: FUN_0008c3f0 | Body bytes: 208 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_0008c3f0(void)

{
  ID IVar1;
  ID IVar2;
  undefined8 local_40;
  undefined8 local_38;
  
  IVar1 = _objc_alloc(&_OBJC_CLASS___LAContext);
  IVar1 = LAContext::init(IVar1,"init");
  local_38 = 0;
  IVar2 = LAContext::canEvaluatePolicy_error_(IVar1,"canEvaluatePolicy:error:",1,&local_38);
  if ((IVar2 & 1) == 0) {
    local_40 = local_38;
    IVar1 = LAContext::canEvaluatePolicy_error_(IVar1,"canEvaluatePolicy:error:",2,&local_40);
    if ((int)IVar1 == 0) {
      return 0;
    }
  }
  return 1;
}

