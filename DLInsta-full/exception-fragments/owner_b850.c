
/* FRAGMENT entry=0xbe6c owner=0xb850; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void UndefinedFunction_0000be6c(_Unwind_Exception *param_1,undefined8 param_2)

{
  ID IVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ID unaff_x20;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000008 = param_2;
  if ((int)param_2 != 1) {
                    /* WARNING: Subroutine does not return */
    __Unwind_Resume(param_1);
  }
  IVar1 = _objc_begin_catch(param_1);
  IVar1 = _objc_msgSend(IVar1,"reason");
  _objc_msgSend(unaff_x20,"class");
  uVar2 = _NSStringFromClass();
  uVar3 = _NSStringFromSelector();
  uVar2 = FUN_0008cde8(uVar2,uVar3,0x270);
  FUN_0008cb50(IVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x000bdb98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_end_catch_000e86b0)(0);
  return;
}

