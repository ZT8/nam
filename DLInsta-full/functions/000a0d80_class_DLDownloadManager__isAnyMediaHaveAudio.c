/* Address: 000a0d80 | Name: class_DLDownloadManager__isAnyMediaHaveAudio | Body bytes: 480 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

bool DLDownloadManager::class_DLDownloadManager__isAnyMediaHaveAudio(ID param_1,SEL param_2)

{
  uint uVar1;
  ID IVar2;
  ID IVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  IVar2 = class_DLDownloadManager__allMultiMediaFiles(param_1,"allMultiMediaFiles");
  IVar2 = _objc_msgSend(IVar2,"count");
  if (IVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar4 = 0;
    uVar5 = *(undefined8 *)PTR__AVMediaTypeAudio_000e8028;
    do {
      class_DLDownloadManager__multiMediaPath(param_1,"multiMediaPath");
      IVar2 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_____d_mp4);
      IVar2 = NSURL::fileURLWithPath_((ID)&_OBJC_CLASS___NSURL,"fileURLWithPath:",IVar2);
      IVar2 = AVAsset::assetWithURL_((ID)&_OBJC_CLASS___AVAsset,"assetWithURL:",IVar2);
      IVar2 = AVAsset::tracksWithMediaType_(IVar2,"tracksWithMediaType:",uVar5);
      IVar2 = AVAsset::count(IVar2,"count");
      if (IVar2 != 0) break;
      uVar4 = uVar4 + 1;
      IVar3 = class_DLDownloadManager__allMultiMediaFiles(param_1,"allMultiMediaFiles");
      IVar3 = _objc_msgSend(IVar3,"count");
    } while (uVar4 < IVar3);
    uVar1 = (uint)(IVar2 != 0);
  }
  return uVar1;
}

