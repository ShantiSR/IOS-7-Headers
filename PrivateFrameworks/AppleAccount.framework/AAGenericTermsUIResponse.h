/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <AppleAccount/AAResponse.h>

@class NSData, NSDictionary, NSString;

@interface AAGenericTermsUIResponse : AAResponse
{
    NSDictionary *_responseTermsDictionary;
    NSString *_responseAgreeURL;
    NSData *_responseData;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *agreeURL;
@property(readonly, nonatomic) NSData *responseData;
@property(readonly, nonatomic) NSDictionary *termsDictionary;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;

@end
