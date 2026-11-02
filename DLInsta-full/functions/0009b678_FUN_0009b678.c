/* Address: 0009b678 | Name: FUN_0009b678 | Body bytes: 720 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID FUN_0009b678(undefined8 param_1,uint param_2)

{
  uint uVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  undefined8 *puVar5;
  ID IVar6;
  undefined8 uVar7;
  float local_84;
  ID local_80;
  ID local_78;
  
  IVar2 = _objc_alloc(&_OBJC_CLASS___AVAudioFile);
  local_78 = 0;
  IVar2 = AVAudioFile::initForReading_error_(IVar2,"initForReading:error:",param_1,&local_78);
  if (local_78 == 0) {
    IVar3 = AVAudioFile::processingFormat(IVar2,"processingFormat");
    IVar4 = AVAudioFile::length(IVar2,"length");
    uVar1 = 0;
    if (param_2 != 0) {
      uVar1 = (uint)IVar4 / param_2;
    }
    IVar4 = _objc_alloc(&_OBJC_CLASS___AVAudioPCMBuffer);
    IVar3 = AVAudioPCMBuffer::initWithPCMFormat_frameCapacity_
                      (IVar4,"initWithPCMFormat:frameCapacity:",IVar3,(ulong)uVar1);
    if (IVar3 == 0) {
      IVar2 = 0;
    }
    else {
      IVar4 = NSMutableArray::arrayWithCapacity_
                        ((ID)&_OBJC_CLASS___NSMutableArray,"arrayWithCapacity:",(long)(int)param_2);
      if (0 < (int)param_2) {
        do {
          local_80 = 0;
          AVAudioFile::readIntoBuffer_frameCount_error_
                    (IVar2,"readIntoBuffer:frameCount:error:",IVar3,(ulong)uVar1,&local_80);
          if (local_80 != 0) {
            _objc_msgSend(local_80,"localizedDescription");
            _NSLog(&cf_Errorreadingintobuffer___);
            return 0;
          }
          puVar5 = (undefined8 *)AVAudioPCMBuffer::floatChannelData(IVar3,"floatChannelData");
          uVar7 = *puVar5;
          IVar6 = AVAudioPCMBuffer::frameLength(IVar3,"frameLength");
          local_84 = 0.0;
          _vDSP_rmsqv(uVar7,1,&local_84,IVar6 & 0xffffffff);
          if (local_84 < 0.003) {
            local_84 = 0.0;
          }
          IVar6 = NSNumber::numberWithFloat_
                            ((ID)&_OBJC_CLASS___NSNumber,"numberWithFloat:",local_84);
          NSMutableArray::addObject_(IVar4,"addObject:",IVar6);
          param_2 = param_2 - 1;
        } while (param_2 != 0);
      }
      IVar2 = NSMutableArray::copy(IVar4,"copy");
    }
  }
  else {
    _objc_msgSend(local_78,"localizedDescription");
    _NSLog(&cf_Errorreadingaudiofile___);
    IVar2 = 0;
  }
  return IVar2;
}

