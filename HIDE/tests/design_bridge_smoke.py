"""Approved markup is immutable; compare rendered layouts and exercise bridge RPC.
These are browser checks, not an iOS/WKWebView/device test.
"""
from pathlib import Path
import hashlib,json,os,shutil,re
from PIL import Image, ImageChops
from io import BytesIO
from playwright.sync_api import sync_playwright
ROOT=Path(__file__).resolve().parents[1]
html=(ROOT/'assets/HIDE_design.html').read_bytes()
APPROVED='dce78b8dbf3f8bc6dc51fe2b7b1a625e43c4c91414281b1f3cd09ead356faaa4'
assert hashlib.sha256(html).hexdigest()==APPROVED, 'Approved design changed'
header=(ROOT/'src/HIDEDesignData.h').read_text()
embedded=re.search(r'HIDEApprovedHTML\[\] = \{(.*?)\};',header,re.S)[1]
assert bytes(map(int,re.findall(r'\d+',embedded)))==html, 'Embedded asset differs from approved HTML'
bridge=(ROOT/'assets/native-bridge.js').read_text()
with sync_playwright() as p:
    browser=p.chromium.launch(executable_path=os.environ.get('CHROMIUM_EXECUTABLE') or shutil.which('chromium'),args=['--no-sandbox'])
    def make_page(integrated):
        page=browser.new_page(viewport={'width':390,'height':1000},device_scale_factor=1)
        page.set_content(html.decode())
        page.evaluate('''window.rpc=[];window.webkit={messageHandlers:{hideSettings:{postMessage:x=>window.rpc.push(x)}}};
        window.__HIDEInitialSnapshot={features:Object.fromEntries(F.map(f=>[f[0],!!f[6]])),available:Object.fromEntries(F.map(f=>[f[0],f[0]!=='cl'])),language:'ar',color:0,glass:true,delay:0};''')
        if integrated:page.evaluate(bridge)
        return page
    reference=make_page(False);native=make_page(True)
    errors=[];native.on('pageerror',lambda e:errors.append(str(e)))
    out=ROOT/'build/design-verification';out.mkdir(exist_ok=True)
    results={}
    for tab in ['home','dl','st','dm','more']:
        # Global lexical `page` is deliberately set via eval to match the original script.
        for page in [reference,native]:page.evaluate(f"page='{tab}';render()")
        native.wait_for_timeout(650)
        # Report placeholder is replaced by a real action description; normalize its
        # text in the reference, keeping its CSS/layout untouched.
        if tab=='more':reference.evaluate("[...document.querySelectorAll('#p .tile.act')].filter(e=>!e.hasAttribute('data-f')&&!e.hasAttribute('data-delay')).at(-1).querySelector('.ds').textContent='اضغط لعرض تقرير التوافق'")
        a=reference.locator('#scr').screenshot(animations='disabled')
        b=native.locator('#scr').screenshot(animations='disabled')
        (out/f'{tab}-reference.png').write_bytes(a)
        (out/f'{tab}-native.png').write_bytes(b)
        # GPU backdrop blur can vary a few RGB levels at a handful of edge
        # pixels across browser contexts. Layout/style must still match exactly.
        layout="""() => [...document.querySelectorAll('#scr .tile,#scr .tabs,#scr .hero,#scr .top')].map(e=>({rect:e.getBoundingClientRect().toJSON(),color:getComputedStyle(e).color,background:getComputedStyle(e).background,border:getComputedStyle(e).border,radius:getComputedStyle(e).borderRadius,font:getComputedStyle(e).font}))"""
        assert reference.evaluate(layout)==native.evaluate(layout),f'Layout/style mismatch: {tab}'
        difference=ImageChops.difference(Image.open(BytesIO(a)).convert('RGB'),Image.open(BytesIO(b)).convert('RGB'))
        pixels=list(difference.get_flattened_data());changed=sum(x!=(0,0,0) for x in pixels)
        peak=max(max(x) for x in pixels)
        assert peak<=8 and changed<=len(pixels)*.001,f'Visual mismatch: {tab}, {changed} pixels, {peak} RGB'
        results[tab]={'changed_edge_pixels':changed,'max_rgb_difference':peak,'layout_and_css_equal':True}
        (out/f'{tab}.png').write_bytes(b)
    native.evaluate("page='home';render()")
    native.locator('[data-f="dl"]').click()
    assert native.evaluate('rpc.pop()')=={'action':'feature','id':'dl','value':False}
    assert native.evaluate('st.dl')==1, 'UI must await native confirmation'
    native.evaluate("__HIDEInitialSnapshot.features.dl=false;HIDEApplyNative(__HIDEInitialSnapshot)")
    assert native.evaluate('st.dl')==0
    native.evaluate("page='dm';render()")
    before=native.evaluate('rpc.length');native.locator('[data-f="cl"]').click()
    assert native.evaluate('rpc.length')==before and native.evaluate('st.cl')==0
    native.evaluate("page='more';render()")
    native.locator('[data-c="2"]').click();assert native.evaluate('rpc.pop()')=={'action':'color','value':2}
    native.locator('[data-l="en"]').click();assert native.evaluate('rpc.pop()')=={'action':'language','value':'en'}
    native.evaluate("__HIDEInitialSnapshot.language='en';HIDEApplyNative(__HIDEInitialSnapshot)")
    assert native.locator('#scr').get_attribute('dir')=='ltr'
    native.locator('[data-native-action="report"]').click();assert native.evaluate('rpc.pop()')=={'action':'report'}
    native.evaluate("page='home';render()")
    native.locator('[data-t="wa"]').click();assert native.evaluate('rpc.pop()')=={'action':'whatsapp'}
    for width in [320,390,430]:
        native.set_viewport_size({'width':width,'height':1000})
        assert native.evaluate('document.documentElement.scrollWidth<=innerWidth'),f'Horizontal overflow at {width}'
    assert not errors,errors
    (out/'comparison.json').write_text(json.dumps(results,indent=2))
    browser.close()
print('PASS: exact approved HTML; embedded hash; five tabs match layout/CSS and rendering within blur-edge precision; native-confirmed toggle; unsupported chat lock; language/color RPC; report; WhatsApp; 320/390/430 widths')
