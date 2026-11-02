
/* FRAGMENT entry=0x7c4b8 owner=0x7c41c; not a source function; entry state unresolved */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 UndefinedFunction_0007c4b8(void)

{
  undefined8 uVar1;
  ID IVar2;
  ID IVar3;
  ID unaff_x21;
  
  uVar1 = FUN_00097ef8();
  uVar1 = FUN_00097a54(uVar1);
  IVar2 = _objc_msgSend(DAT_001006a8,"length");
  IVar2 = FUN_00097c68(uVar1,IVar2);
  IVar2 = _objc_msgSend(IVar2,"isEqualToString:",DAT_001006a8);
  if ((int)IVar2 != 0) {
    IVar2 = _objc_msgSend(unaff_x21,"authenticationView");
    IVar2 = _objc_msgSend(IVar2,"superview");
    if (IVar2 == 0) {
      IVar2 = _objc_msgSend((ID)&_OBJC_CLASS___NSDate,"date");
      _objc_msgSend((ID)&objc::class_t::DLHelper,"setObject:forKey:",IVar2,&cf_DL_faceIdSaveDate);
      IVar2 = _objc_alloc(&objc::class_t::DLAuthenticationView);
      IVar3 = _objc_msgSend(unaff_x21,"window");
      _objc_msgSend(IVar3,"bounds");
      IVar2 = _objc_msgSend(IVar2,"initWithFrame:");
      _objc_msgSend(unaff_x21,"setAuthenticationView:",IVar2);
      IVar2 = _objc_msgSend(unaff_x21,"window");
      IVar3 = _objc_msgSend(unaff_x21,"authenticationView");
      _objc_msgSend(IVar2,"addSubview:",IVar3);
    }
    _objc_msgSend((ID)&objc::class_t::DLHelper,"setBool:forKey:",0,&cf_DL_ProtectWithFaceId);
  }
  return 0;
}


/* FRAGMENT entry=0x7c6e0 owner=0x7c41c; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

undefined8 UndefinedFunction_0007c6e0(_Unwind_Exception *param_1,int param_2)

{
  ID IVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ID unaff_x21;
  
  if (param_2 != 1) {
                    /* WARNING: Subroutine does not return */
    __Unwind_Resume(param_1);
  }
  IVar1 = _objc_begin_catch(param_1);
  IVar1 = _objc_msgSend(IVar1,"reason");
  _objc_msgSend(unaff_x21,"class");
  uVar2 = _NSStringFromClass();
  uVar3 = _NSStringFromSelector();
  uVar2 = FUN_0008cde8(uVar2,uVar3,0x6f);
  FUN_0008cb50(IVar1,uVar2);
  _objc_end_catch(0);
  return 0;
}


/* FRAGMENT entry=0x7c754 owner=0x7c41c; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

undefined8 UndefinedFunction_0007c754(_Unwind_Exception *param_1,int param_2)

{
  ID IVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ID unaff_x21;
  
  if (param_2 != 1) {
                    /* WARNING: Subroutine does not return */
    __Unwind_Resume(param_1);
  }
  IVar1 = _objc_begin_catch(param_1);
  IVar1 = _objc_msgSend(IVar1,"reason");
  _objc_msgSend(unaff_x21,"class");
  uVar2 = _NSStringFromClass();
  uVar3 = _NSStringFromSelector();
  uVar2 = FUN_0008cde8(uVar2,uVar3,0x6f);
  FUN_0008cb50(IVar1,uVar2);
  _objc_end_catch(0);
  return 0;
}


/* FRAGMENT entry=0x7c81c owner=0x7c41c; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void UndefinedFunction_0007c81c(_Unwind_Exception *param_1)

{
  _objc_end_catch(0);
                    /* WARNING: Subroutine does not return */
  __Unwind_Resume(param_1);
}


/* FRAGMENT entry=0x7c82c owner=0x7c41c; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void UndefinedFunction_0007c82c(_Unwind_Exception *param_1)

{
  _objc_end_catch(0);
                    /* WARNING: Subroutine does not return */
  __Unwind_Resume(param_1);
}


/* FRAGMENT entry=0x7c83c owner=0x7c41c; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void UndefinedFunction_0007c83c(_Unwind_Exception *param_1)

{
  _objc_end_catch(0);
                    /* WARNING: Subroutine does not return */
  __Unwind_Resume(param_1);
}


/* FRAGMENT entry=0x7c84c owner=0x7c41c; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void UndefinedFunction_0007c84c(_Unwind_Exception *param_1)

{
  _objc_end_catch();
                    /* WARNING: Subroutine does not return */
  __Unwind_Resume(param_1);
}


/* FRAGMENT entry=0x7c854 owner=0x7c41c; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void UndefinedFunction_0007c854(_Unwind_Exception *param_1)

{
  _objc_end_catch(0);
                    /* WARNING: Subroutine does not return */
  __Unwind_Resume(param_1);
}

