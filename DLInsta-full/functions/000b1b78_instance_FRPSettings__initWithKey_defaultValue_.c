/* Address: 000b1b78 | Name: instance_FRPSettings__initWithKey_defaultValue_ | Body bytes: 352 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

ID FRPSettings::instance_FRPSettings__initWithKey_defaultValue_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID self;
  ID self_00;
  ID IVar1;
  ID local_68;
  class_t *pcStack_60;
  ID local_58;
  ID IStack_50;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_000e8260;
  pcStack_60 = &objc::class_t::FRPSettings;
  local_68 = param_1;
  self = NSObject::init((ID)&local_68,"init");
  if (self != 0) {
    NSObject::setKey_(self,"setKey:",param_3);
    self_00 = NSUserDefaults::standardUserDefaults
                        ((ID)&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
    local_58 = NSObject::key(self,"key");
    IStack_50 = param_4;
    IVar1 = NSDictionary::dictionaryWithObjects_forKeys_count_
                      ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                       &IStack_50,&local_58,1);
    NSUserDefaults::registerDefaults_(self_00,"registerDefaults:",IVar1);
  }
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return self;
}

