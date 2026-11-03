// Behavior only. The approved HTML, CSS and original script remain byte-identical.
(() => {
  const send = body => window.webkit.messageHandlers.hideSettings.postMessage(body);
  let nativeState = window.__HIDEInitialSnapshot;
  const originalRender = render;
  window.render = function () {
    originalRender();
    if (nativeState?.delaySeconds === 3600) {
      const pill = document.querySelector('[data-delay] .pill');
      if (pill) pill.textContent = T('ساعة', '1 hour');
    }
    if (page === 'more') {
      const about = [...document.querySelectorAll('#p .tile.act')].filter(e => !e.hasAttribute('data-f') && !e.hasAttribute('data-delay'));
      if (about.length >= 3) {
        about[about.length - 2].dataset.nativeAction = 'instagram';
        const report = about[about.length - 1];
        report.dataset.nativeAction = 'report';
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
