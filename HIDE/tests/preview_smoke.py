"""Local HTML preview checks. These do not exercise native Instagram features."""
from functools import partial
from http.server import SimpleHTTPRequestHandler, ThreadingHTTPServer
from pathlib import Path
import os
import re
import shutil
import threading
from playwright.sync_api import sync_playwright

root = Path(__file__).resolve().parents[1]
core = (root / "src/HIDECore.m").read_text()
settings = (root / "src/HIDESettings.m").read_text()
defaults = {key: value == "YES" for key, value in re.findall(r"(kHide\w+):\s*@(YES|NO)", core)}
keys = re.findall(r'ROW\(@"[^"]+",\s*(kHide\w+),', settings)
expected = [str(defaults[key]).lower() for key in keys]

class QuietHandler(SimpleHTTPRequestHandler):
    def log_message(self, *_args):
        pass

executable = os.environ.get("CHROMIUM_EXECUTABLE") or shutil.which("chromium")
with ThreadingHTTPServer(("127.0.0.1", 0), partial(QuietHandler, directory=str(root))) as server:
    threading.Thread(target=server.serve_forever, daemon=True).start()
    try:
        with sync_playwright() as playwright:
            browser = playwright.chromium.launch(executable_path=executable, args=["--no-sandbox"])
            page = browser.new_page(viewport={"width": 430, "height": 1000})
            errors = []
            page.on("pageerror", lambda error: errors.append(str(error)))
            page.goto(f"http://127.0.0.1:{server.server_port}/HIDE_settings_preview.html")
            page.evaluate("localStorage.clear()")
            page.reload()
            assert page.locator("#screen").get_attribute("dir") == "rtl"
            switches = page.get_by_role("switch")
            assert switches.count() == len(expected) == 27
            assert [s.get_attribute("aria-checked") for s in switches.all()] == expected
            switches.first.click()
            assert switches.first.get_attribute("aria-checked") == "false"
            page.get_by_role("button", name="English", exact=True).click()
            assert page.locator("#screen").get_attribute("dir") == "ltr"
            assert page.get_by_role("switch").first.get_attribute("aria-checked") == "false"
            assert page.get_by_role("switch").first.get_attribute("aria-label") == "Download with long press"
            page.get_by_role("switch").first.focus()
            page.keyboard.press("Space")
            assert page.get_by_role("switch").first.get_attribute("aria-checked") == "true"
            page.reload()
            assert page.get_by_role("switch").first.get_attribute("aria-checked") == "true"
            assert "v1.9" in page.locator(".ver").inner_text()
            assert "407.0.0" in page.locator("#screen").inner_text()
            assert not errors, errors
            browser.close()
    finally:
        server.shutdown()
print("PASS: 27 switches match native defaults; RTL/LTR; language state; keyboard; reload persistence; version and target; no JavaScript errors")
