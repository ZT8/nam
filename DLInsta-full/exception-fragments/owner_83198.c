
/* FRAGMENT entry=0x83270 owner=0x83198; not a source function; entry state unresolved */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 UndefinedFunction_00083270(_Unwind_Exception *param_1,int param_2)

{
  ID IVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
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
  pcVar4 = DAT_001000d8;
  if (DAT_001000d8 == (code *)0x0) {
    pcVar4 = (code *)_class_getMethodImplementation(DAT_001000d0,"objectCount");
  }
  uVar2 = (*pcVar4)();
  _objc_end_catch(0);
  return uVar2;
}


/* FRAGMENT entry=0x83380 owner=0x83198; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void UndefinedFunction_00083380(_Unwind_Exception *param_1)

{
  _objc_end_catch(0);
                    /* WARNING: Subroutine does not return */
  __Unwind_Resume(param_1);
}

