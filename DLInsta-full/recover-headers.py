from pathlib import Path
import json,re
out=Path(__file__).parent
classes=json.loads((out/'objc-extended.json').read_text())
methods=json.loads(Path('/workspace/DLInsta-analysis/methods.json').read_text())
T={'v':'void','B':'BOOL','c':'signed char','C':'unsigned char','s':'short','S':'unsigned short','i':'int','I':'unsigned int','l':'long','L':'unsigned long','q':'long long','Q':'unsigned long long','f':'float','d':'double','D':'long double','@':'id','#':'Class',':':'SEL','*':'char *','?':'void /* unknown */'}
def one(s,i=0):
 qualifiers=[]
 while i<len(s) and s[i] in 'rnNoORV':
  if s[i]=='r':qualifiers.append('const')
  i+=1
 c=s[i];i+=1
 if c=='@':
  t='id'
  if i<len(s) and s[i]=='?':t='id /* block; signature not encoded here */';i+=1
  elif i<len(s) and s[i]=='"':
   j=s.index('"',i+1);name=s[i+1:j];i=j+1
   t=name+' *' if not name.startswith('<') else 'id'+name
 elif c=='^':t,i=one(s,i);t=t+' *'
 elif c in '{(':
  end='}' if c=='{' else ')';start=i;depth=1
  while depth and i<len(s):
   if s[i]==c:depth+=1
   if s[i]==end:depth-=1
   i+=1
  body=s[start:i-1];name=body.split('=')[0];t=('struct ' if c=='{' else 'union ')+name
 elif c=='[':
  j=i
  while s[i].isdigit():i+=1
  n=s[j:i];element,i=one(s,i)
  if s[i]==']':i+=1
  t=element+' * /* encoded array length '+n+' */'
 elif c=='b':
  j=i
  while i<len(s) and s[i].isdigit():i+=1
  t='unsigned int /* bitfield '+s[j:i]+' */'
 else:t=T.get(c,'id /* unrecognized encoding '+c+' */')
 return (' '.join(qualifiers)+' ' if qualifiers else '')+t,i
def signature(s):
 values=[];i=0
 while i<len(s):
  if s[i].isdigit() or s[i] in '+-':i+=1;continue
  t,i=one(s,i);values.append(t)
 return values
h=out/'headers';h.mkdir(exist_ok=True)
for c in classes:
 name=c['name'];superclass=(c['superclass'] or '').replace('_OBJC_CLASS_$_','');sup=(' : '+superclass) if superclass else ''
 lines=['// Reconstructed from Objective-C runtime metadata, not original source.', '// External SDK types, superclass declarations and struct definitions may be required.', '#import <Foundation/Foundation.h>','',f'@interface {name}{sup}']
 if c['ivars']:
  lines+=['{','@private']
  for iv in c['ivars']:
   try:t,_=one(iv['encoding'])
   except Exception:t='id /* see encoding */'
   lines.append(f"    {t} {iv['name']}; // offset {iv['offset']}, size {iv['size']}; encoding {iv['encoding']}")
  lines+=['}']
 for p in c['properties']:lines.append('// Property '+p['name']+' | attributes: '+p['attributes'])
 for m in methods:
  if m['class_name']!=name:continue
  lines.append('// Implementation '+m['address_hex']+' | runtime encoding: '+m['encoding'])
  if not re.fullmatch(r'[A-Za-z_][A-Za-z0-9_:]*',m['selector']):lines.append('// Runtime-only method '+m['selector']);continue
  try:
   types=signature(m['encoding']);args=types[3:];ret=types[0];parts=m['selector'].split(':')
   decl=parts[0] if len(parts)==1 else ' '.join(part+':('+ (args[i] if i<len(args) else 'id /* missing encoding */') +')arg'+str(i+1) for i,part in enumerate(parts[:-1]))
   lines.append(m['kind']+' ('+ret+')'+decl+';')
  except Exception:lines.append('// Could not decode signature: '+m['selector'])
 lines+=['@end',''];(h/(name+'.h')).write_text('\n'.join(lines))
(out/'all-interfaces.h').write_text('\n'.join((h/(c['name']+'.h')).read_text() for c in classes))
print('Recovered typed interfaces for',len(classes),'classes')
