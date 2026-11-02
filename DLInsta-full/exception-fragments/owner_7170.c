
/* FRAGMENT entry=0x7730 owner=0x7170; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void UndefinedFunction_00007730(_Unwind_Exception *param_1,undefined8 param_2)

{
  code *pcVar1;
  ID IVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ID unaff_x21;
  long unaff_x29;
  undefined8 uStack0000000000000008;
  _Unwind_Exception *p_Stack0000000000000010;
  
  uStack0000000000000008 = param_2;
  p_Stack0000000000000010 = param_1;
  if ((int)param_2 != 1) {
                    /* WARNING: Subroutine does not return */
    __Unwind_Resume(param_1);
  }
  IVar2 = _objc_begin_catch(param_1);
  IVar2 = _objc_msgSend(IVar2,"reason");
  _objc_msgSend(unaff_x21,"class");
  uVar3 = _NSStringFromClass();
  uVar4 = _NSStringFromSelector();
  uVar3 = FUN_0008cde8(uVar3,uVar4,0xb7);
  FUN_0008cb50(IVar2,uVar3);
  _objc_end_catch(0);
  pcVar1 = DAT_000ff8a0;
  if (DAT_000ff8a0 == (code *)0x0) {
    pcVar1 = (code *)_class_getMethodImplementation(DAT_000ff898,"_onDoubleTap:");
  }
  (*pcVar1)();
  if (*(long *)PTR____stack_chk_guard_000e8260 != *(long *)(unaff_x29 + -0x60)) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}


/* FRAGMENT entry=0x78d8 owner=0x7170; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void UndefinedFunction_000078d8(_Unwind_Exception *param_1,undefined8 param_2)

{
  code *pcVar1;
  ID IVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ID unaff_x21;
  long unaff_x29;
  undefined8 uStack0000000000000008;
  _Unwind_Exception *p_Stack0000000000000010;
  
  uStack0000000000000008 = param_2;
  p_Stack0000000000000010 = param_1;
  if ((int)param_2 != 1) {
                    /* WARNING: Subroutine does not return */
    __Unwind_Resume(param_1);
  }
  IVar2 = _objc_begin_catch(param_1);
  IVar2 = _objc_msgSend(IVar2,"reason");
  _objc_msgSend(unaff_x21,"class");
  uVar3 = _NSStringFromClass();
  uVar4 = _NSStringFromSelector();
  uVar3 = FUN_0008cde8(uVar3,uVar4,0xb7);
  FUN_0008cb50(IVar2,uVar3);
  _objc_end_catch(0);
  pcVar1 = DAT_000ff8a0;
  if (DAT_000ff8a0 == (code *)0x0) {
    pcVar1 = (code *)_class_getMethodImplementation(DAT_000ff898,"_onDoubleTap:");
  }
  (*pcVar1)();
  if (*(long *)PTR____stack_chk_guard_000e8260 != *(long *)(unaff_x29 + -0x60)) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}


/* FRAGMENT entry=0x7994 owner=0x7170; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void UndefinedFunction_00007994(_Unwind_Exception *param_1)

{
  _Unwind_Exception *p_Stack0000000000000010;
  
  p_Stack0000000000000010 = param_1;
  _objc_end_catch(0);
                    /* WARNING: Subroutine does not return */
  __Unwind_Resume(p_Stack0000000000000010);
}


/* FRAGMENT entry=0x79a4 owner=0x7170; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void UndefinedFunction_000079a4(_Unwind_Exception *param_1)

{
  _Unwind_Exception *p_Stack0000000000000010;
  
  p_Stack0000000000000010 = param_1;
  _objc_end_catch(0);
                    /* WARNING: Subroutine does not return */
  __Unwind_Resume(p_Stack0000000000000010);
}


/* FRAGMENT entry=0x79b4 owner=0x7170; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void UndefinedFunction_000079b4(_Unwind_Exception *param_1)

{
  _Unwind_Exception *p_Stack0000000000000010;
  
  p_Stack0000000000000010 = param_1;
  _objc_end_catch(0);
                    /* WARNING: Subroutine does not return */
  __Unwind_Resume(p_Stack0000000000000010);
}


/* FRAGMENT entry=0x79c4 owner=0x7170; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void UndefinedFunction_000079c4(_Unwind_Exception *param_1)

{
  _Unwind_Exception *p_Stack0000000000000010;
  
  p_Stack0000000000000010 = param_1;
  _objc_end_catch();
                    /* WARNING: Subroutine does not return */
  __Unwind_Resume(p_Stack0000000000000010);
}


/* FRAGMENT entry=0x79cc owner=0x7170; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void UndefinedFunction_000079cc(_Unwind_Exception *param_1)

{
  _Unwind_Exception *p_Stack0000000000000010;
  
  p_Stack0000000000000010 = param_1;
  _objc_end_catch(0);
                    /* WARNING: Subroutine does not return */
  __Unwind_Resume(p_Stack0000000000000010);
}

