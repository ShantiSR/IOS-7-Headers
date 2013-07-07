/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "IDSDaemonProtocol.h"

@class IDSDaemonListener, IMLocalObject, IMRemoteObject<IDSDaemonProtocol>, NSLock, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSProtocolChecker, NSSet, NSString;

@interface IDSDaemonController : NSObject <IDSDaemonProtocol>
{
    id _delegate;
    IMRemoteObject<IDSDaemonProtocol> *_remoteObject;
    IMLocalObject *_localObject;
    IDSDaemonListener *_daemonListener;
    NSProtocolChecker *_protocol;
    NSString *_listenerID;
    NSMutableDictionary *_listenerServices;
    NSSet *_services;
    NSSet *_cachedServices;
    NSObject<OS_dispatch_queue> *_servicesLockQueue;
    NSMutableDictionary *_listenerCommands;
    NSSet *_commands;
    NSSet *_cachedCommands;
    NSObject<OS_dispatch_queue> *_commandsLockQueue;
    NSMutableDictionary *_listenerCapabilities;
    unsigned int _cachedCapabilities;
    unsigned int _lastUpdateCaps;
    NSObject<OS_dispatch_queue> *_capLockQueue;
    NSLock *_connectionLock;
    NSObject<OS_dispatch_queue> *_listenerLockQueue;
    NSObject<OS_dispatch_queue> *_remoteDaemonLockQueue;
    NSObject<OS_dispatch_queue> *_remoteMessageQueue;
    NSObject<OS_dispatch_queue> *_localObjectLockQueue;
    struct __CFRunLoopSource *_runLoopSource;
    BOOL _hasCheckedForDaemon;
    BOOL _preventReconnect;
    BOOL _acquiringDaemonConnection;
    BOOL _autoReconnect;
    BOOL _hasBeenSuspended;
}

+ (void)_setApplicationWillTerminate;
+ (void)_blockUntilSendQueueIsEmpty;
+ (BOOL)_applicationWillTerminate;
+ (id)sharedInstance;
@property(setter=_setAutoReconnect:) BOOL _autoReconnect; // @synthesize _autoReconnect;
@property(retain, nonatomic, setter=_setListenerID:) NSString *_listenerID; // @synthesize _listenerID;
@property(nonatomic) id delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *_remoteMessageQueue; // @synthesize _remoteMessageQueue;
@property(readonly, nonatomic) IDSDaemonListener *listener; // @synthesize listener=_daemonListener;
- (void)systemApplicationDidResume;
- (void)systemApplicationWillEnterForeground;
- (void)systemApplicationDidEnterBackground;
- (void)systemApplicationDidSuspend;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)remoteObjectDiedNotification:(id)arg1;
- (void)localObjectDiedNotification:(id)arg1;
- (void)_agentDidLaunchNotification:(id)arg1;
- (void)_remoteObjectCleanup;
- (void)_localObjectCleanup;
- (BOOL)localObjectExists;
- (BOOL)remoteObjectExists;
- (BOOL)__isRemoteObjectValidOnQueue:(id)arg1;
- (BOOL)__isLocalObjectValidOnQueue:(id)arg1;
- (void)_noteSetupComplete;
- (BOOL)isConnected;
@property(readonly, nonatomic) BOOL isConnecting;
- (BOOL)_acquiringDaemonConnection;
- (id)_remoteObject;
- (BOOL)setCapabilities:(unsigned int)arg1 forListenerID:(id)arg2;
- (unsigned int)capabilitiesForListenerID:(id)arg1;
- (id)commandsForListenerID:(id)arg1;
- (BOOL)setCommands:(id)arg1 forListenerID:(id)arg2;
- (BOOL)setServices:(id)arg1 forListenerID:(id)arg2;
- (id)servicesForListenerID:(id)arg1;
- (BOOL)removeListenerID:(id)arg1;
- (BOOL)hasListenerForID:(id)arg1;
- (BOOL)addListenerID:(id)arg1 services:(id)arg2;
- (BOOL)addListenerID:(id)arg1 services:(id)arg2 commands:(id)arg3;
- (void)_listenerSetUpdated;
- (void)_setCapabilities:(unsigned int)arg1;
- (unsigned int)capabilities;
- (void)_setCommands:(id)arg1;
- (id)commands;
- (void)_setServices:(id)arg1;
- (id)services;
- (BOOL)connectToDaemonWithLaunch:(BOOL)arg1 services:(id)arg2 commands:(id)arg3 capabilities:(unsigned int)arg4;
- (BOOL)connectToDaemon;
- (BOOL)connectToDaemonWithLaunch:(BOOL)arg1;
- (void)_connectToDaemonWithLaunch:(BOOL)arg1 services:(id)arg2 commands:(id)arg3 capabilities:(unsigned int)arg4;
- (void)disconnectFromDaemon;
- (void)disconnectFromDaemonWithForce:(BOOL)arg1;
- (void)_blockUntilSendQueueIsEmpty;
- (BOOL)_makeConnectionWithLaunch:(BOOL)arg1 completionBlock:(id)arg2;
- (void)_handleDaemonException:(id)arg1;
- (void)dealloc;
- (id)init;

@end
