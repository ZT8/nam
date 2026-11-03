#!/usr/bin/env bash
set -euo pipefail
cd "$(dirname "$0")/.."
TEST_DIR="$(mktemp -d "${TMPDIR:-/tmp}/hide-tests.XXXXXX")"
trap 'rm -rf "$TEST_DIR"' EXIT
"${HOST_CC:-cc}" -std=c11 -Wall -Wextra -Werror tests/lock_policy_test.c -o "$TEST_DIR/lock"
"$TEST_DIR/lock"
"${HOST_CC:-cc}" -std=c11 -Wall -Wextra -Werror tests/media_policy_test.c -lm -o "$TEST_DIR/media"
"$TEST_DIR/media"
"${HOST_CC:-cc}" -std=c11 -Wall -Wextra -Werror tests/receipt_policy_test.c -lm -o "$TEST_DIR/receipts"
"$TEST_DIR/receipts"
python3 tests/feature_inventory.py
bash -n build.sh
