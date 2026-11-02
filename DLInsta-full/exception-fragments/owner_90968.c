
/* FRAGMENT entry=0x90c3c owner=0x90968; not a source function; entry state unresolved */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 UndefinedFunction_00090c3c(_Unwind_Exception *param_1,int param_2)

{
  long unaff_x20;
  
  if (param_2 != 1) {
                    /* WARNING: Subroutine does not return */
    __Unwind_Resume(param_1);
  }
  _objc_begin_catch(param_1);
  (**(code **)(unaff_x20 + 0x10))();
  _objc_end_catch(0);
  return 0;
}


/* FRAGMENT entry=0x90c8c owner=0x90968; not a source function; entry state unresolved */

void UndefinedFunction_00090c8c(_Unwind_Exception *param_1)

{
  _objc_end_catch();
                    /* WARNING: Subroutine does not return */
  __Unwind_Resume(param_1);
}

