/* Address: 000a3eac | Name: FUN_000a3eac | Body bytes: 432 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_000a3eac(long param_1)

{
  ID IVar1;
  ID IVar2;
  undefined8 uVar3;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar3 = 0;
  }
  else {
    IVar1 = _objc_msgSend(*(ID *)(param_1 + 0x28),"lastPathComponent");
    IVar1 = _objc_msgSend(IVar1,"pathExtension");
    IVar1 = _objc_msgSend(IVar1,"isEqualToString:",&cf_mp4);
    if ((int)IVar1 == 0) {
      IVar1 = DLInstaDownloader::class_DLInstaDownloader__imageTypeFromData_
                        ((ID)&objc::class_t::DLInstaDownloader,"imageTypeFromData:",
                         *(ID *)(param_1 + 0x20));
      IVar2 = _objc_msgSend(IVar1,"isEqualToString:",&cf_jpg);
      if (((IVar2 & 1) == 0) &&
         (IVar1 = _objc_msgSend(IVar1,"isEqualToString:",&cf_png), (int)IVar1 == 0)) {
        IVar1 = UIImage::imageWithData_
                          ((ID)&_OBJC_CLASS___UIImage,"imageWithData:",
                           *(undefined8 *)(param_1 + 0x20));
        IVar1 = _UIImagePNGRepresentation(IVar1);
        _objc_msgSend(IVar1,"writeToFile:atomically:",*(undefined8 *)(param_1 + 0x28),1);
      }
      else {
        _objc_msgSend(*(ID *)(param_1 + 0x20),"writeToFile:atomically:",
                      *(undefined8 *)(param_1 + 0x28),1);
      }
      _NSLog(&cf_FileinPath__);
      uVar3 = 1;
    }
    else {
      uVar3 = 1;
      _objc_msgSend(*(ID *)(param_1 + 0x20),"writeToFile:atomically:",
                    *(undefined8 *)(param_1 + 0x28),1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000a4058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),uVar3);
  return;
}

