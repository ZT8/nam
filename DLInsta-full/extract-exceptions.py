from pathlib import Path
import sys,struct,json,csv
sys.path.insert(0,'/workspace/reverse-tools')
import lief
p=Path(__file__).parent;b=lief.MachO.parse(sys.argv[1]).at(0)
us=b.get_section('__unwind_info');d=bytes(us.content);h=struct.unpack_from('<7I',d);index=[struct.unpack_from('<III',d,h[5]+i*12) for i in range(h[6])]
es=b.get_section('__gcc_except_tab');e=bytes(es.content)
def leb(data,pos,signed=False):
 value=0;shift=0
 while True:
  v=data[pos];pos+=1;value|=(v&127)<<shift;shift+=7
  if not v&128:break
 if signed and v&64:value-=1<<shift
 return value,pos
def val(data,pos,enc):
 fmt=enc&15
 if fmt==1:return leb(data,pos)
 if fmt==9:return leb(data,pos,True)
 formats={0:'Q',2:'H',3:'I',4:'Q',10:'h',11:'i',12:'q'}
 f=formats[fmt];v=struct.unpack_from('<'+f,data,pos)[0];return v,pos+struct.calcsize(f)
rows=[]
for row,nxt in zip(index,index[1:]):
 for o in range(row[2],nxt[2],8):
  func,lsda=struct.unpack_from('<II',d,o);pos=lsda-es.virtual_address
  lpenc=e[pos];pos+=1;lp=func
  if lpenc!=255:
   loc=es.virtual_address+pos;lp,pos=val(e,pos,lpenc)
   if lpenc&0x70==0x10:lp+=loc
   elif lpenc&0x70:raise ValueError('Unsupported LP encoding')
  tenc=e[pos];pos+=1
  if tenc!=255:_,pos=leb(e,pos)
  cenc=e[pos];pos+=1;size,pos=leb(e,pos);end=pos+size
  while pos<end:
   start,pos=val(e,pos,cenc);length,pos=val(e,pos,cenc);landing,pos=val(e,pos,cenc);action,pos=leb(e,pos)
   rows.append(dict(function_start=hex(func),lsda=hex(lsda),protected_start=hex(lp+start),protected_end_exclusive=hex(lp+start+length),landing_pad=hex(lp+landing) if landing else None,action=action))
  assert pos==end
(p/'exception-call-sites.json').write_text(json.dumps(rows,indent=2))
pads=sorted({int(r['landing_pad'],16) for r in rows if r['landing_pad']})
(p/'exception-landing-pads.txt').write_text('\n'.join(hex(a) for a in pads))
print('Parsed',len(rows),'exception call sites;',len(pads),'unique landing pads')
gaps=list(csv.DictReader((p/'uncovered-text-ranges.tsv').open(),delimiter='\t'));print('Landing pads outside main function bodies:',sum(any(int(g['start'],16)<=a<=int(g['end'],16) for g in gaps) for a in pads))
