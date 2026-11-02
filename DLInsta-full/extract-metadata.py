import sys,json,struct,hashlib,re
from pathlib import Path
sys.path.insert(0,'/workspace/reverse-tools')
import lief
from capstone import Cs,CS_ARCH_ARM64,CS_MODE_LITTLE_ENDIAN
p=Path(sys.argv[1]); out=Path(__file__).parent
b=lief.MachO.parse(str(p)).at(0)
sections=list(b.sections)
def read(a,n):
 for s in sections:
  if s.virtual_address<=a and a+n<=s.virtual_address+s.size:return bytes(s.content)[a-s.virtual_address:a-s.virtual_address+n]
 raise ValueError(hex(a))
def u64(a):return struct.unpack('<Q',read(a,8))[0]
def cstr(a):
 if not a:return ''
 for s in sections:
  if s.virtual_address<=a<s.virtual_address+s.size:return bytes(s.content)[a-s.virtual_address:].split(b'\0')[0].decode('utf8','replace')
 return hex(a)
refs={}; stringsections=['__cstring','__objc_methname','__objc_classname','__objc_methtype']
for sn in stringsections:
 s=b.get_section(sn); data=bytes(s.content); pos=0; rows=[]
 for v in data.split(b'\0'):
  if v:
   val=v.decode('utf8','replace');refs[s.virtual_address+pos]=val;rows.append(f'0x{s.virtual_address+pos:x}\t{val}')
  pos+=len(v)+1
 (out/(sn.strip('_')+'.txt')).write_text('\n'.join(rows))
s=b.get_section('__objc_selrefs')
for a in range(s.virtual_address,s.virtual_address+s.size,8):refs[a]='selector: '+cstr(u64(a))
s=b.get_section('__cfstring')
for a in range(s.virtual_address,s.virtual_address+s.size,32):
 try: refs[a]='NSString: '+cstr(u64(a+16))
 except ValueError:pass
methods=[];classes=[]
def methodlist(a,cls,kind):
 if not a:return []
 flags,count=struct.unpack('<II',read(a,8));size=flags&0xffff;result=[]
 for i in range(count):
  q=a+8+i*size
  if flags&0x80000000:
   nr,tr,ir=struct.unpack('<iii',read(q,12)); na=q+nr
   if not flags&0x40000000:na=u64(na)
   name=cstr(na);types=cstr(q+4+tr);imp=q+8+ir
  else:name=cstr(u64(q));types=cstr(u64(q+8));imp=u64(q+16)
  row=dict(class_name=cls,kind=kind,selector=name,encoding=types,address=imp,address_hex=hex(imp));result.append(row);methods.append(row)
 return result
def classinfo(a):
 ro=u64(a+32)&~7;return ro,cstr(u64(ro+24))
s=b.get_section('__objc_classlist')
for a in range(s.virtual_address,s.virtual_address+s.size,8):
 cp=u64(a);ro,name=classinfo(cp);inst=methodlist(u64(ro+32),name,'-');meta=u64(cp);mro,_=classinfo(meta);cl=methodlist(u64(mro+32),name,'+');classes.append(dict(name=name,address=hex(cp),methods=len(inst)+len(cl)))
s=b.get_section('__objc_catlist')
if s:
 for a in range(s.virtual_address,s.virtual_address+s.size,8):
  cp=u64(a);name='Category:'+cstr(u64(cp));methodlist(u64(cp+16),name,'-');methodlist(u64(cp+24),name,'+')
(out/'methods.json').write_text(json.dumps(methods,indent=2,ensure_ascii=False));(out/'classes.json').write_text(json.dumps(classes,indent=2))
(out/'symbols.txt').write_text('\n'.join(f'{s.value:#x}\t{s.name}' for s in b.symbols))
# ABI-level declarations preserve method encodings; no invented source bodies.
lines=['// Recovered Objective-C method names. Superclasses and source types are not reconstructed.', '// Each declaration is preceded by the original runtime type encoding and implementation address.']
for cls in classes:
 lines.append('\n@interface '+cls['name']+' /* superclass unresolved */')
 for m in methods:
  if m['class_name']!=cls['name']:continue
  lines.append('// '+m['address_hex']+' encoding: '+m['encoding'])
  parts=m['selector'].split(':');decl=parts[0]
  if len(parts)>1:decl=' '.join(part+':(id)arg'+str(i+1) for i,part in enumerate(parts[:-1]))
  lines.append(m['kind']+' (id /* see encoding for actual type */)'+decl+';')
 lines.append('@end')
(out/'RecoveredInterfaces.h').write_text('\n'.join(lines))
labels={}
for m in methods:labels.setdefault(m['address'],[]).append(m['kind']+'['+m['class_name']+' '+m['selector']+']')
for sym in b.symbols:
 if sym.value:refs.setdefault(sym.value,sym.name)
for binding in b.bindings:
 if binding.has_symbol: refs.setdefault(binding.address,binding.symbol.name)
for stub in b.symbol_stubs:
 code=bytes(stub.raw) if hasattr(stub,'raw') else read(stub.address,12)
 words=struct.unpack('<III',code)
 w=words[0]; imm=(((w>>5)&0x7ffff)<<2)|((w>>29)&3)
 if imm&(1<<20):imm-=1<<21
 ptr=(stub.address&~0xfff)+(imm<<12)+(((words[1]>>10)&0xfff)*8)
 if ptr in refs:refs[stub.address]=refs[ptr]
s=b.get_section('__text');md=Cs(CS_ARCH_ARM64,CS_MODE_LITTLE_ENDIAN);md.skipdata=True
with (out/'disassembly-arm64.txt').open('w') as f:
 for ins in md.disasm(bytes(s.content),s.virtual_address):
  if ins.address in labels:f.write('\n'+'\n'.join(labels[ins.address])+'\n')
  note=''
  for h in re.findall(r'#(0x[0-9a-f]+)',ins.op_str):
   val=int(h,16)
   if val in refs and ins.mnemonic != 'adrp':note+=' ; '+refs[val].replace('\n','\\n')[:200]
  f.write(f'{ins.address:08x}: {ins.mnemonic:9} {ins.op_str}{note}\n')
summary=dict(file=p.name,size=p.stat().st_size,sha256=hashlib.sha256(p.read_bytes()).hexdigest(),architecture='ARM64',classes=len(classes),methods=len(methods),libraries=[l.name for l in b.libraries],sections=[dict(name=s.name,address=hex(s.virtual_address),size=s.size) for s in sections])
(out/'summary.json').write_text(json.dumps(summary,indent=2))
print(json.dumps({k:v for k,v in summary.items() if k not in ['sections','libraries']},indent=2))
for m in methods:
 if m['class_name'] in ['DLMediaData','DLUser','DLInsta','DLHelper']: print(m['address_hex'],m['kind'],m['class_name'],m['selector'],m['encoding'])
