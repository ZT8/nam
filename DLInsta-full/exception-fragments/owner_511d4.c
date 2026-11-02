
/* FRAGMENT entry=0x51ef4 owner=0x511d4; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

undefined8 UndefinedFunction_00051ef4(_Unwind_Exception *param_1,int param_2)

{
  long unaff_x29;
  undefined8 in_stack_000000b8;
  
  if (param_2 != 1) {
                    /* WARNING: Subroutine does not return */
    __Unwind_Resume(param_1);
  }
  _objc_begin_catch(param_1);
  _objc_end_catch();
  if (*(long *)PTR____stack_chk_guard_000e8260 != *(long *)(unaff_x29 + -0x60)) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return in_stack_000000b8;
}


/* FRAGMENT entry=0x52300 owner=0x511d4; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void UndefinedFunction_00052300(void)

{
  _Unwind_Exception *unaff_x20;
  
                    /* WARNING: Subroutine does not return */
  __Unwind_Resume(unaff_x20);
}

