
/* FRAGMENT entry=0x4359c owner=0x431f0; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void UndefinedFunction_0004359c(_Unwind_Exception *param_1,int param_2)

{
  ID IVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ID unaff_x25;
  long unaff_x29;
  undefined8 in_stack_00000050;
  
  if (param_2 != 1) {
    *(ID *)(unaff_x29 + -0x90) = unaff_x25;
                    /* WARNING: Subroutine does not return */
    __Unwind_Resume(param_1);
  }
  IVar1 = _objc_begin_catch(param_1);
  IVar1 = _objc_msgSend(IVar1,"reason");
  _objc_msgSend(unaff_x25,"class");
  uVar2 = _NSStringFromClass();
  uVar3 = _NSStringFromSelector(in_stack_00000050);
  uVar2 = FUN_0008cde8(uVar2,uVar3,0x11f);
  FUN_0008cb50(IVar1,uVar2);
  _objc_end_catch(0);
  return;
}


/* FRAGMENT entry=0x436c4 owner=0x431f0; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void UndefinedFunction_000436c4(_Unwind_Exception *param_1)

{
  undefined8 unaff_x25;
  long unaff_x29;
  
  _objc_end_catch(0);
  *(undefined8 *)(unaff_x29 + -0x90) = unaff_x25;
                    /* WARNING: Subroutine does not return */
  __Unwind_Resume(param_1);
}

