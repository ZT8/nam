
/* FRAGMENT entry=0xcdd0 owner=0xc990; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

undefined8 UndefinedFunction_0000cdd0(_Unwind_Exception *param_1,int param_2)

{
  code *pcVar1;
  ID IVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ID unaff_x23;
  undefined8 in_stack_00000018;
  
  if (param_2 != 1) {
                    /* WARNING: Subroutine does not return */
    __Unwind_Resume(param_1);
  }
  IVar2 = _objc_begin_catch(param_1);
  IVar2 = _objc_msgSend(IVar2,"reason");
  _objc_msgSend(unaff_x23,"class");
  uVar3 = _NSStringFromClass();
  uVar4 = _NSStringFromSelector(in_stack_00000018);
  uVar3 = FUN_0008cde8(uVar3,uVar4,0x2b2);
  FUN_0008cb50(IVar2,uVar3);
  _objc_end_catch(0);
  pcVar1 = DAT_000ff968;
  if (DAT_000ff968 == (code *)0x0) {
    pcVar1 = (code *)_class_getMethodImplementation
                               (DAT_000ff960,"buildLikeCellStyledStringWithIcon:andText:style:");
  }
  uVar3 = (*pcVar1)();
  return uVar3;
}


/* FRAGMENT entry=0xcef0 owner=0xc990; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

undefined8 UndefinedFunction_0000cef0(_Unwind_Exception *param_1,int param_2)

{
  code *pcVar1;
  ID IVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 unaff_x22;
  ID unaff_x23;
  
  if (param_2 != 1) {
                    /* WARNING: Subroutine does not return */
    __Unwind_Resume(param_1);
  }
  IVar2 = _objc_begin_catch(param_1);
  IVar2 = _objc_msgSend(IVar2,"reason");
  _objc_msgSend(unaff_x23,"class");
  uVar3 = _NSStringFromClass();
  uVar4 = _NSStringFromSelector(unaff_x22);
  uVar3 = FUN_0008cde8(uVar3,uVar4,0x2b2);
  FUN_0008cb50(IVar2,uVar3);
  _objc_end_catch(0);
  pcVar1 = DAT_000ff968;
  if (DAT_000ff968 == (code *)0x0) {
    pcVar1 = (code *)_class_getMethodImplementation
                               (DAT_000ff960,"buildLikeCellStyledStringWithIcon:andText:style:");
  }
  uVar3 = (*pcVar1)();
  return uVar3;
}


/* FRAGMENT entry=0xcfb4 owner=0xc990; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void UndefinedFunction_0000cfb4(_Unwind_Exception *param_1)

{
  _objc_end_catch(0);
                    /* WARNING: Subroutine does not return */
  __Unwind_Resume(param_1);
}


/* FRAGMENT entry=0xcfc4 owner=0xc990; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void UndefinedFunction_0000cfc4(_Unwind_Exception *param_1)

{
  _objc_end_catch(0);
                    /* WARNING: Subroutine does not return */
  __Unwind_Resume(param_1);
}


/* FRAGMENT entry=0xcfd4 owner=0xc990; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void UndefinedFunction_0000cfd4(_Unwind_Exception *param_1)

{
  _objc_end_catch(0);
                    /* WARNING: Subroutine does not return */
  __Unwind_Resume(param_1);
}


/* FRAGMENT entry=0xcfe4 owner=0xc990; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void UndefinedFunction_0000cfe4(_Unwind_Exception *param_1)

{
  _objc_end_catch();
                    /* WARNING: Subroutine does not return */
  __Unwind_Resume(param_1);
}


/* FRAGMENT entry=0xcfec owner=0xc990; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void UndefinedFunction_0000cfec(_Unwind_Exception *param_1)

{
  _objc_end_catch(0);
                    /* WARNING: Subroutine does not return */
  __Unwind_Resume(param_1);
}

