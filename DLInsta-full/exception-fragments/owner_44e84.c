
/* FRAGMENT entry=0x453e8 owner=0x44e84; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

undefined8 UndefinedFunction_000453e8(_Unwind_Exception *param_1,undefined8 param_2)

{
  code *pcVar1;
  ID IVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ID unaff_x22;
  undefined8 uStack0000000000000000;
  _Unwind_Exception *p_Stack0000000000000008;
  long in_stack_00000038;
  
  uStack0000000000000000 = param_2;
  p_Stack0000000000000008 = param_1;
  if ((int)param_2 != 1) {
                    /* WARNING: Subroutine does not return */
    __Unwind_Resume(param_1);
  }
  IVar2 = _objc_begin_catch(param_1);
  IVar2 = _objc_msgSend(IVar2,"reason");
  _objc_msgSend(unaff_x22,"class");
  uVar3 = _NSStringFromClass();
  uVar4 = _NSStringFromSelector();
  uVar3 = FUN_0008cde8(uVar3,uVar4,0x1b7);
  FUN_0008cb50(IVar2,uVar3);
  _objc_end_catch(0);
  pcVar1 = DAT_000ffd20;
  if (DAT_000ffd20 == (code *)0x0) {
    pcVar1 = (code *)_class_getMethodImplementation
                               (DAT_000ffd10,"removeMessageWithMessageKey:reason:");
  }
  uVar3 = (*pcVar1)();
  if (*(long *)PTR____stack_chk_guard_000e8260 != in_stack_00000038) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return uVar3;
}


/* FRAGMENT entry=0x454f0 owner=0x44e84; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

undefined8 UndefinedFunction_000454f0(_Unwind_Exception *param_1,undefined8 param_2)

{
  code *pcVar1;
  ID IVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ID unaff_x22;
  undefined8 uStack0000000000000000;
  _Unwind_Exception *p_Stack0000000000000008;
  long in_stack_00000038;
  
  uStack0000000000000000 = param_2;
  p_Stack0000000000000008 = param_1;
  if ((int)param_2 != 1) {
                    /* WARNING: Subroutine does not return */
    __Unwind_Resume(param_1);
  }
  IVar2 = _objc_begin_catch(param_1);
  IVar2 = _objc_msgSend(IVar2,"reason");
  _objc_msgSend(unaff_x22,"class");
  uVar3 = _NSStringFromClass();
  uVar4 = _NSStringFromSelector();
  uVar3 = FUN_0008cde8(uVar3,uVar4,0x1b7);
  FUN_0008cb50(IVar2,uVar3);
  _objc_end_catch(0);
  pcVar1 = DAT_000ffd20;
  if (DAT_000ffd20 == (code *)0x0) {
    pcVar1 = (code *)_class_getMethodImplementation
                               (DAT_000ffd10,"removeMessageWithMessageKey:reason:");
  }
  uVar3 = (*pcVar1)();
  if (*(long *)PTR____stack_chk_guard_000e8260 != in_stack_00000038) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return uVar3;
}


/* FRAGMENT entry=0x455ac owner=0x44e84; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void UndefinedFunction_000455ac(_Unwind_Exception *param_1)

{
  _Unwind_Exception *p_Stack0000000000000008;
  
  p_Stack0000000000000008 = param_1;
  _objc_end_catch(0);
                    /* WARNING: Subroutine does not return */
  __Unwind_Resume(p_Stack0000000000000008);
}


/* FRAGMENT entry=0x455bc owner=0x44e84; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void UndefinedFunction_000455bc(_Unwind_Exception *param_1)

{
  _Unwind_Exception *p_Stack0000000000000008;
  
  p_Stack0000000000000008 = param_1;
  _objc_end_catch(0);
                    /* WARNING: Subroutine does not return */
  __Unwind_Resume(p_Stack0000000000000008);
}


/* FRAGMENT entry=0x455cc owner=0x44e84; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void UndefinedFunction_000455cc(_Unwind_Exception *param_1)

{
  _Unwind_Exception *p_Stack0000000000000008;
  
  p_Stack0000000000000008 = param_1;
  _objc_end_catch(0);
                    /* WARNING: Subroutine does not return */
  __Unwind_Resume(p_Stack0000000000000008);
}


/* FRAGMENT entry=0x455dc owner=0x44e84; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void UndefinedFunction_000455dc(_Unwind_Exception *param_1)

{
  _Unwind_Exception *p_Stack0000000000000008;
  
  p_Stack0000000000000008 = param_1;
  _objc_end_catch();
                    /* WARNING: Subroutine does not return */
  __Unwind_Resume(p_Stack0000000000000008);
}


/* FRAGMENT entry=0x455e4 owner=0x44e84; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void UndefinedFunction_000455e4(_Unwind_Exception *param_1)

{
  _Unwind_Exception *p_Stack0000000000000008;
  
  p_Stack0000000000000008 = param_1;
  _objc_end_catch(0);
                    /* WARNING: Subroutine does not return */
  __Unwind_Resume(p_Stack0000000000000008);
}

