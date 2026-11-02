
/* FRAGMENT entry=0x44c90 owner=0x447d0; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

undefined8 UndefinedFunction_00044c90(_Unwind_Exception *param_1,undefined8 param_2)

{
  ID IVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ID unaff_x22;
  undefined8 uStack0000000000000000;
  _Unwind_Exception *p_Stack0000000000000008;
  long in_stack_00000038;
  
  uStack0000000000000000 = param_2;
  p_Stack0000000000000008 = param_1;
  if ((int)param_2 == 1) {
    _objc_begin_catch(param_1);
    _objc_end_catch();
    IVar1 = NSNotificationCenter::defaultCenter
                      ((ID)&_OBJC_CLASS___NSNotificationCenter,"defaultCenter");
    NSNotificationCenter::postNotificationName_object_
              (IVar1,"postNotificationName:object:",&cf_reloadData_bubble,0);
    pcVar2 = DAT_000ffd18;
    if (DAT_000ffd18 == (code *)0x0) {
      pcVar2 = (code *)_class_getMethodImplementation
                                 (DAT_000ffd10,"removeMessageWithMessageId:reason:");
    }
    uVar3 = (*pcVar2)();
  }
  else {
    if ((int)param_2 != 1) {
                    /* WARNING: Subroutine does not return */
      __Unwind_Resume(param_1);
    }
    IVar1 = _objc_begin_catch(param_1);
    IVar1 = _objc_msgSend(IVar1,"reason");
    _objc_msgSend(unaff_x22,"class");
    uVar3 = _NSStringFromClass();
    uVar4 = _NSStringFromSelector();
    uVar3 = FUN_0008cde8(uVar3,uVar4,0x19b);
    FUN_0008cb50(IVar1,uVar3);
    _objc_end_catch(0);
    pcVar2 = DAT_000ffd18;
    if (DAT_000ffd18 == (code *)0x0) {
      pcVar2 = (code *)_class_getMethodImplementation
                                 (DAT_000ffd10,"removeMessageWithMessageId:reason:");
    }
    uVar3 = (*pcVar2)();
  }
  if (*(long *)PTR____stack_chk_guard_000e8260 != in_stack_00000038) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return uVar3;
}


/* FRAGMENT entry=0x44d74 owner=0x447d0; not a source function; entry state unresolved */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

undefined8 UndefinedFunction_00044d74(_Unwind_Exception *param_1,undefined8 param_2)

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
  uVar3 = FUN_0008cde8(uVar3,uVar4,0x19b);
  FUN_0008cb50(IVar2,uVar3);
  _objc_end_catch(0);
  pcVar1 = DAT_000ffd18;
  if (DAT_000ffd18 == (code *)0x0) {
    pcVar1 = (code *)_class_getMethodImplementation
                               (DAT_000ffd10,"removeMessageWithMessageId:reason:");
  }
  uVar3 = (*pcVar1)();
  if (*(long *)PTR____stack_chk_guard_000e8260 != in_stack_00000038) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return uVar3;
}


/* FRAGMENT entry=0x44e38 owner=0x447d0; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void UndefinedFunction_00044e38(_Unwind_Exception *param_1)

{
  _Unwind_Exception *p_Stack0000000000000008;
  
  p_Stack0000000000000008 = param_1;
  _objc_end_catch(0);
                    /* WARNING: Subroutine does not return */
  __Unwind_Resume(p_Stack0000000000000008);
}


/* FRAGMENT entry=0x44e48 owner=0x447d0; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void UndefinedFunction_00044e48(_Unwind_Exception *param_1)

{
  _Unwind_Exception *p_Stack0000000000000008;
  
  p_Stack0000000000000008 = param_1;
  _objc_end_catch(0);
                    /* WARNING: Subroutine does not return */
  __Unwind_Resume(p_Stack0000000000000008);
}


/* FRAGMENT entry=0x44e58 owner=0x447d0; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void UndefinedFunction_00044e58(_Unwind_Exception *param_1)

{
  _Unwind_Exception *p_Stack0000000000000008;
  
  p_Stack0000000000000008 = param_1;
  _objc_end_catch(0);
                    /* WARNING: Subroutine does not return */
  __Unwind_Resume(p_Stack0000000000000008);
}


/* FRAGMENT entry=0x44e68 owner=0x447d0; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void UndefinedFunction_00044e68(_Unwind_Exception *param_1)

{
  _Unwind_Exception *p_Stack0000000000000008;
  
  p_Stack0000000000000008 = param_1;
  _objc_end_catch();
                    /* WARNING: Subroutine does not return */
  __Unwind_Resume(p_Stack0000000000000008);
}


/* FRAGMENT entry=0x44e70 owner=0x447d0; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void UndefinedFunction_00044e70(_Unwind_Exception *param_1)

{
  _Unwind_Exception *p_Stack0000000000000008;
  
  p_Stack0000000000000008 = param_1;
  _objc_end_catch(0);
                    /* WARNING: Subroutine does not return */
  __Unwind_Resume(p_Stack0000000000000008);
}

