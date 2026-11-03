"""Coverage of the explicit port inventory, UI wiring and bilingual labels."""
from pathlib import Path
import json,re
root=Path(__file__).resolve().parents[1]
inventory=json.loads((root/'docs/dl-feature-map.json').read_text())
core=(root/'src/HIDECore.m').read_text();settings=(root/'src/HIDESettings.m').read_text()
rows=re.findall(r'ROW\(@"([^"]+)",\s*(kHide\w+),',settings)
assert len(rows)==27 and len({key for _,key in rows})==27
preferences={key for _,key in rows}
defaults={key:value for key,value in re.findall(r'(kHide\w+):\s*@(YES|NO)',core)}
assert preferences<=defaults.keys()
assert len(inventory['options'])==26
assert len({item['dl_option'] for item in inventory['options']})==26
assert sum(item['change_since_1_8']=='new' for item in inventory['options'])==11
for item in inventory['options']:
    assert item['hide_symbol'] in preferences,item
    assert item['hide_symbol'] in (root/item['implementation']).read_text(),item
    if item['change_since_1_8']=='new':assert defaults[item['hide_symbol']]=='NO'
for label,_ in rows:
    assert len(re.findall(r'@"'+re.escape(label)+r'":\s*@"',core))==2,label
for source in (root/'src').glob('*.m'):
    for key in re.findall(r'HIDEL\(@"([A-Z0-9_]+)"\)',source.read_text()):
        assert len(re.findall(r'@"'+re.escape(key)+r'":\s*@"',core))==2,(source.name,key)
assert 'HIDEFeatureAvailable(row[1])' in settings
assert 'sw.enabled=available' in settings
assert 'HIDEInstallDLFeatures();' in core and 'HIDEInstallVoiceImport();' in core
print('PASS: all 26 DL options mapped; 11 new defaults off; 27 settings wired; bilingual labels; availability guards; native installers registered')
