"""Browser regression checks for the full-screen unified settings design.
The preview stub tests UI commands/storage, not native iOS or Instagram behavior.
"""
from pathlib import Path
import hashlib,json,os,shutil,re
from playwright.sync_api import sync_playwright
from functools import partial
from http.server import SimpleHTTPRequestHandler,ThreadingHTTPServer
import threading
ROOT=Path(__file__).resolve().parents[1]
original=(ROOT/'assets/HIDE_design.html').read_bytes()
assert hashlib.sha256(original).hexdigest()=='dce78b8dbf3f8bc6dc51fe2b7b1a625e43c4c91414281b1f3cd09ead356faaa4'
header=(ROOT/'src/HIDEDesignData.h').read_text()
embedded=re.search(r'HIDEApprovedHTML\[\] = \{(.*?)\};',header,re.S)[1]
assert bytes(map(int,re.findall(r'\d+',embedded)))==original
class QuietHandler(SimpleHTTPRequestHandler):
    def log_message(self,*args):pass
server=ThreadingHTTPServer(('127.0.0.1',0),partial(QuietHandler,directory=str(ROOT)))
threading.Thread(target=server.serve_forever,daemon=True).start()
with sync_playwright() as p:
    browser=p.chromium.launch(executable_path=os.environ.get('CHROMIUM_EXECUTABLE') or shutil.which('chromium'),args=['--no-sandbox'])
    page=browser.new_page(viewport={'width':390,'height':844})
    errors=[];page.on('pageerror',lambda e:errors.append(str(e)))
    page.goto(f'http://127.0.0.1:{server.server_port}/HIDE_settings_preview.html');page.evaluate('localStorage.clear()');page.reload()
    out=ROOT/'build/design-verification';out.mkdir(exist_ok=True)
    assert page.evaluate('F.length')==28
    declared=page.evaluate('PAGES.filter(p=>p.f).flatMap(p=>p.f)')
    assert len(declared)==len(set(declared))==28
    assert not page.get_by_text('الإعدادات الإضافية',exact=True).count()
    # Each page occupies the actual viewport, with no phone border or body scroll.
    for width,height in [(320,568),(390,844),(430,932)]:
        page.set_viewport_size({'width':width,'height':height})
        for tab in ['home','dl','st','dm','more']:
            page.evaluate(f"page='{tab}';render()")
            assert page.evaluate('document.documentElement.scrollWidth===innerWidth')
            rect=page.locator('#scr').bounding_box()
            assert rect=={'x':0,'y':0,'width':width,'height':height},rect
            assert page.evaluate("getComputedStyle(document.querySelector('.phone')).boxShadow")=='none'
            assert page.evaluate("getComputedStyle(document.querySelector('.phone')).borderRadius")=='0px'
            assert page.locator('.close-settings').count()==1
            tabs=page.locator('#tabs').bounding_box()
            assert tabs['y']+tabs['height']<=height and tabs['y']>height-110
            if width==390:
                page.wait_for_timeout(450)
                page.screenshot(path=str(out/f'{tab}-fullscreen.png'))
    page.set_viewport_size({'width':390,'height':844})
    for tab,ids in [('dl',['timer']),('st',['live','sv']),('dm',['ss','rp'])]:
        page.evaluate(f"page='{tab}';render()")
        for id in ids:
            assert page.locator(f'[data-f="{id}"]').count()==1
            page.locator(f'[data-f="{id}"]').click()
            assert page.evaluate('HIDEPreviewRPC.at(-1).id')==id
    page.evaluate("page='dm';render()")
    count=page.evaluate('HIDEPreviewRPC.length');page.locator('[data-f="cl"]').click()
    assert page.evaluate('HIDEPreviewRPC.length')==count
    page.evaluate("page='home';render()")
    page.locator('[data-f="dl"]').click();page.reload()
    assert page.evaluate('st.dl')==0
    page.evaluate("page='more';render()")
    assert page.locator('[data-f="lock"] .ico svg').count()==1
    assert '☺' not in page.locator('[data-f="lock"] .ico').inner_text()
    page.locator('[data-f="lock"]').click()
    page.locator('[data-delay]').click();page.locator('[data-delay]').click()
    assert page.evaluate('__HIDEInitialSnapshot.delaySeconds')==300
    page.locator('[data-c="5"]').click();page.locator('[data-g="0"]').click();page.locator('[data-l="en"]').click()
    page.reload()
    assert page.locator('#scr').get_attribute('dir')=='ltr'
    assert page.evaluate('color===5 && glass===false')
    page.evaluate("page='more';render()")
    page.locator('[data-native-action="report"]').click()
    assert page.evaluate('HIDEPreviewRPC.at(-1).action')=='report'
    page.locator('.close-settings').click();assert page.evaluate('HIDEPreviewRPC.at(-1).action')=='close'
    page.evaluate("page='home';render()")
    page.locator('[data-t="wa"]').click();assert page.evaluate('HIDEPreviewRPC.at(-1).action')=='whatsapp'
    assert not errors,errors
    (out/'comparison.json').write_text(json.dumps({'fullscreen_sizes':[[320,568],[390,844],[430,932]],'five_tabs_verified':True,'controls':28,'native_preferences':27,'phone_mockup_removed':True,'legacy_settings_removed':True,'app_lock_icon':'inline SVG','preferences_theme_language_persistence':'passed','native_ios_device_tested':False},indent=2))
    browser.close()
server.shutdown()
print('PASS: full viewport at 3 sizes; 5 tabs; 27 native preferences in 28 controls; no mockup; no legacy screen; SVG app-lock icon; persistent settings/theme/language; close/report/link commands')
