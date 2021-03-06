/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <EventKitUI/EKEventDetailItem.h>

@class EKEventDetailRecurrenceCell, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface EKEventRecurrenceDetailItem : EKEventDetailItem
{
    EKEventDetailRecurrenceCell *_cell;
    int _repeatType;
    int _originalRepeatType;
    NSDate *_repeatEnd;
    NSString *_customRepeatDescription;
    BOOL _indent;
}

- (void).cxx_destruct;
- (float)defaultCellHeightForSubitemAtIndex:(unsigned int)arg1 forWidth:(float)arg2;
- (id)cellForSubitemAtIndex:(unsigned int)arg1;
- (void)setEvent:(id)arg1 store:(id)arg2;
- (BOOL)configureWithCalendar:(id)arg1 preview:(BOOL)arg2;
- (void)reset;

@end

