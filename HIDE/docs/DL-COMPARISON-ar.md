# مقارنة DL مع HIDE 1.9

المقارنة مبنية على خيارات فعلية في تحليل المكتبة، وليس استعادة المصدر الأصلي. الحالات التالية تصف التنفيذ الموجود في المصدر، لا نجاحًا مثبتًا داخل إنستغرام 407.

| خيار DL | مقابله في HIDE | التغيير | التنفيذ |
|---|---|---|---|
| `DL_AlwaysShowTimerVideos` | Keep video timer visible | مضاف | [HIDEDLFeatures.m](../src/HIDEDLFeatures.m) |
| `DL_BypassVoiceMessageLimit` | Extend voice recording limit | مضاف | [HIDEDLFeatures.m](../src/HIDEDLFeatures.m) |
| `DL_DisableMoveToNextStory` | Don't move to next story automatically | كان موجودًا | [HIDEExtras.m](../src/HIDEExtras.m) |
| `DL_DisableReplayedLiveMediaInDM` | Hide replay notifications | مضاف | [HIDEDLFeatures.m](../src/HIDEDLFeatures.m) |
| `DL_DisableScreenshotNotificationInDM` | Hide screenshot notifications | مضاف | [HIDEDLFeatures.m](../src/HIDEDLFeatures.m) |
| `DL_DisableScreenshotProtectionInDM` | Allow screenshots in Direct media | مضاف | [HIDEDLFeatures.m](../src/HIDEDLFeatures.m) |
| `DL_DisableTypingIndicatorInDM` | Hide typing indicator | موسّع | [HIDEExtras.m](../src/HIDEExtras.m) |
| `DL_DownloadVoiceMessage` | Download voice messages | كان موجودًا | [HIDEVoice.m](../src/HIDEVoice.m) |
| `DL_EnableAlwaysDLHighQuality` | Always download in highest quality | موسّع | [HIDEDownloader.m](../src/HIDEDownloader.m) |
| `DL_EnableAppLock` | Lock with Face ID / Passcode | كان موجودًا | [HIDEAppLock.m](../src/HIDEAppLock.m) |
| `DL_EnableConfirmFollow_Unfollow` | Confirm Follow/Unfollow | موسّع | [HIDEConfirm.m](../src/HIDEConfirm.m) |
| `DL_EnableConfirmLike` | Confirm Like/Unlike | موسّع | [HIDEConfirm.m](../src/HIDEConfirm.m) |
| `DL_EnableCopyText` | Copy comments & captions (long press) | موسّع | [HIDEExtras.m](../src/HIDEExtras.m) |
| `DL_EnableDisableLoopVideo` | No repeat for videos | كان موجودًا | [HIDEMedia.m](../src/HIDEMedia.m) |
| `DL_EnableOpenLinksInSafari` | Open links in Safari | كان موجودًا | [HIDEPrivacy.m](../src/HIDEPrivacy.m) |
| `DL_EnableRemoveAds` | Remove sponsored posts | موسّع | [HIDEDLFeatures.m](../src/HIDEDLFeatures.m) |
| `DL_EnableShareMedia` | Share after saving media | مضاف | [HIDEBatch.m](../src/HIDEBatch.m) |
| `DL_FollowStatus` | Show if account follows you | كان موجودًا | [HIDEExtras.m](../src/HIDEExtras.m) |
| `DL_KeepDeletedDM` | Keep deleted messages locally | مضاف | [HIDEDLFeatures.m](../src/HIDEDLFeatures.m) |
| `DL_SeeDMWithoutOtherPartyKnowing` | Hide that you read messages | موسّع | [HIDEPrivacy.m](../src/HIDEPrivacy.m) |
| `DL_SeeStoryWithoutOtherPartyKnowing` | Watch stories anonymously | موسّع | [HIDEPrivacy.m](../src/HIDEPrivacy.m) |
| `DL_SelectVideoFromStickers` | Videos in story sticker gallery | مضاف | [HIDEDLFeatures.m](../src/HIDEDLFeatures.m) |
| `DL_ShowLikeViewCount` | Show like and view counts | مضاف | [HIDEDLFeatures.m](../src/HIDEDLFeatures.m) |
| `DL_ShowMentionsInStory` | Show mentions in stories | كان موجودًا | [HIDEDownloader.m](../src/HIDEDownloader.m) |
| `DL_UploadVoiceMessage` | Send audio/video as voice note | مضاف | [HIDEVoiceImport.m](../src/HIDEVoiceImport.m) |
| `DL_WatchLiveAnonymously` | Watch live anonymously | مضاف | [HIDEDLFeatures.m](../src/HIDEDLFeatures.m) |

**النتيجة:** 11 إعدادًا جديدًا، مع مقابلات لجميع خيارات DL الـ26. يوجد أيضًا مفتاح تنزيل HIDE، فيصبح إجمالي مفاتيح الواجهة 27.

العمليات الجديدة: اختيار العناصر، تنزيل المتوفر من الستوري، دمج الصور والفيديوهات، التقدم والإلغاء، ومحاولة صورة الحساب HD عبر الشبكة الأصلية مع fallback.

**المتبقي:** تعليم ستوري محدد كمشاهَد أثناء الإخفاء. يتطلب عقد نموذج/طلب seen لنسخة 407 لتجنب إرسال مشاهدة غير مقصودة.

**حدود مهمة:** حفظ الرسائل يعمل على حقول الكاش المعروفة ولا يعيد المحذوفات السابقة. سلوك إخفاء المشاهدة/البث/التصوير وإعادة العرض يعتمد على مسارات الإصدار، ولا يضمن الفحص البنيوي تغطية المراسلة المشفرة أو كل وسائل النقل. العدادات لا تُظهر بيانات لم يرسلها الخادم.
