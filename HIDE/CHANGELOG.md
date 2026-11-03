# 1.9.3 (full-screen unified settings test build)

- Remove the preview phone frame, fixed 820px canvas and external demo note at runtime. Fill the native safe area in a full-screen presentation with a matching close button.
- Remove the old UIKit settings controller entirely and remove the Additional settings route from the report dialog.
- Put all 27 native preferences into the same tab/card UI: add the live, sticker-video and video-timer controls and expose replay notifications separately.
- Replace the app-lock emoji with an inline lock SVG, preserve stored preference keys/theme/language, and display the actual build version.
- Wait for the adapted document before revealing WKWebView, avoiding an initial mockup flash.
- Generate the standalone preview from the exact same reference and adapter; verify five tabs at 320x568, 390x844 and 430x932, preference coverage, persistence and UI commands.

Device launch/visual testing remains pending. The separate chat-lock placeholder is still unsupported and stays off.

# 1.9.2 (approved design integration test build)

- Embed the exact uploaded HIDE_design.html, including its logo, CSS, original script and phone frame. Render with WKWebView; keep native preference binding in a separate injected script.
- Wire the existing feature controls, persist accent/language/glass style, use the supplied WhatsApp URL, authenticate before enabling app lock and support the design's five-minute lock delay.
- Keep unsupported separate chat lock off. The combined screenshot/replay control writes both existing settings. Keep omitted native settings reachable through Compatibility > Additional settings.
- Block navigation away from the bundled document inside the bridge-enabled view. Whitelist commands and preference keys; use a weak message handler.
- Compare all five tabs with the original rendering, exact layout/CSS and a tight tolerance for backdrop-blur rounding; check native-confirmed toggles, unsupported controls and link/settings commands.

Device WKWebView, iOS CSS/font rendering and native feature behavior remain untested on hardware. Approved HTML bytes are unchanged; the report tile's placeholder description is replaced with an action label. Dismiss the settings sheet with the standard iOS downward swipe.

# 1.9.1 (407 compatibility test build)

- Verify private method signatures against the supplied Instagram executable; add a reproducible, read-only native-contract checker.
- Correct the live initializer surface argument to int64 in both the hook signature and C function pointer.
- Handle the single-argument Direct cache update method and its per-thread value-object wrappers. Pin the private wrapper layout to the inspected executable UUID; unknown builds pass through unchanged.
- Correct the own-unsend handler audience argument to an object so local unsends can bypass retention.
- Use the Swift voice controller and its verified Double recordingTimeLimit field, resolved by runtime offset. Extend to 300 seconds without changing the recording start time or duration display.
- Expand the compatibility report with executable match and relevant metadata/offsets. Keep feature availability guards.

Native contracts, compilation and host checks do not establish on-device privacy, cache persistence, audio recording or delivery behavior. Device testing remains required.

# 1.9 (development build)

Target: Instagram 407.0.0, arm64, iOS 15+; native runtime validation remains pending.

- Compare all 26 observed DL options; add 11 settings (off by default) and a complete implementation/evidence map.
- Port guarded live polling, sticker video selection, local deletion retention/timestamps, screenshot/replay marks, screenshot blocking, extended recording, counts and timer behavior.
- Implement Files/Photos audio import, AAC conversion, real PCM waveform and explicit confirmation before invoking a checked native Direct sender.
- Add selection, sequential downloads, progress, cancellation, photo/video merging and native-session HD profile lookup with fallback.
- Expand ad filtering, confirmations and text/username copying.
- Disable unavailable new settings; include structural availability in compatibility reports.
- Generate the bilingual preview from native settings/defaults; cover 27 switches and add media-policy/inventory checks.

Not ported: manual per-story seen while anonymous, pending the 407 seen/model contract. See README-ar.md for runtime limits and VALIDATION.json for actual checks.

# 1.8 (development build)

Target: Instagram 407.0.0, arm64, iOS 15+.

- Add ABI-checked hooks, typed numeric getters, initializer ARC ownership, and an on-device compatibility report.
- Share validated HTTP download/file handling across media and voice, check Photos creation, clean temporary files, and resolve valid high-quality media variants.
- Fix authentication state transitions and fail closed on unavailable device authentication.
- Fix nested confirmations, independent messaging privacy updates, scoped seen URL rewriting, and Safari fallback.
- Guard failed memory-protection changes in the existing sideload symbol rebinder.
- Make cross-builds repeatable and update the accessible bilingual preview to 1.8.

Validation: see VALIDATION.json. Building/linking and host/preview tests passed; native Instagram/iOS behavior has not been tested. This release does not claim to port every feature from DLInsta.
