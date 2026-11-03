// App adaptation of the approved design: full-screen layout and unified controls.
(() => {
  const style = document.createElement('style');
  style.id = 'hide-app-layout';
  style.textContent = `
    html,body{width:100%;height:100%;overflow:hidden}
    body{display:block;padding:0;gap:0;background:#09090e}
    .phone{width:100%;height:100%;max-width:none;padding:0;border:0;border-radius:0;background:none;box-shadow:none}
    .screen{width:100%;height:100%;border-radius:0}
    .note{display:none}
    .header-actions{display:flex;align-items:center;gap:8px}
    .close-settings{width:34px;height:34px;display:grid;place-items:center;background:#17171f;border:1px solid #23232e;border-radius:20px;color:var(--ac);cursor:pointer}
    .glass .close-settings{background:rgba(255,255,255,.08);border-color:rgba(255,255,255,.14)}
  `;
  document.head.appendChild(style);
  const icon = paths => `<svg width="22" height="22" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" aria-hidden="true">${paths}</svg>`;
  const lock = F.find(f => f[0] === 'lock');
  lock[1] = icon('<rect x="5" y="10" width="14" height="11" rx="3"/><path d="M8 10V7a4 4 0 0 1 8 0v3"/><path d="M12 14v3"/>');
  const screenshot = F.find(f => f[0] === 'ss');
  screenshot[3] = 'بدون تنبيه الطرف الثاني';
  screenshot[5] = 'Without notifying the other person';
  F.push(
    ['live',icon('<circle cx="12" cy="12" r="2"/><path d="M7.8 7.8a6 6 0 0 0 0 8.4m8.4-8.4a6 6 0 0 1 0 8.4M5 5a10 10 0 0 0 0 14M19 5a10 10 0 0 1 0 14"/>'),'مشاهدة البث بالخفاء','بدون ظهور اسمك','Anonymous live','Without showing your name',0,'w'],
    ['sv',icon('<rect x="3" y="3" width="18" height="18" rx="4"/><path d="m10 8 6 4-6 4z"/>'),'فيديو في ملصقات الستوري','إتاحة اختيار الفيديو من المعرض','Videos in story stickers','Allow videos from the gallery',0,'w'],
    ['timer',icon('<circle cx="12" cy="13" r="8"/><path d="M12 9v4l3 2M9 2h6M12 2v3"/>'),'إظهار مؤقت الفيديو','يبقى ظاهرًا أثناء التشغيل','Keep video timer visible','While the video is playing',0,'w'],
    ['rp',icon('<path d="M3 11a9 9 0 1 0 3-6M3 3v6h6"/>'),'إخفاء إشعار إعادة العرض','بدون تنبيه الطرف الثاني','Hide replay notifications','Without notifying the other person',0,'w']
  );
  PAGES.find(p => p.id === 'dl').f.push('timer');
  PAGES.find(p => p.id === 'st').f.push('sv','live');
  PAGES.find(p => p.id === 'dm').f.splice(PAGES.find(p => p.id === 'dm').f.indexOf('ss')+1,0,'rp');
  const send = body => window.webkit.messageHandlers.hideSettings.postMessage(body);
  let nativeState = window.__HIDEInitialSnapshot;
  const originalRender = render;
  window.render = function () {
    originalRender();
    const top = document.querySelector('#p .top');
    if (top) {
      const actions = document.createElement('div');actions.className = 'header-actions';
      const badge = top.querySelector('.vp');badge.textContent = 'v' + (nativeState.version || V);
      actions.appendChild(badge);
      const close = document.createElement('button');close.className = 'close-settings';
      close.dataset.nativeAction = 'close';close.setAttribute('aria-label',T('إغلاق الإعدادات','Close settings'));
      close.innerHTML = icon('<path d="m6 6 12 12M18 6 6 18"/>');
      actions.appendChild(close);top.appendChild(actions);
    }
    const foot = document.querySelector('#p .foot');
    if (foot) foot.textContent = `HIDE v${nativeState.version || V} · hide-plus.com`;
    if (nativeState?.delaySeconds === 3600) {
      const pill = document.querySelector('[data-delay] .pill');
      if (pill) pill.textContent = T('ساعة', '1 hour');
    }
    if (page === 'more') {
      const about = [...document.querySelectorAll('#p .tile.act')].filter(e => !e.hasAttribute('data-f') && !e.hasAttribute('data-delay'));
      if (about.length >= 3) {
        about[about.length - 3].querySelector('.ds').textContent = 'HIDE ' + (nativeState.version || V);
        about[about.length - 2].dataset.nativeAction = 'instagram';
        const report = about[about.length - 1];
        report.dataset.nativeAction = 'report';
        report.querySelector('.pill').textContent = nativeState.instagram || '453.0.0';
        report.querySelector('.ds').textContent = T('اضغط لعرض تقرير التوافق', 'Tap to view compatibility report');
      }
    }
  };
  window.HIDEApplyNative = snapshot => {
    nativeState = snapshot;
    for (const feature of F) st[feature[0]] = snapshot.features[feature[0]] ? 1 : 0;
    lang = snapshot.language;
    color = snapshot.color;
    glass = snapshot.glass;
    delay = snapshot.delay;
    const scroll = document.getElementById('p')?.scrollTop || 0;
    render();
    document.getElementById('p').scrollTop = scroll;
  };
  document.addEventListener('click', event => {
    const target = event.target.closest('[data-f],[data-delay],[data-c],[data-g],[data-l],[data-t],[data-native-action]');
    if (!target) return;
    event.preventDefault();
    event.stopImmediatePropagation();
    if (target.hasAttribute('data-f')) {
      const id = target.dataset.f;
      if (!nativeState.available[id]) {
        toast(T('الميزة غير متاحة في هذه النسخة', 'Unavailable in this build'));
        return;
      }
      send({action: 'feature', id, value: !st[id]});
    } else if (target.hasAttribute('data-delay')) {
      send({action: 'delay', value: (delay + 1) % DELAYS.length});
    } else if (target.hasAttribute('data-c')) {
      send({action: 'color', value: Number(target.dataset.c)});
    } else if (target.hasAttribute('data-g')) {
      send({action: 'glass', value: target.dataset.g === '1'});
    } else if (target.hasAttribute('data-l')) {
      send({action: 'language', value: target.dataset.l});
    } else {
      send({action: target.dataset.nativeAction || (target.dataset.t === 'ig' ? 'instagram' : 'whatsapp')});
    }
  }, true);
  HIDEApplyNative(nativeState);
})();
