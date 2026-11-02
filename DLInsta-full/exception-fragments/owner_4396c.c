
/* FRAGMENT entry=0x43abc owner=0x4396c; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void UndefinedFunction_00043abc(_Unwind_Exception *param_1,int param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  ID IVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ID unaff_x20;
  
  if (param_2 != 1) {
                    /* WARNING: Subroutine does not return */
    __Unwind_Resume(param_1);
  }
  IVar1 = _objc_begin_catch(param_1);
  IVar1 = _objc_msgSend(IVar1,"reason");
  _objc_msgSend(unaff_x20,"class");
  uVar2 = _NSStringFromClass();
  uVar3 = _NSStringFromSelector();
  uVar2 = FUN_0008cde8(uVar2,uVar3,0x139);
  FUN_0008cb50(IVar1,uVar2);
  _objc_end_catch(0);
  UNRECOVERED_JUMPTABLE = DAT_000ffce0;
  if (DAT_000ffce0 == (code *)0x0) {
    UNRECOVERED_JUMPTABLE =
         (code *)_class_getMethodImplementation(DAT_000ffca8,"shouldUpdateLastSeenMessage");
  }
                    /* WARNING: Could not recover jumptable at 0x00043ab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


/* FRAGMENT entry=0x43bc0 owner=0x4396c; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void UndefinedFunction_00043bc0(_Unwind_Exception *param_1)

{
  _objc_end_catch(0);
                    /* WARNING: Subroutine does not return */
  __Unwind_Resume(param_1);
}

