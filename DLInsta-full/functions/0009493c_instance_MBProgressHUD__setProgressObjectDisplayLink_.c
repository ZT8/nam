/* Address: 0009493c | Name: instance_MBProgressHUD__setProgressObjectDisplayLink_ | Body bytes: 220 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_loadWeakRetained replaced with injection: _objc_load_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_storeWeak replaced with injection: _objc_store_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

void MBProgressHUD::instance_MBProgressHUD__setProgressObjectDisplayLink_
               (ID param_1,SEL param_2,ID param_3)

{
  ID *pIVar1;
  ID IVar2;
  
  pIVar1 = (ID *)(param_1 + (long)_progressObjectDisplayLink);
  if (*pIVar1 != param_3) {
    _objc_msgSend(*pIVar1,"invalidate");
    *pIVar1 = param_3;
    IVar2 = NSRunLoop::mainRunLoop((ID)&_OBJC_CLASS___NSRunLoop,"mainRunLoop");
    _objc_msgSend(param_3,"addToRunLoop:forMode:",IVar2,
                  *(undefined8 *)PTR__NSDefaultRunLoopMode_000e8058);
  }
  return;
}

