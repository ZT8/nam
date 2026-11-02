
/* FRAGMENT entry=0x7f98 owner=0x79e0; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void UndefinedFunction_00007f98(_Unwind_Exception *param_1,undefined8 param_2)

{
  code *pcVar1;
  ID IVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ID unaff_x21;
  long unaff_x29;
  undefined8 uStack0000000000000000;
  
  uStack0000000000000000 = param_2;
  if ((int)param_2 != 1) {
                    /* WARNING: Subroutine does not return */
    __Unwind_Resume(param_1);
  }
  IVar2 = _objc_begin_catch(param_1);
  IVar2 = _objc_msgSend(IVar2,"reason");
  _objc_msgSend(unaff_x21,"class");
  uVar3 = _NSStringFromClass();
  uVar4 = _NSStringFromSelector();
  uVar3 = FUN_0008cde8(uVar3,uVar4,0xdd);
  FUN_0008cb50(IVar2,uVar3);
  _objc_end_catch(0);
  pcVar1 = DAT_000ff8b0;
  if (DAT_000ff8b0 == (code *)0x0) {
    pcVar1 = (code *)_class_getMethodImplementation(DAT_000ff8a8,"overlayViewDidDoubleTap:");
  }
  (*pcVar1)();
  if (*(long *)PTR____stack_chk_guard_000e8260 != *(long *)(unaff_x29 + -0x60)) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}


/* FRAGMENT entry=0x8168 owner=0x79e0; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void UndefinedFunction_00008168(_Unwind_Exception *param_1,undefined8 param_2)

{
  code *pcVar1;
  ID IVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ID unaff_x21;
  long unaff_x29;
  undefined8 uStack0000000000000000;
  
  uStack0000000000000000 = param_2;
  if ((int)param_2 != 1) {
                    /* WARNING: Subroutine does not return */
    __Unwind_Resume(param_1);
  }
  IVar2 = _objc_begin_catch(param_1);
  IVar2 = _objc_msgSend(IVar2,"reason");
  _objc_msgSend(unaff_x21,"class");
  uVar3 = _NSStringFromClass();
  uVar4 = _NSStringFromSelector();
  uVar3 = FUN_0008cde8(uVar3,uVar4,0xdd);
  FUN_0008cb50(IVar2,uVar3);
  _objc_end_catch(0);
  pcVar1 = DAT_000ff8b0;
  if (DAT_000ff8b0 == (code *)0x0) {
    pcVar1 = (code *)_class_getMethodImplementation(DAT_000ff8a8,"overlayViewDidDoubleTap:");
  }
  (*pcVar1)();
  if (*(long *)PTR____stack_chk_guard_000e8260 != *(long *)(unaff_x29 + -0x60)) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}


/* FRAGMENT entry=0x8228 owner=0x79e0; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void UndefinedFunction_00008228(_Unwind_Exception *param_1)

{
  _objc_end_catch(0);
                    /* WARNING: Subroutine does not return */
  __Unwind_Resume(param_1);
}


/* FRAGMENT entry=0x8238 owner=0x79e0; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void UndefinedFunction_00008238(_Unwind_Exception *param_1)

{
  _objc_end_catch(0);
                    /* WARNING: Subroutine does not return */
  __Unwind_Resume(param_1);
}


/* FRAGMENT entry=0x8248 owner=0x79e0; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void UndefinedFunction_00008248(_Unwind_Exception *param_1)

{
  _objc_end_catch(0);
                    /* WARNING: Subroutine does not return */
  __Unwind_Resume(param_1);
}


/* FRAGMENT entry=0x8258 owner=0x79e0; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void UndefinedFunction_00008258(_Unwind_Exception *param_1)

{
  _objc_end_catch();
                    /* WARNING: Subroutine does not return */
  __Unwind_Resume(param_1);
}


/* FRAGMENT entry=0x8260 owner=0x79e0; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void UndefinedFunction_00008260(_Unwind_Exception *param_1)

{
  _objc_end_catch(0);
                    /* WARNING: Subroutine does not return */
  __Unwind_Resume(param_1);
}

