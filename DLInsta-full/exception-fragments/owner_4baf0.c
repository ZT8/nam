
/* FRAGMENT entry=0x4be50 owner=0x4baf0; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 UndefinedFunction_0004be50(_Unwind_Exception *param_1,int param_2)

{
  code *unaff_x22;
  
  if (param_2 != 1) {
                    /* WARNING: Subroutine does not return */
    __Unwind_Resume(param_1);
  }
  _objc_begin_catch(param_1);
  _objc_end_catch();
  (*unaff_x22)(0);
  return 0;
}

