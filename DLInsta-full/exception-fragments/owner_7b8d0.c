
/* FRAGMENT entry=0x7b980 owner=0x7b8d0; not a source function; entry state unresolved */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 UndefinedFunction_0007b980(void)

{
  int iVar1;
  undefined8 uVar2;
  ID IVar3;
  ID IVar4;
  long unaff_x19;
  ID unaff_x21;
  SEL unaff_x24;
  SEL unaff_x25;
  double extraout_d0;
  undefined8 uStack0000000000000018;
  undefined8 in_stack_00000020;
  code *in_stack_00000028;
  undefined *in_stack_00000030;
  
  uVar2 = FUN_00097ef8();
  uVar2 = FUN_00097a54(uVar2);
  IVar3 = _objc_msgSend(DAT_001006a8,"length");
  IVar3 = FUN_00097c68(uVar2,IVar3);
  IVar3 = _objc_msgSend(IVar3,"isEqualToString:",DAT_001006a8);
  if ((int)IVar3 != 0) {
    IVar3 = _objc_msgSend(unaff_x21,"authenticationView");
    IVar3 = _objc_msgSend(IVar3,"superview");
    if (IVar3 == 0) {
      IVar3 = _objc_msgSend(unaff_x21,"authenticationView");
      IVar3 = _objc_msgSend(IVar3,"isAuthenticated");
      if (((IVar3 & 1) == 0) && (iVar1 = FUN_0008c3f0(0), iVar1 != 0)) {
        IVar3 = _objc_alloc(&objc::class_t::DLAuthenticationView);
        IVar4 = _objc_msgSend(unaff_x21,"window");
        _objc_msgSend(IVar4,"bounds");
        IVar3 = _objc_msgSend(IVar3,"initWithFrame:");
        _objc_msgSend(unaff_x21,"setAuthenticationView:",IVar3);
        IVar3 = _objc_msgSend(unaff_x21,"window");
        IVar4 = _objc_msgSend(unaff_x21,"authenticationView");
        _objc_msgSend(IVar3,"addSubview:",IVar4);
      }
    }
    IVar3 = _objc_msgSend((ID)&_OBJC_CLASS___NSDate,"date");
    IVar4 = _objc_msgSend(*(ID *)(unaff_x19 + 0x528),unaff_x25);
    IVar4 = _objc_msgSend(IVar4,"objectForKey:",&cf_DL_faceIdSaveDate);
    _objc_msgSend(IVar3,"timeIntervalSinceDate:",IVar4);
    IVar3 = _objc_msgSend(*(ID *)(unaff_x19 + 0x528),unaff_x25);
    IVar3 = _objc_msgSend(IVar3,"objectForKey:",&cf_DL_DelayAppLock);
    IVar3 = _objc_msgSend(IVar3,"integerValue");
    if (extraout_d0 < (double)(long)IVar3) {
      IVar3 = _objc_msgSend(unaff_x21,"authenticationView");
      _objc_msgSend(IVar3,"setAuthenticated:",1);
      IVar3 = _objc_msgSend(unaff_x21,"authenticationView");
      IVar3 = _objc_msgSend(IVar3,"superview");
      if (IVar3 != 0) {
        IVar3 = _objc_msgSend((ID)&_OBJC_CLASS___NSDate,"date");
        _objc_msgSend((ID)&objc::class_t::DLHelper,"setObject:forKey:",IVar3,&cf_DL_faceIdSaveDate);
        IVar3 = _objc_msgSend(unaff_x21,"authenticationView");
        _objc_msgSend(IVar3,"removeFromSuperview");
        _objc_msgSend((ID)&objc::class_t::DLHelper,"setBool:forKey:",1,&cf_DL_ProtectWithFaceId);
      }
    }
    IVar3 = _objc_msgSend((ID)&objc::class_t::DLHelper,unaff_x24,&cf_DL_ProtectWithFaceId);
    if ((IVar3 & 1) == 0) {
      IVar3 = _objc_msgSend(unaff_x21,"authenticationView");
      uStack0000000000000018 = PTR___NSConcreteStackBlock_000e80d8;
      in_stack_00000020 = 0xc0000000;
      in_stack_00000028 = FUN_0007c868;
      in_stack_00000030 = &UNK_000e8c48;
      _objc_msgSend(IVar3,"contextAuthenticated:",&uStack0000000000000018);
    }
    IVar3 = _objc_msgSend(unaff_x21,"window");
    IVar3 = _objc_msgSend(IVar3,"subviews");
    IVar3 = _objc_msgSend(IVar3,"lastObject");
    IVar4 = _objc_msgSend((ID)&objc::class_t::DLAuthenticationView,"class");
    IVar3 = _objc_msgSend(IVar3,"isMemberOfClass:",IVar4);
    if ((IVar3 & 1) == 0) {
      IVar3 = _objc_msgSend(unaff_x21,"authenticationView");
      _objc_msgSend(IVar3,"removeFromSuperview");
      IVar3 = _objc_msgSend(unaff_x21,"authenticationView");
      IVar3 = _objc_msgSend(IVar3,"superview");
      if (IVar3 == 0) {
        IVar3 = _objc_msgSend(unaff_x21,"authenticationView");
        IVar3 = _objc_msgSend(IVar3,"isAuthenticated");
        if (((IVar3 & 1) == 0) && (iVar1 = FUN_0008c3f0(0), iVar1 != 0)) {
          IVar3 = _objc_alloc(&objc::class_t::DLAuthenticationView);
          IVar4 = _objc_msgSend(unaff_x21,"window");
          _objc_msgSend(IVar4,"bounds");
          IVar3 = _objc_msgSend(IVar3,"initWithFrame:");
          _objc_msgSend(unaff_x21,"setAuthenticationView:",IVar3);
          IVar3 = _objc_msgSend(unaff_x21,"window");
          IVar4 = _objc_msgSend(unaff_x21,"authenticationView");
          _objc_msgSend(IVar3,"addSubview:",IVar4);
        }
      }
    }
  }
  return 0;
}


/* FRAGMENT entry=0x7bfe4 owner=0x7b8d0; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

undefined8 UndefinedFunction_0007bfe4(_Unwind_Exception *param_1,int param_2)

{
  ID IVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ID unaff_x21;
  undefined8 in_stack_00000010;
  
  if (param_2 != 1) {
                    /* WARNING: Subroutine does not return */
    __Unwind_Resume(param_1);
  }
  IVar1 = _objc_begin_catch(param_1);
  IVar1 = _objc_msgSend(IVar1,"reason");
  _objc_msgSend(unaff_x21,"class");
  uVar2 = _NSStringFromClass();
  uVar3 = _NSStringFromSelector(in_stack_00000010);
  uVar2 = FUN_0008cde8(uVar2,uVar3,0x53);
  FUN_0008cb50(IVar1,uVar2);
  _objc_end_catch(0);
  return 0;
}


/* FRAGMENT entry=0x7c14c owner=0x7b8d0; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

undefined8 UndefinedFunction_0007c14c(_Unwind_Exception *param_1,int param_2)

{
  ID IVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ID unaff_x21;
  undefined8 in_stack_00000010;
  
  if (param_2 != 1) {
                    /* WARNING: Subroutine does not return */
    __Unwind_Resume(param_1);
  }
  IVar1 = _objc_begin_catch(param_1);
  IVar1 = _objc_msgSend(IVar1,"reason");
  _objc_msgSend(unaff_x21,"class");
  uVar2 = _NSStringFromClass();
  uVar3 = _NSStringFromSelector(in_stack_00000010);
  uVar2 = FUN_0008cde8(uVar2,uVar3,0x53);
  FUN_0008cb50(IVar1,uVar2);
  _objc_end_catch(0);
  return 0;
}


/* FRAGMENT entry=0x7c220 owner=0x7b8d0; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void UndefinedFunction_0007c220(_Unwind_Exception *param_1)

{
  _objc_end_catch(0);
                    /* WARNING: Subroutine does not return */
  __Unwind_Resume(param_1);
}


/* FRAGMENT entry=0x7c230 owner=0x7b8d0; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void UndefinedFunction_0007c230(_Unwind_Exception *param_1)

{
  _objc_end_catch(0);
                    /* WARNING: Subroutine does not return */
  __Unwind_Resume(param_1);
}


/* FRAGMENT entry=0x7c240 owner=0x7b8d0; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void UndefinedFunction_0007c240(_Unwind_Exception *param_1)

{
  _objc_end_catch(0);
                    /* WARNING: Subroutine does not return */
  __Unwind_Resume(param_1);
}


/* FRAGMENT entry=0x7c250 owner=0x7b8d0; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void UndefinedFunction_0007c250(_Unwind_Exception *param_1)

{
  _objc_end_catch();
                    /* WARNING: Subroutine does not return */
  __Unwind_Resume(param_1);
}


/* FRAGMENT entry=0x7c258 owner=0x7b8d0; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void UndefinedFunction_0007c258(_Unwind_Exception *param_1)

{
  _objc_end_catch(0);
                    /* WARNING: Subroutine does not return */
  __Unwind_Resume(param_1);
}

