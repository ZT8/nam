// Long-press download for feed posts, reels and stories.
#import "HIDECore.h"
#import <Photos/Photos.h>
#import <math.h>
#import <float.h>
#import <string.h>

static const void *kHideGestureKey = &kHideGestureKey;
// UIKit callbacks and settings reports run on the main thread. No media URLs,
// account IDs or user contents are recorded here.
static NSUInteger hideAttachedViews,hideLongPresses,hideResolvedPresses;
static NSString *hideLastSourceClass;
NSDictionary *HIDEDownloadDiagnostics(void) {
    return @{@"attached_views":@(hideAttachedViews),@"long_presses":@(hideLongPresses),
             @"resolved_presses":@(hideResolvedPresses),@"download_enabled":@(HIDEPref(kHideDownload)),
             @"last_source_class":hideLastSourceClass ?: @"none"};
}

@interface HIDEGestureHandler : NSObject <UIGestureRecognizerDelegate>
+ (instancetype)shared;
@end

#pragma mark - Media resolving

static NSURL *HIDEToURLVisited(id obj, NSHashTable *visited, NSUInteger depth) {
    if (!obj || depth > 8 || [visited containsObject:obj]) return nil;
    [visited addObject:obj];
    NSURL *url = nil;
    if ([obj isKindOfClass:NSURL.class]) url = obj;
    else if ([obj isKindOfClass:NSString.class]) url = [NSURL URLWithString:obj];
    if (url) {
        NSString *scheme = url.scheme.lowercaseString;
        return url.host.length && ([scheme isEqualToString:@"http"] || [scheme isEqualToString:@"https"]) ? url : nil;
    }
    if ([obj isKindOfClass:NSDictionary.class]) {
        for (NSString *key in @[@"url", @"URL"]) {
            NSURL *candidate = HIDEToURLVisited(obj[key], visited, depth + 1);
            if (candidate) return candidate;
        }
    }
    for (NSString *getter in @[@"url", @"URL", @"imageURL", @"absoluteURL"]) {
        NSURL *candidate = HIDEToURLVisited(HIDEGet(obj, getter), visited, depth + 1);
        if (candidate) return candidate;
    }
    return nil;
}

static NSURL *HIDEToURL(id obj) {
    NSHashTable *visited = [NSHashTable hashTableWithOptions:NSPointerFunctionsStrongMemory | NSPointerFunctionsObjectPointerPersonality];
    return HIDEToURLVisited(obj, visited, 0);
}

static double HIDEDimension(id version, NSString *name) {
    id value = [version isKindOfClass:NSDictionary.class] ? version[name] : HIDEGetNumber(version, name);
    double number = [value respondsToSelector:@selector(doubleValue)] ? [value doubleValue] : 0;
    return isfinite(number) && number > 0 ? number : 0;
}

static NSURL *HIDEBestVersion(id versions) {
    if (![versions isKindOfClass:NSArray.class]) return nil;
    NSURL *best = nil; double bestScore = -1;
    for (id version in versions) {
        NSURL *url = HIDEToURL(version);
        if (!url) continue;
        if (!HIDEPref(kHideHighQuality)) return url;
        double width = HIDEDimension(version, @"width"), height = HIDEDimension(version, @"height");
        double score = height > 0 ? width * height : width;
        if (!best || score > bestScore) { best = url; bestScore = score; }
    }
    return best;
}

static NSURL *HIDEVideoURL(id video) {
    if (!video) return nil;
    id versions = HIDEGet(video, @"videoVersions") ?: HIDEGet(video, @"videoVersionDictionaries") ?: HIDEIvar(video, "_videoVersionDictionaries");
    NSURL *best = HIDEBestVersion(versions);
    if (best) return best;
    id all = HIDEGet(video, @"allVideoURLs");
    if ([all isKindOfClass:NSArray.class] || [all isKindOfClass:NSSet.class] || [all isKindOfClass:NSOrderedSet.class]) {
        for (id value in all) { NSURL *url = HIDEToURL(value); if (url) return url; }
    }
    return HIDEToURL(video);
}

static NSURL *HIDEPhotoURLWidth(id photo,double requestedWidth) {
    if (!photo) return nil;
    SEL selector = NSSelectorFromString(@"imageURLForWidth:");
    NSMethodSignature *signature = [photo methodSignatureForSelector:selector];
    if (signature.numberOfArguments == 3 && signature.methodReturnType[0] == '@') {
        double width = requestedWidth;
        const char *type = [signature getArgumentTypeAtIndex:2];
        while (*type && strchr("rnNoORV", *type)) type++;
        id value = nil;
        @try {
            switch (*type) {
                case 'd': value = ((id (*)(id, SEL, double))objc_msgSend)(photo, selector, width); break;
                case 'f': value = ((id (*)(id, SEL, float))objc_msgSend)(photo, selector, (float)width); break;
                case 'q': value = ((id (*)(id, SEL, long long))objc_msgSend)(photo, selector, (long long)width); break;
                case 'Q': value = ((id (*)(id, SEL, unsigned long long))objc_msgSend)(photo, selector, (unsigned long long)width); break;
                case 'i': value = ((id (*)(id, SEL, int))objc_msgSend)(photo, selector, (int)width); break;
                case 'I': value = ((id (*)(id, SEL, unsigned int))objc_msgSend)(photo, selector, (unsigned int)width); break;
            }
        } @catch (__unused id error) {}
        NSURL *url = HIDEToURL(value);
        if (url) return url;
    }
    id versions=HIDEGet(photo,@"imageVersions") ?: HIDEIvar(photo,"_originalImageVersions");
    NSURL *version=nil;
    if(requestedWidth<=240 && [versions isKindOfClass:NSArray.class]) {
        double best=DBL_MAX;for(id item in versions){double width=HIDEDimension(item,@"width");NSURL *candidate=HIDEToURL(item);if(candidate && width>0 && width<best){best=width;version=candidate;}}
    } else version=HIDEBestVersion(versions);
    return version ?: HIDEToURL(HIDEGet(photo, @"storyImageSpecifier")) ?: HIDEToURL(photo);
}

static NSURL *HIDEPhotoURL(id photo){return HIDEPhotoURLWidth(photo,HIDEPref(kHideHighQuality) ? 5000 : 1080);}
static NSDictionary *HIDEDownloadItem(NSURL *url,BOOL video,id media) {
    NSMutableDictionary *item=[@{@"url":url,@"video":@(video)} mutableCopy];
    id photo=HIDEGet(media,@"photo") ?: HIDEGet(media,@"coverPhoto") ?: HIDEGet(HIDEGet(media,@"video"),@"coverPhoto") ?: HIDEGet(media,@"imageSpecifier");
    NSURL *preview=HIDEPhotoURLWidth(photo ?: (video ? nil : media),240);
    if(preview)item[@"thumbnailURL"]=preview;
    return item;
}
// Turns any of IGMedia / IGVideo / IGPhoto / IGImageSpecifier / story item into a URL.
static BOOL HIDEResolveObjectDepth(id obj, NSURL **outURL, BOOL *outVideo, id *outMedia, NSUInteger depth) {
    if (!obj || depth>6) return NO;
    Class IGMedia = NSClassFromString(@"IGMedia"), IGVideo = NSClassFromString(@"IGVideo"),
          IGPhoto = NSClassFromString(@"IGPhoto"), IGImageSpecifier = NSClassFromString(@"IGImageSpecifier");
    if (IGMedia && ![obj isKindOfClass:IGMedia]) {
        id m = HIDEGet(obj, @"media");
        if (m && IGMedia && [m isKindOfClass:IGMedia]) obj = m;
    }
    if (IGMedia && [obj isKindOfClass:IGMedia]) {
        if (outMedia) *outMedia = obj;
        NSURL *u = HIDEVideoURL(HIDEGet(obj, @"video"));
        if (u) { *outURL = u; *outVideo = YES; return YES; }
        u = HIDEPhotoURL(HIDEGet(obj, @"photo"));
        if (u) { *outURL = u; *outVideo = NO; return YES; }
    }
    if (IGVideo && [obj isKindOfClass:IGVideo]) {
        NSURL *u = HIDEVideoURL(obj);
        if (u) { *outURL = u; *outVideo = YES; return YES; }
    }
    if (IGPhoto && [obj isKindOfClass:IGPhoto]) {
        NSURL *u = HIDEPhotoURL(obj);
        if (u) { *outURL = u; *outVideo = NO; return YES; }
    }
    if (IGImageSpecifier && [obj isKindOfClass:IGImageSpecifier]) {
        NSURL *u = HIDEToURL(obj);
        if (u) { *outURL = u; *outVideo = NO; return YES; }
    }
    NSURL *currentVideoURL=HIDEToURL(HIDEGet(obj,@"videoURLForCurrentNetworkConditions"));
    if(currentVideoURL){*outURL=currentVideoURL;*outVideo=YES;return YES;}
    for (NSString *getter in @[@"videoURLProvider",@"media",@"post",@"rawVideo",@"video",@"videoView",@"mediaView",@"rawPhoto",@"currentPhoto",@"photo",@"storyItem",@"imageSpecifier",@"mediaViewLastLoadedImageSpecifier",@"photoImageView"]) {
        id child=HIDEGet(obj,getter);
        if (child && child!=obj && HIDEResolveObjectDepth(child,outURL,outVideo,outMedia,depth+1)) return YES;
    }
    return NO;
}

static BOOL HIDEResolveObject(id obj, NSURL **outURL, BOOL *outVideo, id *outMedia) {
    return HIDEResolveObjectDepth(obj,outURL,outVideo,outMedia,0);
}

static BOOL HIDEResolveFromView(UIView *view, NSURL **outURL, BOOL *outVideo, id *outMedia) {
    NSArray *getters = @[@"videoURLProvider", @"videoView", @"mediaView", @"video", @"media", @"item", @"storyItem", @"currentStoryItem", @"currentPhoto", @"photo",
                         @"imageSpecifier", @"mediaViewLastLoadedImageSpecifier"];
    NSArray *ivars = @[@"_video", @"_media", @"_item", @"_photo", @"_storyItem", @"_imageSpecifier"];
    UIView *v = view;
    for (int depth = 0; v && depth < 10; depth++, v = v.superview) {
        for (NSString *g in getters) {
            if (HIDEResolveObject(HIDEGet(v, g), outURL, outVideo, outMedia)) return YES;
        }
        for (NSString *i in ivars) {
            if (HIDEResolveObject(HIDEIvar(v, i.UTF8String), outURL, outVideo, outMedia)) return YES;
        }
    }
    BOOL profile=NO;
    for (UIView *candidate=view;candidate;candidate=candidate.superview)
        if ([NSStringFromClass(candidate.class) containsString:@"ProfileAvatar"] || [NSStringFromClass(candidate.class) containsString:@"ProfilePhoto"]) { profile=YES;break; }
    if (profile) {
        for (UIResponder *responder=view;responder;responder=responder.nextResponder) {
            id user=HIDEGet(responder,@"user") ?: HIDEIvar(responder,"_user");
            for (NSString *getter in @[@"hdProfilePicURLInfo",@"hdProfilePictureUrl",@"profilePicUrl",@"profilePictureURL",@"profileImageURL"]) {
                NSURL *url=HIDEToURL(HIDEGet(user,getter));
                if (url) { *outURL=url;*outVideo=NO;if(outMedia)*outMedia=user;return YES; }
            }
        }
    }
    return NO;
}

#pragma mark - Download & save

void HIDESaveDownloadedFile(NSURL *file, BOOL isVideo, BOOL share, void (^done)(BOOL)) {
    if(!isVideo && [@[@"webp",@"heic",@"heif"] containsObject:file.pathExtension.lowercaseString]) {
        dispatch_async(dispatch_get_global_queue(QOS_CLASS_UTILITY,0),^{
            UIImage *image=[UIImage imageWithContentsOfFile:file.path];NSData *jpeg=image ? UIImageJPEGRepresentation(image,1.0) : nil;
            NSURL *output=[file.URLByDeletingPathExtension URLByAppendingPathExtension:@"jpg"];NSError *error=nil;
            BOOL converted=jpeg && [jpeg writeToURL:output options:NSDataWritingAtomic error:&error];
            [NSFileManager.defaultManager removeItemAtURL:file error:nil];
            dispatch_async(dispatch_get_main_queue(),^{
                if(converted)HIDESaveDownloadedFile(output,NO,share,done);
                else {if(done)done(NO);else HIDEToast(HIDEL(@"ERROR"));}
            });
        });return;
    }
    NSDictionary *info = NSBundle.mainBundle.infoDictionary;
    if (![info[@"NSPhotoLibraryAddUsageDescription"] length] && ![info[@"NSPhotoLibraryUsageDescription"] length]) {
        [NSFileManager.defaultManager removeItemAtURL:file error:nil];
        HIDEToast(HIDEL(@"PHOTOS_DENIED"));
        if (done) dispatch_async(dispatch_get_main_queue(),^{done(NO);});
        return;
    }
    void (^save)(void) = ^{
        __block BOOL requestedAsset = NO;
        [[PHPhotoLibrary sharedPhotoLibrary] performChanges:^{
            PHAssetChangeRequest *request = isVideo
                ? [PHAssetChangeRequest creationRequestForAssetFromVideoAtFileURL:file]
                : [PHAssetChangeRequest creationRequestForAssetFromImageAtFileURL:file];
            requestedAsset = request != nil;
        } completionHandler:^(BOOL ok, NSError *err) {
            BOOL saved=ok && requestedAsset;
            if (saved && share) HIDEShareTemporaryFile(file);
            else [NSFileManager.defaultManager removeItemAtURL:file error:nil];
            if (!done) HIDEToast(saved ? HIDEL(@"SAVED") : HIDEL(@"ERROR"));
            if (done) dispatch_async(dispatch_get_main_queue(),^{done(saved);});
            if (!ok || !requestedAsset) NSLog(@"[HIDE] save failed: %@", err);
        }];
    };
    if (@available(iOS 14, *)) {
        [PHPhotoLibrary requestAuthorizationForAccessLevel:PHAccessLevelAddOnly handler:^(PHAuthorizationStatus st) {
            if (st == PHAuthorizationStatusAuthorized || st == PHAuthorizationStatusLimited) save();
            else {
                [NSFileManager.defaultManager removeItemAtURL:file error:nil];
                HIDEToast(HIDEL(@"PHOTOS_DENIED"));
                if (done) dispatch_async(dispatch_get_main_queue(),^{done(NO);});
            }
        }];
    } else {
        save();
    }
}

static void HIDEFetch(NSURL *url, BOOL isVideo, void (^done)(NSURL *localFile)) {
    HIDEToast(HIDEL(@"DOWNLOADING"));
    HIDEFetchFile(url, isVideo ? @"video" : @"image", ^(NSURL *file, NSError *error) {
        if (!file || error) { HIDEToast(HIDEL(@"ERROR")); return; }
        dispatch_async(dispatch_get_global_queue(QOS_CLASS_UTILITY, 0), ^{
            NSURL *result = file;
            if (!isVideo && ![@[@"jpg", @"jpeg", @"gif"] containsObject:result.pathExtension.lowercaseString]) {
                UIImage *image = [UIImage imageWithContentsOfFile:result.path];
                NSData *jpeg = image ? UIImageJPEGRepresentation(image, 1.0) : nil;
                NSURL *converted = [result.URLByDeletingPathExtension URLByAppendingPathExtension:@"jpg"];
                NSError *writeError = nil;
                if (!jpeg || ![jpeg writeToURL:converted options:NSDataWritingAtomic error:&writeError]) {
                    [NSFileManager.defaultManager removeItemAtURL:result error:nil];
                    HIDEToast(HIDEL(@"ERROR")); return;
                }
                [NSFileManager.defaultManager removeItemAtURL:result error:nil];
                result = converted;
            }
            dispatch_async(dispatch_get_main_queue(), ^{ if (done) done(result); });
        });
    });
}

static NSString *HIDECaption(id media) {
    id caption = HIDEGet(media, @"computedCaption");
    id text = HIDEGet(caption, @"text");
    return [text isKindOfClass:[NSString class]] ? text : nil;
}

// Finds the parent carousel post (if any) above the pressed view.
static NSArray *HIDECarouselItems(UIView *view, id media) {
    NSArray *items = HIDEGet(media, @"carouselMedia") ?: HIDEGet(media, @"items");
    if ([items isKindOfClass:[NSArray class]] && items.count > 1) return items;
    Class IGMedia = NSClassFromString(@"IGMedia");
    UIView *v = view;
    for (int d = 0; v && d < 14; d++, v = v.superview) {
        for (NSString *g in @[@"media", @"post", @"feedItem"]) {
            id m = HIDEGet(v, g);
            if (!m || (IGMedia && ![m isKindOfClass:IGMedia])) continue;
            NSArray *c = HIDEGet(m, @"carouselMedia") ?: HIDEGet(m, @"items");
            if ([c isKindOfClass:[NSArray class]] && c.count > 1) return c;
        }
    }
    return nil;
}

static void HIDEDownloadAll(NSArray *items) {
    NSMutableArray *resolved=[NSMutableArray array];
    for (id item in items) {
        NSURL *url=nil;BOOL video=NO;id media=nil;
        if (HIDEResolveObject(item,&url,&video,&media))
            [resolved addObject:HIDEDownloadItem(url,video,media ?: item)];
        else [resolved addObject:@{@"unavailable":@YES}];
    }
    if (!resolved.count) { HIDEToast(HIDEL(@"NO_MEDIA"));return; }
    HIDEPresentBatch(resolved);
}

static NSArray<NSString *> *HIDEMentions(id media) {
    NSArray *ms = HIDEGet(media, @"reelMentions") ?: HIDEGet(media,@"storyMentions");
    if (![ms isKindOfClass:[NSArray class]]) return nil;
    NSMutableArray *names = [NSMutableArray array];
    for (id m in ms) {
        id user = [m isKindOfClass:NSDictionary.class] ? m[@"user"] ?: m : HIDEGet(m,@"user") ?: m;
        NSString *n = [user isKindOfClass:NSDictionary.class] ? user[@"username"] : HIDEGet(user,@"username");
        if ([n isKindOfClass:[NSString class]] && ![names containsObject:n]) [names addObject:n];
    }
    return names;
}

static NSArray *HIDEStoryItems(UIView *source) {
    BOOL story=NO;for(UIView *v=source;v;v=v.superview)if([NSStringFromClass(v.class) containsString:@"Story"]){story=YES;break;}
    if(!story)return nil;
    NSMutableArray *queue=[NSMutableArray array];NSHashTable *visited=[NSHashTable hashTableWithOptions:NSPointerFunctionsObjectPointerPersonality|NSPointerFunctionsStrongMemory];
    for(UIResponder *r=source;r;r=r.nextResponder){[queue addObject:r];id delegate=HIDEGet(r,@"delegate");if(delegate)[queue addObject:delegate];}
    for(NSUInteger index=0;index<queue.count && index<128;index++) {
        id model=queue[index];if([visited containsObject:model])continue;[visited addObject:model];
        for(NSString *getter in @[@"items",@"mediaItems",@"sortedItems",@"storyItems",@"reelItems"]){id items=HIDEGet(model,getter);if([items isKindOfClass:NSArray.class] && [items count]>1)return items;}
        for(NSString *getter in @[@"viewModel",@"storyViewerViewModel",@"story",@"reel"]){id value=HIDEGet(model,getter);if(value && value!=model)[queue addObject:value];}
        for(NSString *name in @[@"_viewModel",@"_focusedModelItem",@"_storyViewerViewModel",@"_reel"]){id value=HIDEIvar(model,name.UTF8String);if(value && value!=model)[queue addObject:value];}
    }return nil;
}

static BOOL HIDEProfileContext(UIView *source,id *user,id *networker) {
    BOOL avatar=NO;
    for(UIView *view=source;view;view=view.superview)
        if([NSStringFromClass(view.class) containsString:@"ProfileAvatar"] || [NSStringFromClass(view.class) containsString:@"ProfilePhoto"]){avatar=YES;break;}
    if(!avatar)return NO;
    for(UIResponder *responder=source;responder;responder=responder.nextResponder){
        if(user && !*user)*user=HIDEGet(responder,@"user") ?: HIDEIvar(responder,"_user");
        id session=HIDEGet(responder,@"userSession") ?: HIDEIvar(responder,"_userSession");
        if(networker && !*networker)*networker=HIDEGet(session,@"networker");
    }
    return YES;
}

static void HIDEProfileURL(UIView *source,NSURL *fallback,void (^done)(NSURL *)) {
    id user=nil,networker=nil;
    if(!HIDEProfileContext(source,&user,&networker)){done(fallback);return;}
    id pk=HIDEGet(user,@"pk") ?: HIDEGetNumber(user,@"pk") ?: HIDEGet(user,@"userID");
    NSString *identifier=[pk isKindOfClass:NSString.class] ? pk : [pk isKindOfClass:NSNumber.class] ? [pk stringValue] : nil;
    if(!identifier.length || [identifier rangeOfCharacterFromSet:NSCharacterSet.decimalDigitCharacterSet.invertedSet].location!=NSNotFound){done(fallback);return;}
    SEL start=NSSelectorFromString(@"startAPIRequest:policy:successHandler:failureHandler:");
    BOOL returnsObject=HIDECanCall(networker,start,"@@:@q@@"), returnsVoid=HIDECanCall(networker,start,"v@:@q@@");
    id request=[NSClassFromString(@"IGURLRequest") alloc];SEL initializer=NSSelectorFromString(@"initWithURL:HTTPMethod:module:forceIGAPIHeaders:");
    if((!returnsObject && !returnsVoid) || !HIDECanCall(request,initializer,"@@:@Q@B")){done(fallback);return;}
    NSURL *url=[NSURL URLWithString:[NSString stringWithFormat:@"https://i.instagram.com/api/v1/users/%@/info/",identifier]];
    typedef id (*RequestInit)(id __attribute__((ns_consumed)),SEL,NSURL *,unsigned long long,id,BOOL) __attribute__((ns_returns_retained));
    request=((RequestInit)objc_msgSend)(request,initializer,url,0,nil,YES);
    if(!request){done(fallback);return;}
    HIDEToast(HIDEL(@"PREPARING_PROFILE"));
    __block BOOL finished=NO;__block id operation=nil;
    void (^finish)(NSURL *)=^(NSURL *resolved){dispatch_async(dispatch_get_main_queue(),^{
        if(finished)return;finished=YES;operation=nil;done(resolved ?: fallback);
    });};
    void (^success)(id,NSDictionary *)=^(id result,NSDictionary *response){
        NSDictionary *account=[response isKindOfClass:NSDictionary.class] ? response[@"user"] : nil;
        NSURL *resolved=nil;
        if([account isKindOfClass:NSDictionary.class]) resolved=HIDEToURL(account[@"hd_profile_pic_url_info"]) ?: HIDEBestVersion(account[@"hd_profile_pic_versions"]);
        finish(resolved);
    };
    void (^failure)(id)=^(id error){finish(nil);};
    @try{
        if(returnsObject)operation=((id (*)(id,SEL,id,long long,id,id))objc_msgSend)(networker,start,request,0,success,failure);
        else((void (*)(id,SEL,id,long long,id,id))objc_msgSend)(networker,start,request,0,success,failure);
    }@catch(__unused NSException *exception){finish(nil);}
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW,10*NSEC_PER_SEC),dispatch_get_main_queue(),^{
        if(finished)return;
        if(HIDECanCall(operation,@selector(cancel),"v@:"))((void (*)(id,SEL))objc_msgSend)(operation,@selector(cancel));
        finish(nil);
    });
}

BOOL HIDECanManuallySeeStory(UIView *source,id media);
void HIDEManuallySeeStory(UIView *source,id media);
static void HIDEPresentResolvedActions(UIView *source,NSURL *url,BOOL isVideo,id media) {
    UIAlertController *sheet=[UIAlertController alertControllerWithTitle:@"HIDE" message:nil preferredStyle:UIAlertControllerStyleAlert];
    [sheet addAction:[UIAlertAction actionWithTitle:HIDEL(@"ACTION_DOWNLOAD") style:UIAlertActionStyleDefault handler:^(UIAlertAction *action){HIDEPresentBatch(@[HIDEDownloadItem(url,isVideo,media)]);}]];
    NSArray *items=HIDECarouselItems(source,media) ?: HIDEStoryItems(source);
    if(items.count>1)[sheet addAction:[UIAlertAction actionWithTitle:[NSString stringWithFormat:@"%@ (%lu)",HIDEL(@"ACTION_DOWNLOAD_ALL"),(unsigned long)items.count] style:UIAlertActionStyleDefault handler:^(UIAlertAction *action){HIDEDownloadAll(items);}]];
    if(HIDECanManuallySeeStory(source,media))[sheet addAction:[UIAlertAction actionWithTitle:@"Seen" style:UIAlertActionStyleDefault handler:^(UIAlertAction *action){HIDEManuallySeeStory(source,media);}]];
    [sheet addAction:[UIAlertAction actionWithTitle:HIDEL(@"CANCEL") style:UIAlertActionStyleCancel handler:nil]];
    sheet.popoverPresentationController.sourceView=source;sheet.popoverPresentationController.sourceRect=source.bounds;
    [HIDETopViewController() presentViewController:sheet animated:YES completion:nil];
}

static void HIDEPresentActions(UIView *source) {
    NSURL *url=nil;BOOL video=NO;id media=nil;
    BOOL resolved=HIDEResolveFromView(source,&url,&video,&media);
    if(resolved)hideResolvedPresses++;
    if(HIDEPref(kHideHighQuality) && HIDEProfileContext(source,NULL,NULL)) {
        HIDEProfileURL(source,url,^(NSURL *profile){
            if(profile)HIDEPresentResolvedActions(source,profile,NO,media);else HIDEToast(HIDEL(@"NO_MEDIA"));
        });
    } else if(resolved)HIDEPresentResolvedActions(source,url,video,media);
    else HIDEToast(HIDEL(@"NO_MEDIA"));
}

#pragma mark - Gesture attachment

@implementation HIDEGestureHandler
+ (instancetype)shared { static HIDEGestureHandler *h; static dispatch_once_t o; dispatch_once(&o, ^{ h = [self new]; }); return h; }
- (void)onLongPress:(UILongPressGestureRecognizer *)g {
    if (g.state != UIGestureRecognizerStateBegan) return;
    hideLongPresses++;hideLastSourceClass=NSStringFromClass(g.view.class);
    if (!HIDEPref(kHideDownload)) return;
    UIImpactFeedbackGenerator *fb = [[UIImpactFeedbackGenerator alloc] initWithStyle:UIImpactFeedbackStyleMedium];
    [fb impactOccurred];
    HIDEPresentActions(g.view);
}
- (BOOL)gestureRecognizer:(UIGestureRecognizer *)a shouldRecognizeSimultaneouslyWithGestureRecognizer:(UIGestureRecognizer *)b { return YES; }
- (BOOL)gestureRecognizerShouldBegin:(UIGestureRecognizer *)gesture {
    if(!HIDEPref(kHideDownload))return NO;
    // Nested media cells can both be targets. Let the deepest attached view
    // handle the touch so one press cannot present two menus.
    UIView *hit=[gesture.view hitTest:[gesture locationInView:gesture.view] withEvent:nil];
    for(UIView *view=hit;view && view!=gesture.view;view=view.superview) {
        UIGestureRecognizer *child=objc_getAssociatedObject(view,kHideGestureKey);
        if(child && child.enabled)return NO;
    }
    return YES;
}
@end

static NSArray<Class> *HIDETargetClasses(void) {
    static NSArray *classes;
    static dispatch_once_t once;
    dispatch_once(&once, ^{
        NSMutableArray *a = [NSMutableArray array];
        for (NSString *n in @[@"IGFeedPhotoView", @"IGFeedItemVideoView",
                              @"IGSundialViewerVideoCell", @"IGSundialViewerPhotoCell",
                              @"_TtC32IGSundialViewerMediaDisplayViews24IGSundialViewerPhotoView",
                              @"IGSundialViewerCarouselVideoCell", @"IGSundialViewerCarouselPhotoCell",
                              @"IGStoryPhotoView", @"IGStoryVideoView", @"IGStoryModernVideoView",
                              @"IGProfileAvatarView", @"IGProfilePhotoView"]) {
            Class c = NSClassFromString(n);
            if (c) [a addObject:c];
        }
        classes = a;
    });
    return classes;
}

// Attach at the actual media class, rather than depending only on UIView's
// didMoveToWindow implementation being called through every intermediate class.
static void HIDEAttachDownloadGesture(UIView *view) {
    if(!view.window)return;
    if(objc_getAssociatedObject(view,kHideGestureKey)){view.userInteractionEnabled=YES;return;}
    for(Class cls in HIDETargetClasses())if([view isKindOfClass:cls]) {
        UILongPressGestureRecognizer *gesture=[[UILongPressGestureRecognizer alloc] initWithTarget:[HIDEGestureHandler shared] action:@selector(onLongPress:)];
        gesture.minimumPressDuration=0.45;gesture.delegate=[HIDEGestureHandler shared];
        gesture.cancelsTouchesInView=NO;gesture.delaysTouchesBegan=NO;gesture.delaysTouchesEnded=NO;
        [view addGestureRecognizer:gesture];view.userInteractionEnabled=YES;
        objc_setAssociatedObject(view,kHideGestureKey,gesture,OBJC_ASSOCIATION_RETAIN_NONATOMIC);hideAttachedViews++;
        break;
    }
}
static void (*orig_didMoveToWindow)(UIView *, SEL);
static void hide_didMoveToWindow(UIView *view,SEL selector) {
    orig_didMoveToWindow(view,selector);
    if(view.window)HIDEAttachCopyGestureIfNeeded(view);
    HIDEAttachDownloadGesture(view);
}
static void HIDEInstallMediaLayoutGesture(Class cls) {
    SEL selector=@selector(layoutSubviews);
    __block IMP original=NULL;
    IMP replacement=imp_implementationWithBlock(^(UIView *view) {
        ((void (*)(id,SEL))original)(view,selector);
        HIDEAttachDownloadGesture(view);
    });
    IMP installed=HIDEHookChecked(NSStringFromClass(cls),selector,replacement,"v@:");
    if(installed)original=installed;else imp_removeBlock(replacement);
}
void HIDEInstallDownloader(void) {
    orig_didMoveToWindow=(void *)HIDEHookChecked(@"UIView",@selector(didMoveToWindow),(IMP)hide_didMoveToWindow,"v@:");
    for(Class cls in HIDETargetClasses())HIDEInstallMediaLayoutGesture(cls);
}
