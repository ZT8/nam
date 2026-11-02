/* Address: 0009dac8 | Name: FUN_0009dac8 | Body bytes: 100 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_0009dac8(long param_1)

{
  ID self;
  
  self = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
  NSFileManager::removeItemAtURL_error_
            (self,"removeItemAtURL:error:",*(undefined8 *)(param_1 + 0x20),0);
                    /* WARNING: Could not recover jumptable at 0x0009db28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
  return;
}

