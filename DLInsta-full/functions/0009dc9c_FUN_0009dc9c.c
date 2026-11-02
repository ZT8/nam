/* Address: 0009dc9c | Name: FUN_0009dc9c | Body bytes: 488 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

undefined8 FUN_0009dc9c(long param_1)

{
  int iVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  
  _NSClassFromString(&cf_IGDirectAudioWaveform);
  IVar2 = _objc_alloc();
  IVar2 = _objc_msgSend(IVar2,"initWithVolumeRecordingInterval:averageVolume:",0x3fb999999999999a,
                        *(undefined8 *)(param_1 + 0x20));
  IVar3 = _objc_msgSend(*(ID *)(param_1 + 0x28),"respondsToSelector:",
                        "voiceRecordViewController:didRecordAudioClipWithURL:waveform:duration:entryPoint:"
                       );
  IVar4 = *(ID *)(param_1 + 0x28);
  if ((int)IVar3 == 0) {
    IVar3 = _objc_msgSend(IVar4,"respondsToSelector:",
                          "voiceRecordViewController:didRecordAudioClipWithURL:waveform:duration:entryPoint:sendButtonTypeTapped:"
                         );
    IVar4 = *(ID *)(param_1 + 0x28);
    if ((int)IVar3 == 0) {
      iVar1 = FUN_0008ce2c(IVar4,"_threadViewControllerContext");
      if (iVar1 == 0) {
        DLHelper::class_DLHelper__showMessageWithTitle_message_
                  ((ID)&objc::class_t::DLHelper,"showMessageWithTitle:message:",0xea568,0xed8e8);
      }
      else {
        IVar3 = _objc_msgSend(*(ID *)(param_1 + 0x28),"valueForKey:",
                              &cf__threadViewControllerContext);
        IVar4 = _objc_msgSend(IVar3,"respondsToSelector:","voiceController");
        if ((int)IVar4 != 0) {
          IVar3 = _objc_msgSend(IVar3,"performSelector:","voiceController");
          IVar4 = _objc_msgSend(IVar3,"respondsToSelector:",
                                "voiceRecordViewController:didRecordAudioClipWithURL:waveform:duration:entryPoint:sendButtonTypeTapped:"
                               );
          if ((int)IVar4 == 0) {
            DLHelper::class_DLHelper__showMessageWithTitle_message_
                      ((ID)&objc::class_t::DLHelper,"showMessageWithTitle:message:",0xea568,0xed8e8)
            ;
          }
          else {
            _objc_msgSend(IVar3,
                          "voiceRecordViewController:didRecordAudioClipWithURL:waveform:duration:entryPoint:sendButtonTypeTapped:"
                          ,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x28),
                          *(undefined8 *)(param_1 + 0x30),IVar2,0,0);
          }
        }
      }
    }
    else {
      _objc_msgSend(IVar4,
                    "voiceRecordViewController:didRecordAudioClipWithURL:waveform:duration:entryPoint:sendButtonTypeTapped:"
                    ,*(undefined8 *)(param_1 + 0x38),IVar4,*(undefined8 *)(param_1 + 0x30),IVar2,0,0
                   );
    }
  }
  else {
    _objc_msgSend(IVar4,
                  "voiceRecordViewController:didRecordAudioClipWithURL:waveform:duration:entryPoint:"
                  ,*(undefined8 *)(param_1 + 0x38),IVar4,*(undefined8 *)(param_1 + 0x30),IVar2,0);
  }
  return 0;
}

