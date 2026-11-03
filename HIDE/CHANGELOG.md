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
