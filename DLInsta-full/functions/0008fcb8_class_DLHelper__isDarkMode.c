/* Address: 0008fcb8 | Name: class_DLHelper__isDarkMode | Body bytes: 160 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

bool DLHelper::class_DLHelper__isDarkMode(ID param_1,SEL param_2)

{
  int iVar1;
  ID IVar2;
  bool bVar3;
  
  iVar1 = FUN_000bd0fc(2,0xd,0,0);
  if (iVar1 == 0) {
    bVar3 = 0;
  }
  else {
    IVar2 = UIScreen::mainScreen((ID)&_OBJC_CLASS___UIScreen,"mainScreen");
    IVar2 = UIScreen::traitCollection(IVar2,"traitCollection");
    IVar2 = UIScreen::userInterfaceStyle(IVar2,"userInterfaceStyle");
    bVar3 = (bool)(IVar2 == 2);
  }
  return bVar3;
}

