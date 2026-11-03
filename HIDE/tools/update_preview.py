"""Regenerate preview labels/order/defaults from the native settings source."""
from pathlib import Path
import json
import re

root=Path(__file__).resolve().parents[1]
core=(root/'src/HIDECore.m').read_text()
header=(root/'src/HIDECore.h').read_text()
settings=(root/'src/HIDESettings.m').read_text()
version=re.search(r'#define HIDE_VERSION @"([^"]+)"',header)[1]
target=re.search(r'#define HIDE_TARGET_INSTAGRAM @"([^"]+)"',header)[1]
defaults={k:v=='YES' for k,v in re.findall(r'(kHide\w+):\s*@(YES|NO)',core)}
pref_names=dict(re.findall(r'#define (kHide\w+)\s+@"([^"]+)"',header))
locales={}
for lang,end in [('en','        ar = @{'),('ar','    });\n    NSString *s')]:
    text=core[core.index(f'        {lang} = @{{'):]
    text=text[:text.index(end)]
    locales[lang]={key:json.loads('"'+value+'"') for key,value in re.findall(r'@"([A-Z0-9_]+)":\s*@"((?:[^"\\]|\\.)*)"',text)}
section_text=settings[settings.index('        _sections = @['):settings.index('\n        ];',settings.index('        _sections = @['))]
sections=list(re.finditer(r'@\{@"title": HIDEL\(@"([^"]+)"\),(.*?)(?=\n            @\{|\Z)',section_text,re.S))
icons={'arrow.down.circle.fill':'⬇︎','sparkles':'✦','repeat':'↻','eye.slash.fill':'◌','at':'@','waveform':'〰','heart.fill':'♥','timer':'◷','faceid':'☺','square.and.arrow.up':'↗','mic.fill':'●','archivebox.fill':'▣'}
model={}
for lang,labels in locales.items():
    groups=[]
    for section in sections:
        title,body=section[1],section[2]
        rows=[]
        for label,pref,icon,r,g,b in re.findall(r'ROW\(@"([^"]+)",\s*(kHide\w+),\s*@"([^"]+)",\s*RGB\((\d+),(\d+),(\d+)\)\)',body):
            rows.append([labels[label],int(defaults[pref]),icons.get(icon,'•'),'#'+''.join(f'{int(v):02x}' for v in (r,g,b)),None,pref_names[pref]])
        if title=='SEC_LOCK': rows.append([labels['LOCK_AFTER'],labels['LOCK_NOW'],'◷','#ff9f0a'])
        if title=='SEC_ABOUT': rows=[[labels['VERSION'],version,'i','#336bff',1],['Instagram','@hidestores','◉','#e1306c'],[labels['COMPATIBILITY'],target,'✓','#336bff']]
        groups.append([labels[title],rows])
    model[lang]={'title':labels['SETTINGS_TITLE'],'done':labels['OK'],'note':f'HIDE {version} settings preview; switches do not test native Instagram features.' if lang=='en' else f'معاينة إعدادات HIDE {version}؛ المفاتيح هنا لا تختبر عمل الميزات داخل إنستغرام.','secs':groups}
preview=root/'HIDE_settings_preview.html';html=preview.read_text()
html=re.sub(r'const V="[^"]+";',f'const V="{version}";',html)
a=html.index('const S = ');b=html.index('function render(lang)',a)
html=html[:a]+'const S = '+json.dumps(model,ensure_ascii=False,indent=2)+';\n'+html[b:]
html=html.replace('const stateKey = `${sectionIndex}:${rowIndex}`;','const stateKey = r[5] || `${sectionIndex}:${rowIndex}`;')
html=html.replace('hide-preview-state"','hide-preview-state-1.9"').replace("hide-preview-state'","hide-preview-state-1.9'")
preview.write_text(html)
print(f'Generated {sum(isinstance(r[1],int) for _,rows in model["en"]["secs"] for r in rows)} switches, {len(groups)} sections, version {version}')
