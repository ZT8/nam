"""Generate the full-screen app preview using the same HTML and bridge as WKWebView.
The small native stub persists preferences in browser storage; it does not test
Instagram hooks, authentication or native privacy behavior.
"""
from pathlib import Path
import json,re
ROOT=Path(__file__).resolve().parents[1]
def model():
    header=(ROOT/'src/HIDECore.h').read_text()
    core=(ROOT/'src/HIDECore.m').read_text()
    web=(ROOT/'src/HIDEWebSettings.m').read_text()
    defaults={k:v=='YES' for k,v in re.findall(r'(kHide\w+):\s*@(YES|NO)',core)}
    entries=re.findall(r'@"([a-z0-9]+)":@\[([^\]]+)\]',web[:web.index('@interface HIDEWebSettingsController')])
    features={name:all(defaults[k] for k in re.findall(r'kHide\w+',keys)) for name,keys in entries}
    features['cl']=False
    return {'version':re.search(r'HIDE_VERSION @"([^"]+)"',header)[1],'features':features,'available':{k:k!='cl' for k in features},'language':'ar','color':0,'glass':True,'delay':0,'delaySeconds':0}
if __name__=='__main__':
    html=(ROOT/'assets/HIDE_design.html').read_text()
    bridge=(ROOT/'assets/native-bridge.js').read_text()
    stub='window.__HIDEInitialSnapshot='+json.dumps(model(),ensure_ascii=False)+';\n'+'''window.HIDEPreviewRPC=[];
    try { const saved=JSON.parse(localStorage.getItem('hide-app-preview')||'null');if(saved)Object.assign(__HIDEInitialSnapshot,saved); }catch(e){}
    window.webkit={messageHandlers:{hideSettings:{postMessage(message){
      HIDEPreviewRPC.push(message);
      const s=__HIDEInitialSnapshot;
      if(message.action==='feature')s.features[message.id]=message.value;
      if(['color','glass','language'].includes(message.action))s[message.action]=message.value;
      if(message.action==='delay'){s.delay=message.value;s.delaySeconds=[0,60,300,900][s.delay];}
      try{localStorage.setItem('hide-app-preview',JSON.stringify(s));}catch(e){}
      queueMicrotask(()=>HIDEApplyNative(s));
    }}}};\n'''
    html=html.replace('</body>','<script>\n'+stub+bridge+'\n</script>\n</body>')
    (ROOT/'HIDE_settings_preview.html').write_text(html)
    print('Generated full-screen preview with',len(model()['features']),'controls; version',model()['version'])
