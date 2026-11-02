/* Address: 0004f254 | Name: FUN_0004f254 | Body bytes: 252 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_0004f254(long param_1)

{
  ID IVar1;
  ID IVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  
  IVar1 = _objc_alloc(&objc::class_t::DLInstaDownloader);
  IVar1 = _objc_msgSend(IVar1,"init");
  IVar2 = _objc_msgSend(*(ID *)(param_1 + 0x20),"playbackURL");
  IVar2 = _objc_msgSend(IVar2,"absoluteString");
  DLInstaDownloader::instance_DLInstaDownloader__downloadMediaURLString_mediaType_
            (IVar1,"downloadMediaURLString:mediaType:",IVar2,3);
  uVar3 = FUN_0008ce2c(*(undefined8 *)(param_1 + 0x28),"_dismissBlock");
  if ((uVar3 & 1) != 0) {
    lVar4 = *(long *)(param_1 + 0x28);
    uVar5 = _object_getClass();
    lVar6 = _class_getInstanceVariable(uVar5,"_dismissBlock");
    if (lVar6 == 0) {
      plVar7 = (long *)0x0;
    }
    else {
      lVar6 = _ivar_getOffset();
      plVar7 = (long *)(lVar4 + lVar6);
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  return;
}

