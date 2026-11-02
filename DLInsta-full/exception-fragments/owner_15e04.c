
/* FRAGMENT entry=0x2ead0 owner=0x15e04; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void UndefinedFunction_0002ead0(_Unwind_Exception *param_1,int param_2)

{
  ID IVar1;
  long unaff_x29;
  
  if (param_2 != 1) {
                    /* WARNING: Subroutine does not return */
    __Unwind_Resume(param_1);
  }
  IVar1 = _objc_begin_catch();
  _objc_msgSend(IVar1,"name");
  _objc_msgSend(IVar1,"reason");
  _NSLog(&cf_L_);
  _objc_msgSend(IVar1,"name");
  _objc_msgSend(IVar1,"reason");
  IVar1 = _objc_msgSend((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_Exception______);
  _objc_msgSend((ID)&objc::class_t::DLHelper,"showMessageWithTitle:message:",&cf_DLInsta__,IVar1);
  _objc_end_catch(0);
  if (*(long *)PTR____stack_chk_guard_000e8260 != *(long *)(unaff_x29 + -0x60)) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}


/* FRAGMENT entry=0x35314 owner=0x15e04; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void UndefinedFunction_00035314(_Unwind_Exception *param_1)

{
  _objc_end_catch(0);
                    /* WARNING: Subroutine does not return */
  __Unwind_Resume(param_1);
}

