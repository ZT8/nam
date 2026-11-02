
/* FRAGMENT entry=0x6ad0 owner=0x66a0; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void UndefinedFunction_00006ad0(_Unwind_Exception *param_1,int param_2)

{
  code *pcVar1;
  ID IVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ID unaff_x20;
  long unaff_x29;
  
  if (param_2 != 1) {
                    /* WARNING: Subroutine does not return */
    __Unwind_Resume(param_1);
  }
  IVar2 = _objc_begin_catch(param_1);
  IVar2 = _objc_msgSend(IVar2,"reason");
  _objc_msgSend(unaff_x20,"class");
  uVar3 = _NSStringFromClass();
  uVar4 = _NSStringFromSelector();
  uVar3 = FUN_0008cde8(uVar3,uVar4,0x78);
  FUN_0008cb50(IVar2,uVar3);
  _objc_end_catch(0);
  pcVar1 = DAT_000ff880;
  if (DAT_000ff880 == (code *)0x0) {
    pcVar1 = (code *)_class_getMethodImplementation(DAT_000ff878,"_didPressFollowButton");
  }
  (*pcVar1)();
  if (*(long *)PTR____stack_chk_guard_000e8260 != *(long *)(unaff_x29 + -0x48)) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}


/* FRAGMENT entry=0x6c34 owner=0x66a0; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void UndefinedFunction_00006c34(_Unwind_Exception *param_1)

{
  _objc_end_catch(0);
                    /* WARNING: Subroutine does not return */
  __Unwind_Resume(param_1);
}

