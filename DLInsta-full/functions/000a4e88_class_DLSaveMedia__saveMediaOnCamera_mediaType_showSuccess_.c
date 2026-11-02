/* Address: 000a4e88 | Name: class_DLSaveMedia__saveMediaOnCamera_mediaType_showSuccess_ | Body bytes: 40 */

/* Function Stack Size: 0x24 bytes */

void __thiscall
DLSaveMedia::class_DLSaveMedia__saveMediaOnCamera_mediaType_showSuccess_
          (DLSaveMedia *this,ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4,
          bool param_5)

{
  if ((int)param_4 == 0) {
    class_DLSaveMedia__saveMediaOnCamera_mediaType_completion_
              ((ID)&objc::class_t::DLSaveMedia,"saveMediaOnCamera:mediaType:completion:",(ID)param_2
               ,param_3,0,param_5);
    return;
  }
  class_DLSaveMedia__saveMediaOnCamera_mediaType_
            ((ID)&objc::class_t::DLSaveMedia,"saveMediaOnCamera:mediaType:",(ID)param_2,param_3);
  return;
}

