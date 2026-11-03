#import "HIDECore.h"
#import "HIDEPolicy.h"

static NSError *HIDETransferError(NSInteger code, NSString *message) {
    return [NSError errorWithDomain:@"HIDETransfer" code:code
                           userInfo:@{NSLocalizedDescriptionKey: message}];
}

NSURLSessionDownloadTask *HIDEFetchFile(NSURL *url, NSString *kind, void (^done)(NSURL *, NSError *)) {
    void (^finish)(NSURL *, NSError *) = ^(NSURL *file, NSError *error) {
        dispatch_async(dispatch_get_main_queue(), ^{ if (done) done(file, error); });
    };
    if (![url isKindOfClass:NSURL.class]) {
        finish(nil, HIDETransferError(1, @"Invalid media URL")); return nil;
    }
    NSString *scheme = url.scheme.lowercaseString;
    if (![url isKindOfClass:NSURL.class] || !url.host.length ||
        (![@"https" isEqualToString:scheme] && ![@"http" isEqualToString:scheme])) {
        finish(nil, HIDETransferError(1, @"Invalid media URL"));
        return nil;
    }
    NSDictionary *fallbacks = @{@"image": @"jpg", @"video": @"mp4", @"audio": @"m4a"};
    NSString *fallback = fallbacks[kind];
    if (!fallback) { finish(nil, HIDETransferError(2, @"Unsupported media kind")); return nil; }

    NSURLSessionDownloadTask *task=[[NSURLSession sharedSession] downloadTaskWithURL:url completionHandler:^(NSURL *location, NSURLResponse *response, NSError *error) {
        if (error || !location) {
            finish(nil, error ?: HIDETransferError(3, @"No downloaded file"));
            return;
        }
        if (![response isKindOfClass:NSHTTPURLResponse.class] ||
            !HIDEHTTPStatusIsSuccess(((NSHTTPURLResponse *)response).statusCode)) {
            finish(nil, HIDETransferError(4, @"The server rejected the media request"));
            return;
        }
        NSString *mime = response.MIMEType.lowercaseString ?: @"";
        BOOL generic = !mime.length || [mime isEqualToString:@"application/octet-stream"] ||
                       [mime isEqualToString:@"binary/octet-stream"];
        if (!generic && ![mime hasPrefix:[kind stringByAppendingString:@"/"]]) {
            finish(nil, HIDETransferError(5, @"The response is not the requested media type"));
            return;
        }
        NSDictionary *extensions = @{@"image/jpeg": @"jpg", @"image/png": @"png",
            @"image/webp": @"webp", @"image/heic": @"heic", @"image/heif": @"heif",
            @"image/gif": @"gif", @"video/mp4": @"mp4", @"video/quicktime": @"mov",
            @"audio/mpeg": @"mp3", @"audio/ogg": @"ogg", @"audio/wav": @"wav",
            @"audio/x-wav": @"wav", @"audio/mp4": @"m4a", @"audio/aac": @"aac"};
        NSString *extension = extensions[mime];
        if (!extension && generic) {
            NSString *candidate = url.pathExtension.lowercaseString;
            NSDictionary *allowed = @{@"image": @[@"jpg", @"jpeg", @"png", @"webp", @"heic", @"heif", @"gif"],
                @"video": @[@"mp4", @"mov", @"m4v"], @"audio": @[@"m4a", @"mp3", @"aac", @"ogg", @"wav", @"caf"]};
            if ([allowed[kind] containsObject:candidate]) extension = candidate;
        }
        extension = extension ?: fallback;
        NSURL *destination = [[NSURL fileURLWithPath:NSTemporaryDirectory()]
            URLByAppendingPathComponent:[NSString stringWithFormat:@"HIDE_%@.%@", NSUUID.UUID.UUIDString, extension]];
        NSError *moveError = nil;
        if (![NSFileManager.defaultManager moveItemAtURL:location toURL:destination error:&moveError]) {
            finish(nil, moveError ?: HIDETransferError(6, @"Could not retain the downloaded file"));
            return;
        }
        NSNumber *size = nil;
        [destination getResourceValue:&size forKey:NSURLFileSizeKey error:nil];
        if (!size || size.unsignedLongLongValue == 0) {
            [NSFileManager.defaultManager removeItemAtURL:destination error:nil];
            finish(nil, HIDETransferError(7, @"Empty media file"));
            return;
        }
        finish(destination, nil);
    }];
    [task resume];
    return task;
}

void HIDEShareTemporaryFile(NSURL *file) {
    dispatch_async(dispatch_get_main_queue(), ^{
        // Only remove files created by this tweak, never the original voice source.
        void (^cleanup)(void) = ^{
            NSString *temporary = [NSTemporaryDirectory() stringByStandardizingPath];
            NSString *parent = [file.URLByDeletingLastPathComponent.path stringByStandardizingPath];
            if ([parent isEqualToString:temporary] && [file.lastPathComponent hasPrefix:@"HIDE_"])
                [NSFileManager.defaultManager removeItemAtURL:file error:nil];
        };
        UIViewController *top = HIDETopViewController();
        if (!top || !file.isFileURL || ![NSFileManager.defaultManager fileExistsAtPath:file.path]) {
            cleanup(); HIDEToast(HIDEL(@"ERROR")); return;
        }
        UIActivityViewController *share = [[UIActivityViewController alloc] initWithActivityItems:@[file] applicationActivities:nil];
        share.completionWithItemsHandler = ^(UIActivityType activity, BOOL completed, NSArray *items, NSError *error) { cleanup(); };
        share.popoverPresentationController.sourceView = top.view;
        share.popoverPresentationController.sourceRect = CGRectMake(CGRectGetMidX(top.view.bounds), CGRectGetMidY(top.view.bounds), 1, 1);
        [top presentViewController:share animated:YES completion:nil];
    });
}
