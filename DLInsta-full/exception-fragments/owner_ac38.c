
/* FRAGMENT entry=0xb0c0 owner=0xac38; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

undefined8 UndefinedFunction_0000b0c0(_Unwind_Exception *param_1,int param_2)

{
  ID IVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ID unaff_x21;
  undefined8 in_stack_00000018;
  
  if (param_2 != 1) {
                    /* WARNING: Subroutine does not return */
    __Unwind_Resume(param_1);
  }
  IVar1 = _objc_begin_catch(param_1);
  IVar1 = _objc_msgSend(IVar1,"reason");
  _objc_msgSend(unaff_x21,"class");
  uVar2 = _NSStringFromClass();
  uVar3 = _NSStringFromSelector(in_stack_00000018);
  uVar2 = FUN_0008cde8(uVar2,uVar3,0x1da);
  FUN_0008cb50(IVar1,uVar2);
  _objc_end_catch(0);
  return 0;
}


/* FRAGMENT entry=0xb2d4 owner=0xac38; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void UndefinedFunction_0000b2d4(_Unwind_Exception *param_1)

{
  _objc_end_catch(0);
                    /* WARNING: Subroutine does not return */
  __Unwind_Resume(param_1);
}

