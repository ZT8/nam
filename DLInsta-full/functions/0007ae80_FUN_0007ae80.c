/* Address: 0007ae80 | Name: FUN_0007ae80 | Body bytes: 304 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_0007ae80(void)

{
  ID IVar1;
  undefined8 uVar2;
  
  IVar1 = _NSHomeDirectory();
  IVar1 = _objc_msgSend(IVar1,"stringByAppendingPathComponent:",&cf_Documents_FakeGroupContainers);
  IVar1 = NSURL::fileURLWithPath_isDirectory_
                    ((ID)&_OBJC_CLASS___NSURL,"fileURLWithPath:isDirectory:",IVar1,1);
  uVar2 = _dl_fakeGroupContainerURL;
  _dl_fakeGroupContainerURL = IVar1;
  uVar2 = _objc_getClass(uVar2,"NSFileManager");
  DAT_00100018 = _class_getSuperclass();
  FUN_0007afd4(uVar2,"containerURLForSecurityApplicationGroupIdentifier:",FUN_0007b0c4,&DAT_00100020
              );
  uVar2 = _objc_getClass("NSBundle");
  DAT_00100028 = _class_getSuperclass();
  FUN_0007afd4(uVar2,"bundleIdentifier",FUN_0007b308,&DAT_00100030);
  FUN_0007afd4(uVar2,"objectForInfoDictionaryKey:",FUN_0007b520,&DAT_00100038);
  return;
}

