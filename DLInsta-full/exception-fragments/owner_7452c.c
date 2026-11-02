
/* FRAGMENT entry=0x74918 owner=0x7452c; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void UndefinedFunction_00074918(_Unwind_Exception *param_1,int param_2)

{
  ID IVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x19;
  long in_stack_00000048;
  
  if (param_2 != 1) {
                    /* WARNING: Subroutine does not return */
    __Unwind_Resume(param_1);
  }
  IVar1 = _objc_begin_catch(param_1);
  IVar1 = _objc_msgSend(IVar1,"reason");
  _objc_msgSend(*(ID *)(unaff_x19 + 0x20),"class");
  uVar2 = _NSStringFromClass();
  uVar3 = _NSStringFromSelector(*(undefined8 *)(unaff_x19 + 0x28));
  uVar2 = FUN_0008cde8(uVar2,uVar3,0x292);
  FUN_0008cb50(IVar1,uVar2);
  _objc_end_catch(0);
  if (*(long *)PTR____stack_chk_guard_000e8260 != in_stack_00000048) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}


/* FRAGMENT entry=0x74af0 owner=0x7452c; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void UndefinedFunction_00074af0(_Unwind_Exception *param_1)

{
  _objc_end_catch(0);
                    /* WARNING: Subroutine does not return */
  __Unwind_Resume(param_1);
}


/* FRAGMENT entry=0x74b40 owner=0x7452c; not a source function; entry state unresolved */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void UndefinedFunction_00074b40(_Unwind_Exception *param_1,int param_2)

{
  ID IVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x19;
  long in_stack_00000048;
  
  if (param_2 != 1) {
                    /* WARNING: Subroutine does not return */
    __Unwind_Resume(param_1);
  }
  IVar1 = _objc_begin_catch(param_1);
  IVar1 = _objc_msgSend(IVar1,"reason");
  _objc_msgSend(*(ID *)(unaff_x19 + 0x20),"class");
  uVar2 = _NSStringFromClass();
  uVar3 = _NSStringFromSelector(*(undefined8 *)(unaff_x19 + 0x28));
  uVar2 = FUN_0008cde8(uVar2,uVar3,0x292);
  FUN_0008cb50(IVar1,uVar2);
  _objc_end_catch(0);
  if (*(long *)PTR____stack_chk_guard_000e8260 != in_stack_00000048) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

