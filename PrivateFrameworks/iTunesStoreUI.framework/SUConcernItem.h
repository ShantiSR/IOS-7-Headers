/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface SUConcernItem : NSObject
{
    BOOL _default;
    NSString *_identifier;
    NSString *_title;
}

@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic, getter=isDefaultConcern) BOOL defaultConcern; // @synthesize defaultConcern=_default;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1;

@end
