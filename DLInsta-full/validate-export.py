from pathlib import Path
import csv,json,hashlib,collections
p=Path(__file__).parent
summary=dict(line.split('=',1) for line in (p/'decompiler-summary.txt').read_text().splitlines() if '=' in line)
base=int(summary['imagebase'],16)
rows=list(csv.DictReader((p/'function-index.tsv').open(),delimiter='\t'))
exported={int(r['address'],16)-base:r for r in rows}
starts={int(s,16) for s in (p/'function-starts.txt').read_text().splitlines()}
methods=json.loads((p/'metadata/methods.json').read_text());expected={m['address'] for m in methods}
missing_starts=sorted(starts-exported.keys());missing_methods=sorted(expected-exported.keys())
for r in rows:
 f=p/r['file'];assert f.is_file() and f.stat().st_size>0,(r['address'],str(f))
assert len(rows)==len(exported),'Duplicate exported function entries'
assert int(summary['decompiled'])==sum(r['status']=='decompiled' for r in rows)
failed=[r for r in rows if r['status']!='decompiled']
report=dict(exported_functions=len(rows),decompiled=int(summary['decompiled']),failed=len(failed),declared_function_starts=len(starts),declared_starts_exported=len(starts&exported.keys()),missing_declared_starts=[hex(x) for x in missing_starts],objc_method_entries=len(methods),unique_objc_implementations=len(expected),objc_implementations_exported=len(expected&exported.keys()),missing_objc_implementations=[hex(x) for x in missing_methods],text_bytes=int(summary['text_bytes']),text_bytes_in_function_bodies=int(summary['text_bytes_in_function_bodies']),text_bytes_outside_function_bodies=int(summary['text_bytes_outside_function_bodies']),failed_functions=failed)
if (p/'exception-summary.txt').exists():
 es=dict(line.split('=',1) for line in (p/'exception-summary.txt').read_text().splitlines() if '=' in line)
 er=list(csv.DictReader((p/'exception-index.tsv').open(),delimiter='\t'))
 pads={int(v,16) for v in (p/'exception-landing-pads.txt').read_text().splitlines()}
 ei={int(r['entry'],16):r for r in er}
 assert pads<=ei.keys(),'Missing exception landing pads'
 assert len(er)==int(es['requested_entries'])==len(ei)
 assert all((p/r['file']).is_file() for r in er)
 report['exception_landing_pads']=len(pads)
 report['supplemental_entries']=len(er)
 report['supplemental_fragments_decompiled']=int(es['decompiled'])
 report['supplemental_entries_covered_by_shared_fragments']=int(es['covered_by_fragment'])
 report['supplemental_failed']=int(es['failed'])
 report['supplemental_failed_entries']=[r for r in er if r['status']=='failed']
 report['text_bytes_in_supplemental_basic_block_ranges']=int(es['uncovered_bytes_in_fragment_basic_blocks'])
 report['text_bytes_outside_main_function_bodies_and_supplemental_basic_block_ranges']=int(es['remaining_bytes_outside_exported_basic_blocks'])
 assert int(es['failed'])==sum(r['status']=='failed' for r in er)
 report['coverage_note']='Byte coverage measures membership in analyzed function bodies or supplemental basic-block ranges; it does not prove semantic correctness, original source recovery, or buildability.'
(p/'coverage-report.json').write_text(json.dumps(report,indent=2))
# Organize the same unedited pseudocode by Objective-C class.
by=p/'by-class';by.mkdir(exist_ok=True)
groups=collections.defaultdict(list)
for m in methods:
 if m['address'] in exported:
  r=exported[m['address']];groups[m['class_name']].append((m,r))
for cls,group in groups.items():
 safe=''.join(c if c.isalnum() or c in '_-' else '_' for c in cls)
 text='/* Automatic pseudocode grouped by Objective-C class. NOT original source. */\n'
 for m,r in group:text+='\n/* '+m['kind']+'['+cls+' '+m['selector']+'] | encoding '+m['encoding']+' */\n'+(p/r['file']).read_text()
 (by/(safe+'.c')).write_text(text)
(p/'file-checksums.sha256').write_text('\n'.join(hashlib.sha256(f.read_bytes()).hexdigest()+'  '+str(f.relative_to(p)) for f in sorted(p.rglob('*')) if f.is_file() and f.name!='file-checksums.sha256')+'\n')
print(json.dumps({k:v for k,v in report.items() if k!='failed_functions'},indent=2))
if missing_starts or missing_methods:raise SystemExit('Some declared function entries were not exported; inspect coverage-report.json')
