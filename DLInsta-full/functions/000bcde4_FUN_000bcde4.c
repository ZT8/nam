/* Address: 000bcde4 | Name: FUN_000bcde4 | Body bytes: 88 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_000bcde4(long param_1)

{
  ID self;
  ID IVar1;
  
  self = *(ID *)(param_1 + 0x20);
  IVar1 = _objc_msgSend(*(ID *)(param_1 + 0x28),"allSelectedMedia");
  _objc_msgSend(self,"downloadMultibileItems:isNeedMerge:completion:",IVar1,1,
                &PTR___NSConcreteGlobalBlock_000e9dc8);
  return 0;
}

