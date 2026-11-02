
/* FRAGMENT entry=0x4b08c owner=0x4ad2c; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 UndefinedFunction_0004b08c(_Unwind_Exception *param_1,int param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 unaff_x22;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  if (param_2 != 1) {
                    /* WARNING: Subroutine does not return */
    __Unwind_Resume(param_1);
  }
  _objc_begin_catch(param_1);
  _objc_end_catch();
  pcVar1 = DAT_000ffe10;
  if (DAT_000ffe10 == (code *)0x0) {
    pcVar1 = (code *)_class_getMethodImplementation
                               (DAT_000ffe08,
                                "initWithClientId:threadId:messageId:type:isE2ELoggingSampled:originalMessageClientContext:productType:"
                               );
  }
  uVar2 = (*pcVar1)(in_stack_00000020,in_stack_00000038,in_stack_00000030,in_stack_00000028,
                    unaff_x22);
  return uVar2;
}


/* FRAGMENT entry=0x4b190 owner=0x4ad2c; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void UndefinedFunction_0004b190(_Unwind_Exception *param_1)

{
                    /* WARNING: Subroutine does not return */
  __Unwind_Resume(param_1);
}

