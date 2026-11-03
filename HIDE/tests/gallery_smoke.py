"""Gallery UI only: fixture snapshots represent native selection and progress."""
from pathlib import Path
import threading,shutil,json
from functools import partial
from http.server import SimpleHTTPRequestHandler,ThreadingHTTPServer
from playwright.sync_api import sync_playwright
r=Path(__file__).resolve().parents[1]
class Quiet(SimpleHTTPRequestHandler):
 def log_message(self,*args):pass
server=ThreadingHTTPServer(('127.0.0.1',0),partial(Quiet,directory=str(r)))
threading.Thread(target=server.serve_forever,daemon=True).start()
with sync_playwright() as p:
 browser=p.chromium.launch(executable_path=shutil.which('chromium'),args=['--no-sandbox'])
 page=browser.new_page(viewport={'width':390,'height':844});errors=[];page.on('pageerror',lambda e:errors.append(str(e)))
 page.add_init_script('window.rpc=[];window.webkit={messageHandlers:{hideGallery:{postMessage:m=>rpc.push(m)}}}')
 page.goto(f'http://127.0.0.1:{server.server_port}/assets/HIDE_gallery.html')
 state={'items':[{'video':i in [1,4],'available':i!=5} for i in range(9)],'selected':[i for i in range(9) if i!=5],'busy':False,'progress':0,'status':''}
 page.evaluate('s=>HIDEGalleryState(s)',state)
 for w,h in [(320,568),(390,844),(430,932)]:
  page.set_viewport_size({'width':w,'height':h})
  assert page.locator('.screen').bounding_box()=={'x':0,'y':0,'width':w,'height':h}
  assert page.evaluate('document.documentElement.scrollWidth===innerWidth')
  assert page.locator('.gbar button').count()==2
 assert page.locator('.th').count()==9
 assert page.locator('[data-i="5"]').is_disabled()
 # No preview is available: a valid download remains selectable.
 assert page.locator('[data-i="3"] img').count()==0
 page.locator('[data-i="3"]').click();assert page.evaluate('rpc.at(-1)')=={'action':'select','index':3}
 assert page.locator('[data-i="3"]').get_attribute('aria-pressed')=='true','await native response'
 state['selected'].remove(3);page.evaluate('s=>HIDEGalleryState(s)',state)
 assert page.locator('[data-i="3"]').get_attribute('aria-pressed')=='false'
 assert page.locator('[data-i="1"] b').inner_text().replace('\ufe0e','')=='▶'
 image='data:image/jpeg;base64,iVBORw0KGgoAAAANSUhEUgAAAAEAAAABCAQAAAC1HAwCAAAAC0lEQVR42mP8/x8AAwMCAO+aK8cAAAAASUVORK5CYII='
 page.evaluate('(image)=>HIDEGalleryThumbnail(0,image)',image)
 assert page.locator('[data-i="0"] img').count()==1
 page.locator('#all').click();assert page.evaluate('rpc.at(-1).action')=='all'
 page.locator('#dl').click();assert page.evaluate('rpc.at(-1).action')=='download'
 state.update(busy=True,progress=.4,status='جاري الحفظ…');page.evaluate('s=>HIDEGalleryState(s)',state)
 assert page.locator('#dl').is_disabled()
 page.wait_for_timeout(600)
 assert page.locator('#prog div').evaluate('e=>e.style.width')=='40%','progress must not be simulated'
 state.update(busy=False,status='تم حفظ 7 من الوسائط.');page.evaluate('s=>HIDEGalleryState(s)',state)
 page.locator('.gx').click();assert page.evaluate('rpc.at(-1).action')=='close'
 out=r/'build/gallery-verification';out.mkdir(exist_ok=True)
 page.set_viewport_size({'width':390,'height':844});page.screenshot(path=str(out/'gallery.png'))
 assert not errors,errors
 browser.close()
server.shutdown()
print('PASS: gallery design, no mockup, 3 sizes, gray preview still selectable, video mark, selection acknowledgement, native-only progress, close/download commands')
