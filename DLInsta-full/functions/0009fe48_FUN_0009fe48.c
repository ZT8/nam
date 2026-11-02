/* Address: 0009fe48 | Name: FUN_0009fe48 | Body bytes: 124 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_0009fe48(long param_1,undefined8 param_2,undefined8 param_3)

{
  DLHelper::class_DLHelper__setBool_forKey_
            ((ID)&objc::class_t::DLHelper,"setBool:forKey:",(bool)param_2,0xec0c8);
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2,param_3);
  return 0;
}

