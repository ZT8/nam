/* Address: 0009df44 | Name: FUN_0009df44 | Body bytes: 52 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_0009df44(long param_1)

{
  ID self;
  
  self = _objc_alloc(*(undefined8 *)(param_1 + 0x20));
  DAT_00100570 = _objc_msgSend(self,"init");
  return 0;
}

