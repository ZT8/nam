
/* FRAGMENT entry=0x3ebb8 owner=0x3e8c4; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void UndefinedFunction_0003ebb8(_Unwind_Exception *param_1,int param_2)

{
  long in_stack_00000028;
  
  if (param_2 != 1) {
                    /* WARNING: Subroutine does not return */
    __Unwind_Resume(param_1);
  }
  _objc_begin_catch(param_1);
  _objc_end_catch();
  if (*(long *)PTR____stack_chk_guard_000e8260 != in_stack_00000028) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}

