
/* FRAGMENT entry=0x491b4 owner=0x48f48; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void UndefinedFunction_000491b4(_Unwind_Exception *param_1,int param_2)

{
  if (param_2 != 1) {
                    /* WARNING: Subroutine does not return */
    __Unwind_Resume(param_1);
  }
  _objc_begin_catch();
                    /* WARNING: Could not recover jumptable at 0x000bdb98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_end_catch_000e86b0)();
  return;
}

