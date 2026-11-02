/* Address: 000a40b8 | Name: class_DLInstaDownloader__imageTypeFromData_ | Body bytes: 560 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID DLInstaDownloader::class_DLInstaDownloader__imageTypeFromData_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  byte *pbVar2;
  byte bVar3;
  
  if (param_3 == 0) {
    return 0;
  }
  IVar1 = _objc_msgSend(param_3,"length");
  if (IVar1 < 8) {
    return 0;
  }
  IVar1 = _objc_retainAutorelease(param_3);
  pbVar2 = (byte *)_objc_msgSend(IVar1,"bytes");
  bVar3 = *pbVar2;
  if (bVar3 < 0x89) {
    if (bVar3 == 0x47) {
      if (pbVar2[1] != 0x49) {
        return 0;
      }
      if ((pbVar2[2] == 0x46) && (pbVar2[3] == 0x38)) {
        return (ID)&cf_gif;
      }
      goto LAB_000a4284;
    }
    if (bVar3 == 0x52) {
      if (pbVar2[1] != 0x49) {
        return 0;
      }
      if ((((pbVar2[2] == 0x46) && (pbVar2[3] == 0x46)) &&
          (IVar1 = _objc_msgSend(IVar1,"length"), 0xc < IVar1)) &&
         (((pbVar2[8] == 0x57 && (pbVar2[9] == 0x45)) &&
          ((pbVar2[10] == 0x42 && (pbVar2[0xb] == 0x50)))))) {
        return (ID)&cf_webp;
      }
      goto LAB_000a4284;
    }
  }
  else {
    if (bVar3 == 0x89) {
      if (pbVar2[1] != 0x50) {
        return 0;
      }
      if ((((pbVar2[2] == 0x4e) && (pbVar2[3] == 0x47)) && (pbVar2[4] == 0xd)) &&
         (((pbVar2[5] == 10 && (pbVar2[6] == 0x1a)) && (pbVar2[7] == 10)))) {
        return (ID)&cf_png;
      }
    }
    else {
      if (bVar3 != 0xff) goto LAB_000a4288;
      if (pbVar2[1] != 0xd8) {
        return 0;
      }
      if (pbVar2[2] == 0xff) {
        return (ID)&cf_jpg;
      }
    }
LAB_000a4284:
    bVar3 = *pbVar2;
  }
LAB_000a4288:
  if (bVar3 == 0x4d) {
    if (((pbVar2[1] == 0x4d) && (pbVar2[2] == 0)) && (pbVar2[3] == 0x2a)) goto LAB_000a42dc;
  }
  else if ((((bVar3 == 0x49) && (pbVar2[1] == 0x49)) && (pbVar2[2] == 0x2a)) && (pbVar2[3] == 0)) {
LAB_000a42dc:
    return (ID)&cf_tiff;
  }
  return 0;
}

