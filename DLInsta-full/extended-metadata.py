import sys,json,struct
from pathlib import Path
sys.path.insert(0,'/workspace/reverse-tools')
import lief
b=lief.MachO.parse(sys.argv[1]).at(0); out=Path(__file__).parent
sections=list(b.sections)
def read(a,n):
 for s in sections:
  if s.virtual_address<=a and a+n<=s.virtual_address+s.size:return bytes(s.content)[a-s.virtual_address:a-s.virtual_address+n]
 raise ValueError(hex(a))
def u64(a):return struct.unpack('<Q',read(a,8))[0]
def cs(a):
 if not a:return None
 for s in sections:
  if s.virtual_address<=a<s.virtual_address+s.size:return bytes(s.content)[a-s.virtual_address:].split(b'\0')[0].decode('utf8','replace')
 return hex(a)
bindings={x.address:x.symbol.name for x in b.bindings if x.has_symbol}
def ci(a):
 ro=u64(a+32)&~7;return ro,cs(u64(ro+24))
def plist(a):
 if not a:return []
 count=u64(a);return [cs(u64(u64(a+8+8*i)+8)) for i in range(count)]
def props(a):
 if not a:return []
 stride,count=struct.unpack('<II',read(a,8));return [dict(name=cs(u64(a+8+i*stride)),attributes=cs(u64(a+16+i*stride))) for i in range(count)]
def ivars(a):
 if not a:return []
 stride,count=struct.unpack('<II',read(a,8));res=[]
 for i in range(count):
  q=a+8+i*stride;offset,name,t,align,size=struct.unpack('<QQQII',read(q,32))
  res.append(dict(name=cs(name),encoding=cs(t),offset=struct.unpack('<I',read(offset,4))[0],alignment_encoding=align,size=size))
 return res
classes=[];s=b.get_section('__objc_classlist')
for a in range(s.virtual_address,s.virtual_address+s.size,8):
 cp=u64(a);ro,name=ci(cp);superaddr=u64(cp+8)
 sup=bindings.get(cp+8)
 if not sup and superaddr:
  try:sup=ci(superaddr)[1]
  except ValueError:sup=hex(superaddr)
 flags,start,size=struct.unpack('<III',read(ro,12));meta=u64(cp);mro,_=ci(meta)
 classes.append(dict(name=name,address=hex(cp),superclass=sup,instance_start=start,instance_size=size,flags=flags,ivars=ivars(u64(ro+48)),properties=props(u64(ro+64)),class_properties=props(u64(mro+64)),protocols=plist(u64(ro+40))))
(out/'objc-extended.json').write_text(json.dumps(classes,indent=2,ensure_ascii=False))
s=b.get_section('__cfstring');rows=[]
for a in range(s.virtual_address,s.virtual_address+s.size,32):
 isa,flags,ptr,length=struct.unpack('<QQQQ',read(a,32));enc='utf-16le' if flags&16 else 'utf-8'
 try:text=read(ptr,length*(2 if enc=='utf-16le' else 1)).decode(enc,'replace')
 except ValueError:text=None
 rows.append(dict(address=hex(a),flags=hex(flags),length=length,encoding=enc,text=text))
(out/'constant-strings.json').write_text(json.dumps(rows,indent=2,ensure_ascii=False))
(out/'import-bindings.json').write_text(json.dumps([dict(address=hex(a),symbol=s) for a,s in sorted(bindings.items())],indent=2))
# Preserve the content of every section, including code/data, with address metadata.
raw=out/'raw-sections';raw.mkdir(exist_ok=True)
manifest=[]
for i,s in enumerate(sections):
 name=f'{i:02d}_{s.segment_name}_{s.name}.bin';data=bytes(s.content);(raw/name).write_bytes(data);manifest.append(dict(file=name,segment=s.segment_name,section=s.name,virtual_address=hex(s.virtual_address),virtual_size=s.size,file_offset=s.offset,extracted_bytes=len(data)))
(raw/'manifest.json').write_text(json.dumps(manifest,indent=2))
print('Extended metadata:',len(classes),'classes;',sum(len(c['ivars']) for c in classes),'ivars;',sum(len(c['properties']) for c in classes),'properties;',len(rows),'constant strings;',len(manifest),'raw sections')
