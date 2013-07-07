/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "MobileAssetUpdater.h"

#import "EAAccessoryDelegate.h"
#import "NSStreamDelegate.h"
#import "iAUPServerDelegate.h"

@class EAAccessory, EASession, NSMutableData, NSObject<OS_dispatch_queue>, NSString, NSTimer, NSURL, iAUPServer;

@interface EAFirmwareUpdater : MobileAssetUpdater <EAAccessoryDelegate, NSStreamDelegate, iAUPServerDelegate>
{
    unsigned int _productIDCode;
    EAAccessory *_accessory;
    NSString *_protocolString;
    EASession *_session;
    NSString *_bootloaderProtocol;
    NSString *_appProtocol;
    unsigned int _firmwareVersionMajor;
    unsigned int _firmwareVersionMinor;
    unsigned int _firmwareVersionRelease;
    NSString *_firmwareBundleFilename;
    NSURL *_firmwareBundleURL;
    id _applyCompletion;
    id _progressHandler;
    NSMutableData *_outputData;
    iAUPServer *_iAUPServer;
    NSObject<OS_dispatch_queue> *_eaNotificationDispatchQueue;
    BOOL _firmwareUpdateComplete;
    BOOL _isExpectingReconnect;
    NSTimer *_reconnectTimer;
    NSString *_updateBundleFilename;
    NSURL *_updateBundleURL;
}

+ (id)findAccessoryWithProductIDCode:(unsigned int)arg1;
+ (id)appProtocolStringWithProductIDCode:(unsigned int)arg1;
+ (id)bootloaderProtocolStringWithProductIDCode:(unsigned int)arg1;
@property(copy, nonatomic) id applyCompletion; // @synthesize applyCompletion=_applyCompletion;
@property(retain, nonatomic) iAUPServer *server; // @synthesize server=_iAUPServer;
@property(retain, nonatomic) NSURL *firmwareBundleURL; // @synthesize firmwareBundleURL=_updateBundleURL;
@property(retain, nonatomic) NSString *firmwareBundleFilename; // @synthesize firmwareBundleFilename=_updateBundleFilename;
@property(retain, nonatomic) NSString *appProtocol; // @synthesize appProtocol=_appProtocol;
@property(retain, nonatomic) NSString *bootloaderProtocol; // @synthesize bootloaderProtocol=_bootloaderProtocol;
@property(nonatomic) unsigned int productIDCode; // @synthesize productIDCode=_productIDCode;
@property(retain, nonatomic) NSString *protocolString; // @synthesize protocolString=_protocolString;
@property(retain, nonatomic) EASession *session; // @synthesize session=_session;
@property(retain, nonatomic) EAAccessory *accessory; // @synthesize accessory=_accessory;
- (void)_accessoryDidDisconnect:(id)arg1;
- (void)_accessoryDidConnect:(id)arg1;
- (void)accessoryDidDisconnect:(id)arg1;
- (void)handleInputData;
- (id)flushOutput;
- (void)stream:(id)arg1 handleEvent:(unsigned int)arg2;
- (void)updateComplete:(id)arg1;
- (void)firmwareUpdateComplete:(id)arg1;
- (void)updateProgress:(double)arg1;
- (void)logStatusString:(id)arg1;
- (id)writeData:(id)arg1;
- (id)openSession;
- (id)applyFirmware:(id)arg1 progress:(void)arg2;
- (id)validateAsset;
- (id)validateAssetAttributes:(id)arg1;
- (id)assetWithMaxVersion:(id)arg1;
- (id)queryPredicate;
- (id)overrideQueryPredicateFromDict:(id)arg1;
- (id)supportedProtocolForAccessory:(id)arg1;
- (void)reconnectTimerDidFire:(id)arg1;
- (void)stopReconnectTimer;
- (void)startReconnectTimer;
- (BOOL)findAccessory;
- (void)dealloc;
- (id)initWithProductIDCode:(unsigned int)arg1 assetType:(id)arg2;

@end
