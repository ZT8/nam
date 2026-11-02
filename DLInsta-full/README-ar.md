# DLInsta — استخراج موسّع بالهندسة العكسية

هذا المجلد يحتوي الكود التقريبي الذي أنتجه Ghidra لكل الدوال التي تعرّف عليها، وبيانات Objective-C وتعليمات ARM64. لا يقتصر على الأمثلة الخمسة في التحليل السابق.

**هذه ليست ملفات المصدر الأصلية، وليست مشروع iOS جاهزًا للبناء.** ملفات C هي pseudocode آلي: أسماء بعض المتغيرات والأنواع وتواقيع الدوال تقديرات من المفكك. استدعاءات Objective-C والـ blocks والـ hooks قد تحتاج تفسيرًا يدويًا، وقد تكون بعض التعبيرات غير صحيحة دلاليًا. نجاح التحويل لا يثبت صحة الناتج أو تشغيل الميزات. لم تُشغّل المكتبة.

نتيجة التحقق: 1,291 دالة صُدّرت دون فشل، وكل بدايات الدوال الـ1,290 وكل مداخل Objective-C الـ704 موجودة. صُدّر كذلك 453 جزءًا إضافيًا، مع ربط 7,009 نقاط دخول أخرى بنفس الأجزاء المشتركة. لا توجد بايتات __text خارج أجسام الدوال ونطاقات basic blocks الإضافية. هذه تغطية عناوين وتعليمات، وليست ضمانًا لصحة كل pseudocode.

## أين الكود؟

- [all-functions.c](all-functions.c): الكود التقريبي المجمع، مرتّبًا بحسب عنوان التنفيذ.
- [all-exception-fragments.c](all-exception-fragments.c): الكود التقريبي لمسارات الاستثناء والتنظيف والمقاطع الإضافية؛ هذه أجزاء من الدوال الأصلية وليست 453 دالة مصدر مستقلة. حالة السجلات والـ stack عند دخولها غير معروفة بالكامل.
- [exception-index.tsv](exception-index.tsv): يربط نقاط الدخول الـ7,462 بالأجزاء التي تغطيها؛ منها 7,446 نقطة مأخوذة من جداول الاستثناءات و16 بداية نطاق إضافي.
- [functions/](functions/): ملف C منفصل لكل دالة، بما فيها الدوال الداخلية التي لا تحمل أسماء المصدر.
- [by-class/](by-class/): نفس الناتج الآلي مجمّعًا حسب صنف Objective-C، لتسهيل القراءة.
- [headers/](headers/): واجهات 56 صنفًا، مع أنواع المعاملات والمتغيرات الداخلية المستعادة من runtime metadata. قد تحتاج إلى ترويسات SDK وتعريفات structs؛ ليست بديلًا كاملًا لترويسات المشروع.
- [all-interfaces.h](all-interfaces.h): جميع الواجهات في ملف واحد.
- [ReconstructedExamples.m](ReconstructedExamples.m): خمس دوال أُعيدت صياغتها يدويًا للتعلّم. لا تخلط بينها وبين التصدير الآلي لبقية الدوال.

## ما مدى اكتمال الاستخراج؟

راجع [coverage-report.json](coverage-report.json) للأعداد الفعلية:

- جرى استخراج 1,290 عنوان بداية دالة من LC_FUNCTION_STARTS في الملف نفسه.
- جرى استخراج 704 مداخل Objective-C، تشمل instance/class/category methods. قد تشترك مداخل مختلفة في عنوان تنفيذ واحد.
- يقارن التقرير كل عنوان معلن بما صدر إلى ملفات C، ويسرد أي عنوان ناقص وأي فشل تحويل.
- يسرد أيضًا عدد بايتات __text داخل أجسام الدوال وخارجها. البايتات خارج الأجسام قد تكون حشوًا أو بيانات أو تعليمات غير مضمومة إلى دالة؛ لا نفترض أنها كلها حشو.
- [uncovered-text-ranges.tsv](uncovered-text-ranges.tsv) يحدد النطاقات الواقعة خارج أجسام الدوال، إن وجدت.
- [all-executable-sections-arm64.asm](all-executable-sections-arm64.asm) يتضمن تفكيك __text و__stubs و__stub_helper كاملًا، بما فيها النطاقات التي لم تدخل إلى pseudocode.

لا يثبت هذا استعادة جميع الدلالات، ولا المصدر الأصلي، ولا نجاح إعادة البناء. الهدف أن تكون كل النتائج والنواقص قابلة للمراجعة بدل وصفها بأنها «سورس كامل».

## افتح التحليل في Ghidra

استورد [DLInsta-analyzed.gzf](DLInsta-analyzed.gzf) في Ghidra 12.2. هذا snapshot للبرنامج المحلل وأسمائه، وليس كودًا مصدريًا. الأجزاء الإضافية محفوظة في ملفات C وexception-index.tsv؛ لم تُضف كدوال أصلية داخل snapshot. عند تصدير الأجزاء أُشير إلى دوال رمي/استئناف الاستثناء المعروفة بأنها لا تعود إلى المستدعي، لتفادي متابعة خاطئة إلى التعليمات التالية.

## بيانات إضافية

- [exception-call-sites.json](exception-call-sites.json): 16,035 سجل call-site من LSDA في compact unwind، مع عناوين مسارات الاستثناء.
- [supplemental-uncovered-ranges.tsv](supplemental-uncovered-ranges.tsv): أي نطاقات لم تغطها الأجزاء الإضافية؛ الملف الحالي لا يحتوي نطاقات ناقصة.
- [function-index.tsv](function-index.tsv): عنوان كل دالة واسمها وحالة تحويلها ومسار ملفها وملاحظات المفكك.
- [objc-extended.json](objc-extended.json): الأصناف والوراثة و179 متغيرًا داخليًا و208 خصائص instance metadata وترميزات الأنواع.
- [constant-strings.json](constant-strings.json): 531 سلسلة ثابتة مع عناوينها وترميزها.
- [metadata/](metadata/): أسماء الدوال والرموز والنصوص وخصائص المكتبة.
- [raw-sections/](raw-sections/): محتوى الأقسام الثلاثين بصيغته الخام مع manifest للعناوين والأحجام؛ ليست هذه الملفات وحدها نسخة قابلة للربط أو التشغيل من المكتبة.
- [import-bindings.json](import-bindings.json): ربط العناوين بالرموز المستوردة.
- [provenance.json](provenance.json): بصمة الملف الأصلي وإصدارات الأدوات.
- [file-checksums.sha256](file-checksums.sha256): بصمات ملفات الناتج.

## كيف تعيد العملية؟

استخدم Ghidra 12.2 وJDK 25. صدّر قائمة الدوال والـ runtime metadata أولًا باستخدام السكربتات المرفقة وLIEF 1.0.0 وCapstone 5.0.9. يحتاج extract-metadata.py إلى مجلد اعتماديات Python المشار إليه داخله؛ عدّل مسارات الأدوات والملفات لتناسب جهازك.

شغّل من واجهة Ghidra headless، مع المسارات المناسبة:

```sh
analyzeHeadless /path/to/projects DLInsta \
  -import /path/to/DLInsta.dylib \
  -scriptPath /path/to/this/folder \
  -preScript SeedFunctions.java /path/to/this/folder \
  -postScript ExportAll.java /path/to/this/folder \
  -max-cpu 4 -analysisTimeoutPerFile 600
```

SeedFunctions يعرّف بدايات الدوال من بيانات الملف قبل التحليل، وExportAll يصدّر الناتج وحالة كل دالة. ملفا function-starts.txt وmethod-labels.tsv مرفقان. قد يظهر في السجل أن أطر iOS غير موجودة: المكتبة حُلّلت على Linux دون ملفات أطر Apple، لذلك قد لا يعرف المفكك جميع الأنواع الخارجية. التحليل الأولي لم يكتمل واستُبدل بتشغيل يعرّف بدايات الدوال أولًا؛ سجل التشغيل المكتمل هو headless-seeded-console.log.

لإعادة تصدير الأجزاء الإضافية بعد التحليل:

```sh
analyzeHeadless /path/to/projects DLInsta \
  -process DLInsta.dylib -noanalysis -readOnly \
  -scriptPath /path/to/this/folder \
  -postScript ExportExceptions.java /path/to/this/folder
```

صدّر exception-landing-pads.txt أولًا باستخدام extract-exceptions.py. نظّف ملفات owner_*.c الناتجة من تشغيل سابق داخل exception-fragments قبل إعادة التصدير، لأن السكربت يلحق الأجزاء إلى ملفاتها. استخدم validate-export.py لإعادة فحص الفهارس والبصمات.
