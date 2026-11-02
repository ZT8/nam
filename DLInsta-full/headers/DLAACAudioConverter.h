// Reconstructed from Objective-C runtime metadata, not original source.
// External SDK types, superclass declarations and struct definitions may be required.
#import <Foundation/Foundation.h>

@interface DLAACAudioConverter : NSObject
{
@private
    IGDirectThreadViewController * _threadViewController; // offset 8, size 8; encoding @"IGDirectThreadViewController"
}
// Property threadViewController | attributes: T@"IGDirectThreadViewController",&,V_threadViewController
// Property hash | attributes: TQ,R
// Property superclass | attributes: T#,R
// Property description | attributes: T@"NSString",R,C
// Property debugDescription | attributes: T@"NSString",R,C
// Implementation 0x9df78 | runtime encoding: v24@0:8@16
- (void)showDocumentPickerWithDelegate:(id)arg1;
// Implementation 0x9e0c4 | runtime encoding: v24@0:8@16
- (void)showImagePickerWithDelegate:(id)arg1;
// Implementation 0x9e220 | runtime encoding: v32@0:8@16@24
- (void)documentPicker:(id)arg1 didPickDocumentsAtURLs:(id)arg2;
// Implementation 0x9edfc | runtime encoding: v32@0:8@16@24
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
// Implementation 0x9f600 | runtime encoding: @16@0:8
- (id)threadViewController;
// Implementation 0x9f60c | runtime encoding: v24@0:8@16
- (void)setThreadViewController:(id)arg1;
// Implementation 0x9f614 | runtime encoding: v16@0:8
// Runtime-only method .cxx_destruct
// Implementation 0x9ded0 | runtime encoding: @16@0:8
+ (id)sharedInstance;
@end
