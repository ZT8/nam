/* Address: 000bd28c | Name: FUN_000bd28c | Body bytes: 816 */

void FUN_000bd28c(code *param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  code *pcVar4;
  code *pcVar5;
  code *pcVar6;
  code *pcVar7;
  code *pcVar8;
  code *pcVar9;
  code *pcVar10;
  code *pcVar11;
  code *pcVar12;
  FILE *pFVar13;
  size_t sVar14;
  void *pvVar15;
  size_t sVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  code *pcVar22;
  undefined8 uVar23;
  char acStack_88 [32];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_000e8260;
  pcVar22 = param_1;
  if ((!(DAT_001005a0 != (code *)0x0 && (int)param_1 == 0)) &&
     ((DAT_001005a0 = (code *)_dlsym(0xfffffffffffffffe,"_availability_version_check"),
      DAT_001005a0 == (code *)0x0 || (pcVar22 = DAT_001005a0, (int)param_1 != 0)))) {
    puVar3 = (undefined8 *)_dlsym(0xfffffffffffffffe,"kCFAllocatorNull");
    pcVar22 = (code *)0x0;
    if (puVar3 != (undefined8 *)0x0) {
      uVar23 = *puVar3;
      pcVar4 = (code *)_dlsym(0xfffffffffffffffe,"CFDataCreateWithBytesNoCopy");
      pcVar22 = (code *)0x0;
      if (pcVar4 != (code *)0x0) {
        pcVar5 = (code *)_dlsym(0xfffffffffffffffe,"CFPropertyListCreateWithData");
        pcVar6 = (code *)_dlsym(0xfffffffffffffffe,"CFPropertyListCreateFromXMLData");
        pcVar22 = pcVar6;
        if (!(pcVar5 == (code *)0x0 && pcVar6 == (code *)0x0)) {
          pcVar7 = (code *)_dlsym(0xfffffffffffffffe,"CFStringCreateWithCStringNoCopy");
          pcVar22 = (code *)0x0;
          if (pcVar7 != (code *)0x0) {
            pcVar8 = (code *)_dlsym(0xfffffffffffffffe,"CFDictionaryGetValue");
            pcVar22 = (code *)0x0;
            if (pcVar8 != (code *)0x0) {
              pcVar9 = (code *)_dlsym(0xfffffffffffffffe,"CFGetTypeID");
              pcVar22 = (code *)0x0;
              if (pcVar9 != (code *)0x0) {
                pcVar10 = (code *)_dlsym(0xfffffffffffffffe,"CFStringGetTypeID");
                pcVar22 = (code *)0x0;
                if (pcVar10 != (code *)0x0) {
                  pcVar11 = (code *)_dlsym(0xfffffffffffffffe,"CFStringGetCString");
                  pcVar22 = (code *)0x0;
                  if (pcVar11 != (code *)0x0) {
                    pcVar12 = (code *)_dlsym(0xfffffffffffffffe,"CFRelease");
                    pcVar22 = (code *)0x0;
                    if (pcVar12 != (code *)0x0) {
                      pFVar13 = _fopen("/System/Library/CoreServices/SystemVersion.plist","r");
                      pcVar22 = (code *)0x0;
                      if (pFVar13 != (FILE *)0x0) {
                        _fseek(pFVar13,0,2);
                        sVar14 = _ftell(pFVar13);
                        if ((long)sVar14 < 0) {
                          pvVar15 = (void *)0x0;
                        }
                        else {
                          _rewind(pFVar13);
                          pvVar15 = _malloc(sVar14);
                          if (((pvVar15 != (void *)0x0) &&
                              (sVar16 = _fread(pvVar15,1,sVar14,pFVar13), sVar16 == sVar14)) &&
                             (lVar17 = (*pcVar4)(0,pvVar15,sVar14,uVar23), lVar17 != 0)) {
                            if (pcVar5 == (code *)0x0) {
                              lVar18 = (*pcVar6)(0,lVar17,0,0);
                            }
                            else {
                              lVar18 = (*pcVar5)();
                            }
                            if (lVar18 != 0) {
                              lVar19 = (*pcVar7)(0,"ProductVersion",0x600,uVar23);
                              if (lVar19 != 0) {
                                lVar20 = (*pcVar8)(lVar18,lVar19);
                                (*pcVar12)(lVar19);
                                if (lVar20 != 0) {
                                  lVar19 = (*pcVar9)(lVar20);
                                  lVar21 = (*pcVar10)();
                                  if ((lVar19 == lVar21) &&
                                     (iVar1 = (*pcVar11)(lVar20,acStack_88,0x20,0x8000100),
                                     iVar1 != 0)) {
                                    _sscanf(acStack_88,"%d.%d.%d",&DAT_00100580,&DAT_00100584,
                                            &DAT_00100588);
                                  }
                                }
                              }
                              (*pcVar12)(lVar18);
                            }
                            (*pcVar12)(lVar17);
                          }
                        }
                        _free(pvVar15);
                        uVar2 = _fclose(pFVar13);
                        pcVar22 = (code *)(ulong)uVar2;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(pcVar22);
  }
  return;
}

