#!/usr/bin/env python3
"""Read-only checks against the user's decrypted 453 executable. Stdlib only.
Usage: python3 tools/verify_instagram453.py /path/to/Payload/Instagram.app/Instagram
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
TARGETS = {'IGDirectOutgoingUpdateService','IGDThreadDeltaUpdateFactory','IGDirectMessageMenuActionHandler','IGDirectThreadLastSeenMessageTracker','IGDirectThreadViewListAdapterDataSource','IGDirectThreadViewController','IGDirectMessageCellViewModel','_TtC19IGDirectMessageCell19IGDirectMessageCell','FBMQTTMarkThread','IGDirectMessageUpdate','IGDirectThreadUpdate','IGProfileViewController','IGLiveViewerCountIntervalPuller','IGStoryViewerViewController',VOICE}
EXPECTED_UUID = '4c4c4477-5555-3144-a180-32cb70c4246c'


def verify(path):
    source = (ROOT / 'src/HIDEDLFeatures.m').read_text() + (ROOT / 'src/HIDESettings.m').read_text() + (ROOT / 'src/HIDEManualSeen.m').read_text()
    header = (ROOT / 'src/HIDEHostLayout.h').read_text()
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
                    classes[name] = {'methods': methods(ptr(ro+32) & ~3), 'fields': fields(ptr(ro+48)), 'class_methods': methods(ptr((ptr(ptr(cp)+32)&~7)+32)&~3)}
        assert set(classes) == TARGETS, 'Missing required native classes'
        contracts = [
            ('IGDirectOutgoingUpdateService','sendMessageUpdate:messageId:threadKey:originalMessageClientContext:sentDate:productType:foaS2SLogger:igdS2SLogger:isTAMMessage:isInstamadillo:isInstamadilloTTLC:','hide_sendMessageUpdate'),
            ('IGDThreadDeltaUpdateFactory','removeItemUpdatesForThreadId:itemId:sequenceId:','hide_remove453'),
            ('IGDirectMessageMenuActionHandler','unsendWithMessageViewModel:threadId:consistentThreadFbid:threadSubtype:audienceType:','hide_unsend453'),
            ('_TtC19IGDirectMessageCell19IGDirectMessageCell','configureWithViewModel:ringViewSpecFactory:mobileConfig:','hide_deletedConfigure'),
            ('_TtC19IGDirectMessageCell19IGDirectMessageCell','layoutSubviews','hide_deletedLayout'),
            ('IGDirectThreadLastSeenMessageTracker','initWithThreadInfoProvider:dataSource:listAdapter:outgoingUpdateSender:scrollCoordinator:','hide_trackerInit'),
            ('IGDirectThreadLastSeenMessageTracker','markLastMessageAsSeen','hide_trackerMark'),
            ('IGDirectThreadViewListAdapterDataSource','shouldUpdateLastSeenMessage','hide_shouldUpdate'),
            ('IGDirectThreadViewController','updateThreadNavigationBar','hide_threadNav'),
            ('IGDirectThreadViewController','viewDidAppear:','hide_threadAppear'),
            ('FBMQTTMarkThread','initWithMark:state:threadId:actionId:syncSeqId:threadFbId:otherUserFbId:actorFbId:watermarkTimestamp:titanOriginatedThreadId:shouldSendReadReceipt:adPageMessageType:attemptId:','hide_mqttInit'),
            ('FBMQTTMarkThread','setShouldSendReadReceipt:','hide_mqttSetRead'),
            ('IGProfileViewController','navigationItemsControllerDidTapSideTray:','hide_profileSide'),
            ('IGProfileViewController','navigationItemsControllerDidTapMore:','hide_profileMore'),
            ('IGLiveViewerCountIntervalPuller','initWithUserSession:broadcastId:pullInterval:networker:loggingContext:mode:surface:infoProvider:','hide_liveInit'),
            ('IGStoryViewerViewController','fullscreenSectionController:didMarkItemAsSeen:','hide_storySeen'),
            (VOICE,'startRecordingWithButtonTapFromEntryPoint:','hide_record407Start'),
            (VOICE,'startRecordingWithButtonTapFromEntryPoint:preSelectedVoiceEffectId:voiceEffectName:','hide_recordEffects'),
        ]
        encodings = {}
        for cls, selector, replacement in contracts:
            encoding, _ = classes[cls]['methods'][selector]
            match = re.search(r'\(IMP\)'+replacement+r',"([^"]+)"', source)
            assert match, f'Missing checked hook for {replacement}'
            # Same-width signed/unsigned integer parameters share the arm64 ABI.
            actual = re.sub(r'\d+', '', encoding).replace('Q', 'q')
            assert actual == match[1].replace("Q", "q"), (cls, encoding, match[1])
            encodings[cls+' '+selector] = encoding
        # Machine proof of the generated metadata slot used for rendering.
        schema_method = classes['IGDirectMessageCellViewModel']['class_methods']['internal_classInfo'][1]
        adrp, add, ret = struct.unpack('<III', read(schema_method, 12))
        assert adrp & 0x9f00001f == 0x90000000 and add & 0xffc003ff == 0x91000000 and ret == 0xd65f03c0
        imm = ((adrp >> 29) & 3) | (((adrp >> 5) & 0x7ffff) << 2)
        if imm & (1 << 20): imm -= 1 << 21
        descriptor = (schema_method & ~4095) + (imm << 12) + ((add >> 10) & 0xfff)
        size, count = struct.unpack('<II', read(descriptor, 8))
        assert size == 328 and count == 52
        offsets, kinds, names = ptr(descriptor+8), ptr(descriptor+16), ptr(descriptor+24)
        metadata_fields = {cstr(ptr(names+i*8)): (struct.unpack('<H',read(offsets+i*2,2))[0], read(kinds+i,1)[0]) for i in range(count)}
        assert metadata_fields['metadata'] == (8,1), metadata_fields['metadata']
        assert classes['IGDirectThreadUpdate']['fields']['_messageUpdate'] == '@"IGDirectMessageUpdate"'
        assert classes['IGDirectMessageUpdate']['fields']['_removeMessages_messageKeys'] == '@"NSArray"'
        assert classes['IGDirectMessageUpdate']['fields']['_removeMessages_reason'] == 'q'
        assert 'recordingTimeLimit'  in classes[VOICE]['fields']
        assert '#define HIDE_HOST_CACHE_LAYOUT_VERIFIED 0' in header
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
        return {'executable_uuid': executable_uuid, 'sha256': hashlib.sha256(data).hexdigest(),
                'checked_hooks': encodings, 'message_metadata_slot': {'header_bytes':16,'relative_offset':8,'source':'internal_classInfo'}, 'direct_status':'experimental-device-test-required', 'swift_recording_limit': 'Double',
                'legacy_cache_layout_enabled': False,
                'native_contracts_verified': True, 'device_runtime_tested': False}



if __name__ == '__main__':
    print(json.dumps(verify(Path(sys.argv[1])), indent=2))
