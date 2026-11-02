/* Address: 000a47d8 | Name: FUN_000a47d8 | Body bytes: 652 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_000a47d8(undefined1 param_1 [16],undefined1 param_2 [16],double param_3,double param_4,
                 long param_5)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  undefined8 local_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_000e8260;
  IVar1 = DLHelper::class_DLHelper__topMostController
                    ((ID)&objc::class_t::DLHelper,"topMostController");
  IVar2 = _objc_alloc(&_OBJC_CLASS___UIActivityViewController);
  local_70 = *(undefined8 *)(param_5 + 0x20);
  IVar3 = NSArray::arrayWithObjects_count_
                    ((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:count:",&local_70,1);
  IVar2 = UIActivityViewController::initWithActivityItems_applicationActivities_
                    (IVar2,"initWithActivityItems:applicationActivities:",IVar3,0);
  IVar3 = UIDevice::currentDevice((ID)&_OBJC_CLASS___UIDevice,"currentDevice");
  IVar3 = UIDevice::respondsToSelector_(IVar3,"respondsToSelector:","userInterfaceIdiom");
  if ((IVar3 & 1) != 0) {
    IVar3 = UIDevice::currentDevice((ID)&_OBJC_CLASS___UIDevice,"currentDevice");
    IVar3 = UIDevice::userInterfaceIdiom(IVar3,"userInterfaceIdiom");
    if (IVar3 != 0) {
      IVar3 = _objc_alloc(&_OBJC_CLASS___UIPopoverController);
      IVar2 = UIPopoverController::initWithContentViewController_
                        (IVar3,"initWithContentViewController:",IVar2);
      IVar3 = _objc_msgSend(IVar1,"view");
      _objc_msgSend(IVar3,"frame");
      IVar3 = _objc_msgSend(IVar1,"view");
      _objc_msgSend(IVar3,"frame");
      IVar1 = _objc_msgSend(IVar1,"view");
      UIPopoverController::presentPopoverFromRect_inView_permittedArrowDirections_animated_
                (IVar2,"presentPopoverFromRect:inView:permittedArrowDirections:animated:",
                 param_3 * 0.5,param_4 + -50.0,0,0,IVar1,0xf,1);
      goto LAB_000a4a18;
    }
  }
  _objc_msgSend(IVar1,"presentViewController:animated:completion:",IVar2,1,0);
LAB_000a4a18:
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}

