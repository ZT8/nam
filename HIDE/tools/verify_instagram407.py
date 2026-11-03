#!/usr/bin/env python3
"""Read-only checks against the user's decrypted 407 executable. Stdlib only.
Usage: python3 tools/verify_instagram407.py /path/to/Payload/Instagram.app/Instagram
No executable bytes or private message values are emitted.
"""
import bisect
import hashlib
import json
import mmap
from pathlib import Path
import re
import struct
import sys
import uuid

ROOT = Path(__file__).resolve().parents[1]
VOICE = '_TtC24IGDirectVoiceRecordingUI33IGDirectVoiceRecordViewController'
TARGETS = {'IGLiveViewerCountIntervalPuller', 'IGDirectCache', 'IGDirectMessageUpdate',
           'IGDirectThreadUpdate', 'IGDirectCacheThreadUpdate', 'IGDirectMessageMenuActionHandler','IGDirectThreadViewController','IGDirectMessageListViewController','IGDirectThreadViewListAdapterDataSource','IGStoryViewerViewController','IGDirectMessageCell', VOICE}
EXPECTED_UUID = '4c4c444e-5555-3144-a107-36f95b1dcf25'


def verify(path):
    source = (ROOT / 'src/HIDEDLFeatures.m').read_text() + (ROOT / 'src/HIDEManualSeen.m').read_text()
    header = (ROOT / 'src/HIDE407.h').read_text()
    with path.open('rb') as file, mmap.mmap(file.fileno(), 0, access=mmap.ACCESS_READ) as data:
        magic, _, _, kind, count, _, _, _ = struct.unpack_from('<8I', data)
        assert magic == 0xfeedfacf and kind == 2, 'Expected a thin arm64 Mach-O executable'
        sections = []
        cursor = 32
        executable_uuid = None
        for _ in range(count):
            command, size = struct.unpack_from('<II', data, cursor)
            if command == 0x1b:
                executable_uuid = str(uuid.UUID(bytes=data[cursor+8:cursor+24]))
            if command == 0x19:
                nsections = struct.unpack_from('<I', data, cursor+64)[0]
                for i in range(nsections):
                    q = cursor+72+i*80
                    name = data[q:q+16].split(b'\0')[0].decode()
                    va, length, offset = struct.unpack_from('<QQI', data, q+32)
                    sections.append((va, length, offset, name))
            cursor += size
        assert executable_uuid == EXPECTED_UUID, f'Untested executable UUID: {executable_uuid}'
        sections.sort()
        starts = [s[0] for s in sections]

        def off(va, size=1):
            i = bisect.bisect_right(starts, va)-1
            assert i >= 0, hex(va)
            base, length, offset, _ = sections[i]
            assert base <= va and va+size <= base+length, hex(va)
            return offset+va-base

        def read(va, size):
            return data[off(va, size):off(va, size)+size]

        def u32(va):
            return struct.unpack('<I', read(va, 4))[0]

        def ptr(va):
            value = struct.unpack('<Q', read(va, 8))[0]
            if value >> 63:
                return 0  # Imported binding, not a local target.
            return (value & ((1 << 36)-1)) | (((value >> 36) & 255) << 56)

        def cstr(va):
            p = off(va)
            return data[p:data.find(b'\0', p)].decode()

        def methods(va):
            if not va:
                return {}
            flags, length = struct.unpack('<II', read(va, 8))
            stride = flags & 0xffff
            result = {}
            for i in range(length):
                q = va+8+i*stride
                if flags & 0x80000000:
                    nr, tr, ir = struct.unpack('<iii', read(q, 12))
                    name = q+nr
                    if not flags & 0x40000000:
                        name = ptr(name)
                    types, implementation = q+4+tr, q+8+ir
                else:
                    name, types, implementation = ptr(q), ptr(q+8), ptr(q+16)
                result[cstr(name)] = (cstr(types), implementation)
            return result

        def fields(va):
            if not va:
                return {}
            stride, length = struct.unpack('<II', read(va, 8))
            return {cstr(ptr(va+8+i*stride+8)): cstr(ptr(va+8+i*stride+16))
                    for i in range(length)}

        classes = {}
        for va, length, _, name in sections:
            if name != '__objc_classlist':
                continue
            for a in range(va, va+length, 8):
                cp = ptr(a)
                ro = ptr(cp+32) & ~7
                name = cstr(ptr(ro+24))
                if name in TARGETS:
                    classes[name] = {'methods': methods(ptr(ro+32) & ~3), 'fields': fields(ptr(ro+48))}
        assert set(classes) == TARGETS, 'Missing required native classes'
        contracts = [
            ('IGLiveViewerCountIntervalPuller', 'initWithUserSession:broadcastId:pullInterval:networker:loggingContext:mode:surface:infoProvider:', 'hide_liveInit'),
            ('IGDirectCache', '_applyThreadUpdates:', 'hide_cache407'),
            (VOICE, 'startRecordingWithButtonTapFromEntryPoint:', 'hide_record407Start'),
            ('IGDirectMessageMenuActionHandler', 'unsendWithMessageViewModel:threadId:consistentThreadFbid:threadSubtype:audienceType:', 'hide_unsend407'),
        ]
        contracts += [
            ('IGDirectThreadViewController','markLastMessageAsSeen','hide_threadMark'),
            ('IGDirectMessageListViewController','markLastMessageAsSeen','hide_listMark'),
            ('IGDirectThreadViewListAdapterDataSource','shouldUpdateLastSeenMessage','hide_shouldUpdate'),
            ('IGStoryViewerViewController','fullscreenSectionController:didMarkItemAsSeen:','hide_storySeen'),
        ]
        assert classes['IGDirectMessageCell']['fields']['_messageContentContainerView']=='@"IGDirectMessageBubbleContainerView"'
        encodings = {}
        for cls, selector, replacement in contracts:
            encoding, _ = classes[cls]['methods'][selector]
            match = re.search(r'\(IMP\)'+replacement+r',"([^"]+)"', source)
            assert match, f'Missing checked hook for {replacement}'
            # Same-width signed/unsigned integer parameters share the arm64 ABI.
            actual = re.sub(r'\d+', '', encoding).replace('Q', 'q')
            assert actual == match[1], (cls, encoding, match[1])
            encodings[cls] = encoding
        assert classes['IGDirectMessageUpdate']['fields']['_removeMessages_messageKeys'] == '@"NSArray"'
        assert classes['IGDirectThreadUpdate']['fields']['_messageUpdate'] == '@"IGDirectMessageUpdate"'
        assert 'recordingTimeLimit' in classes[VOICE]['fields']
        # Verify Double using Swift field reflection; ObjC's empty type is insufficient.
        found_double = False
        for va, length, _, name in sections:
            if name != '__swift5_fieldmd':
                continue
            a = va
            while a+16 <= va+length:
                _, _, _, stride, length_fields = struct.unpack('<iiHHI', read(a, 16))
                assert stride >= 12 and length_fields < 10000
                for i in range(length_fields):
                    q = a+16+i*stride
                    _, typ, nam = struct.unpack('<Iii', read(q, 12))
                    if cstr(q+8+nam) == 'recordingTimeLimit':
                        assert read(q+4+typ, 3) == b'Sd\0', 'Recording limit is not a Double'
                        found_double = True
                a += 16+stride*length_fields
        assert found_double, 'Missing recording limit Swift type metadata'
        # Native cache consumer loads thread at +16 and the updates array at +24.
        method = classes['IGDirectCache']['methods']['_applyThreadUpdates:'][1]
        slots = [u32(method+0xc4), u32(method+0x330)]
        for instruction, offset, register, base in [(slots[0], 16, 19, 20), (slots[1], 24, 22, 24)]:
            assert instruction & 0xffc00000 == 0xf9400000, 'Changed cache consumer'
            assert (instruction >> 10 & 0xfff)*8 == offset
            assert instruction & 31 == register and instruction >> 5 & 31 == base
        for constant, value in [('HIDE407_CACHE_THREAD_OFFSET', 16), ('HIDE407_CACHE_UPDATES_OFFSET', 24)]:
            assert re.search(r'#define '+constant+r' '+str(value)+r'\b', header)
        return {'executable_uuid': executable_uuid, 'sha256': hashlib.sha256(data).hexdigest(),
                'checked_hooks': encodings, 'swift_recording_limit': 'Double',
                'cache_wrapper_slots': {'thread': 16, 'updates': 24},
                'native_contracts_verified': True, 'device_runtime_tested': False}


if __name__ == '__main__':
    print(json.dumps(verify(Path(sys.argv[1])), indent=2))
