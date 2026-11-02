
/* FRAGMENT entry=0xdb90 owner=0xd7d8; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 UndefinedFunction_0000db90(_Unwind_Exception *param_1,int param_2)

{
  code *pcVar1;
  
  if (param_2 != 1) {
                    /* WARNING: Subroutine does not return */
    __Unwind_Resume(param_1);
  }
  _objc_begin_catch(param_1);
  _objc_end_catch();
  pcVar1 = DAT_000ff9b0;
  if (DAT_000ff9b0 == (code *)0x0) {
    pcVar1 = (code *)_class_getMethodImplementation
                               (DAT_000ff9a8,"presentViewController:animated:completion:");
  }
  (*pcVar1)();
  return 0;
}

