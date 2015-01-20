/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class CUIMutableCommonAssetStorage, CoreThemeDocument, NSArray, NSMutableArray, NSString, NSThread, TDLogger;

@interface TDDistiller : NSObject {
    NSString *_accumulatedErrorDescription;
    long long _assetStoreVersionNumber;
    NSString *_assetStoreVersionString;
    NSThread *_callbackThread;
    NSArray *_changedProductions;
    id _completionHandler;
    TDLogger *_logger;
    NSArray *_mainThreadPerformRunLoopModes;
    id _oldCompletionHandler;
    CUIMutableCommonAssetStorage *assetStore;
    bool_cancelled;
    bool_finished;
    bool_incremental;
    bool_successful;
    CoreThemeDocument *document;
    NSMutableArray *renditionEntries;
}

@property(retain) NSString * accumulatedErrorDescription;
@property long long assetStoreVersionNumber;
@property(copy) NSString * assetStoreVersionString;
@property(retain) NSThread * callbackThread;
@property(getter=isCancelled) bool cancelled;
@property(copy) id completionHandler;
@property(getter=isFinished) bool finished;
@property(getter=isIncremental) bool incremental;
@property(retain) TDLogger * logger;
@property(copy) id oldCompletionHandler;
@property(getter=isSuccessful) bool successful;

- (void)_accumulateErrorDescription:(id)arg1;
- (id)_copyStandardEffectDefinitions;
- (void)_distill:(id)arg1;
- (void)_distillChanges:(id)arg1;
- (bool)_distillColorDefinitions:(id)arg1;
- (bool)_distillCursorFacetDefinitions:(id)arg1;
- (void)_distillDebuggingInfoForConstants:(id)arg1 isElement:(bool)arg2;
- (bool)_distillFonts:(id)arg1;
- (bool)_distillNamedElements:(id)arg1;
- (id)_keyDataFromKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (id)_keySpecsToRemoveFromKeySpecs:(id)arg1;
- (void)_logError:(id)arg1;
- (void)_logErrorAndAccumulateDescription:(id)arg1;
- (void)_logExtra:(id)arg1;
- (void)_logInfo:(id)arg1;
- (void)_logWarning:(id)arg1;
- (id)_productionForRenditionSpec:(id)arg1;
- (bool)_recordRenditionEntryFromRendition:(id)arg1;
- (unsigned long long)_removeRenditionsWithKeySpecs:(id)arg1;
- (id)_renditionsFromProductions:(id)arg1 error:(id*)arg2;
- (id)_renditionsWithError:(id*)arg1;
- (void)_resetDocumentUuid:(id)arg1;
- (bool)_setupWithOutputPath:(id)arg1 attemptIncremental:(bool)arg2;
- (bool)_sortRenditionEntries;
- (void)_storeRenditions;
- (id)accumulatedErrorDescription;
- (long long)assetStoreVersionNumber;
- (id)assetStoreVersionString;
- (void)beginDistillWithCompletionHandler:(id)arg1;
- (id)callbackThread;
- (void)cancelDistill;
- (id)completionHandler;
- (void)dealloc;
- (bool)distillCursorFacetDefinitions;
- (bool)distillCustomColors;
- (bool)distillCustomFontSizes;
- (bool)distillCustomFonts;
- (bool)distillDebuggingInfo;
- (bool)distillNamedElements;
- (bool)distillRenditions;
- (void)distillWithCompletionHandler:(id)arg1;
- (bool)distillZeroCodeArtworkElementAndPartIdentifiers;
- (bool)distillZeroCodeArtworkInfo:(id)arg1 ofType:(long long)arg2;
- (bool)distillZeroCodeArtworkInfoOfType:(long long)arg1;
- (id)documentPath;
- (void)finishDistillationWithSuccess:(bool)arg1;
- (id)initWithDocument:(id)arg1 outputPath:(id)arg2 attemptIncremental:(bool)arg3 versionString:(id)arg4;
- (id)initWithDocument:(id)arg1 outputPath:(id)arg2 attemptIncremental:(bool)arg3;
- (id)initWithDocument:(id)arg1 outputPath:(id)arg2 versionString:(id)arg3;
- (id)initWithDocument:(id)arg1 outputPath:(id)arg2;
- (bool)isCancelled;
- (bool)isFinished;
- (bool)isIncremental;
- (bool)isSuccessful;
- (id)keyFormatData;
- (id)logger;
- (void)markDistillationAsFinished;
- (id)oldCompletionHandler;
- (void)performSelectorOnCallbackThread:(SEL)arg1 withObject:(id)arg2 waitUntilDone:(bool)arg3;
- (void)saveAndDistillWithCompletionHandler:(id)arg1;
- (void)setAccumulatedErrorDescription:(id)arg1;
- (void)setAsset:(id)arg1 withKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg2 fromRenditionSpec:(id)arg3;
- (void)setAssetStoreVersionNumber:(long long)arg1;
- (void)setAssetStoreVersionString:(id)arg1;
- (void)setCallbackThread:(id)arg1;
- (void)setCancelled:(bool)arg1;
- (void)setCompletionHandler:(id)arg1;
- (void)setFinished:(bool)arg1;
- (void)setIncremental:(bool)arg1;
- (void)setLogger:(id)arg1;
- (void)setOldCompletionHandler:(id)arg1;
- (void)setSuccessful:(bool)arg1;
- (bool)sortAndStoreRenditions;
- (void)waitTimerDidFire:(id)arg1;
- (void)waitUntilFinished;
- (id)zeroCodeArtworkInfoOfType:(long long)arg1 error:(id*)arg2;

@end