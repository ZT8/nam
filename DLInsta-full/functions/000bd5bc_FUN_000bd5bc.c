/* Address: 000bd5bc | Name: FUN_000bd5bc | Body bytes: 16 */

void FUN_000bd5bc(void)

{
  code *pcVar1;
  
  _CFBundleGetVersionNumber(0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xbd5cc);
  (*pcVar1)();
}

