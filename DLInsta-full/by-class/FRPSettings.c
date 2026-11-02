/* Automatic pseudocode grouped by Objective-C class. NOT original source. */

/* -[FRPSettings initWithKey:defaultValue:] | encoding @32@0:8@16@24 */
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


/* -[FRPSettings observeValueForKeyPath:ofObject:change:context:] | encoding v48@0:8@16@24@32^v40 */
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


/* -[FRPSettings value] | encoding @16@0:8 */
/* Address: 000b1d54 | Name: instance_FRPSettings__value | Body bytes: 148 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID FRPSettings::instance_FRPSettings__value(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = NSUserDefaults::standardUserDefaults
                    ((ID)&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
  IVar2 = instance_FRPSettings__key(param_1,"key");
  IVar1 = NSUserDefaults::objectForKey_(IVar1,"objectForKey:",IVar2);
  return IVar1;
}


/* -[FRPSettings setValue:] | encoding v24@0:8@16 */
/* Address: 000b1de8 | Name: instance_FRPSettings__setValue_ | Body bytes: 324 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void FRPSettings::instance_FRPSettings__setValue_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = instance_FRPSettings__value(param_1,"value");
  if (IVar1 != param_3) {
    IVar1 = NSUserDefaults::standardUserDefaults
                      ((ID)&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
    IVar2 = instance_FRPSettings__key(param_1,"key");
    NSUserDefaults::setObject_forKey_(IVar1,"setObject:forKey:",param_3,IVar2);
    IVar1 = NSUserDefaults::standardUserDefaults
                      ((ID)&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
    NSUserDefaults::synchronize(IVar1,"synchronize");
    IVar1 = instance_FRPSettings__fileSave(param_1,"fileSave");
    IVar1 = _objc_msgSend(IVar1,"length");
    if (IVar1 != 0) {
      instance_FRPSettings__saveValue_(param_1,"saveValue:",param_3);
    }
  }
  return;
}


/* -[FRPSettings saveValue:] | encoding v24@0:8@16 */
/* Address: 000b1f2c | Name: instance_FRPSettings__saveValue_ | Body bytes: 292 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void FRPSettings::instance_FRPSettings__saveValue_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = _objc_alloc(&_OBJC_CLASS___NSMutableDictionary);
  IVar2 = instance_FRPSettings__fileSave(param_1,"fileSave");
  IVar1 = NSMutableDictionary::initWithContentsOfFile_(IVar1,"initWithContentsOfFile:",IVar2);
  if (IVar1 == 0) {
    IVar1 = NSMutableDictionary::new((ID)&_OBJC_CLASS___NSMutableDictionary,"new");
  }
  IVar2 = instance_FRPSettings__key(param_1,"key");
  NSMutableDictionary::setObject_forKey_(IVar1,"setObject:forKey:",param_3,IVar2);
  IVar2 = instance_FRPSettings__fileSave(param_1,"fileSave");
  NSMutableDictionary::writeToFile_atomically_(IVar1,"writeToFile:atomically:",IVar2,1);
  return;
}


/* -[FRPSettings key] | encoding @16@0:8 */
/* Address: 000b2050 | Name: instance_FRPSettings__key | Body bytes: 8 */

/* Function Stack Size: 0x10 bytes */

ID FRPSettings::instance_FRPSettings__key(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 8);
}


/* -[FRPSettings setKey:] | encoding v24@0:8@16 */
/* Address: 000b2058 | Name: instance_FRPSettings__setKey_ | Body bytes: 12 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void FRPSettings::instance_FRPSettings__setKey_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 8) = param_3;
  return;
}


/* -[FRPSettings fileSave] | encoding @16@0:8 */
/* Address: 000b2064 | Name: instance_FRPSettings__fileSave | Body bytes: 8 */

/* Function Stack Size: 0x10 bytes */

ID FRPSettings::instance_FRPSettings__fileSave(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x10);
}


/* -[FRPSettings setFileSave:] | encoding v24@0:8@16 */
/* Address: 000b206c | Name: instance_FRPSettings__setFileSave_ | Body bytes: 12 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void FRPSettings::instance_FRPSettings__setFileSave_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x10) = param_3;
  return;
}


/* -[FRPSettings valueDidChangeBlock] | encoding @?16@0:8 */
/* Address: 000b2078 | Name: instance_FRPSettings__valueDidChangeBlock | Body bytes: 8 */

/* Function Stack Size: 0x10 bytes */

ID FRPSettings::instance_FRPSettings__valueDidChangeBlock(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x18);
}


/* -[FRPSettings setValueDidChangeBlock:] | encoding v24@0:8@?16 */
/* Address: 000b2080 | Name: instance_FRPSettings__setValueDidChangeBlock_ | Body bytes: 8 */

/* WARNING: Function: _objc_setProperty_nonatomic_copy replaced with injection:
   _objc_setProperty_fixup */
/* Function Stack Size: 0x18 bytes */

void FRPSettings::instance_FRPSettings__setValueDidChangeBlock_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  *(ID *)(param_1 + 0x18) = param_3;
  return;
}


/* -[FRPSettings .cxx_destruct] | encoding v16@0:8 */
/* Address: 000b2088 | Name: instance_FRPSettings___cxx_destruct | Body bytes: 60 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void FRPSettings::instance_FRPSettings___cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}


/* +[FRPSettings settingsWithKey:defaultValue:] | encoding @32@0:8@16@24 */
/* Address: 000b1b04 | Name: class_FRPSettings__settingsWithKey_defaultValue_ | Body bytes: 116 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID FRPSettings::class_FRPSettings__settingsWithKey_defaultValue_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  
  IVar1 = _objc_alloc(param_1);
  IVar1 = instance_FRPSettings__initWithKey_defaultValue_
                    (IVar1,"initWithKey:defaultValue:",param_3,param_4);
  return IVar1;
}

