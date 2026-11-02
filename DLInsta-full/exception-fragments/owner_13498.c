
/* FRAGMENT entry=0x1388c owner=0x13498; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void UndefinedFunction_0001388c(_Unwind_Exception *param_1,int param_2)

{
  ID IVar1;
  long in_stack_00000048;
  
  if (param_2 != 1) {
                    /* WARNING: Subroutine does not return */
    __Unwind_Resume(param_1);
  }
  IVar1 = _objc_begin_catch(param_1);
  _objc_msgSend(IVar1,"name");
  _objc_msgSend(IVar1,"reason");
  _NSLog(&cf_L_);
  _objc_msgSend(IVar1,"name");
  _objc_msgSend(IVar1,"reason");
  IVar1 = _objc_msgSend((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_Exception______);
  _objc_msgSend((ID)&objc::class_t::DLHelper,"showMessageWithTitle:message:",&cf_DLInsta__,IVar1);
  _objc_end_catch(0);
  if (*(long *)PTR____stack_chk_guard_000e8260 != in_stack_00000048) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}


/* FRAGMENT entry=0x13ab0 owner=0x13498; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void UndefinedFunction_00013ab0(_Unwind_Exception *param_1)

{
  _objc_end_catch(0);
                    /* WARNING: Subroutine does not return */
  __Unwind_Resume(param_1);
}

