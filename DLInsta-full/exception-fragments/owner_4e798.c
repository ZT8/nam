
/* FRAGMENT entry=0x4ed08 owner=0x4e798; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void UndefinedFunction_0004ed08(_Unwind_Exception *param_1)

{
                    /* WARNING: Subroutine does not return */
  __Unwind_Resume(param_1);
}


/* FRAGMENT entry=0x4ee18 owner=0x4e798; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void UndefinedFunction_0004ee18(_Unwind_Exception *param_1,ID param_2)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  long unaff_x29;
  
  if ((int)param_2 != 1) {
                    /* WARNING: Subroutine does not return */
    __Unwind_Resume(param_1);
  }
  _objc_begin_catch(param_1);
  _objc_end_catch();
  IVar2 = _objc_msgSend(param_2,"objectForKeyedSubscript:",&cf_date);
  if (IVar2 != 0) {
    IVar3 = _objc_alloc(&_OBJC_CLASS___NSDateFormatter);
    IVar3 = NSDateFormatter::init(IVar3,"init");
    NSDateFormatter::setDateFormat_(IVar3,"setDateFormat:",&cf_EEEE_dMMMMyyyy_h_mma);
    bVar1 = DLHelper::class_DLHelper__isDeviceLanguageArabic
                      ((ID)&objc::class_t::DLHelper,"isDeviceLanguageArabic");
    if (bVar1 != 0) {
      IVar4 = _objc_alloc(&_OBJC_CLASS___NSLocale);
      IVar4 = NSLocale::initWithLocaleIdentifier_(IVar4,"initWithLocaleIdentifier:",&cf_ar);
      NSDateFormatter::setLocale_(IVar3,"setLocale:",IVar4);
    }
    IVar2 = NSDateFormatter::stringFromDate_(IVar3,"stringFromDate:",IVar2);
    IVar3 = _objc_alloc(&objc::class_t::DLInfoSheetViewController);
    IVar4 = FUN_0008c218(&cf_DIRECT_MESSAGE_DELETE_DATE);
    IVar2 = DLInfoSheetViewController::instance_DLInfoSheetViewController__initWithTitle_info_
                      (IVar3,"initWithTitle:info:",IVar4,IVar2);
    IVar3 = _objc_alloc(&objc::class_t::DLInfoSheetControllerDelegate);
    IVar3 = _objc_msgSend(IVar3,"init");
    _objc_msgSend(IVar2,"setModalPresentationStyle:",4);
    _objc_msgSend(IVar2,"setTransitioningDelegate:",IVar3);
    IVar3 = DLHelper::class_DLHelper__topMostController
                      ((ID)&objc::class_t::DLHelper,"topMostController");
    _objc_msgSend(IVar3,"presentViewController:animated:completion:",IVar2,1,0);
  }
  if (*(long *)PTR____stack_chk_guard_000e8260 != *(long *)(unaff_x29 + -0x60)) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}

