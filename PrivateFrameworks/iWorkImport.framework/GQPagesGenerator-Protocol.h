/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@protocol GQPagesGenerator <NSObject>
+ (int)setCurrentPageIndex:(int)arg1 state:(id)arg2;
+ (int)handleSectionStyle:(id)arg1 pageIndex:(int)arg2 numPages:(int)arg3 state:(id)arg4;
+ (int)handleFooters:(struct __CFArray *)arg1 state:(id)arg2;
+ (int)handleHeaders:(struct __CFArray *)arg1 state:(id)arg2;
+ (Class)enterBodyStorage:(id)arg1;
+ (Class)enterMainDrawablesForPage:(unsigned int)arg1 state:(id)arg2;
+ (int)handleStylesheet:(id)arg1 state:(id)arg2;
+ (int)handlePageSetup:(id)arg1 state:(id)arg2;
+ (int)endPublication:(id)arg1 state:(id)arg2;
+ (int)beginPublication:(id)arg1 state:(id)arg2;
@end
