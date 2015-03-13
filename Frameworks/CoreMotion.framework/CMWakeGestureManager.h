/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class <CMWakeGestureDelegate>, NSObject<OS_dispatch_queue>;

@interface CMWakeGestureManager : NSObject {
    struct unique_ptr<CMWakeGestureVisitor, std::__1::default_delete<CMWakeGestureVisitor> > { 
        struct __compressed_pair<CMWakeGestureVisitor *, std::__1::default_delete<CMWakeGestureVisitor> > { 
            struct CMWakeGestureVisitor {} *__first_; 
        } __ptr_; 
    int _crown;
    <CMWakeGestureDelegate> *_delegate;
    int _wrist;
    boolfEnableAudioAlert;
    int fCurrentState;
    double fLastNotificationTime;
    NSObject<OS_dispatch_queue> *fPrivateQueue;
    int fScreenDimmingNotificationToken;
    struct Dispatcher { int (**x1)(); id x2; } *fWakeDispatcher;
    } fWakeGestureVisitor;
}

@property int crown;
@property <CMWakeGestureDelegate> * delegate;
@property int wrist;

+ (void)initialize;
+ (BOOL)isWakeGestureAvailable;
+ (id)sharedManager;

- (id).cxx_construct;
- (void).cxx_destruct;
- (int)crown;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (void)onWakeUpdated:(const struct CLGestureReport { union { unsigned char x_1_1_1; struct Ping { unsigned char x_2_2_1; unsigned int x_2_2_2; } x_1_1_2; struct GestureState { unsigned char x_3_2_1; int x_3_2_2; unsigned char x_3_2_3; unsigned char x_3_2_4; } x_1_1_3; struct Simulate { unsigned char x_4_2_1; unsigned long long x_4_2_2; unsigned long long x_4_2_3; } x_1_1_4; struct ControlMode { unsigned char x_5_2_1; unsigned char x_5_2_2; unsigned char x_5_2_3[2]; } x_1_1_5; } x1; }*)arg1;
- (void)playAlert;
- (void)setCrown:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setWrist:(int)arg1;
- (BOOL)simulateGestureWithDelay:(double)arg1 Duration:(double)arg2;
- (void)startWakeGestureUpdates;
- (void)stopWakeGestureUpdates;
- (void)updateWristAndCrown;
- (int)wrist;

@end