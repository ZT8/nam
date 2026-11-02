/* Address: 000a6c00 | Name: FUN_000a6c00 | Body bytes: 180 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

bool FUN_000a6c00(ID param_1)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = NSRegularExpression::regularExpressionWithPattern_options_error_
                    ((ID)&_OBJC_CLASS___NSRegularExpression,
                     "regularExpressionWithPattern:options:error:",&cf___p_Arabic___,1,0);
  IVar2 = _objc_msgSend(param_1,"length");
  IVar1 = NSRegularExpression::rangeOfFirstMatchInString_options_range_
                    (IVar1,"rangeOfFirstMatchInString:options:range:",param_1,0,0,IVar2);
  return IVar1 != 0x7fffffffffffffff;
}

