/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <MediaPlayer/MPMediaPredicate.h>

@class NSString;

@interface MPMediaPropertyPredicate : MPMediaPredicate
{
    NSString *_property;
    id _value;
    int _comparisonType;
}

+ (id)predicateWithValue:(id)arg1 forProperty:(id)arg2 comparisonType:(int)arg3;
+ (id)predicateWithValue:(id)arg1 forProperty:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) int comparisonType;
@property(copy, nonatomic) id value;
@property(copy, nonatomic) NSString *property;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)descriptionOfValue:(id)arg1 forProperty:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_ML3PredicateForML3EntityProperty:(id)arg1;
- (id)ML3PredicateForContainer;
- (id)ML3PredicateForTrack;

@end

