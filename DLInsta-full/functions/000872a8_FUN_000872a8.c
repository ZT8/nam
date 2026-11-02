/* Address: 000872a8 | Name: FUN_000872a8 | Body bytes: 7128 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_000872a8(void)

{
  undefined8 uVar1;
  int iVar2;
  ID IVar3;
  ulong uVar4;
  byte *pbVar5;
  
  if (((DAT_001001b8 & 1) == 0) && (iVar2 = ___cxa_guard_acquire(&DAT_001001b8), iVar2 != 0)) {
    DAT_001001b7 = '\x01';
    _DAT_001001b0 = 0x1067e17b;
    uRam00000000001001b4 = 0x61436b;
    ___cxa_atexit(PTR_FUN_000e8210,&DAT_001001b0,0);
    ___cxa_guard_release(&DAT_001001b8);
  }
  if (DAT_001001b7 != '\0') {
    uVar4 = 0;
    pbVar5 = &DAT_001001b0;
    do {
      *pbVar5 = *pbVar5 ^ (byte)(0x656173452549d30d >> (uVar4 & 0x3f));
      uVar4 = uVar4 + 8;
      pbVar5 = pbVar5 + 1;
    } while (uVar4 != 0x38);
    DAT_001001b7 = '\0';
  }
  DAT_001006b8 = NSString::stringWithCString_encoding_
                           ((ID)&_OBJC_CLASS___NSString,"stringWithCString:encoding:",&DAT_001001b0,
                            4);
  if ((DAT_001001d0 & 1) == 0) {
    iVar2 = ___cxa_guard_acquire(&DAT_001001d0);
    if (iVar2 != 0) {
      DAT_001001c9 = '\x01';
      _DAT_001001c0 = 0xbf88d7d8c0a13e8c;
      DAT_001001c8 = 0xc5;
      ___cxa_atexit(PTR_FUN_000e8238,&DAT_001001c0,0);
      ___cxa_guard_release(&DAT_001001d0);
    }
  }
  if (DAT_001001c9 != '\0') {
    uVar4 = 0;
    pbVar5 = &DAT_001001c0;
    do {
      *pbVar5 = *pbVar5 ^ (byte)(0xefc7bf81a1d573c5 >> (uVar4 & 0x38));
      uVar4 = uVar4 + 8;
      pbVar5 = pbVar5 + 1;
    } while (uVar4 != 0x48);
    DAT_001001c9 = '\0';
  }
  IVar3 = NSString::stringWithCString_encoding_
                    ((ID)&_OBJC_CLASS___NSString,"stringWithCString:encoding:",&DAT_001001c0,4);
  uVar1 = DAT_001005c8;
  DAT_001005c8 = IVar3;
  DAT_001006a8 = FUN_00098f04(uVar1,0);
  if ((DAT_001001e8 & 1) == 0) {
    iVar2 = ___cxa_guard_acquire(&DAT_001001e8);
    if (iVar2 != 0) {
      DAT_001001e3 = '\x01';
      _DAT_001001d8 = 0xfe4c66987c7004;
      _DAT_001001df = 0x3d7004a6;
      ___cxa_atexit(PTR_FUN_000e8108,&DAT_001001d8,0);
      ___cxa_guard_release(&DAT_001001e8);
    }
  }
  if (DAT_001001e3 != '\0') {
    uVar4 = 0;
    pbVar5 = &DAT_001001d8;
    do {
      *pbVar5 = *pbVar5 ^ (byte)(0xe7bf0d27d93d3145 >> (uVar4 & 0x38));
      uVar4 = uVar4 + 8;
      pbVar5 = pbVar5 + 1;
    } while (uVar4 != 0x58);
    DAT_001001e3 = '\0';
  }
  DAT_00100638 = NSString::stringWithCString_encoding_
                           ((ID)&_OBJC_CLASS___NSString,"stringWithCString:encoding:",&DAT_001001d8,
                            4);
  if ((DAT_001001f8 & 1) == 0) {
    iVar2 = ___cxa_guard_acquire(&DAT_001001f8);
    if (iVar2 != 0) {
      DAT_001001f7 = '\x01';
      _DAT_001001f0 = 0x6724167b;
      uRam00000000001001f4 = 0x2167da;
      ___cxa_atexit(PTR_FUN_000e8200,&DAT_001001f0,0);
      ___cxa_guard_release(&DAT_001001f8);
    }
  }
  if (DAT_001001f7 != '\0') {
    uVar4 = 0;
    pbVar5 = &DAT_001001f0;
    do {
      *pbVar5 = *pbVar5 ^ (byte)(0xbb2103bf0b4d771d >> (uVar4 & 0x3f));
      uVar4 = uVar4 + 8;
      pbVar5 = pbVar5 + 1;
    } while (uVar4 != 0x38);
    DAT_001001f7 = '\0';
  }
  DAT_00100630 = NSString::stringWithCString_encoding_
                           ((ID)&_OBJC_CLASS___NSString,"stringWithCString:encoding:",&DAT_001001f0,
                            4);
  if ((DAT_00100218 & 1) == 0) {
    iVar2 = ___cxa_guard_acquire(&DAT_00100218);
    if (iVar2 != 0) {
      DAT_00100213 = '\x01';
      uRam0000000000100208 = 0xfa97de46bb8c43;
      _DAT_00100200 = 0x86fd80d26abd865b;
      DAT_0010020f = 0xcf9059aa;
      ___cxa_atexit(PTR_FUN_000e8188,&DAT_00100200,0);
      ___cxa_guard_release(&DAT_00100218);
    }
  }
  if (DAT_00100213 != '\0') {
    uVar4 = 0;
    pbVar5 = &DAT_00100200;
    do {
      *pbVar5 = *pbVar5 ^ (byte)(0xd993efbb19cfe32d >> (uVar4 & 0x38));
      uVar4 = uVar4 + 8;
      pbVar5 = pbVar5 + 1;
    } while (uVar4 != 0x98);
    DAT_00100213 = '\0';
  }
  DAT_00100640 = NSString::stringWithCString_encoding_
                           ((ID)&_OBJC_CLASS___NSString,"stringWithCString:encoding:",&DAT_00100200,
                            4);
  if ((DAT_00100250 & 1) == 0) {
    iVar2 = ___cxa_guard_acquire(&DAT_00100250);
    if (iVar2 != 0) {
      DAT_0010024a = '\x01';
      uRam0000000000100228 = 0x3e477b05feaef924;
      _DAT_00100220 = 0x70467300a3b3fd2d;
      uRam0000000000100238 = 0xe626;
      _DAT_00100230 = 0x711a2212b6b0fd27;
      uRam0000000000100242 = 0x8924360d2c1efcf5;
      _DAT_0010023a = 0x2f082517fcaa;
      uRam0000000000100240 = 0xfa35;
      ___cxa_atexit(PTR_FUN_000e81c8,&DAT_00100220,0);
      ___cxa_guard_release(&DAT_00100250);
    }
  }
  if (DAT_0010024a != '\0') {
    uVar4 = 0;
    pbVar5 = &DAT_00100220;
    do {
      *pbVar5 = *pbVar5 ^ (byte)(0x5f694973d3c78945 >> (uVar4 & 0x38));
      uVar4 = uVar4 + 8;
      pbVar5 = pbVar5 + 1;
    } while (uVar4 != 0x150);
    DAT_0010024a = '\0';
  }
  DAT_00100680 = NSString::stringWithCString_encoding_
                           ((ID)&_OBJC_CLASS___NSString,"stringWithCString:encoding:",&DAT_00100220,
                            4);
  if ((DAT_00100288 & 1) == 0) {
    iVar2 = ___cxa_guard_acquire(&DAT_00100288);
    if (iVar2 != 0) {
      DAT_00100285 = '\x01';
      uRam0000000000100260 = 0x8a09a91f329a8b56;
      _DAT_00100258 = 0xc408a11a6f878f5f;
      uRam0000000000100270 = 0xd309e9454;
      _DAT_00100268 = 0xc554f0087a848f55;
      uRam000000000010027d = 0x696c94955e9f53fe;
      _DAT_00100275 = 0x9b46f7;
      uRam0000000000100278 = 0x1a30c18847;
      ___cxa_atexit(PTR_FUN_000e81d0,&DAT_00100258,0);
      ___cxa_guard_release(&DAT_00100288);
    }
  }
  if (DAT_00100285 != '\0') {
    uVar4 = 0;
    pbVar5 = &DAT_00100258;
    do {
      *pbVar5 = *pbVar5 ^ (byte)(0xeb279b691ff3fb37 >> (uVar4 & 0x38));
      uVar4 = uVar4 + 8;
      pbVar5 = pbVar5 + 1;
    } while (uVar4 != 0x168);
    DAT_00100285 = '\0';
  }
  DAT_00100698 = NSString::stringWithCString_encoding_
                           ((ID)&_OBJC_CLASS___NSString,"stringWithCString:encoding:",&DAT_00100258,
                            4);
  if ((DAT_001002b8 & 1) == 0) {
    iVar2 = ___cxa_guard_acquire(&DAT_001002b8);
    if (iVar2 != 0) {
      DAT_001002b2 = '\x01';
      uRam0000000000100298 = 0x8638840214137754;
      _DAT_00100290 = 0xda7cdf141313615d;
      uRam00000000001002a8 = 0x90378c114c0b7141;
      _DAT_001002a0 = 0x8c3f81480e08761b;
      DAT_001002b0 = 0x155a;
      ___cxa_atexit(PTR_FUN_000e81b0,&DAT_00100290,0);
      ___cxa_guard_release(&DAT_001002b8);
    }
  }
  if (DAT_001002b2 != '\0') {
    uVar4 = 0;
    pbVar5 = &DAT_00100290;
    do {
      *pbVar5 = *pbVar5 ^ (byte)(0xf553e56763671535 >> (uVar4 & 0x38));
      uVar4 = uVar4 + 8;
      pbVar5 = pbVar5 + 1;
    } while (uVar4 != 0x110);
    DAT_001002b2 = '\0';
  }
  DAT_00100670 = NSString::stringWithCString_encoding_
                           ((ID)&_OBJC_CLASS___NSString,"stringWithCString:encoding:",&DAT_00100290,
                            4);
  if ((DAT_00100300 & 1) == 0) {
    iVar2 = ___cxa_guard_acquire(&DAT_00100300);
    if (iVar2 != 0) {
      DAT_001002fb = '\x01';
      uRam00000000001002c8 = 0x9eeda5fde4e623f8;
      _DAT_001002c0 = 0xd0ecadf8b9fb27f1;
      uRam00000000001002d8 = 0x8fa2fbefe6e23cfa;
      _DAT_001002d0 = 0xd1b0fceaacf827fb;
      uRam00000000001002e8 = 0xe90cf2;
      _DAT_001002e0 = 0x9ca6ffe8e6bd20e9;
      uRam00000000001002f3 = 0x8f23f18fede4eeae;
      _DAT_001002eb = 0x9aaec8f9a6;
      uRam00000000001002f0 = 0xee20ea;
      ___cxa_atexit(PTR_FUN_000e81e0,&DAT_001002c0,0);
      ___cxa_guard_release(&DAT_00100300);
    }
  }
  if (DAT_001002fb != '\0') {
    uVar4 = 0;
    pbVar5 = &DAT_001002c0;
    do {
      *pbVar5 = *pbVar5 ^ (byte)(0xffc3978bc98f5399 >> (uVar4 & 0x38));
      uVar4 = uVar4 + 8;
      pbVar5 = pbVar5 + 1;
    } while (uVar4 != 0x1d8);
    DAT_001002fb = '\0';
  }
  DAT_00100690 = NSString::stringWithCString_encoding_
                           ((ID)&_OBJC_CLASS___NSString,"stringWithCString:encoding:",&DAT_001002c0,
                            4);
  if ((DAT_00100350 & 1) == 0) {
    iVar2 = ___cxa_guard_acquire(&DAT_00100350);
    if (iVar2 != 0) {
      DAT_0010034f = '\x01';
      uRam0000000000100330 = 0xdbf0b795a771f992;
      _DAT_00100328 = 0xb9f9b7efa03fb1c5;
      uRam0000000000100340 = 0xb9f4d9f778ff89;
      _DAT_00100338 = 0xd2b0f8c6f13fa7c5;
      DAT_00100347._0_1_ = 0xb9;
      DAT_00100347._1_7_ = 0xd5e88de338a9dd;
      uRam0000000000100310 = 0xedf7b98dc538a9dd;
      _DAT_00100308 = 0xb9b7fcc3fc79a99c;
      uRam0000000000100320 = 0xffbcb783a75daec5;
      _DAT_00100318 = 0xa1f7fbc0ec6ef982;
      ___cxa_atexit(PTR_FUN_000e81f8,&DAT_00100308,0);
      ___cxa_guard_release(&DAT_00100350);
    }
  }
  if (DAT_0010034f != '\0') {
    uVar4 = 0;
    pbVar5 = &DAT_00100308;
    do {
      *pbVar5 = *pbVar5 ^ (byte)(0x9bd595af851d8be7 >> (uVar4 & 0x38));
      uVar4 = uVar4 + 8;
      pbVar5 = pbVar5 + 1;
    } while (uVar4 != 0x238);
    DAT_0010034f = '\0';
  }
  DAT_00100658 = NSString::stringWithCString_encoding_
                           ((ID)&_OBJC_CLASS___NSString,"stringWithCString:encoding:",&DAT_00100308,
                            4);
  if ((DAT_00100398 & 1) == 0) {
    iVar2 = ___cxa_guard_acquire(&DAT_00100398);
    if (iVar2 != 0) {
      DAT_00100394 = '\x01';
      uRam0000000000100360 = 0x4fc1edb9fbb67149;
      _DAT_00100358 = 0x1b81a8f7c2f77108;
      uRam0000000000100370 = 0x5d8ae3b799d37651;
      _DAT_00100368 = 0x3c1aff4d2e02116;
      uRam0000000000100380 = 0xdefe3a07;
      _DAT_00100378 = 0x1bcfe3db9eb16951;
      uRam000000000010038c = 0xbbee71151cc1fbb9;
      _DAT_00100384 = 0x5c97afd2;
      uRam0000000000100388 = 0xd7f22501;
      ___cxa_atexit(PTR_FUN_000e81f0,&DAT_00100358,0);
      ___cxa_guard_release(&DAT_00100398);
    }
  }
  if (DAT_00100394 != '\0') {
    uVar4 = 0;
    pbVar5 = &DAT_00100358;
    do {
      *pbVar5 = *pbVar5 ^ (byte)(0x39e3c19bbb935373 >> (uVar4 & 0x38));
      uVar4 = uVar4 + 8;
      pbVar5 = pbVar5 + 1;
    } while (uVar4 != 0x1e0);
    DAT_00100394 = '\0';
  }
  DAT_00100668 = NSString::stringWithCString_encoding_
                           ((ID)&_OBJC_CLASS___NSString,"stringWithCString:encoding:",&DAT_00100358,
                            4);
  if ((DAT_001003b0 & 1) == 0) {
    iVar2 = ___cxa_guard_acquire(&DAT_001003b0);
    if (iVar2 != 0) {
      DAT_001003ac = '\x01';
      _DAT_001003a0 = 0xf3701eb6681b8e41;
      DAT_001003a8 = 0xd3fc20a;
      ___cxa_atexit(PTR_FUN_000e8120,&DAT_001003a0,0);
      ___cxa_guard_release(&DAT_001003b0);
    }
  }
  if (DAT_001003ac != '\0') {
    uVar4 = 0;
    pbVar5 = &DAT_001003a0;
    do {
      *pbVar5 = *pbVar5 ^ (byte)(0x971941d90d7fe737 >> (uVar4 & 0x38));
      uVar4 = uVar4 + 8;
      pbVar5 = pbVar5 + 1;
    } while (uVar4 != 0x60);
    DAT_001003ac = '\0';
  }
  DAT_00100650 = NSString::stringWithCString_encoding_
                           ((ID)&_OBJC_CLASS___NSString,"stringWithCString:encoding:",&DAT_001003a0,
                            4);
  if ((DAT_001003d0 & 1) == 0) {
    iVar2 = ___cxa_guard_acquire(&DAT_001003d0);
    if (iVar2 != 0) {
      DAT_001003cc = '\x01';
      uRam00000000001003c0 = 0xa9101e5019c831bf;
      _DAT_001003b8 = 0x875a4a480ac830ed;
      DAT_001003c8 = 0x6bed62a4;
      ___cxa_atexit(PTR_FUN_000e8190,&DAT_001003b8,0);
      ___cxa_guard_release(&DAT_001003d0);
    }
  }
  if (DAT_001003cc != '\0') {
    uVar4 = 0;
    pbVar5 = &DAT_001003b8;
    do {
      *pbVar5 = *pbVar5 ^ (byte)(0xc77f77236bad4799 >> (uVar4 & 0x38));
      uVar4 = uVar4 + 8;
      pbVar5 = pbVar5 + 1;
    } while (uVar4 != 0xa0);
    DAT_001003cc = '\0';
  }
  DAT_00100660 = NSString::stringWithCString_encoding_
                           ((ID)&_OBJC_CLASS___NSString,"stringWithCString:encoding:",&DAT_001003b8,
                            4);
  if ((DAT_001003e0 & 1) == 0) {
    iVar2 = ___cxa_guard_acquire(&DAT_001003e0);
    if (iVar2 != 0) {
      DAT_001003da = '\x01';
      _DAT_001003d8 = 0x3bfb;
      ___cxa_atexit(PTR_FUN_000e8198,&DAT_001003d8,0);
      ___cxa_guard_release(&DAT_001003e0);
    }
  }
  if (DAT_001003da != '\0') {
    _DAT_001003d8 = _DAT_001003d8 ^ 0x3b87;
    DAT_001003da = '\0';
  }
  DAT_001005f0 = NSString::stringWithCString_encoding_
                           ((ID)&_OBJC_CLASS___NSString,"stringWithCString:encoding:",&DAT_001003d8,
                            4);
  if ((DAT_001003f0 & 1) == 0) {
    iVar2 = ___cxa_guard_acquire(&DAT_001003f0);
    if (iVar2 != 0) {
      DAT_001003eb = '\x01';
      _DAT_001003e8 = 0x8f8;
      DAT_001003ea = 5;
      ___cxa_atexit(PTR_FUN_000e81c0,&DAT_001003e8,0);
      ___cxa_guard_release(&DAT_001003f0);
    }
  }
  if (DAT_001003eb != '\0') {
    uVar4 = 0;
    pbVar5 = &DAT_001003e8;
    do {
      *pbVar5 = *pbVar5 ^ (byte)(0x7d0149afab056bdd >> (uVar4 & 0x3f));
      uVar4 = uVar4 + 8;
      pbVar5 = pbVar5 + 1;
    } while (uVar4 != 0x18);
    DAT_001003eb = '\0';
  }
  DAT_001005e8 = NSString::stringWithCString_encoding_
                           ((ID)&_OBJC_CLASS___NSString,"stringWithCString:encoding:",&DAT_001003e8,
                            4);
  if ((DAT_00100400 & 1) == 0) {
    iVar2 = ___cxa_guard_acquire(&DAT_00100400);
    if (iVar2 != 0) {
      DAT_001003fa = '\x01';
      _DAT_001003f8 = 0xb5c1;
      ___cxa_atexit(PTR_FUN_000e81a0,&DAT_001003f8,0);
      ___cxa_guard_release(&DAT_00100400);
    }
  }
  if (DAT_001003fa != '\0') {
    _DAT_001003f8 = _DAT_001003f8 ^ 0xb5ef;
    DAT_001003fa = '\0';
  }
  DAT_001005e0 = NSString::stringWithCString_encoding_
                           ((ID)&_OBJC_CLASS___NSString,"stringWithCString:encoding:",&DAT_001003f8,
                            4);
  if ((DAT_00100410 & 1) == 0) {
    iVar2 = ___cxa_guard_acquire(&DAT_00100410);
    if (iVar2 != 0) {
      DAT_0010040d = '\x01';
      _DAT_00100408 = 0xd5b214bd;
      DAT_0010040c = 0xb1;
      ___cxa_atexit(PTR_FUN_000e81e8,&DAT_00100408,0);
      ___cxa_guard_release(&DAT_00100410);
    }
  }
  if (DAT_0010040d != '\0') {
    uVar4 = 0;
    pbVar5 = &DAT_00100408;
    do {
      *pbVar5 = *pbVar5 ^ (byte)(0x7fd3adb181e15bed >> (uVar4 & 0x3f));
      uVar4 = uVar4 + 8;
      pbVar5 = pbVar5 + 1;
    } while (uVar4 != 0x28);
    DAT_0010040d = '\0';
  }
  DAT_00100648 = NSString::stringWithCString_encoding_
                           ((ID)&_OBJC_CLASS___NSString,"stringWithCString:encoding:",&DAT_00100408,
                            4);
  if ((DAT_00100438 & 1) == 0) {
    iVar2 = ___cxa_guard_acquire(&DAT_00100438);
    if (iVar2 != 0) {
      DAT_00100430 = '\x01';
      uRam0000000000100428 = 0x81e69ac81a1efd32;
      _DAT_00100420 = 0xcdae89d90a1af012;
      ___cxa_atexit(PTR_FUN_000e8160,&DAT_00100420,0);
      ___cxa_guard_release(&DAT_00100438);
    }
  }
  if (DAT_00100430 != '\0') {
    _DAT_00100420 = _DAT_00100420 ^ 0x8183fda96f799353;
    uRam0000000000100428 = uRam0000000000100428 ^ 0x8183fda96f799353;
    DAT_00100430 = '\0';
  }
  DAT_001005c0 = NSString::stringWithCString_encoding_
                           ((ID)&_OBJC_CLASS___NSString,"stringWithCString:encoding:",&DAT_00100420,
                            4);
  if ((DAT_00100450 & 1) == 0) {
    iVar2 = ___cxa_guard_acquire(&DAT_00100450);
    if (iVar2 != 0) {
      DAT_0010044f = '\x01';
      _DAT_00100440 = 0x39d7a8ef23d2dc;
      DAT_00100447 = 0x34;
      uRam0000000000100448 = 0x4dd1b9fc23d8f3;
      ___cxa_atexit(PTR_FUN_000e8150,&DAT_00100440,0);
      ___cxa_guard_release(&DAT_00100450);
    }
  }
  if (DAT_0010044f != '\0') {
    uVar4 = 0;
    pbVar5 = &DAT_00100440;
    do {
      *pbVar5 = *pbVar5 ^ (byte)(0x194db9cd9b4dbd9f >> (uVar4 & 0x38));
      uVar4 = uVar4 + 8;
      pbVar5 = pbVar5 + 1;
    } while (uVar4 != 0x78);
    DAT_0010044f = '\0';
  }
  DAT_001005f8 = NSString::stringWithCString_encoding_
                           ((ID)&_OBJC_CLASS___NSString,"stringWithCString:encoding:",&DAT_00100440,
                            4);
  if ((DAT_00100460 & 1) == 0) {
    iVar2 = ___cxa_guard_acquire(&DAT_00100460);
    if (iVar2 != 0) {
      DAT_0010045c = '\x01';
      DAT_00100458 = 0x94e2f14;
      ___cxa_atexit(PTR_FUN_000e81d8,&DAT_00100458,0);
      ___cxa_guard_release(&DAT_00100460);
    }
  }
  if (DAT_0010045c != '\0') {
    DAT_00100458 = DAT_00100458 ^ 0x93b4331;
    DAT_0010045c = '\0';
  }
  DAT_00100600 = NSString::stringWithCString_encoding_
                           ((ID)&_OBJC_CLASS___NSString,"stringWithCString:encoding:",&DAT_00100458,
                            4);
  if ((DAT_00100478 & 1) == 0) {
    iVar2 = ___cxa_guard_acquire(&DAT_00100478);
    if (iVar2 != 0) {
      DAT_00100475 = '\x01';
      _DAT_00100468 = 0x103fbfc6ea;
      _DAT_0010046d = 0x425fa7;
      uRam0000000000100470 = 0x752ea1d0fd;
      ___cxa_atexit(PTR_FUN_000e8138,&DAT_00100468,0);
      ___cxa_guard_release(&DAT_00100478);
    }
  }
  if (DAT_00100475 != '\0') {
    uVar4 = 0;
    pbVar5 = &DAT_00100468;
    do {
      *pbVar5 = *pbVar5 ^ (byte)(0x6f2bc9754bd1a9a9 >> (uVar4 & 0x38));
      uVar4 = uVar4 + 8;
      pbVar5 = pbVar5 + 1;
    } while (uVar4 != 0x68);
    DAT_00100475 = '\0';
  }
  DAT_00100608 = NSString::stringWithCString_encoding_
                           ((ID)&_OBJC_CLASS___NSString,"stringWithCString:encoding:",&DAT_00100468,
                            4);
  if ((DAT_00100498 & 1) == 0) {
    iVar2 = ___cxa_guard_acquire(&DAT_00100498);
    if (iVar2 != 0) {
      DAT_00100491 = '\x01';
      uRam0000000000100488 = 0xa37afa653081f014;
      _DAT_00100480 = 0xb974ea66739fef1c;
      DAT_00100490 = 0x7d;
      ___cxa_atexit(PTR_FUN_000e8168,&DAT_00100480,0);
      ___cxa_guard_release(&DAT_00100498);
    }
  }
  if (DAT_00100491 != '\0') {
    uVar4 = 0;
    pbVar5 = &DAT_00100480;
    do {
      *pbVar5 = *pbVar5 ^ (byte)(0xcd15890f1fef9f7d >> (uVar4 & 0x38));
      uVar4 = uVar4 + 8;
      pbVar5 = pbVar5 + 1;
    } while (uVar4 != 0x88);
    DAT_00100491 = '\0';
  }
  DAT_001005d0 = NSString::stringWithCString_encoding_
                           ((ID)&_OBJC_CLASS___NSString,"stringWithCString:encoding:",&DAT_00100480,
                            4);
  if ((DAT_001004c8 & 1) == 0) {
    iVar2 = ___cxa_guard_acquire(&DAT_001004c8);
    if (iVar2 != 0) {
      DAT_001004c2 = '\x01';
      uRam00000000001004a8 = 0x1822e0ed54cd3666;
      _DAT_001004a0 = 0x1b34aefc17d3296e;
      uRam00000000001004b8 = 0xa31a2f615c6357d;
      _DAT_001004b0 = 0x1a78a0e714c57478;
      DAT_001004c0 = 0x596b;
      ___cxa_atexit(PTR_FUN_000e81b8,&DAT_001004a0,0);
      ___cxa_guard_release(&DAT_001004c8);
    }
  }
  if (DAT_001004c2 != '\0') {
    uVar4 = 0;
    pbVar5 = &DAT_001004a0;
    do {
      *pbVar5 = *pbVar5 ^ (byte)(0x6f55cd957ba3590f >> (uVar4 & 0x38));
      uVar4 = uVar4 + 8;
      pbVar5 = pbVar5 + 1;
    } while (uVar4 != 0x110);
    DAT_001004c2 = '\0';
  }
  DAT_001005d8 = NSString::stringWithCString_encoding_
                           ((ID)&_OBJC_CLASS___NSString,"stringWithCString:encoding:",&DAT_001004a0,
                            4);
  if ((DAT_001004e0 & 1) == 0) {
    iVar2 = ___cxa_guard_acquire(&DAT_001004e0);
    if (iVar2 != 0) {
      DAT_001004da = '\x01';
      _DAT_001004d0 = 0x32885486243a6dcd;
      DAT_001004d8 = 0x1db;
      ___cxa_atexit(PTR_FUN_000e80f8,&DAT_001004d0,0);
      ___cxa_guard_release(&DAT_001004e0);
    }
  }
  if (DAT_001004da != '\0') {
    uVar4 = 0;
    pbVar5 = &DAT_001004d0;
    do {
      *pbVar5 = *pbVar5 ^ (byte)(0x57fb21ed7b6501a9 >> (uVar4 & 0x38));
      uVar4 = uVar4 + 8;
      pbVar5 = pbVar5 + 1;
    } while (uVar4 != 0x50);
    DAT_001004da = '\0';
  }
  DAT_001006b0 = NSString::stringWithCString_encoding_
                           ((ID)&_OBJC_CLASS___NSString,"stringWithCString:encoding:",&DAT_001004d0,
                            4);
  if ((DAT_001004f8 & 1) == 0) {
    iVar2 = ___cxa_guard_acquire(&DAT_001004f8);
    if (iVar2 != 0) {
      DAT_001004f5 = '\x01';
      _DAT_001004e8 = 0xe2cefa0fad;
      _DAT_001004ed = 0x309db4;
      uRam00000000001004f0 = 0x91ddda3385;
      ___cxa_atexit(PTR_FUN_000e8130,&DAT_001004e8,0);
      ___cxa_guard_release(&DAT_001004f8);
    }
  }
  if (DAT_001004f5 != '\0') {
    uVar4 = 0;
    pbVar5 = &DAT_001004e8;
    do {
      *pbVar5 = *pbVar5 ^ (byte)(0x55d5cd91afbf43e9 >> (uVar4 & 0x38));
      uVar4 = uVar4 + 8;
      pbVar5 = pbVar5 + 1;
    } while (uVar4 != 0x68);
    DAT_001004f5 = '\0';
  }
  DAT_00100618 = NSString::stringWithCString_encoding_
                           ((ID)&_OBJC_CLASS___NSString,"stringWithCString:encoding:",&DAT_001004e8,
                            4);
  if ((DAT_00100518 & 1) == 0) {
    iVar2 = ___cxa_guard_acquire(&DAT_00100518);
    if (iVar2 != 0) {
      DAT_00100511 = '\x01';
      uRam0000000000100508 = 0x83265d8cfa9341b8;
      _DAT_00100500 = 0x9e07409ef4ba638b;
      DAT_00100510 = 0xcf;
      ___cxa_atexit(PTR_FUN_000e8170,&DAT_00100500,0);
      ___cxa_guard_release(&DAT_00100518);
    }
  }
  if (DAT_00100511 != '\0') {
    uVar4 = 0;
    pbVar5 = &DAT_00100500;
    do {
      *pbVar5 = *pbVar5 ^ (byte)(0xf14339ed95ff2fcf >> (uVar4 & 0x38));
      uVar4 = uVar4 + 8;
      pbVar5 = pbVar5 + 1;
    } while (uVar4 != 0x88);
    DAT_00100511 = '\0';
  }
  DAT_00100610 = NSString::stringWithCString_encoding_
                           ((ID)&_OBJC_CLASS___NSString,"stringWithCString:encoding:",&DAT_00100500,
                            4);
  if ((DAT_00100528 & 1) == 0) {
    iVar2 = ___cxa_guard_acquire(&DAT_00100528);
    if (iVar2 != 0) {
      DAT_00100527 = '\x01';
      _DAT_00100520 = 0x6697dfba;
      uRam0000000000100524 = 0x675b44;
      ___cxa_atexit(PTR_FUN_000e8208,&DAT_00100520,0);
      ___cxa_guard_release(&DAT_00100528);
    }
  }
  if (DAT_00100527 != '\0') {
    uVar4 = 0;
    pbVar5 = &DAT_00100520;
    do {
      *pbVar5 = *pbVar5 ^ (byte)(0x2967333707df99f9 >> (uVar4 & 0x3f));
      uVar4 = uVar4 + 8;
      pbVar5 = pbVar5 + 1;
    } while (uVar4 != 0x38);
    DAT_00100527 = '\0';
  }
  DAT_00100628 = NSString::stringWithCString_encoding_
                           ((ID)&_OBJC_CLASS___NSString,"stringWithCString:encoding:",&DAT_00100520,
                            4);
  if (((DAT_00100540 & 1) == 0) && (iVar2 = ___cxa_guard_acquire(&DAT_00100540), iVar2 != 0)) {
    DAT_00100538 = '\x01';
    DAT_00100530 = 0xfd2390c8d2385990;
    ___cxa_atexit(PTR_FUN_000e8220,&DAT_00100530,0);
    ___cxa_guard_release(&DAT_00100540);
  }
  if (DAT_00100538 != '\0') {
    DAT_00100530 = DAT_00100530 ^ 0xfd4ff1bda37d1fd3;
    DAT_00100538 = '\0';
  }
  DAT_00100620 = NSString::stringWithCString_encoding_
                           ((ID)&_OBJC_CLASS___NSString,"stringWithCString:encoding:",&DAT_00100530,
                            4);
  DAT_00100688 = 0x30d673681e457d04;
  DAT_001006a0 = 0x1359fd4d143c8778;
  DAT_00100678 = 0x55b53314f1c8a507;
  return 0;
}

