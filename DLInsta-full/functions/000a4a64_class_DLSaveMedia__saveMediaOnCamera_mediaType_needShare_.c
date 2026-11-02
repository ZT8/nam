/* Address: 000a4a64 | Name: class_DLSaveMedia__saveMediaOnCamera_mediaType_needShare_ | Body bytes: 252 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x24 bytes */

void __thiscall
DLSaveMedia::class_DLSaveMedia__saveMediaOnCamera_mediaType_needShare_
          (DLSaveMedia *this,ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4,
          bool param_5)

{
  undefined *local_98;
  undefined8 local_90;
  code *local_88;
  undefined *puStack_80;
  SEL local_78;
  undefined *local_70;
  undefined8 local_68;
  code *local_60;
  undefined *puStack_58;
  SEL local_50;
  ID IStack_48;
  
  if ((int)param_4 == 0) {
    class_DLSaveMedia__saveMediaOnCamera_mediaType_
              ((ID)&objc::class_t::DLSaveMedia,"saveMediaOnCamera:mediaType:",(ID)param_2,param_3);
  }
  else {
    local_70 = PTR___NSConcreteStackBlock_000e80d8;
    local_68 = 0xc2000000;
    local_60 = FUN_000a4b60;
    puStack_58 = &DAT_000e9ac8;
    local_98 = PTR___NSConcreteStackBlock_000e80d8;
    local_90 = 0xc2000000;
    local_88 = FUN_000a4b7c;
    puStack_80 = &DAT_000e9798;
    local_78 = param_2;
    local_50 = param_2;
    IStack_48 = param_3;
    DLHelper::class_DLHelper__showConfirmMessageSave_share_
              ((ID)&objc::class_t::DLHelper,"showConfirmMessageSave:share:",(ID)&local_70,
               (int)&local_98,param_4,param_5);
  }
  return;
}

