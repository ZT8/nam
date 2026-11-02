
/* FRAGMENT entry=0x61a10 owner=0x6074c; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void UndefinedFunction_00061a10(_Unwind_Exception *param_1,int param_2)

{
  ID IVar1;
  undefined8 uVar2;
  long unaff_x29;
  ID in_stack_00000038;
  undefined8 in_stack_00000060;
  _Unwind_Exception *p_Stack0000000000000090;
  
  p_Stack0000000000000090 = param_1;
  if (param_2 != 1) {
                    /* WARNING: Subroutine does not return */
    __Unwind_Resume(param_1);
  }
  IVar1 = _objc_begin_catch(param_1);
  IVar1 = _objc_msgSend(IVar1,"reason");
  _objc_msgSend(in_stack_00000038,"class");
  uVar2 = _NSStringFromClass();
  uVar2 = FUN_0008cde8(uVar2,in_stack_00000060,600);
  FUN_0008cb50(IVar1,uVar2);
  _objc_end_catch(0);
  if (*(long *)PTR____stack_chk_guard_000e8260 != *(long *)(unaff_x29 + -0x78)) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}


/* FRAGMENT entry=0x62094 owner=0x6074c; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void UndefinedFunction_00062094(_Unwind_Exception *param_1)

{
  _Unwind_Exception *p_Stack0000000000000090;
  
  p_Stack0000000000000090 = param_1;
  _objc_end_catch(0);
                    /* WARNING: Subroutine does not return */
  __Unwind_Resume(p_Stack0000000000000090);
}

