# V1.0 — Instagram 453 migration test build

- Reset HIDE's displayed/source version to 1.0 and target Instagram 453.0.0, iOS 16.3+.
- Replace the DLInsta load path in place, remove its dylib, resource bundle and Open-in extension, and add HIDE.
- Adapt profile settings entry points to the verified 453 delegates.
- Verify the Swift recording limit field and both recording-start selectors against 453; pin raw scalar access to this executable UUID.
- Disable the unverified legacy Direct cache layout. Deleted-message retention/presentation and the former manual Direct read-eye entry points are unavailable in this build.
- Preserve the approved full-screen settings/gallery UI and retain ABI checks for private calls.

Static metadata/build/browser/host checks passed. Device launch and native feature semantics have not been tested here. Re-sign the IPA before installation.
