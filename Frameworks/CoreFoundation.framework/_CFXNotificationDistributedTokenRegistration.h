/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface _CFXNotificationDistributedTokenRegistration : _CFXNotificationTokenRegistration {
    NSObject<OS_xpc_object> *_connection;
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    } _connectionLock;
}

- (id)initWithToken:(unsigned long long)arg1 connection:(id)arg2 options:(unsigned long)arg3 queue:(id)arg4 handler:(id /* block */)arg5;
- (void)invalidate;

@end