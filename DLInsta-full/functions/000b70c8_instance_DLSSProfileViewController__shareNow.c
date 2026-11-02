/* Address: 000b70c8 | Name: instance_DLSSProfileViewController__shareNow | Body bytes: 296 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void DLSSProfileViewController::instance_DLSSProfileViewController__shareNow(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID local_50;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_000e8260;
  IVar1 = _objc_alloc(&_OBJC_CLASS___UIActivityViewController);
  IVar2 = instance_DLSSProfileViewController__imageView(param_1,"imageView");
  local_50 = _objc_msgSend(IVar2,"image");
  IVar2 = NSArray::arrayWithObjects_count_
                    ((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:count:",&local_50,1);
  IVar1 = UIActivityViewController::initWithActivityItems_applicationActivities_
                    (IVar1,"initWithActivityItems:applicationActivities:",IVar2,0);
  _objc_msgSend(param_1,"presentViewController:animated:completion:",IVar1,1,0);
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}

