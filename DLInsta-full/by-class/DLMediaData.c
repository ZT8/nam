/* Automatic pseudocode grouped by Objective-C class. NOT original source. */

/* -[DLMediaData downloadImageFromUrl:completion:] | encoding v32@0:8@16@?24 */
/* Address: 000a4370 | Name: instance_DLMediaData__downloadImageFromUrl_completion_ | Body bytes: 224 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void DLMediaData::instance_DLMediaData__downloadImageFromUrl_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)

{
  dispatch_queue_t pdVar1;
  undefined *local_68;
  undefined8 local_60;
  code *local_58;
  undefined *puStack_50;
  ID local_48;
  ID IStack_40;
  ID local_38;
  
  pdVar1 = _dispatch_get_global_queue(0,0);
  local_68 = PTR___NSConcreteStackBlock_000e80d8;
  local_60 = 0xc2000000;
  local_58 = FUN_000a4450;
  puStack_50 = &DAT_000e9a98;
  local_48 = param_3;
  IStack_40 = param_1;
  local_38 = param_4;
  _dispatch_async(pdVar1,&local_68);
  return;
}


/* -[DLMediaData convertTimeToString:] | encoding @24@0:8d16 */
/* Address: 000a45c8 | Name: instance_DLMediaData__convertTimeToString_ | Body bytes: 180 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID DLMediaData::instance_DLMediaData__convertTimeToString_(ID param_1,SEL param_2,double param_3)

{
  ID IVar1;
  cfstringStruct *pcVar2;
  
  if ((long)(double)((long)param_3 / 0xe10) == 0) {
    pcVar2 = &cf__ld__02ld;
  }
  else {
    pcVar2 = &cf__ld__02ld__02ld;
  }
  IVar1 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",pcVar2);
  return IVar1;
}


/* -[DLMediaData coverUrl] | encoding @16@0:8 */
/* Address: 000a467c | Name: instance_DLMediaData__coverUrl | Body bytes: 8 */

/* Function Stack Size: 0x10 bytes */

ID DLMediaData::instance_DLMediaData__coverUrl(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x10);
}


/* -[DLMediaData setCoverUrl:] | encoding v24@0:8@16 */
/* Address: 000a4684 | Name: instance_DLMediaData__setCoverUrl_ | Body bytes: 12 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void DLMediaData::instance_DLMediaData__setCoverUrl_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x10) = param_3;
  return;
}


/* -[DLMediaData url] | encoding @16@0:8 */
/* Address: 000a4690 | Name: instance_DLMediaData__url | Body bytes: 8 */

/* Function Stack Size: 0x10 bytes */

ID DLMediaData::instance_DLMediaData__url(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x18);
}


/* -[DLMediaData setUrl:] | encoding v24@0:8@16 */
/* Address: 000a4698 | Name: instance_DLMediaData__setUrl_ | Body bytes: 12 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void DLMediaData::instance_DLMediaData__setUrl_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x18) = param_3;
  return;
}


/* -[DLMediaData coverImage] | encoding @16@0:8 */
/* Address: 000a46a4 | Name: instance_DLMediaData__coverImage | Body bytes: 8 */

/* Function Stack Size: 0x10 bytes */

ID DLMediaData::instance_DLMediaData__coverImage(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x20);
}


/* -[DLMediaData setCoverImage:] | encoding v24@0:8@16 */
/* Address: 000a46ac | Name: instance_DLMediaData__setCoverImage_ | Body bytes: 12 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void DLMediaData::instance_DLMediaData__setCoverImage_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x20) = param_3;
  return;
}


/* -[DLMediaData mediaType] | encoding Q16@0:8 */
/* Address: 000a46b8 | Name: instance_DLMediaData__mediaType | Body bytes: 8 */

/* Function Stack Size: 0x10 bytes */

unsigned_long_long DLMediaData::instance_DLMediaData__mediaType(ID param_1,SEL param_2)

{
  return *(unsigned_long_long *)(param_1 + 0x28);
}


/* -[DLMediaData setMediaType:] | encoding v24@0:8Q16 */
/* Address: 000a46c0 | Name: instance_DLMediaData__setMediaType_ | Body bytes: 8 */

/* Function Stack Size: 0x18 bytes */

void DLMediaData::instance_DLMediaData__setMediaType_
               (ID param_1,SEL param_2,unsigned_long_long param_3)

{
  *(unsigned_long_long *)(param_1 + 0x28) = param_3;
  return;
}


/* -[DLMediaData duration] | encoding d16@0:8 */
/* Address: 000a46c8 | Name: instance_DLMediaData__duration | Body bytes: 8 */

/* Function Stack Size: 0x10 bytes */

double DLMediaData::instance_DLMediaData__duration(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + 0x30);
}


/* -[DLMediaData setDuration:] | encoding v24@0:8d16 */
/* Address: 000a46d0 | Name: instance_DLMediaData__setDuration_ | Body bytes: 8 */

/* Function Stack Size: 0x18 bytes */

void DLMediaData::instance_DLMediaData__setDuration_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + 0x30) = param_3;
  return;
}


/* -[DLMediaData takenAtDate] | encoding d16@0:8 */
/* Address: 000a46d8 | Name: instance_DLMediaData__takenAtDate | Body bytes: 8 */

/* Function Stack Size: 0x10 bytes */

double DLMediaData::instance_DLMediaData__takenAtDate(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + 0x38);
}


/* -[DLMediaData setTakenAtDate:] | encoding v24@0:8d16 */
/* Address: 000a46e0 | Name: instance_DLMediaData__setTakenAtDate_ | Body bytes: 8 */

/* Function Stack Size: 0x18 bytes */

void DLMediaData::instance_DLMediaData__setTakenAtDate_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + 0x38) = param_3;
  return;
}


/* -[DLMediaData isFetching] | encoding B16@0:8 */
/* Address: 000a46e8 | Name: instance_DLMediaData__isFetching | Body bytes: 8 */

/* Function Stack Size: 0x10 bytes */

bool DLMediaData::instance_DLMediaData__isFetching(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + 8);
}


/* -[DLMediaData setFetching:] | encoding v20@0:8B16 */
/* Address: 000a46f0 | Name: instance_DLMediaData__setFetching_ | Body bytes: 8 */

/* Function Stack Size: 0x14 bytes */

void DLMediaData::instance_DLMediaData__setFetching_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + 8) = (char)param_3;
  return;
}


/* -[DLMediaData isSelected] | encoding B16@0:8 */
/* Address: 000a46f8 | Name: instance_DLMediaData__isSelected | Body bytes: 8 */

/* Function Stack Size: 0x10 bytes */

bool DLMediaData::instance_DLMediaData__isSelected(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + 9);
}


/* -[DLMediaData setSelect:] | encoding v20@0:8B16 */
/* Address: 000a4700 | Name: instance_DLMediaData__setSelect_ | Body bytes: 8 */

/* Function Stack Size: 0x14 bytes */

void DLMediaData::instance_DLMediaData__setSelect_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + 9) = (char)param_3;
  return;
}


/* -[DLMediaData .cxx_destruct] | encoding v16@0:8 */
/* Address: 000a4708 | Name: instance_DLMediaData___cxx_destruct | Body bytes: 60 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void DLMediaData::instance_DLMediaData___cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}

