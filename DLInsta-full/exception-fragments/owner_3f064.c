
/* FRAGMENT entry=0x3f3f0 owner=0x3f064; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

uint UndefinedFunction_0003f3f0(_Unwind_Exception *param_1,int param_2)

{
  ID IVar1;
  ID unaff_x20;
  ID unaff_x24;
  long unaff_x29;
  undefined8 in_stack_00000018;
  
  if (param_2 != 1) {
                    /* WARNING: Subroutine does not return */
    __Unwind_Resume(param_1);
  }
  _objc_begin_catch(param_1);
  _objc_end_catch();
  IVar1 = _objc_msgSend(unaff_x20,"objectForKeyedSubscript:",&cf_id);
  IVar1 = _objc_msgSend(unaff_x24,"isEqualToString:",IVar1);
  if (*(long *)PTR____stack_chk_guard_000e8260 != *(long *)(unaff_x29 + -0x60)) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return (uint)IVar1 & in_stack_00000018._4_4_;
}

