
/* FRAGMENT entry=0x5b8a8 owner=0x59164; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void UndefinedFunction_0005b8a8(_Unwind_Exception *param_1,int param_2)

{
  ID IVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x29;
  undefined8 in_stack_00000050;
  ID in_stack_00000058;
  
  if (param_2 != 1) {
                    /* WARNING: Subroutine does not return */
    __Unwind_Resume(param_1);
  }
  IVar1 = _objc_begin_catch(param_1);
  IVar1 = _objc_msgSend(IVar1,"reason");
  _objc_msgSend(in_stack_00000058,"class");
  uVar2 = _NSStringFromClass();
  uVar3 = _NSStringFromSelector(in_stack_00000050);
  uVar2 = FUN_0008cde8(uVar2,uVar3,0x1be);
  FUN_0008cb50(IVar1,uVar2);
  _objc_end_catch(0);
  if (*(long *)PTR____stack_chk_guard_000e8260 != *(long *)(unaff_x29 + -0x78)) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}

