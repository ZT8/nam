/* Address: 00095c58 | Name: instance_MBBarProgressView__init | Body bytes: 32 */

/* Function Stack Size: 0x10 bytes */

ID MBBarProgressView::instance_MBBarProgressView__init(ID param_1,SEL param_2)

{
  ID IVar1;
  CGRect CVar2;
  
  CVar2.field1_0x10.field1_0x8 = 20.0;
  CVar2.field1_0x10.field0_0x0 = 120.0;
  CVar2.field0_0x0 = (CGPoint)ZEXT816(0);
  IVar1 = instance_MBBarProgressView__initWithFrame_(param_1,"initWithFrame:",CVar2);
  return IVar1;
}

