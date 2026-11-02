
/* FRAGMENT entry=0x8e140 owner=0x8e080; not a source function; entry state unresolved */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 UndefinedFunction_0008e140(_Unwind_Exception *param_1,int param_2)

{
  if (param_2 != 1) {
                    /* WARNING: Subroutine does not return */
    __Unwind_Resume(param_1);
  }
  _objc_begin_catch(param_1);
  FUN_0008e194(&PTR___NSConcreteGlobalBlock_000e8f58);
  _objc_end_catch(0);
  return 0;
}


/* FRAGMENT entry=0x8e184 owner=0x8e080; not a source function; entry state unresolved */

void UndefinedFunction_0008e184(_Unwind_Exception *param_1)

{
  _objc_end_catch();
                    /* WARNING: Subroutine does not return */
  __Unwind_Resume(param_1);
}

