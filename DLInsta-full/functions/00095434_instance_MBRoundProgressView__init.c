/* Address: 00095434 | Name: instance_MBRoundProgressView__init | Body bytes: 32 */

/* Function Stack Size: 0x10 bytes */

ID MBRoundProgressView::instance_MBRoundProgressView__init(ID param_1,SEL param_2)

{
  ID IVar1;
  CGRect CVar2;
  
  CVar2.field1_0x10.field1_0x8 = 37.0;
  CVar2.field1_0x10.field0_0x0 = 37.0;
  CVar2.field0_0x0 = (CGPoint)ZEXT816(0);
  IVar1 = instance_MBRoundProgressView__initWithFrame_(param_1,"initWithFrame:",CVar2);
  return IVar1;
}

