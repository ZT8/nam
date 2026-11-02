/* Address: 000b129c | Name: instance_FRPSelectListTable__tableView_numberOfRowsInSection_ | Body bytes: 24 */

/* Function Stack Size: 0x20 bytes */

long_long FRPSelectListTable::instance_FRPSelectListTable__tableView_numberOfRowsInSection_
                    (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  ID IVar1;
  
  IVar1 = _objc_msgSend(*(ID *)(param_1 + (long)listItems),"count");
  return IVar1;
}

