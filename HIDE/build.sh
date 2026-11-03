#!/usr/bin/env bash
# arm64, iOS 15+. macOS: Xcode. Linux: Clang, ld64.lld and an iPhoneOS SDK.
# SDK=/path/to/iPhoneOS.sdk CC=/path/to/clang LD64=/path/to/ld64.lld ./build.sh
set -euo pipefail
cd "$(dirname "$0")"
CC="${CC:-clang}"
if [[ -z "${SDK:-}" ]]; then
  if command -v xcrun >/dev/null 2>&1; then
    SDK="$(xcrun --sdk iphoneos --show-sdk-path)"
  elif [[ -n "${THEOS:-}" && -d "$THEOS/sdks/iPhoneOS16.5.sdk" ]]; then
    SDK="$THEOS/sdks/iPhoneOS16.5.sdk"
  else
    echo 'Set SDK to an iPhoneOS SDK directory (or use Xcode on macOS).' >&2
    exit 1
  fi
fi
[[ -d "$SDK/System/Library/Frameworks/UIKit.framework" && -d "$SDK/usr/include" ]] || {
  echo "Not an iPhoneOS SDK: $SDK" >&2; exit 1;
}
command -v "$CC" >/dev/null 2>&1 || { echo "Compiler not found: $CC" >&2; exit 1; }
OUT="${OUT_DIR:-build}"
mkdir -p "$OUT"
OBJECTS="$(mktemp -d "$OUT/.objects.XXXXXX")"
trap 'rm -rf "$OBJECTS"' EXIT
FLAGS=(-target arm64-apple-ios15.0 -isysroot "$SDK" -fobjc-arc -O2 -Wall -Werror=implicit-function-declaration -Wno-unused-function)
LINKER=()
if [[ "$(uname -s)" == Linux ]]; then
  LD64="${LD64:-$(command -v ld64.lld || true)}"
  [[ -n "$LD64" && -x "$LD64" ]] || { echo 'Set LD64 to an executable ld64.lld.' >&2; exit 1; }
  # Select modern Darwin linker flags; LLVM ld64.lld requires -platform_version.
  LINKER=("-fuse-ld=$LD64" -mlinker-version=609)
fi
python3 tools/embed_design.py
for source in src/*.m; do
  "$CC" "${FLAGS[@]}" -c "$source" -o "$OBJECTS/$(basename "${source%.m}").o"
done
"$CC" "${FLAGS[@]}" "${LINKER[@]}" -dynamiclib "$OBJECTS"/*.o -o "$OBJECTS/HIDE.dylib" \
  -framework WebKit -framework UIKit -framework Foundation -framework Photos -framework CoreGraphics \
  -framework Security -framework AVFoundation -framework LocalAuthentication -framework QuartzCore \
  -framework PhotosUI -framework UniformTypeIdentifiers -framework CoreMedia -framework AudioToolbox -framework CoreVideo \
  -install_name @rpath/HIDE.dylib -Wl,-dead_strip
mv "$OBJECTS/HIDE.dylib" "$OUT/HIDE.dylib"
echo "Built $OUT/HIDE.dylib (arm64, iOS 15+)"
