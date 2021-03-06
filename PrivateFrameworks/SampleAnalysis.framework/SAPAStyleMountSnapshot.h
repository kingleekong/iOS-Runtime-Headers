/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
 */

@interface SAPAStyleMountSnapshot : NSObject {
    SAMountSnapshot * _mountSnapshot;
}

@property (retain) SAMountSnapshot *mountSnapshot;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const struct { unsigned long long x1; double x2; double x3; unsigned int x4; }*)arg1 bufferLength:(unsigned long long)arg2;

- (void).cxx_destruct;
- (bool)addSelfToBuffer:(void*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(struct NSMutableDictionary { Class x1; }*)arg3;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (id)mountSnapshot;
- (void)populateReferencesUsingBuffer:(const struct { unsigned long long x1; double x2; double x3; unsigned int x4; }*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4;
- (void)setMountSnapshot:(id)arg1;
- (unsigned long long)sizeInBytesForSerializedVersion;

@end
