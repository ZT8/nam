
/* FRAGMENT entry=0x590c0 owner=0x58e34; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 UndefinedFunction_000590c0(_Unwind_Exception *param_1,int param_2)

{
  if (param_2 != 1) {
                    /* WARNING: Subroutine does not return */
    __Unwind_Resume(param_1);
  }
  _objc_begin_catch(param_1);
  _objc_end_catch();
  return 0;
}

