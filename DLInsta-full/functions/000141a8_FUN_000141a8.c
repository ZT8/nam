/* Address: 000141a8 | Name: FUN_000141a8 | Body bytes: 2324 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_000141a8(undefined1 param_1 [16],undefined1 param_2 [16],undefined8 param_3,double param_4,
                 ID param_5,undefined8 param_6)

{
  code *pcVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  undefined8 extraout_x1;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 local_88;
  ID local_80;
  long local_78;
  
  local_78 = *(long *)PTR____stack_chk_guard_000e8260;
  pcVar1 = DAT_000ffc88;
  if (DAT_000ffc88 == (code *)0x0) {
    pcVar1 = (code *)_class_getMethodImplementation(DAT_000ffc80,"viewDidLoad");
  }
  (*pcVar1)(param_5,param_6);
  IVar2 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle,"mainBundle");
  IVar2 = NSBundle::infoDictionary(IVar2,"infoDictionary");
  IVar2 = NSBundle::objectForKey_
                    (IVar2,"objectForKey:",*(undefined8 *)PTR__kCFBundleNameKey_000e8278);
  IVar3 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf____);
  IVar3 = _objc_msgSend(0xea5a8,"stringByAppendingString:",IVar3);
  _objc_msgSend(param_5,"setTitle:",IVar3);
  IVar3 = _objc_alloc(&_OBJC_CLASS___UIBarButtonItem);
  IVar2 = UIBarButtonItem::initWithTitle_style_target_action_
                    (IVar3,"initWithTitle:style:target:action:",&cf__close_,0,param_5,
                     "dismissDebugging",in_x6,in_x7,IVar2);
  IVar3 = _objc_msgSend(param_5,"navigationItem");
  _objc_msgSend(IVar3,"setLeftBarButtonItem:",IVar2);
  IVar2 = _objc_msgSend(param_5,"navigationController");
  IVar2 = _objc_msgSend(IVar2,"navigationBar");
  _objc_msgSend(IVar2,"setSemanticContentAttribute:",3);
  IVar2 = _objc_alloc(&_OBJC_CLASS___NSMutableDictionary);
  IVar2 = NSMutableDictionary::init(IVar2,"init");
  _objc_msgSend(param_5,"setClassDict:",IVar2);
  IVar2 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
  IVar2 = NSMutableArray::init(IVar2,"init");
  _objc_msgSend(param_5,"setDisplayList:",IVar2);
  _objc_msgSend(param_5,"debuggingDLInsta");
  IVar2 = _objc_msgSend(param_5,"classDict");
  IVar2 = _objc_msgSend(IVar2,"allKeys");
  _objc_msgSend(param_5,"setDisplayList:",IVar2);
  IVar2 = _objc_alloc(&_OBJC_CLASS___UITableView);
  IVar3 = _objc_msgSend(param_5,"view");
  _objc_msgSend(IVar3,"frame");
  IVar3 = _objc_msgSend(param_5,"view");
  _objc_msgSend(IVar3,"frame");
  IVar2 = UITableView::initWithFrame_style_(IVar2,"initWithFrame:style:",0,0,param_3,0);
  _objc_msgSend(param_5,"setTableView:",IVar2);
  IVar2 = _objc_msgSend(param_5,"tableView");
  IVar3 = UITableViewCell::class((ID)&_OBJC_CLASS___UITableViewCell,"class");
  _objc_msgSend(IVar2,"registerClass:forCellReuseIdentifier:",IVar3,&cf_myDebug);
  IVar2 = _objc_msgSend(param_5,"tableView");
  _objc_msgSend(IVar2,"setDelegate:",param_5);
  IVar2 = _objc_msgSend(param_5,"tableView");
  _objc_msgSend(IVar2,"setDataSource:",param_5);
  IVar2 = _objc_alloc(&_OBJC_CLASS___UIView);
  IVar2 = UIView::init(IVar2,"init");
  IVar3 = _objc_msgSend(param_5,"tableView");
  _objc_msgSend(IVar3,"setTableFooterView:",IVar2);
  IVar2 = _objc_msgSend(param_5,"classDict");
  IVar2 = _objc_msgSend(IVar2,"count");
  if (IVar2 == 0) {
    IVar2 = _objc_alloc(&_OBJC_CLASS___UILabel);
    IVar2 = UILabel::init(IVar2,"init");
    _objc_msgSend(param_5,"setEmptyErrLabel:",IVar2);
    IVar2 = _objc_msgSend(param_5,"tableView");
    _objc_msgSend(IVar2,"frame");
    IVar2 = _objc_msgSend(param_5,"tableView");
    _objc_msgSend(IVar2,"frame");
    IVar2 = _objc_msgSend(param_5,"emptyErrLabel");
    _objc_msgSend(IVar2,"setFrame:",0,(param_4 + -160.0) * 0.5,param_3,0x4044000000000000);
    IVar2 = _objc_msgSend(param_5,"emptyErrLabel");
    _objc_msgSend(IVar2,"setText:",&cf__NoError_);
    IVar2 = _objc_msgSend(param_5,"emptyErrLabel");
    _objc_msgSend(IVar2,"setTextAlignment:",1);
    IVar2 = _objc_msgSend(param_5,"emptyErrLabel");
    IVar2 = _objc_msgSend(IVar2,"text");
    IVar2 = _objc_msgSend(IVar2,"rangeOfString:",&cf__NoError_);
    IVar3 = _objc_alloc(&_OBJC_CLASS___NSMutableAttributedString);
    IVar4 = _objc_msgSend(param_5,"emptyErrLabel");
    IVar4 = _objc_msgSend(IVar4,"text");
    IVar3 = NSMutableAttributedString::initWithString_(IVar3,"initWithString:",IVar4);
    local_88 = *(undefined8 *)PTR__NSBackgroundColorAttributeName_000e8050;
    IVar4 = UIColor::colorWithRed_green_blue_alpha_
                      ((ID)&_OBJC_CLASS___UIColor,"colorWithRed:green:blue:alpha:",0,
                       0x3fea3a3a3a3a3a3a,0,0x3ff0000000000000);
    local_80 = UIColor::colorWithAlphaComponent_
                         (IVar4,"colorWithAlphaComponent:",0x3fe0000000000000);
    IVar4 = NSDictionary::dictionaryWithObjects_forKeys_count_
                      ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                       &local_80,&local_88,1);
    NSMutableAttributedString::addAttributes_range_
              (IVar3,"addAttributes:range:",IVar4,IVar2,extraout_x1);
    IVar2 = _objc_msgSend(param_5,"emptyErrLabel");
    _objc_msgSend(IVar2,"setAttributedText:",IVar3);
    IVar2 = _objc_msgSend(param_5,"tableView");
    IVar3 = _objc_msgSend(param_5,"emptyErrLabel");
    _objc_msgSend(IVar2,"addSubview:",IVar3);
  }
  IVar2 = _objc_msgSend(param_5,"tableView");
  _objc_msgSend(IVar2,"setSemanticContentAttribute:",3);
  IVar2 = _objc_msgSend(param_5,"view");
  IVar3 = _objc_msgSend(param_5,"tableView");
  _objc_msgSend(IVar2,"addSubview:",IVar3);
  if (*(long *)PTR____stack_chk_guard_000e8260 != local_78) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}

