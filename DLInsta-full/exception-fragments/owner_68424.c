
/* FRAGMENT entry=0x69210 owner=0x68424; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void UndefinedFunction_00069210(_Unwind_Exception *param_1,undefined8 param_2)

{
  ID IVar1;
  undefined8 uVar2;
  long unaff_x29;
  ID in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 uStack0000000000000088;
  
  uStack0000000000000088 = param_2;
  if ((int)param_2 != 1) {
                    /* WARNING: Subroutine does not return */
    __Unwind_Resume(param_1);
  }
  IVar1 = _objc_begin_catch(param_1);
  IVar1 = _objc_msgSend(IVar1,"reason");
  _objc_msgSend(in_stack_00000038,"class");
  uVar2 = _NSStringFromClass();
  uVar2 = FUN_0008cde8(uVar2,in_stack_00000040,0x13b);
  FUN_0008cb50(IVar1,uVar2);
  _objc_end_catch(0);
  if (*(long *)PTR____stack_chk_guard_000e8260 != *(long *)(unaff_x29 + -0x70)) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}

