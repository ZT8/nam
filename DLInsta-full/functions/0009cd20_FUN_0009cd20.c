/* Address: 0009cd20 | Name: FUN_0009cd20 | Body bytes: 3376 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_0009cd20(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  ID IVar4;
  ID IVar5;
  void *pvVar6;
  ID IVar7;
  ID IVar8;
  ID IVar9;
  ID IVar10;
  ID IVar11;
  undefined8 *puVar12;
  ID IVar13;
  undefined8 uVar14;
  long lVar15;
  uint uVar16;
  double dVar17;
  ulong uVar18;
  undefined *local_2f8;
  undefined8 local_2f0;
  code *local_2e8;
  undefined *puStack_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  ID local_2c8;
  ID local_2c0;
  ID local_2b8;
  ID local_2b0;
  undefined8 uStack_2a8;
  void *local_2a0;
  ulong local_290;
  undefined8 uStack_288;
  void *local_280;
  undefined *local_278;
  undefined8 local_270;
  code *local_268;
  undefined *puStack_260;
  undefined8 local_258;
  ID local_250;
  undefined8 local_248;
  undefined8 uStack_240;
  uint local_238;
  undefined4 local_234;
  uint local_230;
  uint local_22c;
  undefined8 local_228;
  undefined *local_220;
  undefined8 local_218;
  code *local_210;
  undefined *puStack_208;
  undefined8 local_200;
  ID local_1f8;
  undefined *local_1f0;
  undefined8 local_1e8;
  code *local_1e0;
  undefined *puStack_1d8;
  undefined8 local_1d0;
  ID local_1c8;
  undefined *local_1c0;
  undefined8 local_1b8;
  code *local_1b0;
  undefined *puStack_1a8;
  undefined8 local_1a0;
  ID local_198;
  undefined4 local_18c;
  undefined *local_188;
  undefined8 local_180;
  code *local_178;
  undefined *puStack_170;
  undefined8 local_168;
  ID local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  long local_130;
  undefined8 uStack_128;
  undefined8 local_120 [3];
  uint local_104;
  float local_f4;
  ID local_f0;
  undefined8 local_e8;
  cfstringStruct *pcStack_e0;
  undefined8 local_d8;
  cfstringStruct *pcStack_d0;
  undefined8 local_c8;
  cfstringStruct *pcStack_c0;
  undefined8 local_b8;
  cfstringStruct *pcStack_b0;
  undefined8 local_a8;
  cfstringStruct *pcStack_a0;
  undefined8 local_98;
  cfstringStruct *pcStack_90;
  long local_88;
  
  local_88 = *(long *)PTR____stack_chk_guard_000e8260;
  IVar4 = _NSSearchPathForDirectoriesInDomains(9,1,1);
  IVar4 = _objc_msgSend(IVar4,"firstObject");
  IVar4 = _objc_msgSend(IVar4,"stringByAppendingPathComponent:",&cf_DLAudioAAC_m4a);
  IVar5 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
  NSFileManager::removeItemAtPath_error_(IVar5,"removeItemAtPath:error:",IVar4,0);
  local_150 = 0;
  local_158 = 0;
  iVar3 = _ExtAudioFileOpenURL(*(undefined8 *)(param_1 + 0x20),&local_150);
  if (iVar3 == 0) {
    local_18c = 0x28;
    iVar3 = _ExtAudioFileGetProperty(local_150,0x66666d74,&local_18c,local_120);
    if (iVar3 == 0) {
      uStack_138 = 0;
      uStack_128 = 0;
      local_148 = local_120[0];
      local_140 = 0x61616320;
      local_130 = (ulong)local_104 << 0x20;
      local_18c = 0x28;
      iVar3 = _AudioFormatGetProperty(0x666d7469,0,0,&local_18c,&local_148);
      if (iVar3 == 0) {
        IVar4 = NSURL::fileURLWithPath_((ID)&_OBJC_CLASS___NSURL,"fileURLWithPath:",IVar4);
        iVar3 = _ExtAudioFileCreateWithURL(IVar4,0x6d346166,&local_148,0,1,&local_158);
        if (iVar3 == 0) {
          local_248 = local_120[0];
          uStack_240 = 0xc6c70636d;
          local_228 = 0x10;
          local_238 = local_104 << 1;
          local_22c = local_104;
          local_234 = 1;
          local_230 = local_238;
          iVar3 = _ExtAudioFileSetProperty(local_158,0x63666d74,0x28,&local_248);
          if ((iVar3 == 0) &&
             (iVar3 = _ExtAudioFileSetProperty(local_150,0x63666d74,0x28,&local_248), iVar3 == 0)) {
            pvVar6 = _malloc(0x8000);
            do {
              uVar1 = 0;
              if (local_230 != 0) {
                uVar1 = 0x8000 / local_230;
              }
              local_2b0 = CONCAT44(local_2b0._4_4_,uVar1);
              local_290 = CONCAT44(local_290._4_4_,1);
              uStack_288 = CONCAT44(0x8000,local_22c);
              local_280 = pvVar6;
              iVar3 = _ExtAudioFileRead(local_150,&local_2b0,&local_290);
              IVar5 = 0;
              if (iVar3 != 0) goto LAB_0009d55c;
              if ((int)local_2b0 == 0) goto LAB_0009d55c;
              iVar3 = _ExtAudioFileWrite(local_158,local_2b0 & 0xffffffff,&local_290);
            } while (iVar3 == 0);
            local_e8 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_000e8070;
            pcStack_e0 = &cf_Errorwritingtodestinationfile;
            IVar5 = NSDictionary::dictionaryWithObjects_forKeys_count_
                              ((ID)&_OBJC_CLASS___NSDictionary,
                               "dictionaryWithObjects:forKeys:count:",&pcStack_e0,&local_e8,1);
            IVar5 = NSError::errorWithDomain_code_userInfo_
                              ((ID)&_OBJC_CLASS___NSError,"errorWithDomain:code:userInfo:",
                               &cf_DLAACAudioConverterErrorDomain,0xfffffffffffffff7,IVar5);
LAB_0009d55c:
            _free(pvVar6);
            _ExtAudioFileDispose(local_150);
            _ExtAudioFileDispose(local_158);
            IVar7 = AVAsset::assetWithURL_((ID)&_OBJC_CLASS___AVAsset,"assetWithURL:",IVar4);
            if (IVar7 == 0) {
              local_290 = 0;
              uStack_288 = 0;
              local_280 = (void *)0x0;
            }
            else {
              AVAsset::duration(IVar7,"duration",&local_290);
            }
            uStack_2a8 = uStack_288;
            local_2b0 = local_290;
            local_2a0 = local_280;
            dVar17 = (double)_CMTimeGetSeconds(&local_2b0);
            IVar7 = NSMutableArray::array((ID)&_OBJC_CLASS___NSMutableArray,"array");
            if (0 < (long)(dVar17 / 0.1)) {
              lVar15 = 0;
              do {
                IVar8 = NSNumber::numberWithInteger_
                                  ((ID)&_OBJC_CLASS___NSNumber,"numberWithInteger:",lVar15);
                NSMutableArray::addObject_(IVar7,"addObject:",IVar8);
                lVar15 = lVar15 + 1;
              } while ((long)(dVar17 / 0.1) != lVar15);
            }
            IVar7 = NSMutableArray::count(IVar7,"count");
            IVar8 = *(ID *)PTR____NSArray0___000e8240;
            if (IVar7 == 0) {
              local_2c0 = IVar8;
            }
            else {
              IVar9 = _objc_alloc(&_OBJC_CLASS___AVAudioFile);
              local_2b0 = 0;
              IVar9 = AVAudioFile::initForReading_error_
                                (IVar9,"initForReading:error:",IVar4,&local_2b0);
              if (local_2b0 == 0) {
                IVar10 = AVAudioFile::processingFormat(IVar9,"processingFormat");
                IVar11 = AVAudioFile::length(IVar9,"length");
                uVar1 = 0;
                uVar16 = (uint)IVar7;
                if (uVar16 != 0) {
                  uVar1 = (uint)IVar11 / uVar16;
                }
                IVar11 = _objc_alloc(&_OBJC_CLASS___AVAudioPCMBuffer);
                IVar10 = AVAudioPCMBuffer::initWithPCMFormat_frameCapacity_
                                   (IVar11,"initWithPCMFormat:frameCapacity:",IVar10,(ulong)uVar1);
                if (IVar10 == 0) {
                  IVar7 = 0;
                }
                else {
                  IVar11 = NSMutableArray::arrayWithCapacity_
                                     ((ID)&_OBJC_CLASS___NSMutableArray,"arrayWithCapacity:",
                                      (long)(int)uVar16);
                  if (0 < (int)uVar16) {
                    do {
                      local_f0 = 0;
                      AVAudioFile::readIntoBuffer_frameCount_error_
                                (IVar9,"readIntoBuffer:frameCount:error:",IVar10,(ulong)uVar1,
                                 &local_f0);
                      if (local_f0 != 0) {
                        _objc_msgSend(local_f0,"localizedDescription");
                        _NSLog(&cf_Errorreadingintobuffer___);
                        IVar7 = 0;
                        goto LAB_0009d944;
                      }
                      puVar12 = (undefined8 *)
                                AVAudioPCMBuffer::floatChannelData(IVar10,"floatChannelData");
                      uVar14 = *puVar12;
                      IVar13 = AVAudioPCMBuffer::frameLength(IVar10,"frameLength");
                      local_f4 = 0.0;
                      _vDSP_rmsqv(uVar14,1,&local_f4,IVar13 & 0xffffffff);
                      uVar18 = (ulong)(uint)local_f4;
                      if (local_f4 < 0.003) {
                        local_f4 = 0.0;
                        uVar18 = 0;
                      }
                      IVar13 = NSNumber::numberWithFloat_
                                         ((ID)&_OBJC_CLASS___NSNumber,"numberWithFloat:",uVar18);
                      NSMutableArray::addObject_(IVar11,"addObject:",IVar13);
                      uVar16 = (int)IVar7 - 1;
                      IVar7 = (ID)uVar16;
                    } while (uVar16 != 0);
                  }
                  IVar7 = NSMutableArray::copy(IVar11,"copy");
                }
              }
              else {
                _objc_msgSend(local_2b0,"localizedDescription");
                _NSLog(&cf_Errorreadingaudiofile___);
                IVar7 = 0;
              }
LAB_0009d944:
              IVar9 = _objc_msgSend(IVar7,"count");
              local_2c0 = IVar7;
              if (IVar9 == 0) {
                local_2c0 = IVar8;
              }
            }
            puVar2 = PTR___dispatch_main_q_000e8268;
            _objc_retainAutorelease(PTR___dispatch_main_q_000e8268);
            local_2f8 = PTR___NSConcreteStackBlock_000e80d8;
            local_2f0 = 0xc2000000;
            local_2e8 = FUN_0009dac8;
            puStack_2e0 = &DAT_000e96b8;
            local_2d8 = *(undefined8 *)(param_1 + 0x20);
            local_2d0 = *(undefined8 *)(param_1 + 0x28);
            local_2c8 = IVar4;
            local_2b8 = IVar5;
            _dispatch_async(puVar2,&local_2f8);
          }
          else {
            _ExtAudioFileDispose(local_150);
            _ExtAudioFileDispose(local_158);
            local_d8 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_000e8070;
            pcStack_d0 = &cf_Couldn_tsetupintermediateconversionformat;
            IVar4 = NSDictionary::dictionaryWithObjects_forKeys_count_
                              ((ID)&_OBJC_CLASS___NSDictionary,
                               "dictionaryWithObjects:forKeys:count:",&pcStack_d0,&local_d8,1);
            IVar4 = NSError::errorWithDomain_code_userInfo_
                              ((ID)&_OBJC_CLASS___NSError,"errorWithDomain:code:userInfo:",
                               &cf_DLAACAudioConverterErrorDomain,0xfffffffffffffff8,IVar4);
            puVar2 = PTR___dispatch_main_q_000e8268;
            _objc_retainAutorelease(PTR___dispatch_main_q_000e8268);
            local_278 = PTR___NSConcreteStackBlock_000e80d8;
            local_270 = 0xc2000000;
            local_268 = FUN_0009dab0;
            puStack_260 = &DAT_000e95d8;
            local_258 = *(undefined8 *)(param_1 + 0x28);
            local_250 = IVar4;
            _dispatch_async(puVar2,&local_278);
          }
        }
        else {
          _ExtAudioFileDispose(local_150);
          local_c8 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_000e8070;
          pcStack_c0 = &cf_Failedtocreatedestinationfile;
          IVar4 = NSDictionary::dictionaryWithObjects_forKeys_count_
                            ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                             &pcStack_c0,&local_c8,1);
          IVar4 = NSError::errorWithDomain_code_userInfo_
                            ((ID)&_OBJC_CLASS___NSError,"errorWithDomain:code:userInfo:",
                             &cf_DLAACAudioConverterErrorDomain,0xfffffffffffffff9,IVar4);
          puVar2 = PTR___dispatch_main_q_000e8268;
          _objc_retainAutorelease(PTR___dispatch_main_q_000e8268);
          local_220 = PTR___NSConcreteStackBlock_000e80d8;
          local_218 = 0xc2000000;
          local_210 = FUN_0009da98;
          puStack_208 = &DAT_000e95d8;
          local_200 = *(undefined8 *)(param_1 + 0x28);
          local_1f8 = IVar4;
          _dispatch_async(puVar2,&local_220);
        }
      }
      else {
        _ExtAudioFileDispose(local_150);
        local_b8 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_000e8070;
        pcStack_b0 = &cf_Failedtosetdestinationformat;
        IVar4 = NSDictionary::dictionaryWithObjects_forKeys_count_
                          ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                           &pcStack_b0,&local_b8,1);
        IVar4 = NSError::errorWithDomain_code_userInfo_
                          ((ID)&_OBJC_CLASS___NSError,"errorWithDomain:code:userInfo:",
                           &cf_DLAACAudioConverterErrorDomain,0xfffffffffffffffa,IVar4);
        puVar2 = PTR___dispatch_main_q_000e8268;
        _objc_retainAutorelease(PTR___dispatch_main_q_000e8268);
        local_1f0 = PTR___NSConcreteStackBlock_000e80d8;
        local_1e8 = 0xc2000000;
        local_1e0 = FUN_0009da80;
        puStack_1d8 = &DAT_000e95d8;
        local_1d0 = *(undefined8 *)(param_1 + 0x28);
        local_1c8 = IVar4;
        _dispatch_async(puVar2,&local_1f0);
      }
    }
    else {
      _ExtAudioFileDispose(local_150);
      local_a8 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_000e8070;
      pcStack_a0 = &cf_Failedtogetsourceformat;
      IVar4 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &pcStack_a0,&local_a8,1);
      IVar4 = NSError::errorWithDomain_code_userInfo_
                        ((ID)&_OBJC_CLASS___NSError,"errorWithDomain:code:userInfo:",
                         &cf_DLAACAudioConverterErrorDomain,0xfffffffffffffffb,IVar4);
      puVar2 = PTR___dispatch_main_q_000e8268;
      _objc_retainAutorelease(PTR___dispatch_main_q_000e8268);
      local_1c0 = PTR___NSConcreteStackBlock_000e80d8;
      local_1b8 = 0xc2000000;
      local_1b0 = FUN_0009da68;
      puStack_1a8 = &DAT_000e95d8;
      local_1a0 = *(undefined8 *)(param_1 + 0x28);
      local_198 = IVar4;
      _dispatch_async(puVar2,&local_1c0);
    }
  }
  else {
    local_98 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_000e8070;
    pcStack_90 = &cf_Failedtoopensourcefile;
    IVar4 = NSDictionary::dictionaryWithObjects_forKeys_count_
                      ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                       &pcStack_90,&local_98,1);
    IVar4 = NSError::errorWithDomain_code_userInfo_
                      ((ID)&_OBJC_CLASS___NSError,"errorWithDomain:code:userInfo:",
                       &cf_DLAACAudioConverterErrorDomain,0xfffffffffffffffc,IVar4);
    puVar2 = PTR___dispatch_main_q_000e8268;
    _objc_retainAutorelease(PTR___dispatch_main_q_000e8268);
    local_188 = PTR___NSConcreteStackBlock_000e80d8;
    local_180 = 0xc2000000;
    local_178 = FUN_0009da50;
    puStack_170 = &DAT_000e95d8;
    local_168 = *(undefined8 *)(param_1 + 0x28);
    local_160 = IVar4;
    _dispatch_async(puVar2,&local_188);
  }
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_88) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}

