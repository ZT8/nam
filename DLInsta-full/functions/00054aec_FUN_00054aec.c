/* Address: 00054aec | Name: FUN_00054aec | Body bytes: 240 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

bool FUN_00054aec(ID param_1)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = DLHelper::class_DLHelper__findViewController_
                    ((ID)&objc::class_t::DLHelper,"findViewController:",param_1);
  IVar2 = _objc_msgSend(IVar1,"respondsToSelector:","currentViewModel");
  if ((int)IVar2 == 0) {
    IVar1 = 0;
  }
  else {
    IVar1 = _objc_msgSend(IVar1,"currentViewModel");
    IVar1 = _objc_msgSend(IVar1,"items");
    IVar1 = _objc_msgSend(IVar1,"mutableCopy");
  }
  IVar1 = _objc_msgSend(IVar1,"count");
  return 1 < IVar1;
}

