# V1.0 — experimental Direct port for Instagram 453

- Port received unsend handling to the verified IGDThreadDeltaUpdateFactory remove-item callback; retain the existing local cache entry, scoped by account/thread/message.
- Resolve the generated cell model metadata slot and the new Swift cell's ObjC configuration/layout selectors. Text bubbles render solid red with white text and show the first locally observed deletion time on tap.
- Allow own unsends; unknown local message models get a short per-thread bypass. Expiry/thread-deletion cache operations are untouched. No recovery of previously deleted/missing messages; encrypted transports remain unverified.
- Capture the new native last-seen tracker through its checked initializer and attach a target-bound eye action. Keep native eligibility checks and the global privacy preference. Bind asynchronous MQTT permissions to the complete marker payload, with a 15-second expiry; HTTP permissions remain bound to account/target/body.
- Build, host policies, native ABI/schema checks and static analysis validate packaging and implementation, not iPhone operation or server delivery. Requires two-account device validation.

# V1.0 — Instagram 453 migration test build

- Reset HIDE's displayed/source version to 1.0 and target Instagram 453.0.0, iOS 16.3+.
- Replace the DLInsta load path in place, remove its dylib, resource bundle and Open-in extension, and add HIDE.
- Adapt profile settings entry points to the verified 453 delegates.
- Verify the Swift recording limit field and both recording-start selectors against 453; pin raw scalar access to this executable UUID.
- Disable the unverified legacy Direct cache layout. Deleted-message retention/presentation and the former manual Direct read-eye entry points are unavailable in this build.
- Preserve the approved full-screen settings/gallery UI and retain ABI checks for private calls.

Static metadata/build/browser/host checks passed. Device launch and native feature semantics have not been tested here. Re-sign the IPA before installation.
