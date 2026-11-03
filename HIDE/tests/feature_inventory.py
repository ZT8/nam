"""Check coverage from DL inventory through the unified native preference bridge."""
from pathlib import Path
import json,re
root=Path(__file__).resolve().parents[1]
inventory=json.loads((root/'docs/dl-feature-map.json').read_text())
core=(root/'src/HIDECore.m').read_text();settings=(root/'src/HIDESettings.m').read_text()
web=(root/'src/HIDEWebSettings.m').read_text()
entries=re.findall(r'@"([a-z0-9]+)":@\[([^\]]+)\]',web[:web.index('@interface HIDEWebSettingsController')])
keys=[key for _,group in entries for key in re.findall(r'kHide\w+',group)]
defaults={k:v for k,v in re.findall(r'(kHide\w+):\s*@(YES|NO)',core)}
assert len(keys)==len(set(keys))==27 and set(keys)==set(defaults)
assert len(inventory['options'])==26
assert len({x['dl_option'] for x in inventory['options']})==26
assert sum(x['change_since_1_8']=='new' for x in inventory['options'])==11
for item in inventory['options']:
    assert item['hide_symbol'] in keys
    if item['change_since_1_8']=='new':assert defaults[item['hide_symbol']]=='NO'
for source in (root/'src').glob('*.m'):
    for key in re.findall(r'HIDEL\(@"([A-Z0-9_]+)"\)',source.read_text()):
        assert len(re.findall(r'@"'+re.escape(key)+r'":\s*@"',core))==2,(source.name,key)
assert 'HIDESettingsViewController' not in settings
assert 'HIDEPresentAdvancedSettingsFromController' not in settings+web
assert 'UIModalPresentationFullScreen' in settings
assert 'HIDEFeatureAvailable(key)' in web
assert 'HIDEInstallManualSeen();' in core
print('PASS: 26 DL options mapped; all 27 preferences in one unified UI; 11 new defaults off; bilingual native labels; no old settings controller')
