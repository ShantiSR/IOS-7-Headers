/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <SAObjects/AceObject.h>

#import "SAAceSerializable.h"

@class NSData;

@interface SALocalSearchRoute : AceObject <SAAceSerializable>
{
}

+ (id)routeWithDictionary:(id)arg1 context:(id)arg2;
+ (id)route;
@property(copy, nonatomic) NSData *routeAsZilchBinary;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

