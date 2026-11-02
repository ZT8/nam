/* Address: 0009fee8 | Name: instance_DLAuthenticationView__isAuthenticated | Body bytes: 16 */

/* Function Stack Size: 0x10 bytes */

bool DLAuthenticationView::instance_DLAuthenticationView__isAuthenticated(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + (long)_authenticated);
}

