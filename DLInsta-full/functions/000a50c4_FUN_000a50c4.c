/* Address: 000a50c4 | Name: FUN_000a50c4 | Body bytes: 364 */

/* WARNING: Function: _objc_unsafeClaimAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_000a50c4(ID param_1)

{
  ID IVar1;
  ID IVar2;
  char *op;
  undefined8 uVar3;
  long lVar4;
  ID IVar5;
  ID self;
  
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 5) {
    IVar1 = _objc_alloc(&_OBJC_CLASS___PHAssetResourceCreationOptions);
    IVar1 = PHAssetResourceCreationOptions::init(IVar1,"init");
    IVar5 = PHAssetCreationRequest::creationRequestForAsset
                      ((ID)&_OBJC_CLASS___PHAssetCreationRequest,"creationRequestForAsset");
    self = *(ID *)(param_1 + 0x28);
    IVar2 = NSData::class((ID)&_OBJC_CLASS___NSData,"class");
    IVar2 = _objc_msgSend(self,"isKindOfClass:",IVar2);
    if ((int)IVar2 != 0) {
      PHAssetCreationRequest::addResourceWithType_data_options_
                (IVar5,"addResourceWithType:data:options:",1,*(undefined8 *)(param_1 + 0x28),IVar1);
    }
    return 0;
  }
  if (lVar4 == 2) {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    op = "creationRequestForAssetFromVideoAtFileURL:";
  }
  else {
    if (lVar4 != 1) {
      return param_1;
    }
    IVar5 = *(ID *)(param_1 + 0x20);
    IVar1 = UIImage::class((ID)&_OBJC_CLASS___UIImage,"class");
    IVar1 = _objc_msgSend(IVar5,"isMemberOfClass:",IVar1);
    if ((int)IVar1 == 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      op = "creationRequestForAssetFromImageAtFileURL:";
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      op = "creationRequestForAssetFromImage:";
    }
  }
  IVar1 = PHAssetChangeRequest::creationRequestForAssetFromVideoAtFileURL_
                    ((ID)&_OBJC_CLASS___PHAssetChangeRequest,op,uVar3);
  return IVar1;
}

