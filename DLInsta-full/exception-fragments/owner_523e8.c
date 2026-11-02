
/* FRAGMENT entry=0x53174 owner=0x523e8; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void UndefinedFunction_00053174(_Unwind_Exception *param_1,int param_2)

{
  ID self;
  long unaff_x29;
  ID in_stack_00000010;
  ID in_stack_000000d0;
  
  if (param_2 != 1) {
                    /* WARNING: Subroutine does not return */
    __Unwind_Resume(param_1);
  }
  _objc_begin_catch(param_1);
  _objc_end_catch();
  DLMultiMediaViewController::instance_DLMultiMediaViewController__setPosts_
            (in_stack_00000010,"setPosts:",in_stack_000000d0);
  self = DLHelper::class_DLHelper__topMostController
                   ((ID)&objc::class_t::DLHelper,"topMostController");
  _objc_msgSend(self,"presentViewController:animated:completion:",in_stack_00000010,1,0);
  if (*(long *)PTR____stack_chk_guard_000e8260 != *(long *)(unaff_x29 + -0x60)) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}


/* FRAGMENT entry=0x53620 owner=0x523e8; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void UndefinedFunction_00053620(void)

{
  _Unwind_Exception *unaff_x21;
  
                    /* WARNING: Subroutine does not return */
  __Unwind_Resume(unaff_x21);
}


/* FRAGMENT entry=0x5362c owner=0x523e8; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void UndefinedFunction_0005362c(_Unwind_Exception *param_1)

{
                    /* WARNING: Subroutine does not return */
  __Unwind_Resume(param_1);
}

