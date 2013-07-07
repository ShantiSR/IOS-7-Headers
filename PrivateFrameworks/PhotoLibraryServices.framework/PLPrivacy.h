/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface PLPrivacy : NSObject
{
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    int _authStatus;
}

+ (id)sharedInstance;
- (BOOL)isPhotosTCCAccessRestricted;
- (void)photoAccessPowersActive;
- (int)photosTCCAccessStatus;
- (BOOL)isPhotosTCCAccessNotAllowed;
- (BOOL)isPhotosTCCAccessAllowed;
- (BOOL)isPhotoLibraryReadAccessAllowed;
- (BOOL)isPhotoLibrarySharingOrModificationAllowed;
- (BOOL)isPhotosAccessAllowedPromptIfNeededWithHandler:(id)arg1;
- (BOOL)isPhotosAccessAllowedWithScope:(int)arg1 promptIfNeededWithHandler:(id)arg2;
- (void)isPhotosAccessAllowedWithScope:(int)arg1 handler:(id)arg2;
- (BOOL)_isPhotosAccessAllowedWithScope:(int)arg1 forceHandler:(BOOL)arg2 accessAllowedHandler:(id)arg3;
- (void)dealloc;
- (id)init;

@end
