
/* FRAGMENT entry=0x10f44 owner=0x10e88; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void UndefinedFunction_00010f44(_Unwind_Exception *param_1,int param_2)

{
  ID IVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x19;
  
  if (param_2 != 1) {
                    /* WARNING: Subroutine does not return */
    __Unwind_Resume(param_1);
  }
  IVar1 = _objc_begin_catch(param_1);
  IVar1 = _objc_msgSend(IVar1,"reason");
  _objc_msgSend(*(ID *)(unaff_x19 + 0x28),"class");
  uVar2 = _NSStringFromClass();
  uVar3 = _NSStringFromSelector(*(undefined8 *)(unaff_x19 + 0x30));
  uVar2 = FUN_0008cde8(uVar2,uVar3,0x1bb);
  FUN_0008cb50(IVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x000bdb98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_end_catch_000e86b0)(0);
  return;
}

