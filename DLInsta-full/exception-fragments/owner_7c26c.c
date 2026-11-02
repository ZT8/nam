
/* FRAGMENT entry=0x7c300 owner=0x7c26c; not a source function; entry state unresolved */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 UndefinedFunction_0007c300(void)

{
  undefined8 uVar1;
  ID IVar2;
  
  uVar1 = FUN_00097ef8();
  uVar1 = FUN_00097a54(uVar1);
  IVar2 = _objc_msgSend(DAT_001006a8,"length");
  IVar2 = FUN_00097c68(uVar1,IVar2);
  IVar2 = _objc_msgSend(IVar2,"isEqualToString:",DAT_001006a8);
  if ((int)IVar2 != 0) {
    _objc_msgSend((ID)&objc::class_t::DLHelper,"setBool:forKey:",0,&cf_DL_ProtectWithFaceId);
  }
  return 0;
}


/* FRAGMENT entry=0x7c3c8 owner=0x7c26c; not a source function; entry state unresolved */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void UndefinedFunction_0007c3c8(_Unwind_Exception *param_1)

{
                    /* WARNING: Subroutine does not return */
  __Unwind_Resume(param_1);
}

