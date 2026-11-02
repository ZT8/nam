/* Address: 0009934c | Name: FUN_0009934c | Body bytes: 168 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_0009934c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID self;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = _CFHTTPMessageCopyBody(*(undefined8 *)(param_1 + 0x28));
  self = _objc_alloc(&_OBJC_CLASS___NSString);
  DAT_001006c8 = NSString::initWithData_encoding_(self,"initWithData:encoding:",uVar2,4);
  DAT_001006c0 = uVar1;
  FUN_00097050(&PTR___NSConcreteGlobalBlock_000e91f8);
  return 0;
}

